/*
 * (C) Copyright 2000
 * Wolfgang Denk, DENX Software Engineering, wd@denx.de.
 *
 * See file CREDITS for list of people who contributed to this
 * project.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of
 * the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston,
 * MA 02111-1307 USA
 */

/*
 * Memory Functions (2)
 *
 * Copied from FADS ROM, Dan Malek (dmalek@jlc.net)
 */

#include <common.h>
#include <command.h>
#ifdef CONFIG_HAS_DATAFLASH
#include <dataflash.h>
#endif
#include <watchdog.h>
#include <io.h>

/*
 *
 */
static	ulong	base_address = 0x01500000;
static	ulong	start_address = 0x01500000;
static	ulong	test_size = 0x00100000;
static const ulong bitpattern[] = {
	0x00000001,	/* single bit */
	0x00000003,	/* two adjacent bits */
	0x00000007,	/* three adjacent bits */
	0x0000000F,	/* four adjacent bits */
	0x00000005,	/* two non-adjacent bits */
	0x00000015,	/* three non-adjacent bits */
	0x00000055,	/* four non-adjacent bits */
	0xaaaaaaaa,	/* alternating 1/0 */
};

int mtest2_alt_mem( ulong start_phy_addr,
					ulong end_phy_addr,
					int iteration_limit)
{
	vu_long	*addr, *start, *end;
	ulong errs = 0;
	ulong val;
	ulong readback;
	int	j;
	int iterations = 1;
	ulong incr;
	vu_long	len;
	vu_long	offset;
	vu_long	test_offset;
	vu_long	pattern;
	vu_long	temp;
	vu_long	anti_pattern;
	vu_long	num_words;
	vu_long *dummy = 0;	/* yes, this is address 0x0, not NULL */

	start = (ulong *)start_phy_addr;
	end = (ulong *)end_phy_addr;

	printf ("Testing %08x ... %08x:\n", (uint)start, (uint)end);

	for (;;) {
		if (ctrlc()) {
			putc ('\n');
			return 1;
		}

		if (iteration_limit && iterations > iteration_limit) {
			printf("Tested %d iteration(s) with %lu errors.\n",
				iterations-1, errs);
			return errs != 0;
		}

		printf("Iteration: %6d\r", iterations);
		debug("\n");
		iterations++;

		/*
		 * Data line test: write a pattern to the first
		 * location, write the 1's complement to a 'parking'
		 * address (changes the state of the data bus so a
		 * floating bus doen't give a false OK), and then
		 * read the value back. Note that we read it back
		 * into a variable because the next time we read it,
		 * it might be right (been there, tough to explain to
		 * the quality guys why it prints a failure when the
		 * "is" and "should be" are obviously the same in the
		 * error message).
		 *
		 * Rather than exhaustively testing, we test some
		 * patterns by shifting '1' bits through a field of
		 * '0's and '0' bits through a field of '1's (i.e.
		 * pattern and ~pattern).
		 */
		addr = start;
		for (j = 0; j < sizeof(bitpattern)/sizeof(bitpattern[0]); j++) {
		    val = bitpattern[j];
		    for(; val != 0; val <<= 1) {
			*addr  = val;
			*dummy  = ~val; /* clear the test data off of the bus */
			readback = *addr;
			if(readback != val) {
			    printf ("FAILURE (data line): "
				"expected %08lx, actual %08lx\n",
					  val, readback);
			    errs++;
			    if (ctrlc()) {
				putc ('\n');
				return 1;
			    }
			}
			*addr  = ~val;
			*dummy  = val;
			readback = *addr;
			if(readback != ~val) {
			    printf ("FAILURE (data line): "
				"Is %08lx, should be %08lx\n",
					readback, ~val);
			    errs++;
			    if (ctrlc()) {
				putc ('\n');
				return 1;
			    }
			}
		    }
		}

		/*
		 * Based on code whose Original Author and Copyright
		 * information follows: Copyright (c) 1998 by Michael
		 * Barr. This software is placed into the public
		 * domain and may be used for any purpose. However,
		 * this notice must not be changed or removed and no
		 * warranty is either expressed or implied by its
		 * publication or distribution.
		 */

		/*
		 * Address line test
		 *
		 * Description: Test the address bus wiring in a
		 *              memory region by performing a walking
		 *              1's test on the relevant bits of the
		 *              address and checking for aliasing.
		 *              This test will find single-bit
		 *              address failures such as stuck -high,
		 *              stuck-low, and shorted pins. The base
		 *              address and size of the region are
		 *              selected by the caller.
		 *
		 * Notes:	For best results, the selected base
		 *              address should have enough LSB 0's to
		 *              guarantee single address bit changes.
		 *              For example, to test a 64-Kbyte
		 *              region, select a base address on a
		 *              64-Kbyte boundary. Also, select the
		 *              region size as a power-of-two if at
		 *              all possible.
		 *
		 * Returns:     0 if the test succeeds, 1 if the test fails.
		 */
		len = ((ulong)end - (ulong)start)/sizeof(vu_long);
		pattern = (vu_long) 0xaaaaaaaa;
		anti_pattern = (vu_long) 0x55555555;

		debug("%s:%d: length = 0x%.8lx\n",
			__FUNCTION__, __LINE__,
			len);
		/*
		 * Write the default pattern at each of the
		 * power-of-two offsets.
		 */
		for (offset = 1; offset < len; offset <<= 1) {
			start[offset] = pattern;
		}

		/*
		 * Check for address bits stuck high.
		 */
		test_offset = 0;
		start[test_offset] = anti_pattern;

		for (offset = 1; offset < len; offset <<= 1) {
		    temp = start[offset];
		    if (temp != pattern) {
			printf ("\nFAILURE: Address bit stuck high @ 0x%.8lx:"
				" expected 0x%.8lx, actual 0x%.8lx\n",
				(ulong)&start[offset], pattern, temp);
			errs++;
			if (ctrlc()) {
			    putc ('\n');
			    return 1;
			}
		    }
		}
		start[test_offset] = pattern;

		/*
		 * Check for addr bits stuck low or shorted.
		 */
		for (test_offset = 1; test_offset < len; test_offset <<= 1) {
		    start[test_offset] = anti_pattern;

		    for (offset = 1; offset < len; offset <<= 1) {
			temp = start[offset];
			if ((temp != pattern) && (offset != test_offset)) {
			    printf ("\nFAILURE: Address bit stuck low or shorted @"
				" 0x%.8lx: expected 0x%.8lx, actual 0x%.8lx\n",
				(ulong)&start[offset], pattern, temp);
			    errs++;
			    if (ctrlc()) {
				putc ('\n');
				return 1;
			    }
			}
		    }
		    start[test_offset] = pattern;
		}

		/*
		 * Description: Test the integrity of a physical
		 *		memory device by performing an
		 *		increment/decrement test over the
		 *		entire region. In the process every
		 *		storage bit in the device is tested
		 *		as a zero and a one. The base address
		 *		and the size of the region are
		 *		selected by the caller.
		 *
		 * Returns:     0 if the test succeeds, 1 if the test fails.
		 */
		num_words = ((ulong)end - (ulong)start)/sizeof(vu_long) + 1;

		/*
		 * Fill memory with a known pattern.
		 */
		for (pattern = 1, offset = 0; offset < num_words; pattern++, offset++) {
			start[offset] = pattern;
		}

		/*
		 * Check each location and invert it for the second pass.
		 */
		for (pattern = 1, offset = 0; offset < num_words; pattern++, offset++) {
		    temp = start[offset];
		    if (temp != pattern) {
			printf ("\nFAILURE (read/write) @ 0x%.8lx:"
				" expected 0x%.8lx, actual 0x%.8lx)\n",
				(ulong)&start[offset], pattern, temp);
			errs++;
			if (ctrlc()) {
			    putc ('\n');
			    return 1;
			}
		    }

		    anti_pattern = ~pattern;
		    start[offset] = anti_pattern;
		}

		/*
		 * Check each location for the inverted pattern and zero it.
		 */
		for (pattern = 1, offset = 0; offset < num_words; pattern++, offset++) {
		    anti_pattern = ~pattern;
		    temp = start[offset];
		    if (temp != anti_pattern) {
			printf ("\nFAILURE (read/write): @ 0x%.8lx:"
				" expected 0x%.8lx, actual 0x%.8lx)\n",
				(ulong)&start[offset], anti_pattern, temp);
			errs++;
			if (ctrlc()) {
			    putc ('\n');
			    return 1;
			}
		    }
		    start[offset] = 0;
		}
	}
	return 0;
}

int mtest2_normal( ulong start_phy_addr,
				   ulong end_phy_addr,
				   int iteration_limit,
				   int debug)
{
	vu_long	*addr, *start, *end;
	ulong val;
	ulong readback;
	ulong errs = 0;
	int iterations = 1;
	ulong incr;
	ulong pattern;

	start = (ulong *)start_phy_addr;
	end = (ulong *)end_phy_addr;
	incr = 1;
	pattern = 0x5a5a5a5a;
	
	printf ("Testing addr [0x%08x, 0x%08x)\n", (uint)start, (uint)end);

	for (;;) {
		if (ctrlc()) {
			putc ('\n');
			return 1;
		}

		if (iteration_limit && iterations > iteration_limit) {
			printf("Tested %d iteration(s) with %lu errors.\n",
				iterations-1, errs);
			return errs != 0;
		}

		printf ("\n[%4d] Pattern %08lX  Writing...", iterations, pattern);

		++iterations;

		for (addr=start,val=pattern; addr<end; addr++) {
			if( ((ulong)addr&0x007FFFFF)==0 ) {
				puts (".");
			}
			//if( debug && (ulong)addr > 0x07000000 ) {
			//	printf("****** %s %d, write addr 0x%08x\n", __FUNCTION__, __LINE__, (uint)addr);
			//}
			*addr = val;
			val += incr;
		}

		puts ("Reading...");

		for (addr=start,val=pattern; addr<end; addr++) {
			if( ((ulong)addr&0x007FFFFF)==0 ) {
				puts (".");
			} 
			readback = *addr;
			if (readback != val) {
				printf ("\nMem error @ 0x%08X: "
					"found %08lX, expected %08lX\n",
					(uint)(uintptr_t)addr, readback, val);
				errs++;
				if (ctrlc()) {
					putc ('\n');
					return 1;
				}
			}
			val += incr;
		}

		/*
		 * Flip the pattern each time to make lots of zeros and
		 * then, the next time, lots of ones.  We decrement
		 * the "negative" patterns and increment the "positive"
		 * patterns to preserve this feature.
		 */
		if(pattern & 0x80000000) {
			pattern = -pattern;	/* complement & increment */
		}
		else {
			pattern = ~pattern;
		}
		incr = -incr;
	}

	return 0;
}

int mtest2_saf( ulong start_phy_addr,
				   ulong end_phy_addr,
				   int iteration_limit,
				   int debug)
{
	vu_long	*addr, *start, *end;
	ulong val;
	ulong readback;
	ulong errs = 0;
	int iterations = 1;

	start = (ulong *)start_phy_addr;
	end = (ulong *)(end_phy_addr & 0xFFFFFFFC);

	printf ("Testing addr [0x%08x, 0x%08x)\n", (uint)start, (uint)end);

	for (;;) {
		if (ctrlc()) {
			putc ('\n');
			return 1;
		}

		if (iteration_limit && iterations > iteration_limit) {
			printf("Tested %d iteration(s) with %lu errors.\n",
				iterations-1, errs);
			return errs != 0;
		}
		
		// pattern 0xFFFFFFFF
		
		puts ("\n");

		printf ("[%4d] Pattern 0xFFFFFFFF  Writing, (UP)...", iterations);

		++iterations;

		for (addr=start; addr<end; addr++) {
			if( ((ulong)addr&0x007FFFFF)==0 ) {
				puts (".");
				if (ctrlc()) {
					putc ('\n');
					return 1;
				}
			}
			*addr = 0xFFFFFFFF;
		}
		
		puts ("Reading...");

		for (addr=start; addr<end; addr++) {
			if( ((ulong)addr&0x007FFFFF)==0 ) {
				puts (".");
				if (ctrlc()) {
					putc ('\n');
					return 1;
				}
			} 
			readback = *addr;
			if (readback != 0xFFFFFFFF) {
				printf ("\nMem error @ 0x%08X: "
					"found %08lX, expected 0xFFFFFFFF\n",
					(uint)(uintptr_t)addr, readback);
				errs++;
			}
		}
		
		puts ("\n");

		printf ("       Pattern 0xFFFFFFFF  Writing, (DW)...", iterations);
		
		for (addr=end; ; addr--) {
			if( ((ulong)addr&0x007FFFFF)==0 ) {
				puts (".");
				if (ctrlc()) {
					putc ('\n');
					return 1;
				}
			}
			*addr = 0xFFFFFFFF;
			
			if( addr == start ) {
				break;	
			}
		}
		
		puts ("Reading...");

		for (addr=end; ; addr--) {
			if( ((ulong)addr&0x007FFFFF)==0 ) {
				puts (".");
				if (ctrlc()) {
					putc ('\n');
					return 1;
				}
			} 
			readback = *addr;
			if (readback != 0xFFFFFFFF) {
				printf ("\nMem error @ 0x%08X: "
					"found %08lX, expected 0xFFFFFFFF\n",
					(uint)(uintptr_t)addr, readback);
				errs++;
			}
			
			if( addr == start ) {
				break;	
			}
		}
		
		// pattern 0x00000000 ------------------------------------------------------------------------------

		puts ("\n");

		printf ("       Pattern 0x00000000  Writing, (UP)...");

		for (addr=start; addr<end; addr++) {
			if( ((ulong)addr&0x007FFFFF)==0 ) {
				puts (".");
				if (ctrlc()) {
					putc ('\n');
					return 1;
				}
			}
			*addr = 0x00000000;
		}

		puts ("Reading...");

		for (addr=start; addr<end; addr++) {
			if( ((ulong)addr&0x007FFFFF)==0 ) {
				puts (".");
				if (ctrlc()) {
					putc ('\n');
					return 1;
				}
			} 
			readback = *addr;
			if (readback != 0x00000000) {
				printf ("\nMem error @ 0x%08X: "
					"found %08lX, expected 0x00000000\n",
					(uint)(uintptr_t)addr, readback);
				errs++;
			}
		}

		puts ("\n");

		printf ("       Pattern 0x00000000  Writing, (DW)...");

		for (addr=end; ; addr--) {
			if( ((ulong)addr&0x007FFFFF)==0 ) {
				puts (".");
				if (ctrlc()) {
					putc ('\n');
					return 1;
				}
			}
			*addr = 0x00000000;
			
			if( addr == start ) {
				break;	
			}
		}

		puts ("Reading...");

		for (addr=end; ; addr--) {
			if( ((ulong)addr&0x007FFFFF)==0 ) {
				puts (".");
				if (ctrlc()) {
					putc ('\n');
					return 1;
				}
			} 
			readback = *addr;
			if (readback != 0x00000000) {
				printf ("\nMem error @ 0x%08X: "
					"found %08lX, expected 0x00000000\n",
					(uint)(uintptr_t)addr, readback);
				errs++;
			}
			
			if( addr == start ) {
				break;	
			}
		}
	}

	return 0;
}

int mtest2_tf( ulong start_phy_addr,
				   ulong end_phy_addr,
				   int iteration_limit,
				   int debug)
{
	vu_long	*addr, *start, *end;
	ulong val;
	ulong errs = 0;
	int iterations = 1;
	ulong readback;
	ulong readback_w;
	ulong readback_r;

	start = (ulong *)start_phy_addr;
	end = (ulong *)(end_phy_addr & 0xFFFFFFFC);

	printf ("Testing addr [0x%08x, 0x%08x)\n", (uint)start, (uint)end);

	for (;;) {
		if (ctrlc()) {
			putc ('\n');
			return 1;
		}

		if (iteration_limit && iterations > iteration_limit) {
			printf("Tested %d iteration(s) with %lu errors.\n",
				iterations-1, errs);
			return errs != 0;
		}
		
		puts ("\n");

		printf ("[%4d] Transition Testing  W/R...", iterations);

		++iterations;

		for (addr=start; addr<end; addr++) {
			if( ((ulong)addr&0x007FFFFF)==0 ) {
				puts (".");
				if (ctrlc()) {
					putc ('\n');
					return 1;
				}
			}
			readback = *addr;
			
			readback_w = ~readback;
			*addr = readback_w;
			readback_r = *addr;
			if (readback_w != readback_r) {
				printf ("\nMem error @ 0x%08X: "
					"found %08lX, expected %08lX\n",
					(uint)(uintptr_t)addr, readback_w, readback_r);
				errs++;
			}

			readback_w = readback;
			*addr = readback_w;
			readback_r = *addr;
			if (readback_w != readback_r) {
				printf ("\nMem error @ 0x%08X: "
					"found %08lX, expected %08lX\n",
					(uint)(uintptr_t)addr, readback_w, readback_r);
				errs++;
			}			
			
			//if (ctrlc()) {
			//	putc ('\n');
			//	return 1;
			//}
		}		
	}

	return 0;
}

int mtest2_cf( ulong start_phy_addr,
				   ulong end_phy_addr,
				   int iteration_limit,
				   int debug)
{
	vu_long	*addr, *start, *end;
	ulong val;
	ulong errs = 0;
	int iterations = 1;
	int start_addr;
	int compare_errors;
	ulong readback[3][3];

	start = (ulong *)start_phy_addr;
	end = (ulong *)(end_phy_addr & 0xFFFFFFFC);

	printf ("Testing addr [0x%08x, 0x%08x)\n", (uint)start, (uint)end);

	for (;;) {
		if (ctrlc()) {
			putc ('\n');
			return 1;
		}

		if (iteration_limit && iterations > iteration_limit) {
			printf("Tested %d iteration(s) with %lu errors.\n",
				iterations-1, errs);
			return errs != 0;
		}
		
		puts ("\n");

		printf ("[%4d] Coupling Testing  W/R...", iterations);

		++iterations;
		
		start_addr = 1;

		for (addr=start; addr<end; addr++) {
			if( ((ulong)addr&0x007FFFFF)==0 ) {
				puts (".");
				if (ctrlc()) {
					putc ('\n');
					return 1;
				}
			}

			if(start_addr) {

				readback[2][0] = addr[1];         // read before writing

				readback[1][0] = addr[0];         // read cell
				readback[1][1] = ~readback[1][0]; // inverse
				addr[0] = readback[1][1];         // write cell

				readback[2][1] = addr[1];         // read after writing

				if( readback[2][0] != readback[2][1] ) {
					printf ("\nMem error @ 0x%08X: "
					"found %08lX, expected %08lX\n",
					(uint)(uintptr_t)addr, readback[2][0], readback[2][1]);
					errs++;
				}
			}
			else {
				readback[0][0] = readback[1][1];  // last write
				readback[1][0] = readback[2][1];  // last read

				readback[2][0] = addr[1];         // read before writing

				readback[1][1] = ~readback[1][0]; // inverse
				addr[0] = readback[1][1];         // write cell
				
				readback[0][1] = addr[-1];        // read after writing
				readback[2][1] = addr[1];         // read after writing
				
				if( readback[0][0] != readback[0][1] ) {
					printf ("\nMem error @ 0x%08X: "
					"found %08lX, expected %08lX\n",
					(uint)(uintptr_t)addr, readback[0][0], readback[0][1]);
					errs++;
				}
				
				if( readback[2][0] != readback[2][1] ) {
					if( (addr+1) < end ) {
						printf ("\nMem error @ 0x%08X: "
						"found %08lX, expected %08lX\n",
						(uint)(uintptr_t)addr, readback[2][0], readback[2][1]);
						errs++;
					}
				}
			}

			start_addr = 0;
		}		
	}

	return 0;
}

/*
 * Perform a memory test2.
 * SAF/saf
 * TF/tf
 * CF/cf
 *
 */
int do_mem_mtest2 (cmd_tbl_t *cmdtp, int flag, int argc, char * const argv[])
{
	ulong start_phy_addr;
	ulong end_phy_addr;
	ulong size;
	int iteration_limit;
	int option_cmd = -1;

	if (argc != 5) // print usage
		return CMD_RET_USAGE;

	if( strncmp(argv[1], "alt", 3 ) == 0 ) {
		option_cmd = 1;
	}

	if( strncmp(argv[1], "normal", 6 ) == 0 ) {
		option_cmd = 2;
	}

	if( strncmp(argv[1], "saf", 3 ) == 0 ) {
		option_cmd = 3;
	}

	if( strncmp(argv[1], "tf", 2 ) == 0 ) {
		option_cmd = 4;
	}

	if( strncmp(argv[1], "cf", 2 ) == 0 ) {
		option_cmd = 5;
	}

	if( option_cmd == -1 ) {
		return CMD_RET_USAGE;
	}

	start_phy_addr = (ulong *)simple_strtoul(argv[2], NULL, 16);
	size = (ulong)simple_strtoul(argv[3], NULL, 16);
	end_phy_addr = start_phy_addr + size - 1;
	iteration_limit = (int)simple_strtoul(argv[4], NULL, 16);

	printf("start      0x%08x\n", start_phy_addr);
	printf("end        0x%08x\n", end_phy_addr);
	printf("size       0x%08x\n", size);
	printf("iterations 0x%08x\n", iteration_limit);

	switch(option_cmd) {
		case 1:
			printf("mtest2:    alt\n\n", __FUNCTION__, __LINE__);
			return mtest2_alt_mem( start_phy_addr, end_phy_addr, iteration_limit);
		case 2:
			printf("mtest2:    normal\n\n", __FUNCTION__, __LINE__);
			return mtest2_normal( start_phy_addr, end_phy_addr, iteration_limit, 0);
		case 3:
			printf("mtest2:    saf\n\n", __FUNCTION__, __LINE__);
			return mtest2_saf( start_phy_addr, end_phy_addr, iteration_limit, 0);
		case 4:
			printf("mtest2:    tf\n\n", __FUNCTION__, __LINE__);
			return mtest2_tf( start_phy_addr, end_phy_addr, iteration_limit, 0);
		case 5:
			printf("mtest2:    cf\n\n", __FUNCTION__, __LINE__);
			return mtest2_cf( start_phy_addr, end_phy_addr, iteration_limit, 0);
		default:
			printf("mtest2:    N/A\n\n", __FUNCTION__, __LINE__);
	}

	return 0;	/* not reached */
}

/**************************************************/
U_BOOT_CMD(
	mtest2,	5,	1,	do_mem_mtest2,
	"simple RAM read/write test",
	"[saf|tf|cf][start [end [iterations]]]"
);
