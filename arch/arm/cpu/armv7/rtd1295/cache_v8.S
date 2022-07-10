/*
 * Realtek Semiconductor Corp.
 *
 * cache_v8.S:
 *
 * cache flush and invalidate support
 * for ARMv8-A AArch32 mode
 *
 * Copyright 2014  Jethro Hsu (jethro@realtek.com)
 */

#include <asm-offsets.h>
#include <config.h>
#include <version.h>
#include <asm/macro.h>
#include <linux/linkage.h>

/*
 * macro __asm_flush_aarch32_dcache_level(level)
 *
 * clean and invalidate one level cache.
 *
 * r0: cache level
 * r4~r10, r13: clobbered
 */
.macro  __asm_flush_aarch32_dcache_level
	lsl     r4, r0, #1
	mcr     p15, 2, r4, c0, c0, 0   /* select cache level */
	isb                             /* sync change of csselr */
	mrc	p15, 1, r5, c0, c0, 0	/* read the new ccsidr */
	and     r6, r5, #7              /* r6 <- (log2(number of bytes in cache line)) - 4 */
	add     r6, r6, #4              /* r6 <- log2(number of bytes in cache line) */
	ldr     r7, =0x3ff
	and     r7, r7, r5, lsr #3      /* r7 <- max number of #ways - 1 */
	clz     r8, r7                  /* bit position of #ways */
	ldr     r9, =0x7fff
	and     r9, r9, r5, lsr #13     /* r9 <- max number of #sets */
	/* r4 <- cache level << 1 */
	/* r6 <- line length offset */
	/* r7 <- number of cache ways - 1 */
	/* r9 <- number of cache sets - 1 */
	/* r8 <- bit position of #ways */

loop_set:
	mov     r5, r7                  /* r5 <- working copy of #ways */
	ldr	r1, =0x0
loop_way:
	lsl     r10, r5, r8
	orr     r1, r4, r10		/* map way and level to cisw value */
	lsl     r10, r9, r6
	orr     r1, r1, r10		/* map set number to cisw value */
	mcr     p15, 0, r1, c7, c14, 2	/* DCCISW, data cache line clean and invalidate by set/way */
	subs    r5, r5, #1              /* decrement the way */
	bge	loop_way
	subs    r9, r9, #1              /* decrement the set */
	bge	loop_set
.endm

/*
 * void __asm_flush_aarch32_dcache_all(void)
 *
 * clean and invalidate all data cache by SET/WAY.
 */
ENTRY(__asm_flush_aarch32_dcache_all)
	push    {r4-r11, lr}
	mov     r0, #0
	dsb	sy
	mrc	p15, 1, r2, c0, c0, 1	/* read clidr */
	lsr	r3, r2, #24
	and	r3, r3, #0x7		/* r3 <- loc */
	cmp	r3, #0			/* if loc is 0, exit */
	beq	finished
	mov	r0, #0			/* start flush at cache level 0 */

	/* r0  <- cache level */
	/* r2  <- clidr */
	/* r3  <- loc */

loop_level:
	lsl     r4, r0, #1
	add     r4, r4, r0            /* r4 <- tripled cache level */
	lsr     r4, r2, r4
	and     r4, r4, #7            /* r4 <- cache type */
	cmp     r4, #2
	blt	skip                  /* skip if no cache or icache */
	__asm_flush_aarch32_dcache_level
skip:
	add     r0, r0, #1              /* increment cache level */
	cmp     r3, r0
	bgt	loop_level

	mov     r0, #0
	mcr     p15, 2, r0, c0, c0, 0          /* resotre csselr_el1 */
	dsb     sy
	isb

finished:
	pop     {r4-r11, pc}
ENDPROC(__asm_flush_aarch32_dcache_all)
