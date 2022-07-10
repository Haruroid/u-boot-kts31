#include <asm/io.h>
#include <asm/arch/io.h>
#include <asm/arch/system.h>
#include <asm/system.h>
#include <common.h>
#include <asm/arch/rbus/misc_reg.h>
#include <asm/arch/rbus/crt_reg.h>
#include <asm/arch/rbus/md_reg.h>

#include <test_pattern/system.h>
#include <test_pattern/mcp_defines.h>


#define ARM_STATR_BASE 0x0 
#undef CONFIG_SYS_NON_CACHE_LEN
#define CONFIG_SYS_NON_CACHE_LEN 0x40000


#define MD_BASE 	0x03000000
#define MD_BUF_SIZE 	0x10000
#define MD_CMD_CNT 	((MD_BUF_SIZE >> 4) - 1)
#define MD_LIMIT 	(MD_BASE + MD_BUF_SIZE)
#define MD_DATA_LEN_MASK	0xFFFFF

#define MCP_DT_BASE	0x03020000
#define MCP_CMD_CNT 	MD_CMD_CNT
#define MCP_BUF_SIZE	((MCP_CMD_CNT + 1) * DT_SIZE)
#define MCP_BUF_LIMIT 	(MCP_DT_BASE + MCP_BUF_SIZE)
#define MCP_BC_MASK	0xFFFFFF

#define CP_DST  	0x03060000
#define TEST_SIZE   0x100000	//1M
#define LEXTRA_TEST_BASE   0x01b00000
#define BYTE_TEST_BASE   0x02000000
#define HEAP_BASE	(UBOOT_HEAP_RELOCATION_ADDR & ~(TEST_SIZE-1))

#define MCM_DEBUG 1

#if MCM_DEBUG
#define MCM_DBG(format, ...) printf(format , ## __VA_ARGS__)
#else
#define MCM_DBG(format, ...) 
#endif

DECLARE_GLOBAL_DATA_PTR;
#if 0
extern int _f_AE_test_pattern_img, _e_AE_test_pattern_img;
#endif

void mcm_init_gpio(void)
{
	//GPIO20
	//0x9801_B100, bit 20 = 1
	//0x9801_B110, bit 20 = 1

	rtd_setbits(MIS_GP0DIR, _BIT20);
	rtd_clearbits(MIS_GP0DATO, _BIT20);
	MCM_DBG("1295 GPIO20 low\n");
}

void enter_ddr_self_refresh_mode(void)
{	
	//GPIO20
	//0x9801_B100, bit 20 = 1
	//0x9801_B110, bit 20 = 1

	rtd_setbits(MIS_GP0DIR, _BIT20);
	rtd_setbits(MIS_GP0DATO, _BIT20);

	//printf("enter_ddr_self_refresh\n");
	//rtd_setbits(0x18008828,_BIT3);
}

void exit_ddr_self_refresh_mode(void)
{
	printf("exit_ddr_self_refresh 0x18008828=%x\n",readl(0x18008828));
	
	rtd_setbits(0x18008828,_BIT2);	
	writel(0x3,0x1800899c);
   
}

int byte_verify(unsigned int start_add,unsigned int length,unsigned int size)
{
	unsigned int addr;
	unsigned int pattern_0 = 0xa5;
	unsigned int pattern_1 = 0x5a;
	int count=0;
	
	for (addr = start_add;addr < start_add + length;addr++)	 
	{						
		writeb(pattern_0,addr);
	}	
	MCM_DBG("range0=%x ~ %x\n",addr - size,addr);
		
	for(count = addr - size; count < addr; count=count+4 )
	{
		if( readb(count) != pattern_0)
			return -1;
		else		
			writeb(pattern_1,addr);
	}
	MCM_DBG("range1=%x ~ %x\n",addr - size,addr);
	for(count = addr - size; count < size; count=count+4)
	{
		if( readb(count) != pattern_1)
			return -1;				
	}
	return 0;				
}



int word_verify(unsigned int start_add,unsigned int length,unsigned int size)
{

	unsigned int addr;
	unsigned int pattern_0 = 0xaaaa5555;
	unsigned int pattern_1 = 0x5555aaaa;
	int count=0;
	
	for (addr = start_add;
	     addr < start_add + length;
	     addr=addr+4)	 
	{
		
		if ( ( (ARM_STATR_BASE)  <= addr) && addr <= (ARM_STATR_BASE + ARM_ROMCODE_SIZE) ) {			
			continue;
		}	
		else if( ( (CONFIG_SYS_TEXT_BASE) <= addr ) && addr <= ((unsigned int)gd->bd + sizeof(bd_t)) ) {
			continue;
		}
		else if ( ( (RBUS_BASE_VIRT)  <= addr) && addr <= (RBUS_BASE_VIRT+RBUS_BASE_SIZE) ) {
			continue;
		}
		else if( ( (SPI_FLASH_BASE_VIRT) <= addr ) && addr <= (SPI_FLASH_BASE_VIRT+SPI_FLASH_BASE_SIZE) ) {
			continue;
		}		
		else if( ( HEAP_BASE <= addr ) && addr <= (UBOOT_HEAP_RELOCATION_ADDR + CONFIG_SYS_NON_CACHE_LEN) ) {	
			continue;
		}
							
		*((volatile unsigned int*)addr) = pattern_0;
	}	
	MCM_DBG("range0=%x ~ %x\n",addr - size,addr);
		
	for(count = addr - size; count < addr; count=count+4 )
	{
		if(*((volatile unsigned int*)count) != pattern_0)
			return -1;
		else		
			*((volatile unsigned int*)count) = pattern_1;
	}
	MCM_DBG("range1=%x ~ %x\n",addr - size,addr);
	for(count = addr - size; count < size; count=count+4)
	{
		if(*((volatile unsigned int*)count) != pattern_1)
			return -1;				
	}
		
	return 0;
}





void fill_md_ring_buf(unsigned int idx, unsigned int start , unsigned int len, unsigned int pattern)
{
	unsigned int cmd_addr;

	cmd_addr = MD_BASE + (idx << 4);
	//fill md ring buffer
	*((unsigned int*) cmd_addr ) = 0x00000045;	//0x40: select constant byte value in the 3rd word[7:0]
								//0x05: move_data operation in normal mode
	*((unsigned int*) (cmd_addr + 4)) = start;	//為MD要寫入的DRAM address(也是CP等會要讀出的address)
	*((unsigned int*) (cmd_addr + 8)) = pattern & 0xFF;	//大小只能是 1 byte
	*((unsigned int*) (cmd_addr + 0xc)) = len & MD_DATA_LEN_MASK;	//寫入的constant數量

	return;
}

void fill_mcp_ring_buf(unsigned int idx, unsigned int sadr, unsigned int len)
{
	unsigned int cmd_addr;

	cmd_addr = MCP_DT_BASE + (idx * DT_SIZE);

	//fill mcp ring buffer
	SET_DT_WD0(cmd_addr, MCP_MODE(E_MODE_SHA256) | MCP_ENDE(E_ENDE_DE) | MCP_BCM(E_BCM_ECB) );
	
	SET_DT_KEY0(cmd_addr, 0x6A09E667);
	SET_DT_KEY1(cmd_addr, 0xBB67AE85);
	SET_DT_KEY2(cmd_addr, 0x3C6EF372);
	SET_DT_KEY3(cmd_addr, 0xA54FF53A);
	SET_DT_KEY4(cmd_addr, 0x510E527F);
	SET_DT_KEY5(cmd_addr, 0x9B05688C);
	SET_DT_INI_KEY0(cmd_addr, 0x1F83D9AB);
	SET_DT_INI_KEY1(cmd_addr, 0x5BE0CD19);
	SET_DT_SADR(cmd_addr, sadr);
	SET_DT_DADR(cmd_addr, CP_DST + (idx << 5));
	SET_DT_BC(cmd_addr, len & MCP_BC_MASK);

	return;
}


int fill_ddr(unsigned int pattern)
{
	int i;
	unsigned int addr;
	bd_t *bd = gd->bd;
	unsigned int desc_cnt, idx;
	unsigned int end_bd, end_i;
#if 0
	unsigned diff_a_b;
	unsigned char *a,*b;
	a = (unsigned char *)&_e_AE_test_pattern_img;
	b = (unsigned char *)&_f_AE_test_pattern_img;
	diff_a_b = a - b;
#endif
		
	desc_cnt =  bd->bi_dram[0].size >> 20;
	if (desc_cnt > MD_CMD_CNT) {
		MCM_DBG("Need to enlarge MD & MCP ring buffer size! %u > MD_CMD_CNT\n", desc_cnt);
		return -1;
	}

	end_i = (bd->bi_dram[0].start + bd->bi_dram[0].size) >> 20;
	end_bd = (unsigned int)gd->bd + sizeof(bd_t);
	set_MD_SMQ_CNTL_reg(MD_SMQ_CNTL_smq_cmd_swap(1) | MD_SMQ_CNTL_smq_go(1));       // diable MD go
	for (idx = 0, i = bd->bi_dram[0].start >>20; i < end_i; i++) {

		addr = i << 20;
	
		if ( ( (ARM_STATR_BASE)  <= addr) && addr <= (ARM_STATR_BASE + ARM_ROMCODE_SIZE) ) {			
			/* skip 0 ~ 44k */
			//printf("skip ARM/Lextra 0x%x ~0x%x \n",addr, addr+TEST_SIZE-1);
			continue;
		}	
		else if( ( (CONFIG_SYS_TEXT_BASE) <= addr ) && addr <= end_bd ) {
			/* skip 32k ~ 0x0004bf0c */
			//printf("skip uboot 0x%x ~0x%x \n",addr, addr+TEST_SIZE-1);
			continue;
		}
		else if ( ( (RBUS_BASE_VIRT)  <=addr) && addr <= (RBUS_BASE_VIRT+RBUS_BASE_SIZE) ) {
			/* skip 0x18000000 ~ 0x18070000 */
			//printf("skip Rbus 0x%x ~0x%x \n",addr, addr+TEST_SIZE-1);
			continue;
		}
		else if( ( (SPI_FLASH_BASE_VIRT) <= addr ) && addr <= (SPI_FLASH_BASE_VIRT+SPI_FLASH_BASE_SIZE) ) {
			/* skip 0x18100000 ~ 0x1a100000 */
			//printf("skip Spi 0x%x ~0x%x \n",addr, addr+TEST_SIZE-1);
			continue;
		}		
		else if( ( HEAP_BASE <= addr ) && addr <= (UBOOT_HEAP_RELOCATION_ADDR + CONFIG_SYS_NON_CACHE_LEN) ) {		
			/* skip 0x7800000 ~ 0x7840000 */
			//printf("skip heap 0x%x ~0x%x \n",addr, addr+TEST_SIZE-1);
			continue;
		}
		else if( ( MD_BASE <= addr ) && addr < (MD_BASE + TEST_SIZE)){
			/* skip 0x3000000 ~ 0x30fffff */
			//printf("skip md/cp descriptor 0x%x ~0x%x \n",addr, addr+TEST_SIZE-1 );
			continue;	
		}
#if 0
		else if( ( LEXTRA_TEST_BASE <= addr ) && addr < (LEXTRA_TEST_BASE + diff_a_b)){
			/* skip 0x1b00000 ~ 0x1bfffff */
			//printf("skip lextra test pattern 0x%x ~0x%x \n",addr, addr+TEST_SIZE-1 );
			continue;	
		}
#endif

		fill_md_ring_buf(idx, addr, TEST_SIZE, pattern);
#if 0
		fill_mcp_ring_buf(idx, addr, TEST_SIZE);
#endif
		idx++;
	}

	__asm__ __volatile__("": : :"memory");
#if 0
	//clear mcp regs
	set_MCP_CTRL_reg(MCP_CTRL_clear(1) | MCP_CTRL_write_data(1));
	set_MCP_CTRL_reg(MCP_CTRL_write_data(1));
	set_MCP_STATUS_reg(readl(MCP_STATUS));
#endif
	//fill md cmd
	set_MD_SMQBASE_reg(MD_BASE);
	set_MD_SMQLIMIT_reg(MD_LIMIT);
	set_MD_SMQRDPTR_reg(MD_BASE);
	set_MD_SMQWRPTR_reg((MD_BASE + (idx << 4)));
	set_MD_SMQ_CNTL_reg(MD_SMQ_CNTL_smq_cmd_swap(1) | MD_SMQ_CNTL_smq_go(1) | MD_SMQ_CNTL_write_data(1)); // MD go

	return idx;
}

int cp_chk(unsigned int cnt, unsigned int pattern)
{
	unsigned int i, pa0;
	ulong start = get_timer(0);	
	ulong delay = 10000;
	
	while (get_timer(start) < delay) {
		
		mdelay(20);
#if 0
		if(get_MCP_CTRL_reg & MCP_CTRL_idle_mask) {					
			goto CHECK_CONTENT;
		}
#else
		if(get_MCP_STATUS_reg & MCP_STATUS_ring_empty_mask) {					
			goto CHECK_CONTENT;
		}
#endif
	}
	return -1;

CHECK_CONTENT:
	set_MCP_STATUS_reg(MCP_STATUS_ring_empty(1));
	set_MCP_CTRL_reg(MCP_CTRL_go(1)); // disable go bit
	__asm__ __volatile__("": : :"memory");

	pa0 = *((unsigned int*) CP_DST);
	for (i = 0; i < cnt; i++) {
		if (pa0 != *((unsigned int*) (CP_DST + (i << 5)))) {
			return -1;
		}
	}

	return 0;
}

int mem_test(unsigned int cnt, unsigned int pattern)
{
	int i = 0;
	int *ptr;
	printf("cnt = %d, pattern = 0x%x\n", cnt, pattern);

	for (i = 0; i < cnt; i++) {
		ptr = CP_DST + (i << 5);
		*ptr = 0;
		*(ptr + 1) = 0;
		*(ptr + 2) = 0;
		*(ptr + 3) = 0;
		*(ptr + 4) = 0;
		*(ptr + 5) = 0;
		*(ptr + 6) = 0;
		*(ptr + 7) = 0;
	}

	set_MCP_DES_COUNT_reg(0);
	
	set_MCP_BASE_reg(MCP_DT_BASE);
	set_MCP_LIMIT_reg(MCP_BUF_LIMIT);
	set_MCP_RDPTR_reg(MCP_DT_BASE);
	set_MCP_WRPTR_reg(MCP_DT_BASE + DT_SIZE * cnt);
	while((get_MD_SMQ_CNTL_reg & MD_SMQ_CNTL_smq_idle(1)) == 0); //check MD idle 

	set_MCP_CTRL_reg(MCP_CTRL_swap_0(1) | MCP_CTRL_go(1) | MCP_CTRL_write_data(1)); // MCP go
	printf("MCP_CTRL = 0x%x, MCP_STATUS = 0x%x, MCP_RDPTR = 0x%x, MCP_WRPTR = 0x%x\n",
		readl(MCP_CTRL), readl(MCP_STATUS), readl(MCP_RDPTR), readl(MCP_WRPTR));
	
	return cp_chk(cnt, pattern);
}

int mem_test1(unsigned int cnt, unsigned int pattern)
{
	int i = 0, j;
	int *ptr, *addr;
	unsigned int val;

	val = pattern | (pattern << 8) | (pattern << 16) | (pattern << 24);

	printf("cnt = %d, pattern = 0x%x, val = 0x%x\n", cnt, pattern, val);
	while((get_MD_SMQ_CNTL_reg & MD_SMQ_CNTL_smq_idle(1)) == 0); //check MD idle 

	flush_dcache_all();
	__asm__ __volatile__("": : :"memory");

	for (i = 0; i < cnt; i++) {
		addr = MD_BASE + (i << 4) + 4;
		ptr = readl(addr);
		//printf("%04d: compare from address 0x%x\n", i, (int) ptr);
		for (j = 0; j < (TEST_SIZE >> 2); j++) {
			if (*(ptr + j) != val) {
				printf("memory test fail at 0x%x, exptect value 0x%x, real value 0x%x\n",
					(int) (ptr + j), val, *(ptr + j));
				return -1;
			}
		}
	}
	return 0;
}

void mem_test_entry(void)
{
	bd_t *bd = gd->bd;
	int cnt;
		
	//start CPU word access W/R/W/R of MD descriptor
	printf("test MD descriptor: base 0x%x, size 0x%x\n", MD_BASE, TEST_SIZE);
	if(word_verify(MD_BASE,TEST_SIZE,TEST_SIZE))
		return;
		
#if 0
	unsigned char *a,*b;
	a = (unsigned char *)&_e_AE_test_pattern_img;
	b = (unsigned char *)&_f_AE_test_pattern_img;
#endif
	unsigned int pattern_0=0xa5;
	unsigned int pattern_1=0x5a;

#if 0
	MCM_DBG("_f_AE_test_pattern_img=%x\n", (int) &_f_AE_test_pattern_img);
	MCM_DBG("_e_AE_test_pattern_img=%x\n", (int) &_e_AE_test_pattern_img);
	MCM_DBG("a=%x b=%x a-b=%x\n",(int)a,(int)b, (int)(a-b));
#endif
	MCM_DBG("bd->bi_dram[0].start=%lx\n",bd->bi_dram[0].start);
	MCM_DBG("bd->bi_dram[0].start + bd->bi_dram[0].size=%lx\n",bd->bi_dram[0].start + bd->bi_dram[0].size);
	MCM_DBG("uboot txt=%x\n",(unsigned int)gd->bd + sizeof(bd_t));



	printf("test MD W,CP R: start 0x%lx, len 0x%lx\n", bd->bi_dram[0].start, bd->bi_dram[0].size);
	flush_dcache_all();
	cnt = fill_ddr(pattern_0);
	if(mem_test1(cnt, pattern_0)) {
		MCM_DBG("test pattern=%x, diag_fail\n", pattern_0);
		return;
	}

	flush_dcache_all();
	cnt = fill_ddr(pattern_1);
	if(mem_test1(cnt, pattern_1)) {
		MCM_DBG("test pattern=%x, diag_fail\n", pattern_1);
		return;
	}
	//printf("test wmask: base 0x%x, size 0x%x\n", BYTE_TEST_BASE, TEST_SIZE);
	
	//if(!byte_verify(BYTE_TEST_BASE,TEST_SIZE,TEST_SIZE))
	ft_diag_pass();
}

void ft_diag_pass(void) {

	rtd_setbits(MIS_GP0DIR,  _BIT20);
	rtd_setbits(MIS_GP0DATO, _BIT20);
	printf("1295 GPIO20 high\n");
}

void ft_diag_fail(void) {
	printf("diag_fail\n");
}
