#include <common.h>
#include <asm/arch/io.h>
#include <asm/arch/rbus/misc_reg.h>
#include <asm/arch/rbus/crt_reg.h>
#include <arm_test_pattern.h>
#include <config.h>

void ft_init_gpio(void)
{
	mcm_init_gpio();
	sd_init_gpio();
}


void DDR_test_pattern_0(void)
{

#if 1
  //mem_test_entry();
  mem_test_entry2();
#else
  rtd_maskl(CRT_MUXPAD1, ~(_BIT19|_BIT18),0);	
  rtd_setbits(GP0DIR,_BIT20);	
  rtd_setbits(GP0DATO,_BIT20);
  printf("GPIO20 high\n");
#endif
}


#ifdef CONFIG_FT_RESCUE
void call_go_rescue_linux(void)
{
	setenv("bootcmd", "bootr");
	run_command_list("go r", -1, 0);
}
#endif //CONFIG_FT_RESCUE

#if 0
void ACPU_test_pattern_0(void)
{ 
  flush_dcache_all();		
 /* Enable ACPU */
  rtd_setbits(CLOCK_ENABLE2_reg,_BIT4);  
    	
  printf("%s\n",__FUNCTION__);
}

void ETN_test_pattern_0(void)
{ 				  		
	etn_test_entry();
			
	printf("%s\n",__FUNCTION__);
}

void USB_test_pattern_0(void)
{ 				  		
	usb_test_entry();
			
	printf("%s\n",__FUNCTION__);
}
#endif

void ft_test_0(void)
{

	printf("Go DDR test pattern\n");	
	DDR_test_pattern_0();

	printf("Do GPHY ADC bias calibration\n");	
	GPHY_test_entry();

#ifdef CONFIG_FT_RESCUE
	printf("Test PCIE Ethernet loopback\n");
	call_go_rescue_linux();
#endif //CONFIG_FT_RESCUE
#if 0
	ACPU_test_pattern_0();
  
	USB_test_pattern_0();
   
	printf("delay 100ms; Go ETN test pattern\n");

	mdelay(100);
  
	ETN_test_pattern_0();

	enter_ddr_self_refresh_mode();
#endif
}
