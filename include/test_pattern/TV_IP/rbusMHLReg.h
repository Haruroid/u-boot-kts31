/**
* @file rbusMHLReg.h
* @spec Kylin_hdmirx_MHL_arch_spec
* RBus systemc program.
*
* @author RS_MM2_SD
* @email jason9.ccc@realtek.com
* @date 2015/3/11
* @ingroup model_rbus
* @version { 1.0 }
**
*/

#ifndef _RBUS_MHL_REG_H_
#define _RBUS_MHL_REG_H_

#include "TV_IP/rbusTypes.h"



//  MHL Register Address



#define  MHL_MHL_DAL_CTRL_ADDR                              		(0x98034600)
#define  MHL_MHL_DAL_STATUS_ADDR                            		(0x98034604)
#define  MHL_MHL_MD_CTRL_ADDR                               		(0x98034608)
#define  MHL_MHL_MD_THRESHOLD_ADDR                          		(0x9803460c)
#define  MHL_MHL_MD_CNT_ADDR                                		(0x98034610)
#define  MHL_MHL_DEMUX_CTRL_ADDR                            		(0x98034614)
#define  MHL_MHL_STATUS_ADDR                                		(0x98034618)
#define  MHL_MHL_CH_CR_ADDR                                 		(0x9803461c)
#define  MHL_MHL_CH_SR_ADDR                                 		(0x98034620)
#define  MHL_MHL3_CTRL_ADDR                                 		(0x98034700)
#define  MHL_MHL3_STATUS_ADDR                               		(0x98034704)
#define  MHL_TMDS_BIT_ERR_DET_ADDR                          		(0x98034708)
#define  MHL_TMDS_BIT_ERR_STATUS_ADDR                       		(0x9803470c)
#define  MHL_MHL_BIST_CTRL_ADDR                             		(0x98034710)
#define  MHL_MHL_BIST_ERR_CNT_ADDR                          		(0x98034714)
#define  MHL_HDCP_CTRL_ADDR                                 		(0x98034718)

#define  MHL_MHL_DAL_CTRL_VADDR                            		(0xd8034600)
#define  MHL_MHL_DAL_STATUS_VADDR                          		(0xd8034604)
#define  MHL_MHL_MD_CTRL_VADDR                             		(0xd8034608)
#define  MHL_MHL_MD_THRESHOLD_VADDR                        		(0xd803460c)
#define  MHL_MHL_MD_CNT_VADDR                              		(0xd8034610)
#define  MHL_MHL_DEMUX_CTRL_VADDR                          		(0xd8034614)
#define  MHL_MHL_STATUS_VADDR                              		(0xd8034618)
#define  MHL_MHL_CH_CR_VADDR                               		(0xd803461c)
#define  MHL_MHL_CH_SR_VADDR                               		(0xd8034620)
#define  MHL_MHL3_CTRL_VADDR                               		(0xd8034700)
#define  MHL_MHL3_STATUS_VADDR                             		(0xd8034704)
#define  MHL_TMDS_BIT_ERR_DET_VADDR                        		(0xd8034708)
#define  MHL_TMDS_BIT_ERR_STATUS_VADDR                     		(0xd803470c)
#define  MHL_MHL_BIST_CTRL_VADDR                           		(0xd8034710)
#define  MHL_MHL_BIST_ERR_CNT_VADDR                        		(0xd8034714)
#define  MHL_HDCP_CTRL_VADDR                               		(0xd8034718)



#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======MHL register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy98034600_31_29:3;
        RBus_UInt32  mhl_de_sel:1;
        RBus_UInt32  mhl_tran_err_thrd:4;
        RBus_UInt32  mhl_neg_de_err_thrd:4;
        RBus_UInt32  mhl_pos_de_err_thrd:4;
        RBus_UInt32  b_r_ch_sel:1;
        RBus_UInt32  mhl_neg_de_lowbd:7;
        RBus_UInt32  dummy98034600_7_6:2;
        RBus_UInt32  mhl_pos_de_lowbd:6;
    };
}mhl_dal_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  mhl_de_glitch_cycle:4;
        RBus_UInt32  res2:1;
        RBus_UInt32  mhl_ver_1_2:1;
        RBus_UInt32  mhl_de_glitch_en:1;
        RBus_UInt32  pn_swap:1;
    };
}mhl_dal_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  mhl_mode_err_wd:1;
        RBus_UInt32  mhl_mode_err_int:1;
        RBus_UInt32  mhl_mode:1;
        RBus_UInt32  res2:3;
        RBus_UInt32  mhl_mode_det_per_sel:1;
        RBus_UInt32  mhl_mode_det_per:16;
        RBus_UInt32  mhl_mode_det:2;
        RBus_UInt32  mhl_mode_det_cont:1;
        RBus_UInt32  mhl_mode_det_start:1;
    };
}mhl_md_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  threshold_pp:16;
        RBus_UInt32  threshold_24bits:16;
    };
}mhl_md_threshold_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  det_cnt_pp:16;
        RBus_UInt32  det_cnt_24bit:16;
    };
}mhl_md_cnt_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:19;
        RBus_UInt32  video_wd_en:1;
        RBus_UInt32  audio_wd_en:1;
        RBus_UInt32  ch_bound_chg_wd_en:1;
        RBus_UInt32  ch_bound_chg_int_en:1;
        RBus_UInt32  ch_bound_chg_det:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  demux_sel:3;
        RBus_UInt32  dvi_ch_sync:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  mhl_pp_en:1;
        RBus_UInt32  mhl_en:1;
    };
}mhl_demux_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:19;
        RBus_UInt32  ch_bound_chg:1;
        RBus_UInt32  res2:3;
        RBus_UInt32  mhl_mode_err:1;
        RBus_UInt32  res3:2;
        RBus_UInt32  non_ctrl_glitch_occ_flag:1;
        RBus_UInt32  ctrl_glitch_occr_flag:1;
        RBus_UInt32  res4:1;
        RBus_UInt32  mhl_tran_err_flag:1;
        RBus_UInt32  mhl_pos_de_err_flag:1;
        RBus_UInt32  mhl_neg_de_err_flag:1;
    };
}mhl_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:14;
        RBus_UInt32  mhl_ch1_cr_flush:1;
        RBus_UInt32  mhl_ch1_cr_afifo_en:1;
        RBus_UInt32  dummy9803461c_15_2:14;
        RBus_UInt32  mhl_ch0_cr_flush:1;
        RBus_UInt32  mhl_ch0_cr_afifo_en:1;
    };
}mhl_ch_cr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:11;
        RBus_UInt32  mhl_ch1_sr_wrclk_det_timeout_flag:1;
        RBus_UInt32  mhl_ch1_sr_rwclk_det_timeout_flag:1;
        RBus_UInt32  mhl_ch1_sr_wovflow_flag:1;
        RBus_UInt32  mhl_ch1_sr_rudflow_flag:1;
        RBus_UInt32  mhl_ch1_sr_rflush_flag:1;
        RBus_UInt32  dummy98034620_15_5:11;
        RBus_UInt32  mhl_ch0_sr_wrclk_det_timeout_flag:1;
        RBus_UInt32  mhl_ch0_sr_rwclk_det_timeout_flag:1;
        RBus_UInt32  mhl_ch0_sr_wovflow_flag:1;
        RBus_UInt32  mhl_ch0_sr_rudflow_flag:1;
        RBus_UInt32  mhl_ch0_sr_rflush_flag:1;
    };
}mhl_ch_sr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:18;
        RBus_UInt32  rr_sync_clr:1;
        RBus_UInt32  debug_sel:3;
        RBus_UInt32  pkt_type_decode_sel:2;
        RBus_UInt32  errc_sel:3;
        RBus_UInt32  rr_mode:2;
        RBus_UInt32  mhl_ver3_dvi_en:1;
        RBus_UInt32  mhl_ver3_24_16_bit_sel:1;
        RBus_UInt32  mhl_ver3_en:1;
    };
}mhl3_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:22;
        RBus_UInt32  bits_per_pixel_mode:2;
        RBus_UInt32  max_trans_symbol_err:1;
        RBus_UInt32  rr_err:1;
        RBus_UInt32  blank_payload_len_err:1;
        RBus_UInt32  video_payload_len_err:1;
        RBus_UInt32  hdr_err:1;
        RBus_UInt32  packet_trail_gb_err:1;
        RBus_UInt32  packet_lead_gb_err:1;
        RBus_UInt32  video_gb_err:1;
    };
}mhl3_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bit_err_det_thd:16;
        RBus_UInt32  res1:4;
        RBus_UInt32  bit_err_irq_en:1;
        RBus_UInt32  bit_err_reset:1;
        RBus_UInt32  bit_err_det_period:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  bit_err_det_mode:1;
        RBus_UInt32  bit_err_det_en:1;
    };
}tmds_bit_err_det_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tmds_ad_max:6;
        RBus_UInt32  tmds_ad_min:6;
        RBus_UInt32  tmds_no_dis_reset:1;
        RBus_UInt32  tmds_bit_err_thd:1;
        RBus_UInt32  tmds_bit_err:1;
        RBus_UInt32  tmds_bit_err_cnt_of:1;
        RBus_UInt32  tmds_bit_err_cnt:16;
    };
}tmds_bit_err_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bist_frame_num:8;
        RBus_UInt32  dummy98034710_23:1;
        RBus_UInt32  fixed10_align_en:1;
        RBus_UInt32  bist_fixed:10;
        RBus_UInt32  bist_fix10_inverse:1;
        RBus_UInt32  bist_data_align_en:1;
        RBus_UInt32  bist_data_align_num:2;
        RBus_UInt32  bist_en:1;
        RBus_UInt32  bist_pattern:2;
        RBus_UInt32  bist_duration:1;
        RBus_UInt32  bist_stop:1;
        RBus_UInt32  bist_rdm_bypass:1;
        RBus_UInt32  bist_cnt_mode:1;
        RBus_UInt32  bist_fixed10_align_bypass:1;
    };
}mhl_bist_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:15;
        RBus_UInt32  fixed10_align_done:1;
        RBus_UInt32  bist_err_cnt:16;
    };
}mhl_bist_err_cnt_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:11;
        RBus_UInt32  enc_window_end:9;
        RBus_UInt32  dummy98034718_11_10:2;
        RBus_UInt32  enc_window_start:10;
    };
}hdcp_ctrl_RBUS;

#else //apply LITTLE_ENDIAN

//======MHL register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mhl_pos_de_lowbd:6;
        RBus_UInt32  dummy98034600_7_6:2;
        RBus_UInt32  mhl_neg_de_lowbd:7;
        RBus_UInt32  b_r_ch_sel:1;
        RBus_UInt32  mhl_pos_de_err_thrd:4;
        RBus_UInt32  mhl_neg_de_err_thrd:4;
        RBus_UInt32  mhl_tran_err_thrd:4;
        RBus_UInt32  mhl_de_sel:1;
        RBus_UInt32  dummy98034600_31_29:3;
    };
}mhl_dal_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pn_swap:1;
        RBus_UInt32  mhl_de_glitch_en:1;
        RBus_UInt32  mhl_ver_1_2:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  mhl_de_glitch_cycle:4;
        RBus_UInt32  res1:24;
    };
}mhl_dal_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mhl_mode_det_start:1;
        RBus_UInt32  mhl_mode_det_cont:1;
        RBus_UInt32  mhl_mode_det:2;
        RBus_UInt32  mhl_mode_det_per:16;
        RBus_UInt32  mhl_mode_det_per_sel:1;
        RBus_UInt32  res2:3;
        RBus_UInt32  mhl_mode:1;
        RBus_UInt32  mhl_mode_err_int:1;
        RBus_UInt32  mhl_mode_err_wd:1;
        RBus_UInt32  res1:5;
    };
}mhl_md_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  threshold_24bits:16;
        RBus_UInt32  threshold_pp:16;
    };
}mhl_md_threshold_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  det_cnt_24bit:16;
        RBus_UInt32  det_cnt_pp:16;
    };
}mhl_md_cnt_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mhl_en:1;
        RBus_UInt32  mhl_pp_en:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  dvi_ch_sync:1;
        RBus_UInt32  demux_sel:3;
        RBus_UInt32  res2:1;
        RBus_UInt32  ch_bound_chg_det:1;
        RBus_UInt32  ch_bound_chg_int_en:1;
        RBus_UInt32  ch_bound_chg_wd_en:1;
        RBus_UInt32  audio_wd_en:1;
        RBus_UInt32  video_wd_en:1;
        RBus_UInt32  res1:19;
    };
}mhl_demux_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mhl_neg_de_err_flag:1;
        RBus_UInt32  mhl_pos_de_err_flag:1;
        RBus_UInt32  mhl_tran_err_flag:1;
        RBus_UInt32  res4:1;
        RBus_UInt32  ctrl_glitch_occr_flag:1;
        RBus_UInt32  non_ctrl_glitch_occ_flag:1;
        RBus_UInt32  res3:2;
        RBus_UInt32  mhl_mode_err:1;
        RBus_UInt32  res2:3;
        RBus_UInt32  ch_bound_chg:1;
        RBus_UInt32  res1:19;
    };
}mhl_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mhl_ch0_cr_afifo_en:1;
        RBus_UInt32  mhl_ch0_cr_flush:1;
        RBus_UInt32  dummy9803461c_15_2:14;
        RBus_UInt32  mhl_ch1_cr_afifo_en:1;
        RBus_UInt32  mhl_ch1_cr_flush:1;
        RBus_UInt32  res1:14;
    };
}mhl_ch_cr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mhl_ch0_sr_rflush_flag:1;
        RBus_UInt32  mhl_ch0_sr_rudflow_flag:1;
        RBus_UInt32  mhl_ch0_sr_wovflow_flag:1;
        RBus_UInt32  mhl_ch0_sr_rwclk_det_timeout_flag:1;
        RBus_UInt32  mhl_ch0_sr_wrclk_det_timeout_flag:1;
        RBus_UInt32  dummy98034620_15_5:11;
        RBus_UInt32  mhl_ch1_sr_rflush_flag:1;
        RBus_UInt32  mhl_ch1_sr_rudflow_flag:1;
        RBus_UInt32  mhl_ch1_sr_wovflow_flag:1;
        RBus_UInt32  mhl_ch1_sr_rwclk_det_timeout_flag:1;
        RBus_UInt32  mhl_ch1_sr_wrclk_det_timeout_flag:1;
        RBus_UInt32  res1:11;
    };
}mhl_ch_sr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mhl_ver3_en:1;
        RBus_UInt32  mhl_ver3_24_16_bit_sel:1;
        RBus_UInt32  mhl_ver3_dvi_en:1;
        RBus_UInt32  rr_mode:2;
        RBus_UInt32  errc_sel:3;
        RBus_UInt32  pkt_type_decode_sel:2;
        RBus_UInt32  debug_sel:3;
        RBus_UInt32  rr_sync_clr:1;
        RBus_UInt32  res1:18;
    };
}mhl3_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  video_gb_err:1;
        RBus_UInt32  packet_lead_gb_err:1;
        RBus_UInt32  packet_trail_gb_err:1;
        RBus_UInt32  hdr_err:1;
        RBus_UInt32  video_payload_len_err:1;
        RBus_UInt32  blank_payload_len_err:1;
        RBus_UInt32  rr_err:1;
        RBus_UInt32  max_trans_symbol_err:1;
        RBus_UInt32  bits_per_pixel_mode:2;
        RBus_UInt32  res1:22;
    };
}mhl3_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bit_err_det_en:1;
        RBus_UInt32  bit_err_det_mode:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  bit_err_det_period:6;
        RBus_UInt32  bit_err_reset:1;
        RBus_UInt32  bit_err_irq_en:1;
        RBus_UInt32  res1:4;
        RBus_UInt32  bit_err_det_thd:16;
    };
}tmds_bit_err_det_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tmds_bit_err_cnt:16;
        RBus_UInt32  tmds_bit_err_cnt_of:1;
        RBus_UInt32  tmds_bit_err:1;
        RBus_UInt32  tmds_bit_err_thd:1;
        RBus_UInt32  tmds_no_dis_reset:1;
        RBus_UInt32  tmds_ad_min:6;
        RBus_UInt32  tmds_ad_max:6;
    };
}tmds_bit_err_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bist_fixed10_align_bypass:1;
        RBus_UInt32  bist_cnt_mode:1;
        RBus_UInt32  bist_rdm_bypass:1;
        RBus_UInt32  bist_stop:1;
        RBus_UInt32  bist_duration:1;
        RBus_UInt32  bist_pattern:2;
        RBus_UInt32  bist_en:1;
        RBus_UInt32  bist_data_align_num:2;
        RBus_UInt32  bist_data_align_en:1;
        RBus_UInt32  bist_fix10_inverse:1;
        RBus_UInt32  bist_fixed:10;
        RBus_UInt32  fixed10_align_en:1;
        RBus_UInt32  dummy98034710_23:1;
        RBus_UInt32  bist_frame_num:8;
    };
}mhl_bist_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bist_err_cnt:16;
        RBus_UInt32  fixed10_align_done:1;
        RBus_UInt32  res1:15;
    };
}mhl_bist_err_cnt_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  enc_window_start:10;
        RBus_UInt32  dummy98034718_11_10:2;
        RBus_UInt32  enc_window_end:9;
        RBus_UInt32  res1:11;
    };
}hdcp_ctrl_RBUS;




#endif 


#endif //_RBUS_MHL_REG_H_
