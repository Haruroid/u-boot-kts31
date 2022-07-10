/**
* @file rbusDFEReg.h
* @spec Kylin_hdmirx_DFE_arch_spec
* RBus systemc program.
*
* @author RS_MM2_SD
* @email jason9.ccc@realtek.com
* @date 2015/3/11
* @ingroup model_rbus
* @version { 1.0 }
**
*/

#ifndef _RBUS_DFE_REG_H_
#define _RBUS_DFE_REG_H_

#include "rbus/rbusTypes.h"



//  DFE Register Address



#define  DFE_REG_DFE_EN_L0_ADDR                             		(0x98034f00)
#define  DFE_REG_DFE_INIT0_L0_ADDR                          		(0x98034f04)
#define  DFE_REG_DFE_INIT1_L0_ADDR                          		(0x98034f08)
#define  DFE_REG_DFE_EN_L1_ADDR                             		(0x98034f10)
#define  DFE_REG_DFE_INIT0_L1_ADDR                          		(0x98034f14)
#define  DFE_REG_DFE_INIT1_L1_ADDR                          		(0x98034f18)
#define  DFE_REG_DFE_EN_L2_ADDR                             		(0x98034f20)
#define  DFE_REG_DFE_INIT0_L2_ADDR                          		(0x98034f24)
#define  DFE_REG_DFE_INIT1_L2_ADDR                          		(0x98034f28)
#define  DFE_REG_DFE_MODE_ADDR                              		(0x98034f30)
#define  DFE_REG_DFE_GAIN_ADDR                              		(0x98034f34)
#define  DFE_REG_DFE_LIMIT0_ADDR                            		(0x98034f38)
#define  DFE_REG_DFE_LIMIT1_ADDR                            		(0x98034f3c)
#define  DFE_REG_DFE_LIMIT2_ADDR                            		(0x98034f40)
#define  DFE_REG_DFE_READBACK_ADDR                          		(0x98034f44)
#define  DFE_REG_DFE_FLAG_ADDR                              		(0x98034f48)
#define  DFE_REG_DFE_DEBUG_ADDR                             		(0x98034f50)

#define  DFE_REG_DFE_EN_L0_VADDR                           		(0xd8034f00)
#define  DFE_REG_DFE_INIT0_L0_VADDR                        		(0xd8034f04)
#define  DFE_REG_DFE_INIT1_L0_VADDR                        		(0xd8034f08)
#define  DFE_REG_DFE_EN_L1_VADDR                           		(0xd8034f10)
#define  DFE_REG_DFE_INIT0_L1_VADDR                        		(0xd8034f14)
#define  DFE_REG_DFE_INIT1_L1_VADDR                        		(0xd8034f18)
#define  DFE_REG_DFE_EN_L2_VADDR                           		(0xd8034f20)
#define  DFE_REG_DFE_INIT0_L2_VADDR                        		(0xd8034f24)
#define  DFE_REG_DFE_INIT1_L2_VADDR                        		(0xd8034f28)
#define  DFE_REG_DFE_MODE_VADDR                            		(0xd8034f30)
#define  DFE_REG_DFE_GAIN_VADDR                            		(0xd8034f34)
#define  DFE_REG_DFE_LIMIT0_VADDR                          		(0xd8034f38)
#define  DFE_REG_DFE_LIMIT1_VADDR                          		(0xd8034f3c)
#define  DFE_REG_DFE_LIMIT2_VADDR                          		(0xd8034f40)
#define  DFE_REG_DFE_READBACK_VADDR                        		(0xd8034f44)
#define  DFE_REG_DFE_FLAG_VADDR                            		(0xd8034f48)
#define  DFE_REG_DFE_DEBUG_VADDR                           		(0xd8034f50)



#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======DFE register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  clk_inv_lane0:1;
        RBus_UInt32  timer_ctrl_en_lane0:1;
        RBus_UInt32  reduce_adapt_gain_lane0:2;
        RBus_UInt32  rl_det_en_lane0:1;
        RBus_UInt32  rl_det_mode_lane0:1;
        RBus_UInt32  rl_threshold_lane0:2;
        RBus_UInt32  dfe_adapt_en_lane0:8;
        RBus_UInt32  le_min_lane0:5;
        RBus_UInt32  le_init_lane0:5;
        RBus_UInt32  tap4_init_lane0:6;
    };
}reg_dfe_en_l0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tap3_init_lane0:6;
        RBus_UInt32  tap2_init_lane0:6;
        RBus_UInt32  tap1_init_lane0:6;
        RBus_UInt32  tap0_init_lane0:5;
        RBus_UInt32  servo_init_lane0:5;
        RBus_UInt32  vth_init_lane0:4;
    };
}reg_dfe_init0_l0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  load_in_init_lane0:8;
        RBus_UInt32  init1_rev1_lane0:6;
        RBus_UInt32  de_video_inv_lane0:1;
        RBus_UInt32  de_packet_inv_lane0:1;
        RBus_UInt32  de_video_en_lane0:1;
        RBus_UInt32  de_packet_en_lane0:1;
        RBus_UInt32  init1_rev0_lane0:14;
    };
}reg_dfe_init1_l0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  clk_inv_lane1:1;
        RBus_UInt32  timer_ctrl_en_lane1:1;
        RBus_UInt32  reduce_adapt_gain_lane1:2;
        RBus_UInt32  rl_det_en_lane1:1;
        RBus_UInt32  rl_det_mode_lane1:1;
        RBus_UInt32  rl_threshold_lane1:2;
        RBus_UInt32  dfe_adapt_en_lane1:8;
        RBus_UInt32  le_min_lane1:5;
        RBus_UInt32  le_init_lane1:5;
        RBus_UInt32  tap4_init_lane1:6;
    };
}reg_dfe_en_l1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tap3_init_lane1:6;
        RBus_UInt32  tap2_init_lane1:6;
        RBus_UInt32  tap1_init_lane1:6;
        RBus_UInt32  tap0_init_lane1:5;
        RBus_UInt32  servo_init_lane1:5;
        RBus_UInt32  vth_init_lane1:4;
    };
}reg_dfe_init0_l1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  load_in_init_lane1:8;
        RBus_UInt32  init1_rev1_lane1:6;
        RBus_UInt32  de_video_inv_lane1:1;
        RBus_UInt32  de_packet_inv_lane1:1;
        RBus_UInt32  de_video_en_lane1:1;
        RBus_UInt32  de_packet_en_lane1:1;
        RBus_UInt32  init1_rev0_lane1:14;
    };
}reg_dfe_init1_l1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  clk_inv_lane2:1;
        RBus_UInt32  timer_ctrl_en_lane2:1;
        RBus_UInt32  reduce_adapt_gain_lane2:2;
        RBus_UInt32  rl_det_en_lane2:1;
        RBus_UInt32  rl_det_mode_lane2:1;
        RBus_UInt32  rl_threshold_lane2:2;
        RBus_UInt32  dfe_adapt_en_lane2:8;
        RBus_UInt32  le_min_lane2:5;
        RBus_UInt32  le_init_lane2:5;
        RBus_UInt32  tap4_init_lane2:6;
    };
}reg_dfe_en_l2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tap3_init_lane2:6;
        RBus_UInt32  tap2_init_lane2:6;
        RBus_UInt32  tap1_init_lane2:6;
        RBus_UInt32  tap0_init_lane2:5;
        RBus_UInt32  servo_init_lane2:5;
        RBus_UInt32  vth_init_lane2:4;
    };
}reg_dfe_init0_l2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  load_in_init_lane2:8;
        RBus_UInt32  init1_rev1_lane2:6;
        RBus_UInt32  de_video_inv_lane2:1;
        RBus_UInt32  de_packet_inv_lane2:1;
        RBus_UInt32  de_video_en_lane2:1;
        RBus_UInt32  de_packet_en_lane2:1;
        RBus_UInt32  init1_rev0_lane2:14;
    };
}reg_dfe_init1_l2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  adapt_mode:2;
        RBus_UInt32  edge_det_mode:1;
        RBus_UInt32  transition_only:1;
        RBus_UInt32  le_auto_reload:1;
        RBus_UInt32  tap1_delay:3;
        RBus_UInt32  tap24_delay:3;
        RBus_UInt32  le_delay:3;
        RBus_UInt32  servo_delay:2;
        RBus_UInt32  gray_en:8;
        RBus_UInt32  dfe_adapt_rstb:4;
        RBus_UInt32  tap0_trans:1;
        RBus_UInt32  tap0_notrans:1;
        RBus_UInt32  servo_notrans:1;
        RBus_UInt32  servo_trans:1;
    };
}reg_dfe_mode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tap0_gain:3;
        RBus_UInt32  tap1_gain:3;
        RBus_UInt32  tap2_gain:3;
        RBus_UInt32  tap3_gain:3;
        RBus_UInt32  tap4_gain:3;
        RBus_UInt32  servo_gain:3;
        RBus_UInt32  le_gain1:3;
        RBus_UInt32  le_gain2:3;
        RBus_UInt32  le2_sign:1;
        RBus_UInt32  le_gain_prec:3;
        RBus_UInt32  le_prec_sign:1;
        RBus_UInt32  trans_rlength:3;
    };
}reg_dfe_gain_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tap0_max:5;
        RBus_UInt32  tap1_min:6;
        RBus_UInt32  tap2_max:5;
        RBus_UInt32  tap2_min:5;
        RBus_UInt32  tap3_max:5;
        RBus_UInt32  tap3_min:5;
        RBus_UInt32  edge_last_notrans:1;
    };
}reg_dfe_limit0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tap4_max:5;
        RBus_UInt32  tap4_min:5;
        RBus_UInt32  vth_min:3;
        RBus_UInt32  vth_max:4;
        RBus_UInt32  vth_threshold:3;
        RBus_UInt32  tap0_threshold:4;
        RBus_UInt32  tap0_adjust:2;
        RBus_UInt32  tap1_trans:1;
        RBus_UInt32  limit1_rev:5;
    };
}reg_dfe_limit1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  servo_divisor:6;
        RBus_UInt32  tap_divisor:6;
        RBus_UInt32  vth_divisor:4;
        RBus_UInt32  limit2_rev:16;
    };
}reg_dfe_limit2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  record_limit_en:1;
        RBus_UInt32  lane_sel:2;
        RBus_UInt32  limit_sel:5;
        RBus_UInt32  limit_data:8;
        RBus_UInt32  coef_sel:8;
        RBus_UInt32  coef_data:8;
    };
}reg_dfe_readback_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  adapt_fail_flag:4;
        RBus_UInt32  adapt_swing_max_flag:4;
        RBus_UInt32  flag_rev1:12;
        RBus_UInt32  flag_rev2:12;
    };
}reg_dfe_flag_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  debug_rev:27;
        RBus_UInt32  debug_sel:5;
    };
}reg_dfe_debug_RBUS;

#else //apply LITTLE_ENDIAN

//======DFE register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tap4_init_lane0:6;
        RBus_UInt32  le_init_lane0:5;
        RBus_UInt32  le_min_lane0:5;
        RBus_UInt32  dfe_adapt_en_lane0:8;
        RBus_UInt32  rl_threshold_lane0:2;
        RBus_UInt32  rl_det_mode_lane0:1;
        RBus_UInt32  rl_det_en_lane0:1;
        RBus_UInt32  reduce_adapt_gain_lane0:2;
        RBus_UInt32  timer_ctrl_en_lane0:1;
        RBus_UInt32  clk_inv_lane0:1;
    };
}reg_dfe_en_l0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vth_init_lane0:4;
        RBus_UInt32  servo_init_lane0:5;
        RBus_UInt32  tap0_init_lane0:5;
        RBus_UInt32  tap1_init_lane0:6;
        RBus_UInt32  tap2_init_lane0:6;
        RBus_UInt32  tap3_init_lane0:6;
    };
}reg_dfe_init0_l0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  init1_rev0_lane0:14;
        RBus_UInt32  de_packet_en_lane0:1;
        RBus_UInt32  de_video_en_lane0:1;
        RBus_UInt32  de_packet_inv_lane0:1;
        RBus_UInt32  de_video_inv_lane0:1;
        RBus_UInt32  init1_rev1_lane0:6;
        RBus_UInt32  load_in_init_lane0:8;
    };
}reg_dfe_init1_l0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tap4_init_lane1:6;
        RBus_UInt32  le_init_lane1:5;
        RBus_UInt32  le_min_lane1:5;
        RBus_UInt32  dfe_adapt_en_lane1:8;
        RBus_UInt32  rl_threshold_lane1:2;
        RBus_UInt32  rl_det_mode_lane1:1;
        RBus_UInt32  rl_det_en_lane1:1;
        RBus_UInt32  reduce_adapt_gain_lane1:2;
        RBus_UInt32  timer_ctrl_en_lane1:1;
        RBus_UInt32  clk_inv_lane1:1;
    };
}reg_dfe_en_l1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vth_init_lane1:4;
        RBus_UInt32  servo_init_lane1:5;
        RBus_UInt32  tap0_init_lane1:5;
        RBus_UInt32  tap1_init_lane1:6;
        RBus_UInt32  tap2_init_lane1:6;
        RBus_UInt32  tap3_init_lane1:6;
    };
}reg_dfe_init0_l1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  init1_rev0_lane1:14;
        RBus_UInt32  de_packet_en_lane1:1;
        RBus_UInt32  de_video_en_lane1:1;
        RBus_UInt32  de_packet_inv_lane1:1;
        RBus_UInt32  de_video_inv_lane1:1;
        RBus_UInt32  init1_rev1_lane1:6;
        RBus_UInt32  load_in_init_lane1:8;
    };
}reg_dfe_init1_l1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tap4_init_lane2:6;
        RBus_UInt32  le_init_lane2:5;
        RBus_UInt32  le_min_lane2:5;
        RBus_UInt32  dfe_adapt_en_lane2:8;
        RBus_UInt32  rl_threshold_lane2:2;
        RBus_UInt32  rl_det_mode_lane2:1;
        RBus_UInt32  rl_det_en_lane2:1;
        RBus_UInt32  reduce_adapt_gain_lane2:2;
        RBus_UInt32  timer_ctrl_en_lane2:1;
        RBus_UInt32  clk_inv_lane2:1;
    };
}reg_dfe_en_l2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vth_init_lane2:4;
        RBus_UInt32  servo_init_lane2:5;
        RBus_UInt32  tap0_init_lane2:5;
        RBus_UInt32  tap1_init_lane2:6;
        RBus_UInt32  tap2_init_lane2:6;
        RBus_UInt32  tap3_init_lane2:6;
    };
}reg_dfe_init0_l2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  init1_rev0_lane2:14;
        RBus_UInt32  de_packet_en_lane2:1;
        RBus_UInt32  de_video_en_lane2:1;
        RBus_UInt32  de_packet_inv_lane2:1;
        RBus_UInt32  de_video_inv_lane2:1;
        RBus_UInt32  init1_rev1_lane2:6;
        RBus_UInt32  load_in_init_lane2:8;
    };
}reg_dfe_init1_l2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  servo_trans:1;
        RBus_UInt32  servo_notrans:1;
        RBus_UInt32  tap0_notrans:1;
        RBus_UInt32  tap0_trans:1;
        RBus_UInt32  dfe_adapt_rstb:4;
        RBus_UInt32  gray_en:8;
        RBus_UInt32  servo_delay:2;
        RBus_UInt32  le_delay:3;
        RBus_UInt32  tap24_delay:3;
        RBus_UInt32  tap1_delay:3;
        RBus_UInt32  le_auto_reload:1;
        RBus_UInt32  transition_only:1;
        RBus_UInt32  edge_det_mode:1;
        RBus_UInt32  adapt_mode:2;
    };
}reg_dfe_mode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  trans_rlength:3;
        RBus_UInt32  le_prec_sign:1;
        RBus_UInt32  le_gain_prec:3;
        RBus_UInt32  le2_sign:1;
        RBus_UInt32  le_gain2:3;
        RBus_UInt32  le_gain1:3;
        RBus_UInt32  servo_gain:3;
        RBus_UInt32  tap4_gain:3;
        RBus_UInt32  tap3_gain:3;
        RBus_UInt32  tap2_gain:3;
        RBus_UInt32  tap1_gain:3;
        RBus_UInt32  tap0_gain:3;
    };
}reg_dfe_gain_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  edge_last_notrans:1;
        RBus_UInt32  tap3_min:5;
        RBus_UInt32  tap3_max:5;
        RBus_UInt32  tap2_min:5;
        RBus_UInt32  tap2_max:5;
        RBus_UInt32  tap1_min:6;
        RBus_UInt32  tap0_max:5;
    };
}reg_dfe_limit0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  limit1_rev:5;
        RBus_UInt32  tap1_trans:1;
        RBus_UInt32  tap0_adjust:2;
        RBus_UInt32  tap0_threshold:4;
        RBus_UInt32  vth_threshold:3;
        RBus_UInt32  vth_max:4;
        RBus_UInt32  vth_min:3;
        RBus_UInt32  tap4_min:5;
        RBus_UInt32  tap4_max:5;
    };
}reg_dfe_limit1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  limit2_rev:16;
        RBus_UInt32  vth_divisor:4;
        RBus_UInt32  tap_divisor:6;
        RBus_UInt32  servo_divisor:6;
    };
}reg_dfe_limit2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  coef_data:8;
        RBus_UInt32  coef_sel:8;
        RBus_UInt32  limit_data:8;
        RBus_UInt32  limit_sel:5;
        RBus_UInt32  lane_sel:2;
        RBus_UInt32  record_limit_en:1;
    };
}reg_dfe_readback_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  flag_rev2:12;
        RBus_UInt32  flag_rev1:12;
        RBus_UInt32  adapt_swing_max_flag:4;
        RBus_UInt32  adapt_fail_flag:4;
    };
}reg_dfe_flag_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  debug_sel:5;
        RBus_UInt32  debug_rev:27;
    };
}reg_dfe_debug_RBUS;




#endif 


#endif //_RBUS_DFE_REG_H_
