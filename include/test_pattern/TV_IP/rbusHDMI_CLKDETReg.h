/**
* @file rbusHDMI_CLKDETReg.h
* @spec Kylin_cbusrx_ClockDet_arch_spec
* RBus systemc program.
*
* @author RS_MM2_SD
* @email jason9.ccc@realtek.com
* @date 2015/4/16
* @ingroup model_rbus
* @version { 1.0 }
**
*/

#ifndef _RBUS_HDMI_CLKDET_REG_H_
#define _RBUS_HDMI_CLKDET_REG_H_

#include "TV_IP/rbusTypes.h"



//  HDMI_CLKDET Register Address



#define  HDMI_CLKDET_CLKDETCR_ADDR                          		(0x98037300)
#define  HDMI_CLKDET_CLKDETSR_ADDR                          		(0x98037304)
#define  HDMI_CLKDET_GDI_TMDSCLK_SETTING_00_ADDR            		(0x98037308)
#define  HDMI_CLKDET_GDI_TMDSCLK_SETTING_01_ADDR            		(0x9803730c)
#define  HDMI_CLKDET_GDI_TMDSCLK_SETTING_02_ADDR            		(0x98037310)

#define  HDMI_CLKDET_CLKDETCR_VADDR                        		(0xd8037300)
#define  HDMI_CLKDET_CLKDETSR_VADDR                        		(0xd8037304)
#define  HDMI_CLKDET_GDI_TMDSCLK_SETTING_00_VADDR          		(0xd8037308)
#define  HDMI_CLKDET_GDI_TMDSCLK_SETTING_01_VADDR          		(0xd803730c)
#define  HDMI_CLKDET_GDI_TMDSCLK_SETTING_02_VADDR          		(0xd8037310)



#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======HDMI_CLKDET register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  clock_det_en:1;
    };
}clkdetcr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:26;
        RBus_UInt32  en_tmds_chg_irq:1;
        RBus_UInt32  tmds_chg_irq:1;
        RBus_UInt32  dummy98037304_3_2:2;
        RBus_UInt32  clk_in_target_irq_en:1;
        RBus_UInt32  clk_in_target:1;
    };
}clkdetsr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  dclk_cnt_start:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  dclk_cnt_end:12;
    };
}gdi_tmdsclk_setting_00_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  target_for_maximum_clk_counter:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  target_for_minimum_clk_counter:12;
    };
}gdi_tmdsclk_setting_01_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:20;
        RBus_UInt32  clk_counter_err_threshold:4;
        RBus_UInt32  clk_counter_debounce:8;
    };
}gdi_tmdsclk_setting_02_RBUS;

#else //apply LITTLE_ENDIAN

//======HDMI_CLKDET register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  clock_det_en:1;
        RBus_UInt32  res1:31;
    };
}clkdetcr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  clk_in_target:1;
        RBus_UInt32  clk_in_target_irq_en:1;
        RBus_UInt32  dummy98037304_3_2:2;
        RBus_UInt32  tmds_chg_irq:1;
        RBus_UInt32  en_tmds_chg_irq:1;
        RBus_UInt32  res1:26;
    };
}clkdetsr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dclk_cnt_end:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  dclk_cnt_start:12;
        RBus_UInt32  res1:4;
    };
}gdi_tmdsclk_setting_00_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  target_for_minimum_clk_counter:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  target_for_maximum_clk_counter:12;
        RBus_UInt32  res1:4;
    };
}gdi_tmdsclk_setting_01_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  clk_counter_debounce:8;
        RBus_UInt32  clk_counter_err_threshold:4;
        RBus_UInt32  res1:20;
    };
}gdi_tmdsclk_setting_02_RBUS;




#endif 


#endif //_RBUS_HDMI_CLKDET_REG_H_
