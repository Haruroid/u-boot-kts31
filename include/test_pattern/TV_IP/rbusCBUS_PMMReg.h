/**
* @file rbusCBUS_PMMReg.h
* @spec Kylin_cbusrx_MHL_CBUS_Standby_arch_spec
* RBus systemc program.
*
* @author RS_MM2_SD
* @email jason9.ccc@realtek.com
* @date 2015/4/14
* @ingroup model_rbus
* @version { 1.0 }
**
*/

#ifndef _RBUS_CBUS_PMM_REG_H_
#define _RBUS_CBUS_PMM_REG_H_

#include "TV_IP/rbusTypes.h"



//  CBUS_PMM Register Address



#define  CBUS_PMM_CBUS_STANDBY_00_ADDR                      		(0x98037400)
#define  CBUS_PMM_CBUS_STANDBY_01_ADDR                      		(0x98037404)
#define  CBUS_PMM_CBUS_STANDBY_02_ADDR                      		(0x98037408)
#define  CBUS_PMM_CBUS_STANDBY_04_ADDR                      		(0x98037410)
#define  CBUS_PMM_CBUS_STANDBY_05_ADDR                      		(0x98037414)
#define  CBUS_PMM_CBUS_STANDBY_06_ADDR                      		(0x98037418)
#define  CBUS_PMM_CBUS_STANDBY_07_ADDR                      		(0x9803741c)
#define  CBUS_PMM_CBUS_STANDBY_08_ADDR                      		(0x98037420)
#define  CBUS_PMM_CBUS_STANDBY_09_ADDR                      		(0x98037424)
#define  CBUS_PMM_CBUS_PHY_0_ADDR                           		(0x98037430)
#define  CBUS_PMM_CBUS_PHY_1_ADDR                           		(0x98037434)
#define  CBUS_PMM_CBUS_PHY_2_ADDR                           		(0x98037438)
#define  CBUS_PMM_CBUS_PHY_3_ADDR                           		(0x9803743c)

#define  CBUS_PMM_CBUS_STANDBY_00_VADDR                    		(0xd8037400)
#define  CBUS_PMM_CBUS_STANDBY_01_VADDR                    		(0xd8037404)
#define  CBUS_PMM_CBUS_STANDBY_02_VADDR                    		(0xd8037408)
#define  CBUS_PMM_CBUS_STANDBY_04_VADDR                    		(0xd8037410)
#define  CBUS_PMM_CBUS_STANDBY_05_VADDR                    		(0xd8037414)
#define  CBUS_PMM_CBUS_STANDBY_06_VADDR                    		(0xd8037418)
#define  CBUS_PMM_CBUS_STANDBY_07_VADDR                    		(0xd803741c)
#define  CBUS_PMM_CBUS_STANDBY_08_VADDR                    		(0xd8037420)
#define  CBUS_PMM_CBUS_STANDBY_09_VADDR                    		(0xd8037424)
#define  CBUS_PMM_CBUS_PHY_0_VADDR                         		(0xd8037430)
#define  CBUS_PMM_CBUS_PHY_1_VADDR                         		(0xd8037434)
#define  CBUS_PMM_CBUS_PHY_2_VADDR                         		(0xd8037438)
#define  CBUS_PMM_CBUS_PHY_3_VADDR                         		(0xd803743c)



#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======CBUS_PMM register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:28;
        RBus_UInt32  wake_pulse_det:1;
        RBus_UInt32  dis_pulse_det:1;
        RBus_UInt32  wake_irq_en:1;
        RBus_UInt32  dis_irq_en:1;
    };
}cbus_standby_00_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:18;
        RBus_UInt32  clk_1m_div:4;
        RBus_UInt32  clk_1k_div:10;
    };
}cbus_standby_01_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  dis_deb_lv:3;
        RBus_UInt32  deb_lv:3;
        RBus_UInt32  disconn:2;
    };
}cbus_standby_02_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  wake_offset_low2:5;
        RBus_UInt32  wake_offset_low:5;
        RBus_UInt32  wake_cnt:3;
        RBus_UInt32  wake_offset:5;
        RBus_UInt32  cbus_disconn:1;
        RBus_UInt32  disconn_irq_en:1;
    };
}cbus_standby_04_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  dis_upper:4;
        RBus_UInt32  dis_lower:3;
        RBus_UInt32  wake_eco_en:1;
    };
}cbus_standby_05_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  wake_num:3;
        RBus_UInt32  dis_num:5;
    };
}cbus_standby_06_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  cbus_imp_auto:1;
        RBus_UInt32  bypass_mode:1;
        RBus_UInt32  sink_fsm_st:3;
        RBus_UInt32  cbus_100k_en:1;
        RBus_UInt32  cbus_1k_en:1;
        RBus_UInt32  cbus_in_sig:1;
    };
}cbus_standby_07_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:26;
        RBus_UInt32  goto_sink1_pos:1;
        RBus_UInt32  goto_float:1;
        RBus_UInt32  goto_sink1:1;
        RBus_UInt32  cable_det:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  dbg_sel_phy:1;
    };
}cbus_standby_08_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ctrl_09_resv:32;
    };
}cbus_standby_09_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:25;
        RBus_UInt32  cbus_sr:1;
        RBus_UInt32  cbus_smt:1;
        RBus_UInt32  cbus_pu:1;
        RBus_UInt32  cbus_pd:1;
        RBus_UInt32  cbus_i:1;
        RBus_UInt32  cbus_e2:1;
        RBus_UInt32  cbus_e:1;
    };
}cbus_phy_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  adjr_1k:4;
        RBus_UInt32  adjr_100k:5;
        RBus_UInt32  auto_k_1k:1;
        RBus_UInt32  auto_k_100k:1;
        RBus_UInt32  en_res_cal_cbus:1;
        RBus_UInt32  sel_cbus0_input_high:2;
        RBus_UInt32  sel_cbus0_input_low:2;
        RBus_UInt32  sel_cbus_0_driving:3;
        RBus_UInt32  sel_vref_ldo:2;
        RBus_UInt32  trim_ldo_cbus:4;
        RBus_UInt32  triming_mode:1;
        RBus_UInt32  en_cbus:1;
        RBus_UInt32  en_cmp_cbus:1;
        RBus_UInt32  en_driver_cbus:1;
        RBus_UInt32  en_ldo_cbus:1;
        RBus_UInt32  psm_cbus:1;
        RBus_UInt32  sel_cbusb_gpio:1;
    };
}cbus_phy_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  cbus_o:1;
    };
}cbus_phy_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:20;
        RBus_UInt32  sel_phy_soft_rst_n:1;
        RBus_UInt32  cbus_res_tst:10;
        RBus_UInt32  res_ok:1;
    };
}cbus_phy_3_RBUS;

#else //apply LITTLE_ENDIAN

//======CBUS_PMM register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dis_irq_en:1;
        RBus_UInt32  wake_irq_en:1;
        RBus_UInt32  dis_pulse_det:1;
        RBus_UInt32  wake_pulse_det:1;
        RBus_UInt32  res1:28;
    };
}cbus_standby_00_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  clk_1k_div:10;
        RBus_UInt32  clk_1m_div:4;
        RBus_UInt32  res1:18;
    };
}cbus_standby_01_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  disconn:2;
        RBus_UInt32  deb_lv:3;
        RBus_UInt32  dis_deb_lv:3;
        RBus_UInt32  res1:24;
    };
}cbus_standby_02_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  disconn_irq_en:1;
        RBus_UInt32  cbus_disconn:1;
        RBus_UInt32  wake_offset:5;
        RBus_UInt32  wake_cnt:3;
        RBus_UInt32  wake_offset_low:5;
        RBus_UInt32  wake_offset_low2:5;
        RBus_UInt32  res1:12;
    };
}cbus_standby_04_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wake_eco_en:1;
        RBus_UInt32  dis_lower:3;
        RBus_UInt32  dis_upper:4;
        RBus_UInt32  res1:24;
    };
}cbus_standby_05_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dis_num:5;
        RBus_UInt32  wake_num:3;
        RBus_UInt32  res1:24;
    };
}cbus_standby_06_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cbus_in_sig:1;
        RBus_UInt32  cbus_1k_en:1;
        RBus_UInt32  cbus_100k_en:1;
        RBus_UInt32  sink_fsm_st:3;
        RBus_UInt32  bypass_mode:1;
        RBus_UInt32  cbus_imp_auto:1;
        RBus_UInt32  res1:24;
    };
}cbus_standby_07_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dbg_sel_phy:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  cable_det:1;
        RBus_UInt32  goto_sink1:1;
        RBus_UInt32  goto_float:1;
        RBus_UInt32  goto_sink1_pos:1;
        RBus_UInt32  res1:26;
    };
}cbus_standby_08_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ctrl_09_resv:32;
    };
}cbus_standby_09_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cbus_e:1;
        RBus_UInt32  cbus_e2:1;
        RBus_UInt32  cbus_i:1;
        RBus_UInt32  cbus_pd:1;
        RBus_UInt32  cbus_pu:1;
        RBus_UInt32  cbus_smt:1;
        RBus_UInt32  cbus_sr:1;
        RBus_UInt32  res1:25;
    };
}cbus_phy_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sel_cbusb_gpio:1;
        RBus_UInt32  psm_cbus:1;
        RBus_UInt32  en_ldo_cbus:1;
        RBus_UInt32  en_driver_cbus:1;
        RBus_UInt32  en_cmp_cbus:1;
        RBus_UInt32  en_cbus:1;
        RBus_UInt32  triming_mode:1;
        RBus_UInt32  trim_ldo_cbus:4;
        RBus_UInt32  sel_vref_ldo:2;
        RBus_UInt32  sel_cbus_0_driving:3;
        RBus_UInt32  sel_cbus0_input_low:2;
        RBus_UInt32  sel_cbus0_input_high:2;
        RBus_UInt32  en_res_cal_cbus:1;
        RBus_UInt32  auto_k_100k:1;
        RBus_UInt32  auto_k_1k:1;
        RBus_UInt32  adjr_100k:5;
        RBus_UInt32  adjr_1k:4;
    };
}cbus_phy_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cbus_o:1;
        RBus_UInt32  res1:31;
    };
}cbus_phy_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res_ok:1;
        RBus_UInt32  cbus_res_tst:10;
        RBus_UInt32  sel_phy_soft_rst_n:1;
        RBus_UInt32  res1:20;
    };
}cbus_phy_3_RBUS;




#endif 


#endif //_RBUS_CBUS_PMM_REG_H_
