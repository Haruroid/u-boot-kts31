#include <asm/io.h>
#include <asm/arch/io.h>
#include <asm/arch/system.h>
#include <asm/system.h>
#include <asm/arch/rbus/misc_reg.h>
#include <test_pattern/emmc_reg.h>
#include <common.h>
#include "kylin_etn_reg.h"

typedef unsigned int             BOOLEAN;
#define TRUE                     ((BOOLEAN)(1 == 1))
#define FALSE                    ((BOOLEAN)(0 == 1))
#define WRITE_MEM32(addr, val)     (*(volatile unsigned int *) (addr)) = (val)
#define READ_MEM32(addr)           (*(volatile unsigned int *) (addr))

//#define __BURN_EFUSE__	1
#define SD_DEBUG 1

#if SD_DEBUG
#define SD_DBG(format, ...) printf(format , ## __VA_ARGS__)
#else
#define SD_DBG(format, ...) 
#endif

typedef struct _ADC_Data_ {
	unsigned int ChA;
	unsigned int ChB;
	unsigned int ChC;
	unsigned int ChD;
}ADC_Data;

ADC_Data    *pADC = NULL;

void sd_init_gpio(void)
{
	//GPIO82
	//EMMC_MUXPAD1 0x9801_2604, bit[19..18] = 00, Mux to gpio[82]
	//GP2DIR 0x9801_B108, bit 18 = 1
	//GP2DATO 0x9801_B118, bit 18 = 0

	rtd_clearbits(EMMC_MUXPAD1, _BIT18 | _BIT19);
	rtd_setbits(MIS_GP2DIR, _BIT18);
	rtd_clearbits(MIS_GP2DATO, _BIT18);
	SD_DBG("1295 GPIO82 low\n");
}

void sd_diag_pass(void) {

	rtd_setbits(MIS_GP2DIR,  _BIT18);
	rtd_setbits(MIS_GP2DATO, _BIT18);
	printf("1295 GPIO82 high\n");
}

void sd_diag_fail(void) {
	printf("diag_fail\n");
}

//#define __LOCAL_TIMER__
#ifndef __LOCAL_TIMER__
static inline void Timer_Init(void){
}

static inline void Delay_uS(unsigned int uS_to_wait){
	udelay(uS_to_wait);
}

void Delay_mS(unsigned int mS_to_wait){
	mdelay(mS_to_wait);
}

#else /* __LOCAL_TIMER__ */
/* Timer Registers */
#define TIMER0_Control  0x9801b518
#define TIMER0_Value    0x9801b50c
#define TIMER1_Control  0x9801b51c
#define TIMER1_Value    0x9801b510
#define TIMER2_Control  0x9801b520
#define TIMER2_Value    0x9801b514
#define TimerBase                 (0x9801b500)
#define MIS_TC0_CV              (TimerBase + 0x0c) //Timer0 current value
#define MIS_TC0_Ctrl            (TimerBase + 0x18)        //Timer0 control

unsigned int   TIMER_Value = 0;

void Timer_Init(void){

	if ((1 << 31) == (READ_MEM32(TIMER0_Control) & (1 << 31))){    // Timer0 ready??
		TIMER_Value = TIMER0_Value;
	}else{
		if ((1 << 31) == (READ_MEM32(TIMER1_Control) & (1 << 31))){    // Timer1 ready??
			TIMER_Value = TIMER1_Value;
		}else{
			if ((1 << 31) == (READ_MEM32(TIMER2_Control) & (1 << 31))){    // Timer2 ready??
				TIMER_Value = TIMER2_Value;
			}else{   // none ready, we enable Timer0 and use it
				WRITE_MEM32(TIMER0_Control, (0x1 << 31));  // counter mode
				TIMER_Value = TIMER0_Value;
			}
		}
	}
}

unsigned int Get_Timer(void){
	return(READ_MEM32(TIMER_Value));
};

void Delay_uS(unsigned int uS_to_wait){

	unsigned int   t0;
	unsigned int   Duration = 0;
	unsigned int   Ticks_to_wait;

	if (0 == uS_to_wait) return;

	//Ticks_to_wait = uS_to_wait * 27;    // Timer clock source = 27MHz
	Ticks_to_wait = (uS_to_wait << 5) - (uS_to_wait << 2) - (uS_to_wait << 0);    // 27 = 32-4-1

	t0 = READ_MEM32(TIMER_Value);
	while(Duration < Ticks_to_wait)
		Duration = READ_MEM32(TIMER_Value) - t0;
}

void Delay_mS(unsigned int mS_to_wait){

	while(0 < mS_to_wait){
		Delay_uS(1000);
		mS_to_wait--;
	}
}
#endif /* __LOCAL_TIMER__ */

BOOLEAN        MDC_Speed_Up = FALSE;

void ETN_OCP_Reg_write(unsigned int reg_addr, unsigned int value){
	unsigned int wdata;

	// write value to reg
	wdata = OCPR_Write | (((reg_addr & OCPR_Addr_Mask) >> 1) << OCPR_Addr_Reg_shift) | (value & OCPDR_Data_Mask);
	WRITE_MEM32(OCPR, wdata);
}

unsigned int ETN_OCP_Reg_read(unsigned int reg_addr){
	unsigned int wdata;
	unsigned int rdata;

	// write value to reg
	wdata = OCPR_Read | (((reg_addr & OCPR_Addr_Mask) >> 1) << OCPR_Addr_Reg_shift);
	WRITE_MEM32(OCPR, wdata);
	rdata = READ_MEM32(OCPR);
	return(rdata & OCPDR_Data_Mask);
}

void Set_MDC_Speed(BOOLEAN high){

	if (TRUE == high){
		ETN_OCP_Reg_write(0xDE10, ((ETN_OCP_Reg_read(0xDE10) & ~(0x3 << 6)) | (0x1 << 6)));    // MDC freq = 8.9MHz
		MDC_Speed_Up = TRUE;
	}else{
		ETN_OCP_Reg_write(0xDE10, (ETN_OCP_Reg_read(0xDE10) & ~(0x3 << 6)));    // MDC freq = 2.5MHz
		MDC_Speed_Up = FALSE;
	}
}

BOOLEAN MDC_Speed_Is_High(void){

	return(MDC_Speed_Up);
}

void ETN_MDIO_write_to_current_page(unsigned int reg_addr, unsigned int value){
	unsigned int wdata;
	unsigned int rdata;

	// write value to reg
	wdata = PHYAR_WR | ((reg_addr & PHYAR_Reg_Mask) << PHYAR_Reg_shift) | (value & PHYAR_Data_Mask);
	WRITE_MEM32(PHYAR, wdata);

	// wait until execution complete
	do{
		rdata = READ_MEM32(PHYAR);
	}while (PHYAR_Busy == (rdata & PHYAR_Busy));
}

void ETN_MDIO_write(unsigned int page, unsigned int reg_addr, unsigned int value){
	unsigned int wdata;
	unsigned int rdata;

	// switch to desired page
	wdata = PHYAR_WR | (PHYAR_Reg_Mask << PHYAR_Reg_shift) | (page & PHYAR_Data_Mask);
	WRITE_MEM32(PHYAR, wdata);

	// wait until execution complete
	do{
		rdata = READ_MEM32(PHYAR);
	}while (PHYAR_Busy == (rdata & PHYAR_Busy));

	ETN_MDIO_write_to_current_page(reg_addr, value);
}

unsigned int ETN_MDIO_read_from_current_page(unsigned int reg_addr){
	unsigned int wdata;
	unsigned int rdata;

	// read value from reg
	wdata = PHYAR_RD | ((reg_addr & PHYAR_Reg_Mask) << PHYAR_Reg_shift);
	WRITE_MEM32(PHYAR, wdata);

	// wait until execution complete
	do{
		rdata = READ_MEM32(PHYAR);
	}while (PHYAR_Busy == (rdata & PHYAR_Busy));

	return(rdata & PHYAR_Data_Mask);
}

unsigned int ETN_MDIO_read(unsigned int page, unsigned int reg_addr){
	unsigned int wdata;
	unsigned int rdata;

	// switch to desired page
	wdata = PHYAR_WR | (PHYAR_Reg_Mask << PHYAR_Reg_shift) | (page & PHYAR_Data_Mask);
	WRITE_MEM32(PHYAR, wdata);
	// wait until execution complete
	do{
		rdata = READ_MEM32(PHYAR);
	}while (PHYAR_Busy == (rdata & PHYAR_Busy));

	return(ETN_MDIO_read_from_current_page(reg_addr));
}

unsigned int ABS(int value){
	if (0 > value)
		return(0 - value);
	else
		return(value);
}

void ADC_Bias_Calibration(void){
// 列舉出四路所有檔位的 ADC bias 值，供後續分析用
// 由數據中取出最小值的 setting 就是答案了

#define ADC_Bias_Limit    1966     // 0.03 * 256 * 256  calibration 完的最小值不能超過這數值，否則視為 FAIL IC

#define ADC_Bias_K_Default   0x8888

	unsigned int   i;
	unsigned int   ado[256];
	int            sum[4][16], tmp;
	unsigned int   Bias_Setting, Bias_Write_Pattern;
	unsigned int   channel;
	unsigned int   index[4];

	// force_giga_slave_TP1.m
	ETN_MDIO_write(0xa43, 27, 0x8010);
	ETN_MDIO_write(0xa43, 28, (ETN_MDIO_read(0xa43, 28) & ~(1 << 11)));
	Delay_mS(10);    // 需要等一下
	ETN_MDIO_write(0xa46, 21, (ETN_MDIO_read(0xa46, 21) | (1 << 1)));
	while(0x01 != (ETN_MDIO_read(0xa60, 16) & 0xff))
		Delay_mS(10);
	ETN_MDIO_write(0xa40, 0, 0x0140);
	ETN_MDIO_write(0xa4a, 19, ((ETN_MDIO_read(0xa4a, 19) & ~(3 << 6)) | (2 << 6)));
	ETN_MDIO_write(0xa44, 20, (ETN_MDIO_read(0xa44, 20) | (1 << 2)));
	ETN_MDIO_write(0xa46, 21, (ETN_MDIO_read(0xa46, 21) & ~(1 << 1)));

	SD_DBG("Collecting data :");
	Set_MDC_Speed(TRUE);    // 加速 MDC
	Delay_mS(10);
	for (Bias_Setting = 0; Bias_Setting <= 0xf; Bias_Setting++){
		Bias_Write_Pattern = (Bias_Setting << 12) | (Bias_Setting << 8) | (Bias_Setting << 4) | Bias_Setting;
		SD_DBG(" %x", Bias_Setting);
		ETN_MDIO_write(0xbcf, 22, Bias_Write_Pattern);  // select a new value

		for (channel = 0; channel < 4; channel++){
			switch (channel){
				case 0 : ETN_MDIO_write(0, 31, 0xa8c); break;
				case 1 : ETN_MDIO_write(0, 31, 0xa9c); break;
				case 2 : ETN_MDIO_write(0, 31, 0xaac); break;
				case 3 : ETN_MDIO_write(0, 31, 0xabc); break;
			}

			for (i = 0; i < 256; i++){
				ado[i] = ETN_MDIO_read_from_current_page(18) & 0x01ff;
			}

			sum[channel][Bias_Setting] = 0;
			for (i = 0; i < 256; i++){
				tmp = ado[i];
				if (0 != (ado[i] & (1 << 8))) // %9.8f, negative
					tmp = tmp - 512;
				sum[channel][Bias_Setting] = sum[channel][Bias_Setting] + tmp;
			}
		}
	}
	SD_DBG("\n");
	Set_MDC_Speed(FALSE);    // 還原 MDC
	Delay_mS(10);

	// force_giga_master_slave_recovery.m
	ETN_MDIO_write(0xa43, 27, 0x8010);
	ETN_MDIO_write(0xa43, 28, (ETN_MDIO_read(0xa43, 28) | (1 << 11)));
	Delay_mS(10);    // 需要等一下
	ETN_MDIO_write(0xa46, 21, (ETN_MDIO_read(0xa46, 21) | (1 << 1)));
	while(0x01 != (ETN_MDIO_read(0xa60, 16) & 0xff));
	ETN_MDIO_write(0xa40, 0, 0x1040);
	ETN_MDIO_write(0xa4a, 19, (ETN_MDIO_read(0xa4a, 19) & ~(3 << 6)));
	ETN_MDIO_write(0xa44, 20, (ETN_MDIO_read(0xa44, 20) & ~(1 << 3)));
	ETN_MDIO_write(0xa46, 21, (ETN_MDIO_read(0xa46, 21) & ~(1 << 1)));

	SD_DBG("ADC bias = sum/65536\n");
	for (Bias_Setting = 0; Bias_Setting <= 0xf; Bias_Setting++){
		SD_DBG("%x, sum[0] = %6d, sum[1] = %6d, sum[2] = %6d, sum[3] = %6d\n", Bias_Setting,
			sum[0][Bias_Setting], sum[1][Bias_Setting], sum[2][Bias_Setting], sum[3][Bias_Setting]);
	}

	for (channel = 0; channel < 4; channel++){
		index[channel] = 0;
		for (Bias_Setting = 1; Bias_Setting <= 0xf; Bias_Setting++)
			 if (ABS(sum[channel][index[channel]]) >= ABS(sum[channel][Bias_Setting]))
				 index[channel] = Bias_Setting;
	}
	SD_DBG("minimum ADC_Bias_Setting should be %x%x%x%x\n", index[3], index[2], index[1], index[0]);

	tmp = 0;
	for (channel = 0; channel < 4; channel++)
		if (ADC_Bias_Limit < ABS(sum[channel][index[channel]])){
			SD_DBG("Channel %c is fail!!\n", (char)(channel + (char)'A'));
			tmp--;
		}

	if (0 == tmp){    // 如果 IC 沒問題的話
		Bias_Write_Pattern = (index[3] << 12) | (index[2] << 8) | (index[1] << 4) | index[0];
		ETN_MDIO_write(0xbcf, 22, Bias_Write_Pattern);     // 填入最佳值
	}
	else
	{
		sd_diag_fail();
		return;
	}
	// 燒錄
	// Kylin efuse 共 8192bits，位於 0x980173FC[31]~0x98017000[0]
	// GPHY efuse 共 64bits，位於 0x980171C0[9]~0x980171B9[2] => GPHY_eFuse[63:0]
	// 所需的 GPHY_eFuse[31:16] = Bias_Write_Pattern xor (ADC Bias 暫存器初始值 0x8888) 
	// 0x980171BC[9:6] = index[3][3:0] xor 0x8
	// 0x980171BC[5:2] = index[2][3:0] xor 0x8
	// 0x980171BC[1:0] = index[1][3:2] xor 0x2, 0x980171B8[31:30] = index[1][1:0] xor 0x0
	// 0x980171B8[29:26] = index[0][3:0] xor 0x8
	// efuse 原始狀態為 '0'，燒錄後成為 '1'，故只需燒錄 data 中 '1' 的位元
	#ifdef __BURN_EFUSE__    // 平時不作燒錄，要用時再開
	unsigned int   bit_addr;
	unsigned int   program_a;
	unsigned int   GPHY_eFuse[2];

	GPHY_eFuse[0] = (READ_MEM32(0x980171bc) << 22) | (READ_MEM32(0x980171b8) >> 10);    // 取出 bit [31:0]
	GPHY_eFuse[0] = GPHY_eFuse[0] & 0xffff0000;   // 只保留 bit[31:16]
	SD_DBG("Before programming, GPHY_eFuse[31:16] = %04x, ", (GPHY_eFuse[0] >> 16));

	GPHY_eFuse[1] = (Bias_Write_Pattern ^ ADC_Bias_K_Default) << 16;  // 燒錄完成後應該是這個值
	SD_DBG("will be programmed to %04x\n", (GPHY_eFuse[1] >> 16));
	for (i = 16; i < 32; i++){
		if (0 != ((1 << i) & GPHY_eFuse[1])){
			bit_addr = i + 2 + (0x1b9 << 3);                         // 由 0x98017000[0] 起算的 bit address
			program_a = (((bit_addr & 7) << 10) | (bit_addr >> 3));  // 將 bit address 轉換為燒錄用的格式
			WRITE_MEM32(0x98017400, ((1 << 23) | (1 << 22) | (1 << 13) | program_a));  // enable program efuse & load bit address
			Delay_uS(50);
			WRITE_MEM32(0x98017400, ((1 << 15) | (1 << 14)));        // write strobe enable
			Delay_uS(50);
			WRITE_MEM32(0x98017400, (1 << 23));                      // disble program efuse
		}
	}

	GPHY_eFuse[0] = (READ_MEM32(0x980171bc) << 22) | (READ_MEM32(0x980171b8) >> 10);    // 取出 bit [31:0]
	GPHY_eFuse[0] = GPHY_eFuse[0] & 0xffff0000;   // 只保留 bit[31:16]
	SD_DBG("After programming, GPHY_eFuse[31:16] = %04x\n", (GPHY_eFuse[0] >> 16));
	SD_DBG("efuse compare ");
	if (GPHY_eFuse[0] == GPHY_eFuse[1]) {
		SD_DBG("OK.\n");
		sd_diag_pass();
	} else {
		SD_DBG("FAIL.\n");
		sd_diag_fail();
	}
	#else
	sd_diag_pass();
	#endif /* __BURN_EFUSE__ */
}

void GPHY_test_entry(void){

#if 0
	WRITE_MEM32(0x98000000 , 0xffffffff);
	WRITE_MEM32(0x98000004 , 0xffffffff);
	WRITE_MEM32(0x9800000c , 0xffffffff);
	WRITE_MEM32(0x98000010 , 0xffffffff);
	WRITE_MEM32(0x98007060 , 0x00000000);
	WRITE_MEM32(0x9800708c , 0x0000ffff);
	WRITE_MEM32(0x98007088 , 0x0000ffff);
#endif
	Timer_Init();

	Delay_mS(50);  // 等 GMAC 完成 initialization

	ADC_Bias_Calibration();
}
