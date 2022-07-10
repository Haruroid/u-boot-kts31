/*===========*@date:2015/3/6===========*/

#ifndef _MHL_RX_REG_H_INCLUDED_
#define _MHL_RX_REG_H_INCLUDED_

//#define  _MHL_USE_STRUCT
#ifdef _MHL_RX_USE_STRUCT

typedef struct
{
    unsigned int    dummy:3;
    unsigned int    mhl_de_sel:1;
    unsigned int    mhl_tran_err_thrd:4;
    unsigned int    mhl_neg_de_err_thrd:4;
    unsigned int    mhl_pos_de_err_thrd:4;
    unsigned int    b_r_ch_sel:1;
    unsigned int    mhl_neg_de_lowbd:7;
    unsigned int    dummy:2;
    unsigned int    mhl_pos_de_lowbd:6;
}MHL_dal_ctrl;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    mhl_de_glitch_cycle:4;
    unsigned int    reserved_1:1;
    unsigned int    mhl_ver_1_2:1;
    unsigned int    mhl_de_glitch_en:1;
    unsigned int    pn_swap:1;
}MHL_dal_status;

typedef struct
{
    unsigned int    reserved_0:5;
    unsigned int    mhl_mode_err_wd:1;
    unsigned int    mhl_mode_err_int:1;
    unsigned int    mhl_mode:1;
    unsigned int    reserved_1:3;
    unsigned int    mhl_mode_det_per_sel:1;
    unsigned int    mhl_mode_det_per:16;
    unsigned int    mhl_mode_det:2;
    unsigned int    mhl_mode_det_cont:1;
    unsigned int    mhl_mode_det_start:1;
}MHL_md_ctrl;

typedef struct
{
    unsigned int    threshold_pp:16;
    unsigned int    threshold_24bits:16;
}MHL_md_threshold;

typedef struct
{
    unsigned int    det_cnt_pp:16;
    unsigned int    det_cnt_24bit:16;
}MHL_md_cnt;

typedef struct
{
    unsigned int    reserved_0:19;
    unsigned int    video_wd_en:1;
    unsigned int    audio_wd_en:1;
    unsigned int    ch_bound_chg_wd_en:1;
    unsigned int    ch_bound_chg_int_en:1;
    unsigned int    ch_bound_chg_det:1;
    unsigned int    reserved_1:1;
    unsigned int    demux_sel:3;
    unsigned int    dvi_ch_sync:1;
    unsigned int    reserved_2:1;
    unsigned int    mhl_pp_en:1;
    unsigned int    mhl_en:1;
}MHL_demux_ctrl;

typedef struct
{
    unsigned int    reserved_0:19;
    unsigned int    ch_bound_chg:1;
    unsigned int    reserved_1:3;
    unsigned int    mhl_mode_err:1;
    unsigned int    reserved_2:2;
    unsigned int    non_ctrl_glitch_occ_flag:1;
    unsigned int    ctrl_glitch_occr_flag:1;
    unsigned int    reserved_3:1;
    unsigned int    mhl_tran_err_flag:1;
    unsigned int    mhl_pos_de_err_flag:1;
    unsigned int    mhl_neg_de_err_flag:1;
}MHL_status;

typedef struct
{
    unsigned int    reserved_0:14;
    unsigned int    mhl_ch1_cr_flush:1;
    unsigned int    mhl_ch1_cr_afifo_en:1;
    unsigned int    dummy:14;
    unsigned int    mhl_ch0_cr_flush:1;
    unsigned int    mhl_ch0_cr_afifo_en:1;
}MHL_ch_cr;

typedef struct
{
    unsigned int    reserved_0:11;
    unsigned int    mhl_ch1_sr_wrclk_det_timeout_flag:1;
    unsigned int    mhl_ch1_sr_rwclk_det_timeout_flag:1;
    unsigned int    mhl_ch1_sr_wovflow_flag:1;
    unsigned int    mhl_ch1_sr_rudflow_flag:1;
    unsigned int    mhl_ch1_sr_rflush_flag:1;
    unsigned int    dummy:11;
    unsigned int    mhl_ch0_sr_wrclk_det_timeout_flag:1;
    unsigned int    mhl_ch0_sr_rwclk_det_timeout_flag:1;
    unsigned int    mhl_ch0_sr_wovflow_flag:1;
    unsigned int    mhl_ch0_sr_rudflow_flag:1;
    unsigned int    mhl_ch0_sr_rflush_flag:1;
}MHL_ch_sr;

typedef struct
{
    unsigned int    reserved_0:18;
    unsigned int    rr_sync_clr:1;
    unsigned int    debug_sel:3;
    unsigned int    pkt_type_decode_sel:2;
    unsigned int    errc_sel:3;
    unsigned int    rr_mode:2;
    unsigned int    mhl_ver3_dvi_en:1;
    unsigned int    mhl_ver3_24_16_bit_sel:1;
    unsigned int    mhl_ver3_en:1;
}MHL3_ctrl;

typedef struct
{
    unsigned int    reserved_0:22;
    unsigned int    bits_per_pixel_mode:2;
    unsigned int    max_trans_symbol_err:1;
    unsigned int    rr_err:1;
    unsigned int    blank_payload_len_err:1;
    unsigned int    video_payload_len_err:1;
    unsigned int    hdr_err:1;
    unsigned int    packet_trail_gb_err:1;
    unsigned int    packet_lead_gb_err:1;
    unsigned int    video_gb_err:1;
}MHL3_status;

typedef struct
{
    unsigned int    bit_err_det_thd:16;
    unsigned int    reserved_0:4;
    unsigned int    bit_err_irq_en:1;
    unsigned int    bit_err_reset:1;
    unsigned int    bit_err_det_period:6;
    unsigned int    reserved_1:2;
    unsigned int    bit_err_det_mode:1;
    unsigned int    bit_err_det_en:1;
}TMDS_bit_err_det;

typedef struct
{
    unsigned int    tmds_ad_max:6;
    unsigned int    tmds_ad_min:6;
    unsigned int    tmds_no_dis_reset:1;
    unsigned int    tmds_bit_err_thd:1;
    unsigned int    tmds_bit_err:1;
    unsigned int    tmds_bit_err_cnt_of:1;
    unsigned int    tmds_bit_err_cnt:16;
}TMDS_bit_err_status;

typedef struct
{
    unsigned int    bist_frame_num:8;
    unsigned int    dummy:1;
    unsigned int    fixed10_align_en:1;
    unsigned int    bist_fixed:10;
    unsigned int    bist_fix10_inverse:1;
    unsigned int    bist_data_align_en:1;
    unsigned int    bist_data_align_num:2;
    unsigned int    bist_en:1;
    unsigned int    bist_pattern:2;
    unsigned int    bist_duration:1;
    unsigned int    bist_stop:1;
    unsigned int    bist_rdm_bypass:1;
    unsigned int    bist_cnt_mode:1;
    unsigned int    bist_fixed10_align_bypass:1;
}MHL_bist_ctrl;

typedef struct
{
    unsigned int    reserved_0:15;
    unsigned int    fixed10_align_done:1;
    unsigned int    bist_err_cnt:16;
}MHL_bist_err_cnt;

typedef struct
{
    unsigned int    reserved_0:11;
    unsigned int    enc_window_end:9;
    unsigned int    dummy:2;
    unsigned int    enc_window_start:10;
}HDCP_ctrl;
#endif


#define MHL_DAL_CTRL                                                  0x98034600
#define MHL_DAL_CTRL_reg_addr                                         "0xd8034600"
#define MHL_DAL_CTRL_reg                                              0xd8034600
#define MHL_DAL_CTRL_inst_addr                                        "0x0180"
#define MHL_DAL_CTRL_inst                                             0x0180
#define set_MHL_DAL_CTRL_reg(data)                                    (*((volatile unsigned int*)MHL_DAL_CTRL_reg)=data)
#define get_MHL_DAL_CTRL_reg                                          (*((volatile unsigned int*)MHL_DAL_CTRL_reg))
#define MHL_DAL_CTRL_dummy_31_29_shift                                (29)
#define MHL_DAL_CTRL_mhl_de_sel_shift                                 (28)
#define MHL_DAL_CTRL_mhl_tran_err_thrd_shift                          (24)
#define MHL_DAL_CTRL_mhl_neg_de_err_thrd_shift                        (20)
#define MHL_DAL_CTRL_mhl_pos_de_err_thrd_shift                        (16)
#define MHL_DAL_CTRL_b_r_ch_sel_shift                                 (15)
#define MHL_DAL_CTRL_mhl_neg_de_lowbd_shift                           (8)
#define MHL_DAL_CTRL_dummy_7_6_shift                                  (6)
#define MHL_DAL_CTRL_mhl_pos_de_lowbd_shift                           (0)
#define MHL_DAL_CTRL_dummy_31_29_mask                                 (0xE0000000)
#define MHL_DAL_CTRL_mhl_de_sel_mask                                  (0x10000000)
#define MHL_DAL_CTRL_mhl_tran_err_thrd_mask                           (0x0F000000)
#define MHL_DAL_CTRL_mhl_neg_de_err_thrd_mask                         (0x00F00000)
#define MHL_DAL_CTRL_mhl_pos_de_err_thrd_mask                         (0x000F0000)
#define MHL_DAL_CTRL_b_r_ch_sel_mask                                  (0x00008000)
#define MHL_DAL_CTRL_mhl_neg_de_lowbd_mask                            (0x00007F00)
#define MHL_DAL_CTRL_dummy_7_6_mask                                   (0x000000C0)
#define MHL_DAL_CTRL_mhl_pos_de_lowbd_mask                            (0x0000003F)
#define MHL_DAL_CTRL_dummy_31_29(data)                                (0xE0000000&((data)<<29))
#define MHL_DAL_CTRL_mhl_de_sel(data)                                 (0x10000000&((data)<<28))
#define MHL_DAL_CTRL_mhl_tran_err_thrd(data)                          (0x0F000000&((data)<<24))
#define MHL_DAL_CTRL_mhl_neg_de_err_thrd(data)                        (0x00F00000&((data)<<20))
#define MHL_DAL_CTRL_mhl_pos_de_err_thrd(data)                        (0x000F0000&((data)<<16))
#define MHL_DAL_CTRL_b_r_ch_sel(data)                                 (0x00008000&((data)<<15))
#define MHL_DAL_CTRL_mhl_neg_de_lowbd(data)                           (0x00007F00&((data)<<8))
#define MHL_DAL_CTRL_dummy_7_6(data)                                  (0x000000C0&((data)<<6))
#define MHL_DAL_CTRL_mhl_pos_de_lowbd(data)                           (0x0000003F&(data))
#define MHL_DAL_CTRL_get_dummy_31_29(data)                            ((0xE0000000&(data))>>29)
#define MHL_DAL_CTRL_get_mhl_de_sel(data)                             ((0x10000000&(data))>>28)
#define MHL_DAL_CTRL_get_mhl_tran_err_thrd(data)                      ((0x0F000000&(data))>>24)
#define MHL_DAL_CTRL_get_mhl_neg_de_err_thrd(data)                    ((0x00F00000&(data))>>20)
#define MHL_DAL_CTRL_get_mhl_pos_de_err_thrd(data)                    ((0x000F0000&(data))>>16)
#define MHL_DAL_CTRL_get_b_r_ch_sel(data)                             ((0x00008000&(data))>>15)
#define MHL_DAL_CTRL_get_mhl_neg_de_lowbd(data)                       ((0x00007F00&(data))>>8)
#define MHL_DAL_CTRL_get_dummy_7_6(data)                              ((0x000000C0&(data))>>6)
#define MHL_DAL_CTRL_get_mhl_pos_de_lowbd(data)                       (0x0000003F&(data))


#define MHL_DAL_STATUS                                                0x98034604
#define MHL_DAL_STATUS_reg_addr                                       "0xd8034604"
#define MHL_DAL_STATUS_reg                                            0xd8034604
#define MHL_DAL_STATUS_inst_addr                                      "0x0181"
#define MHL_DAL_STATUS_inst                                           0x0181
#define set_MHL_DAL_STATUS_reg(data)                                  (*((volatile unsigned int*)MHL_DAL_STATUS_reg)=data)
#define get_MHL_DAL_STATUS_reg                                        (*((volatile unsigned int*)MHL_DAL_STATUS_reg))
#define MHL_DAL_STATUS_mhl_de_glitch_cycle_shift                      (4)
#define MHL_DAL_STATUS_mhl_ver_1_2_shift                              (2)
#define MHL_DAL_STATUS_mhl_de_glitch_en_shift                         (1)
#define MHL_DAL_STATUS_pn_swap_shift                                  (0)
#define MHL_DAL_STATUS_mhl_de_glitch_cycle_mask                       (0x000000F0)
#define MHL_DAL_STATUS_mhl_ver_1_2_mask                               (0x00000004)
#define MHL_DAL_STATUS_mhl_de_glitch_en_mask                          (0x00000002)
#define MHL_DAL_STATUS_pn_swap_mask                                   (0x00000001)
#define MHL_DAL_STATUS_mhl_de_glitch_cycle(data)                      (0x000000F0&((data)<<4))
#define MHL_DAL_STATUS_mhl_ver_1_2(data)                              (0x00000004&((data)<<2))
#define MHL_DAL_STATUS_mhl_de_glitch_en(data)                         (0x00000002&((data)<<1))
#define MHL_DAL_STATUS_pn_swap(data)                                  (0x00000001&(data))
#define MHL_DAL_STATUS_get_mhl_de_glitch_cycle(data)                  ((0x000000F0&(data))>>4)
#define MHL_DAL_STATUS_get_mhl_ver_1_2(data)                          ((0x00000004&(data))>>2)
#define MHL_DAL_STATUS_get_mhl_de_glitch_en(data)                     ((0x00000002&(data))>>1)
#define MHL_DAL_STATUS_get_pn_swap(data)                              (0x00000001&(data))


#define MHL_MD_CTRL                                                   0x98034608
#define MHL_MD_CTRL_reg_addr                                          "0xd8034608"
#define MHL_MD_CTRL_reg                                               0xd8034608
#define MHL_MD_CTRL_inst_addr                                         "0x0182"
#define MHL_MD_CTRL_inst                                              0x0182
#define set_MHL_MD_CTRL_reg(data)                                     (*((volatile unsigned int*)MHL_MD_CTRL_reg)=data)
#define get_MHL_MD_CTRL_reg                                           (*((volatile unsigned int*)MHL_MD_CTRL_reg))
#define MHL_MD_CTRL_mhl_mode_err_wd_shift                             (26)
#define MHL_MD_CTRL_mhl_mode_err_int_shift                            (25)
#define MHL_MD_CTRL_mhl_mode_shift                                    (24)
#define MHL_MD_CTRL_mhl_mode_det_per_sel_shift                        (20)
#define MHL_MD_CTRL_mhl_mode_det_per_shift                            (4)
#define MHL_MD_CTRL_mhl_mode_det_shift                                (2)
#define MHL_MD_CTRL_mhl_mode_det_cont_shift                           (1)
#define MHL_MD_CTRL_mhl_mode_det_start_shift                          (0)
#define MHL_MD_CTRL_mhl_mode_err_wd_mask                              (0x04000000)
#define MHL_MD_CTRL_mhl_mode_err_int_mask                             (0x02000000)
#define MHL_MD_CTRL_mhl_mode_mask                                     (0x01000000)
#define MHL_MD_CTRL_mhl_mode_det_per_sel_mask                         (0x00100000)
#define MHL_MD_CTRL_mhl_mode_det_per_mask                             (0x000FFFF0)
#define MHL_MD_CTRL_mhl_mode_det_mask                                 (0x0000000C)
#define MHL_MD_CTRL_mhl_mode_det_cont_mask                            (0x00000002)
#define MHL_MD_CTRL_mhl_mode_det_start_mask                           (0x00000001)
#define MHL_MD_CTRL_mhl_mode_err_wd(data)                             (0x04000000&((data)<<26))
#define MHL_MD_CTRL_mhl_mode_err_int(data)                            (0x02000000&((data)<<25))
#define MHL_MD_CTRL_mhl_mode(data)                                    (0x01000000&((data)<<24))
#define MHL_MD_CTRL_mhl_mode_det_per_sel(data)                        (0x00100000&((data)<<20))
#define MHL_MD_CTRL_mhl_mode_det_per(data)                            (0x000FFFF0&((data)<<4))
#define MHL_MD_CTRL_mhl_mode_det(data)                                (0x0000000C&((data)<<2))
#define MHL_MD_CTRL_mhl_mode_det_cont(data)                           (0x00000002&((data)<<1))
#define MHL_MD_CTRL_mhl_mode_det_start(data)                          (0x00000001&(data))
#define MHL_MD_CTRL_get_mhl_mode_err_wd(data)                         ((0x04000000&(data))>>26)
#define MHL_MD_CTRL_get_mhl_mode_err_int(data)                        ((0x02000000&(data))>>25)
#define MHL_MD_CTRL_get_mhl_mode(data)                                ((0x01000000&(data))>>24)
#define MHL_MD_CTRL_get_mhl_mode_det_per_sel(data)                    ((0x00100000&(data))>>20)
#define MHL_MD_CTRL_get_mhl_mode_det_per(data)                        ((0x000FFFF0&(data))>>4)
#define MHL_MD_CTRL_get_mhl_mode_det(data)                            ((0x0000000C&(data))>>2)
#define MHL_MD_CTRL_get_mhl_mode_det_cont(data)                       ((0x00000002&(data))>>1)
#define MHL_MD_CTRL_get_mhl_mode_det_start(data)                      (0x00000001&(data))


#define MHL_MD_THRESHOLD                                              0x9803460c
#define MHL_MD_THRESHOLD_reg_addr                                     "0xd803460c"
#define MHL_MD_THRESHOLD_reg                                          0xd803460c
#define MHL_MD_THRESHOLD_inst_addr                                    "0x0183"
#define MHL_MD_THRESHOLD_inst                                         0x0183
#define set_MHL_MD_THRESHOLD_reg(data)                                (*((volatile unsigned int*)MHL_MD_THRESHOLD_reg)=data)
#define get_MHL_MD_THRESHOLD_reg                                      (*((volatile unsigned int*)MHL_MD_THRESHOLD_reg))
#define MHL_MD_THRESHOLD_threshold_pp_shift                           (16)
#define MHL_MD_THRESHOLD_threshold_24bits_shift                       (0)
#define MHL_MD_THRESHOLD_threshold_pp_mask                            (0xFFFF0000)
#define MHL_MD_THRESHOLD_threshold_24bits_mask                        (0x0000FFFF)
#define MHL_MD_THRESHOLD_threshold_pp(data)                           (0xFFFF0000&((data)<<16))
#define MHL_MD_THRESHOLD_threshold_24bits(data)                       (0x0000FFFF&(data))
#define MHL_MD_THRESHOLD_get_threshold_pp(data)                       ((0xFFFF0000&(data))>>16)
#define MHL_MD_THRESHOLD_get_threshold_24bits(data)                   (0x0000FFFF&(data))


#define MHL_MD_CNT                                                    0x98034610
#define MHL_MD_CNT_reg_addr                                           "0xd8034610"
#define MHL_MD_CNT_reg                                                0xd8034610
#define MHL_MD_CNT_inst_addr                                          "0x0184"
#define MHL_MD_CNT_inst                                               0x0184
#define set_MHL_MD_CNT_reg(data)                                      (*((volatile unsigned int*)MHL_MD_CNT_reg)=data)
#define get_MHL_MD_CNT_reg                                            (*((volatile unsigned int*)MHL_MD_CNT_reg))
#define MHL_MD_CNT_det_cnt_pp_shift                                   (16)
#define MHL_MD_CNT_det_cnt_24bit_shift                                (0)
#define MHL_MD_CNT_det_cnt_pp_mask                                    (0xFFFF0000)
#define MHL_MD_CNT_det_cnt_24bit_mask                                 (0x0000FFFF)
#define MHL_MD_CNT_det_cnt_pp(data)                                   (0xFFFF0000&((data)<<16))
#define MHL_MD_CNT_det_cnt_24bit(data)                                (0x0000FFFF&(data))
#define MHL_MD_CNT_get_det_cnt_pp(data)                               ((0xFFFF0000&(data))>>16)
#define MHL_MD_CNT_get_det_cnt_24bit(data)                            (0x0000FFFF&(data))


#define MHL_DEMUX_CTRL                                                0x98034614
#define MHL_DEMUX_CTRL_reg_addr                                       "0xd8034614"
#define MHL_DEMUX_CTRL_reg                                            0xd8034614
#define MHL_DEMUX_CTRL_inst_addr                                      "0x0185"
#define MHL_DEMUX_CTRL_inst                                           0x0185
#define set_MHL_DEMUX_CTRL_reg(data)                                  (*((volatile unsigned int*)MHL_DEMUX_CTRL_reg)=data)
#define get_MHL_DEMUX_CTRL_reg                                        (*((volatile unsigned int*)MHL_DEMUX_CTRL_reg))
#define MHL_DEMUX_CTRL_video_wd_en_shift                              (12)
#define MHL_DEMUX_CTRL_audio_wd_en_shift                              (11)
#define MHL_DEMUX_CTRL_ch_bound_chg_wd_en_shift                       (10)
#define MHL_DEMUX_CTRL_ch_bound_chg_int_en_shift                      (9)
#define MHL_DEMUX_CTRL_ch_bound_chg_det_shift                         (8)
#define MHL_DEMUX_CTRL_demux_sel_shift                                (4)
#define MHL_DEMUX_CTRL_dvi_ch_sync_shift                              (3)
#define MHL_DEMUX_CTRL_mhl_pp_en_shift                                (1)
#define MHL_DEMUX_CTRL_mhl_en_shift                                   (0)
#define MHL_DEMUX_CTRL_video_wd_en_mask                               (0x00001000)
#define MHL_DEMUX_CTRL_audio_wd_en_mask                               (0x00000800)
#define MHL_DEMUX_CTRL_ch_bound_chg_wd_en_mask                        (0x00000400)
#define MHL_DEMUX_CTRL_ch_bound_chg_int_en_mask                       (0x00000200)
#define MHL_DEMUX_CTRL_ch_bound_chg_det_mask                          (0x00000100)
#define MHL_DEMUX_CTRL_demux_sel_mask                                 (0x00000070)
#define MHL_DEMUX_CTRL_dvi_ch_sync_mask                               (0x00000008)
#define MHL_DEMUX_CTRL_mhl_pp_en_mask                                 (0x00000002)
#define MHL_DEMUX_CTRL_mhl_en_mask                                    (0x00000001)
#define MHL_DEMUX_CTRL_video_wd_en(data)                              (0x00001000&((data)<<12))
#define MHL_DEMUX_CTRL_audio_wd_en(data)                              (0x00000800&((data)<<11))
#define MHL_DEMUX_CTRL_ch_bound_chg_wd_en(data)                       (0x00000400&((data)<<10))
#define MHL_DEMUX_CTRL_ch_bound_chg_int_en(data)                      (0x00000200&((data)<<9))
#define MHL_DEMUX_CTRL_ch_bound_chg_det(data)                         (0x00000100&((data)<<8))
#define MHL_DEMUX_CTRL_demux_sel(data)                                (0x00000070&((data)<<4))
#define MHL_DEMUX_CTRL_dvi_ch_sync(data)                              (0x00000008&((data)<<3))
#define MHL_DEMUX_CTRL_mhl_pp_en(data)                                (0x00000002&((data)<<1))
#define MHL_DEMUX_CTRL_mhl_en(data)                                   (0x00000001&(data))
#define MHL_DEMUX_CTRL_get_video_wd_en(data)                          ((0x00001000&(data))>>12)
#define MHL_DEMUX_CTRL_get_audio_wd_en(data)                          ((0x00000800&(data))>>11)
#define MHL_DEMUX_CTRL_get_ch_bound_chg_wd_en(data)                   ((0x00000400&(data))>>10)
#define MHL_DEMUX_CTRL_get_ch_bound_chg_int_en(data)                  ((0x00000200&(data))>>9)
#define MHL_DEMUX_CTRL_get_ch_bound_chg_det(data)                     ((0x00000100&(data))>>8)
#define MHL_DEMUX_CTRL_get_demux_sel(data)                            ((0x00000070&(data))>>4)
#define MHL_DEMUX_CTRL_get_dvi_ch_sync(data)                          ((0x00000008&(data))>>3)
#define MHL_DEMUX_CTRL_get_mhl_pp_en(data)                            ((0x00000002&(data))>>1)
#define MHL_DEMUX_CTRL_get_mhl_en(data)                               (0x00000001&(data))


#define MHL_STATUS                                                    0x98034618
#define MHL_STATUS_reg_addr                                           "0xd8034618"
#define MHL_STATUS_reg                                                0xd8034618
#define MHL_STATUS_inst_addr                                          "0x0186"
#define MHL_STATUS_inst                                               0x0186
#define set_MHL_STATUS_reg(data)                                      (*((volatile unsigned int*)MHL_STATUS_reg)=data)
#define get_MHL_STATUS_reg                                            (*((volatile unsigned int*)MHL_STATUS_reg))
#define MHL_STATUS_ch_bound_chg_shift                                 (12)
#define MHL_STATUS_mhl_mode_err_shift                                 (8)
#define MHL_STATUS_non_ctrl_glitch_occ_flag_shift                     (5)
#define MHL_STATUS_ctrl_glitch_occr_flag_shift                        (4)
#define MHL_STATUS_mhl_tran_err_flag_shift                            (2)
#define MHL_STATUS_mhl_pos_de_err_flag_shift                          (1)
#define MHL_STATUS_mhl_neg_de_err_flag_shift                          (0)
#define MHL_STATUS_ch_bound_chg_mask                                  (0x00001000)
#define MHL_STATUS_mhl_mode_err_mask                                  (0x00000100)
#define MHL_STATUS_non_ctrl_glitch_occ_flag_mask                      (0x00000020)
#define MHL_STATUS_ctrl_glitch_occr_flag_mask                         (0x00000010)
#define MHL_STATUS_mhl_tran_err_flag_mask                             (0x00000004)
#define MHL_STATUS_mhl_pos_de_err_flag_mask                           (0x00000002)
#define MHL_STATUS_mhl_neg_de_err_flag_mask                           (0x00000001)
#define MHL_STATUS_ch_bound_chg(data)                                 (0x00001000&((data)<<12))
#define MHL_STATUS_mhl_mode_err(data)                                 (0x00000100&((data)<<8))
#define MHL_STATUS_non_ctrl_glitch_occ_flag(data)                     (0x00000020&((data)<<5))
#define MHL_STATUS_ctrl_glitch_occr_flag(data)                        (0x00000010&((data)<<4))
#define MHL_STATUS_mhl_tran_err_flag(data)                            (0x00000004&((data)<<2))
#define MHL_STATUS_mhl_pos_de_err_flag(data)                          (0x00000002&((data)<<1))
#define MHL_STATUS_mhl_neg_de_err_flag(data)                          (0x00000001&(data))
#define MHL_STATUS_get_ch_bound_chg(data)                             ((0x00001000&(data))>>12)
#define MHL_STATUS_get_mhl_mode_err(data)                             ((0x00000100&(data))>>8)
#define MHL_STATUS_get_non_ctrl_glitch_occ_flag(data)                 ((0x00000020&(data))>>5)
#define MHL_STATUS_get_ctrl_glitch_occr_flag(data)                    ((0x00000010&(data))>>4)
#define MHL_STATUS_get_mhl_tran_err_flag(data)                        ((0x00000004&(data))>>2)
#define MHL_STATUS_get_mhl_pos_de_err_flag(data)                      ((0x00000002&(data))>>1)
#define MHL_STATUS_get_mhl_neg_de_err_flag(data)                      (0x00000001&(data))


#define MHL_CH_CR                                                     0x9803461c
#define MHL_CH_CR_reg_addr                                            "0xd803461c"
#define MHL_CH_CR_reg                                                 0xd803461c
#define MHL_CH_CR_inst_addr                                           "0x0187"
#define MHL_CH_CR_inst                                                0x0187
#define set_MHL_CH_CR_reg(data)                                       (*((volatile unsigned int*)MHL_CH_CR_reg)=data)
#define get_MHL_CH_CR_reg                                             (*((volatile unsigned int*)MHL_CH_CR_reg))
#define MHL_CH_CR_mhl_ch1_cr_flush_shift                              (17)
#define MHL_CH_CR_mhl_ch1_cr_afifo_en_shift                           (16)
#define MHL_CH_CR_dummy_15_2_shift                                    (2)
#define MHL_CH_CR_mhl_ch0_cr_flush_shift                              (1)
#define MHL_CH_CR_mhl_ch0_cr_afifo_en_shift                           (0)
#define MHL_CH_CR_mhl_ch1_cr_flush_mask                               (0x00020000)
#define MHL_CH_CR_mhl_ch1_cr_afifo_en_mask                            (0x00010000)
#define MHL_CH_CR_dummy_15_2_mask                                     (0x0000FFFC)
#define MHL_CH_CR_mhl_ch0_cr_flush_mask                               (0x00000002)
#define MHL_CH_CR_mhl_ch0_cr_afifo_en_mask                            (0x00000001)
#define MHL_CH_CR_mhl_ch1_cr_flush(data)                              (0x00020000&((data)<<17))
#define MHL_CH_CR_mhl_ch1_cr_afifo_en(data)                           (0x00010000&((data)<<16))
#define MHL_CH_CR_dummy_15_2(data)                                    (0x0000FFFC&((data)<<2))
#define MHL_CH_CR_mhl_ch0_cr_flush(data)                              (0x00000002&((data)<<1))
#define MHL_CH_CR_mhl_ch0_cr_afifo_en(data)                           (0x00000001&(data))
#define MHL_CH_CR_get_mhl_ch1_cr_flush(data)                          ((0x00020000&(data))>>17)
#define MHL_CH_CR_get_mhl_ch1_cr_afifo_en(data)                       ((0x00010000&(data))>>16)
#define MHL_CH_CR_get_dummy_15_2(data)                                ((0x0000FFFC&(data))>>2)
#define MHL_CH_CR_get_mhl_ch0_cr_flush(data)                          ((0x00000002&(data))>>1)
#define MHL_CH_CR_get_mhl_ch0_cr_afifo_en(data)                       (0x00000001&(data))


#define MHL_CH_SR                                                     0x98034620
#define MHL_CH_SR_reg_addr                                            "0xd8034620"
#define MHL_CH_SR_reg                                                 0xd8034620
#define MHL_CH_SR_inst_addr                                           "0x0188"
#define MHL_CH_SR_inst                                                0x0188
#define set_MHL_CH_SR_reg(data)                                       (*((volatile unsigned int*)MHL_CH_SR_reg)=data)
#define get_MHL_CH_SR_reg                                             (*((volatile unsigned int*)MHL_CH_SR_reg))
#define MHL_CH_SR_mhl_ch1_sr_wrclk_det_timeout_flag_shift             (20)
#define MHL_CH_SR_mhl_ch1_sr_rwclk_det_timeout_flag_shift             (19)
#define MHL_CH_SR_mhl_ch1_sr_wovflow_flag_shift                       (18)
#define MHL_CH_SR_mhl_ch1_sr_rudflow_flag_shift                       (17)
#define MHL_CH_SR_mhl_ch1_sr_rflush_flag_shift                        (16)
#define MHL_CH_SR_dummy_15_5_shift                                    (5)
#define MHL_CH_SR_mhl_ch0_sr_wrclk_det_timeout_flag_shift             (4)
#define MHL_CH_SR_mhl_ch0_sr_rwclk_det_timeout_flag_shift             (3)
#define MHL_CH_SR_mhl_ch0_sr_wovflow_flag_shift                       (2)
#define MHL_CH_SR_mhl_ch0_sr_rudflow_flag_shift                       (1)
#define MHL_CH_SR_mhl_ch0_sr_rflush_flag_shift                        (0)
#define MHL_CH_SR_mhl_ch1_sr_wrclk_det_timeout_flag_mask              (0x00100000)
#define MHL_CH_SR_mhl_ch1_sr_rwclk_det_timeout_flag_mask              (0x00080000)
#define MHL_CH_SR_mhl_ch1_sr_wovflow_flag_mask                        (0x00040000)
#define MHL_CH_SR_mhl_ch1_sr_rudflow_flag_mask                        (0x00020000)
#define MHL_CH_SR_mhl_ch1_sr_rflush_flag_mask                         (0x00010000)
#define MHL_CH_SR_dummy_15_5_mask                                     (0x0000FFE0)
#define MHL_CH_SR_mhl_ch0_sr_wrclk_det_timeout_flag_mask              (0x00000010)
#define MHL_CH_SR_mhl_ch0_sr_rwclk_det_timeout_flag_mask              (0x00000008)
#define MHL_CH_SR_mhl_ch0_sr_wovflow_flag_mask                        (0x00000004)
#define MHL_CH_SR_mhl_ch0_sr_rudflow_flag_mask                        (0x00000002)
#define MHL_CH_SR_mhl_ch0_sr_rflush_flag_mask                         (0x00000001)
#define MHL_CH_SR_mhl_ch1_sr_wrclk_det_timeout_flag(data)             (0x00100000&((data)<<20))
#define MHL_CH_SR_mhl_ch1_sr_rwclk_det_timeout_flag(data)             (0x00080000&((data)<<19))
#define MHL_CH_SR_mhl_ch1_sr_wovflow_flag(data)                       (0x00040000&((data)<<18))
#define MHL_CH_SR_mhl_ch1_sr_rudflow_flag(data)                       (0x00020000&((data)<<17))
#define MHL_CH_SR_mhl_ch1_sr_rflush_flag(data)                        (0x00010000&((data)<<16))
#define MHL_CH_SR_dummy_15_5(data)                                    (0x0000FFE0&((data)<<5))
#define MHL_CH_SR_mhl_ch0_sr_wrclk_det_timeout_flag(data)             (0x00000010&((data)<<4))
#define MHL_CH_SR_mhl_ch0_sr_rwclk_det_timeout_flag(data)             (0x00000008&((data)<<3))
#define MHL_CH_SR_mhl_ch0_sr_wovflow_flag(data)                       (0x00000004&((data)<<2))
#define MHL_CH_SR_mhl_ch0_sr_rudflow_flag(data)                       (0x00000002&((data)<<1))
#define MHL_CH_SR_mhl_ch0_sr_rflush_flag(data)                        (0x00000001&(data))
#define MHL_CH_SR_get_mhl_ch1_sr_wrclk_det_timeout_flag(data)         ((0x00100000&(data))>>20)
#define MHL_CH_SR_get_mhl_ch1_sr_rwclk_det_timeout_flag(data)         ((0x00080000&(data))>>19)
#define MHL_CH_SR_get_mhl_ch1_sr_wovflow_flag(data)                   ((0x00040000&(data))>>18)
#define MHL_CH_SR_get_mhl_ch1_sr_rudflow_flag(data)                   ((0x00020000&(data))>>17)
#define MHL_CH_SR_get_mhl_ch1_sr_rflush_flag(data)                    ((0x00010000&(data))>>16)
#define MHL_CH_SR_get_dummy_15_5(data)                                ((0x0000FFE0&(data))>>5)
#define MHL_CH_SR_get_mhl_ch0_sr_wrclk_det_timeout_flag(data)         ((0x00000010&(data))>>4)
#define MHL_CH_SR_get_mhl_ch0_sr_rwclk_det_timeout_flag(data)         ((0x00000008&(data))>>3)
#define MHL_CH_SR_get_mhl_ch0_sr_wovflow_flag(data)                   ((0x00000004&(data))>>2)
#define MHL_CH_SR_get_mhl_ch0_sr_rudflow_flag(data)                   ((0x00000002&(data))>>1)
#define MHL_CH_SR_get_mhl_ch0_sr_rflush_flag(data)                    (0x00000001&(data))


#define MHL3_CTRL                                                     0x98034700
#define MHL3_CTRL_reg_addr                                            "0xd8034700"
#define MHL3_CTRL_reg                                                 0xd8034700
#define MHL3_CTRL_inst_addr                                           "0x01C0"
#define MHL3_CTRL_inst                                                0x01C0
#define set_MHL3_CTRL_reg(data)                                       (*((volatile unsigned int*)MHL3_CTRL_reg)=data)
#define get_MHL3_CTRL_reg                                             (*((volatile unsigned int*)MHL3_CTRL_reg))
#define MHL3_CTRL_rr_sync_clr_shift                                   (13)
#define MHL3_CTRL_debug_sel_shift                                     (10)
#define MHL3_CTRL_pkt_type_decode_sel_shift                           (8)
#define MHL3_CTRL_errc_sel_shift                                      (5)
#define MHL3_CTRL_rr_mode_shift                                       (3)
#define MHL3_CTRL_mhl_ver3_dvi_en_shift                               (2)
#define MHL3_CTRL_mhl_ver3_24_16_bit_sel_shift                        (1)
#define MHL3_CTRL_mhl_ver3_en_shift                                   (0)
#define MHL3_CTRL_rr_sync_clr_mask                                    (0x00002000)
#define MHL3_CTRL_debug_sel_mask                                      (0x00001C00)
#define MHL3_CTRL_pkt_type_decode_sel_mask                            (0x00000300)
#define MHL3_CTRL_errc_sel_mask                                       (0x000000E0)
#define MHL3_CTRL_rr_mode_mask                                        (0x00000018)
#define MHL3_CTRL_mhl_ver3_dvi_en_mask                                (0x00000004)
#define MHL3_CTRL_mhl_ver3_24_16_bit_sel_mask                         (0x00000002)
#define MHL3_CTRL_mhl_ver3_en_mask                                    (0x00000001)
#define MHL3_CTRL_rr_sync_clr(data)                                   (0x00002000&((data)<<13))
#define MHL3_CTRL_debug_sel(data)                                     (0x00001C00&((data)<<10))
#define MHL3_CTRL_pkt_type_decode_sel(data)                           (0x00000300&((data)<<8))
#define MHL3_CTRL_errc_sel(data)                                      (0x000000E0&((data)<<5))
#define MHL3_CTRL_rr_mode(data)                                       (0x00000018&((data)<<3))
#define MHL3_CTRL_mhl_ver3_dvi_en(data)                               (0x00000004&((data)<<2))
#define MHL3_CTRL_mhl_ver3_24_16_bit_sel(data)                        (0x00000002&((data)<<1))
#define MHL3_CTRL_mhl_ver3_en(data)                                   (0x00000001&(data))
#define MHL3_CTRL_get_rr_sync_clr(data)                               ((0x00002000&(data))>>13)
#define MHL3_CTRL_get_debug_sel(data)                                 ((0x00001C00&(data))>>10)
#define MHL3_CTRL_get_pkt_type_decode_sel(data)                       ((0x00000300&(data))>>8)
#define MHL3_CTRL_get_errc_sel(data)                                  ((0x000000E0&(data))>>5)
#define MHL3_CTRL_get_rr_mode(data)                                   ((0x00000018&(data))>>3)
#define MHL3_CTRL_get_mhl_ver3_dvi_en(data)                           ((0x00000004&(data))>>2)
#define MHL3_CTRL_get_mhl_ver3_24_16_bit_sel(data)                    ((0x00000002&(data))>>1)
#define MHL3_CTRL_get_mhl_ver3_en(data)                               (0x00000001&(data))


#define MHL3_STATUS                                                   0x98034704
#define MHL3_STATUS_reg_addr                                          "0xd8034704"
#define MHL3_STATUS_reg                                               0xd8034704
#define MHL3_STATUS_inst_addr                                         "0x01C1"
#define MHL3_STATUS_inst                                              0x01C1
#define set_MHL3_STATUS_reg(data)                                     (*((volatile unsigned int*)MHL3_STATUS_reg)=data)
#define get_MHL3_STATUS_reg                                           (*((volatile unsigned int*)MHL3_STATUS_reg))
#define MHL3_STATUS_bits_per_pixel_mode_shift                         (8)
#define MHL3_STATUS_max_trans_symbol_err_shift                        (7)
#define MHL3_STATUS_rr_err_shift                                      (6)
#define MHL3_STATUS_blank_payload_len_err_shift                       (5)
#define MHL3_STATUS_video_payload_len_err_shift                       (4)
#define MHL3_STATUS_hdr_err_shift                                     (3)
#define MHL3_STATUS_packet_trail_gb_err_shift                         (2)
#define MHL3_STATUS_packet_lead_gb_err_shift                          (1)
#define MHL3_STATUS_video_gb_err_shift                                (0)
#define MHL3_STATUS_bits_per_pixel_mode_mask                          (0x00000300)
#define MHL3_STATUS_max_trans_symbol_err_mask                         (0x00000080)
#define MHL3_STATUS_rr_err_mask                                       (0x00000040)
#define MHL3_STATUS_blank_payload_len_err_mask                        (0x00000020)
#define MHL3_STATUS_video_payload_len_err_mask                        (0x00000010)
#define MHL3_STATUS_hdr_err_mask                                      (0x00000008)
#define MHL3_STATUS_packet_trail_gb_err_mask                          (0x00000004)
#define MHL3_STATUS_packet_lead_gb_err_mask                           (0x00000002)
#define MHL3_STATUS_video_gb_err_mask                                 (0x00000001)
#define MHL3_STATUS_bits_per_pixel_mode(data)                         (0x00000300&((data)<<8))
#define MHL3_STATUS_max_trans_symbol_err(data)                        (0x00000080&((data)<<7))
#define MHL3_STATUS_rr_err(data)                                      (0x00000040&((data)<<6))
#define MHL3_STATUS_blank_payload_len_err(data)                       (0x00000020&((data)<<5))
#define MHL3_STATUS_video_payload_len_err(data)                       (0x00000010&((data)<<4))
#define MHL3_STATUS_hdr_err(data)                                     (0x00000008&((data)<<3))
#define MHL3_STATUS_packet_trail_gb_err(data)                         (0x00000004&((data)<<2))
#define MHL3_STATUS_packet_lead_gb_err(data)                          (0x00000002&((data)<<1))
#define MHL3_STATUS_video_gb_err(data)                                (0x00000001&(data))
#define MHL3_STATUS_get_bits_per_pixel_mode(data)                     ((0x00000300&(data))>>8)
#define MHL3_STATUS_get_max_trans_symbol_err(data)                    ((0x00000080&(data))>>7)
#define MHL3_STATUS_get_rr_err(data)                                  ((0x00000040&(data))>>6)
#define MHL3_STATUS_get_blank_payload_len_err(data)                   ((0x00000020&(data))>>5)
#define MHL3_STATUS_get_video_payload_len_err(data)                   ((0x00000010&(data))>>4)
#define MHL3_STATUS_get_hdr_err(data)                                 ((0x00000008&(data))>>3)
#define MHL3_STATUS_get_packet_trail_gb_err(data)                     ((0x00000004&(data))>>2)
#define MHL3_STATUS_get_packet_lead_gb_err(data)                      ((0x00000002&(data))>>1)
#define MHL3_STATUS_get_video_gb_err(data)                            (0x00000001&(data))


#define TMDS_BIT_ERR_DET                                              0x98034708
#define TMDS_BIT_ERR_DET_reg_addr                                     "0xd8034708"
#define TMDS_BIT_ERR_DET_reg                                          0xd8034708
#define TMDS_BIT_ERR_DET_inst_addr                                    "0x01C2"
#define TMDS_BIT_ERR_DET_inst                                         0x01C2
#define set_TMDS_BIT_ERR_DET_reg(data)                                (*((volatile unsigned int*)TMDS_BIT_ERR_DET_reg)=data)
#define get_TMDS_BIT_ERR_DET_reg                                      (*((volatile unsigned int*)TMDS_BIT_ERR_DET_reg))
#define TMDS_BIT_ERR_DET_bit_err_det_thd_shift                        (16)
#define TMDS_BIT_ERR_DET_bit_err_irq_en_shift                         (11)
#define TMDS_BIT_ERR_DET_bit_err_reset_shift                          (10)
#define TMDS_BIT_ERR_DET_bit_err_det_period_shift                     (4)
#define TMDS_BIT_ERR_DET_bit_err_det_mode_shift                       (1)
#define TMDS_BIT_ERR_DET_bit_err_det_en_shift                         (0)
#define TMDS_BIT_ERR_DET_bit_err_det_thd_mask                         (0xFFFF0000)
#define TMDS_BIT_ERR_DET_bit_err_irq_en_mask                          (0x00000800)
#define TMDS_BIT_ERR_DET_bit_err_reset_mask                           (0x00000400)
#define TMDS_BIT_ERR_DET_bit_err_det_period_mask                      (0x000003F0)
#define TMDS_BIT_ERR_DET_bit_err_det_mode_mask                        (0x00000002)
#define TMDS_BIT_ERR_DET_bit_err_det_en_mask                          (0x00000001)
#define TMDS_BIT_ERR_DET_bit_err_det_thd(data)                        (0xFFFF0000&((data)<<16))
#define TMDS_BIT_ERR_DET_bit_err_irq_en(data)                         (0x00000800&((data)<<11))
#define TMDS_BIT_ERR_DET_bit_err_reset(data)                          (0x00000400&((data)<<10))
#define TMDS_BIT_ERR_DET_bit_err_det_period(data)                     (0x000003F0&((data)<<4))
#define TMDS_BIT_ERR_DET_bit_err_det_mode(data)                       (0x00000002&((data)<<1))
#define TMDS_BIT_ERR_DET_bit_err_det_en(data)                         (0x00000001&(data))
#define TMDS_BIT_ERR_DET_get_bit_err_det_thd(data)                    ((0xFFFF0000&(data))>>16)
#define TMDS_BIT_ERR_DET_get_bit_err_irq_en(data)                     ((0x00000800&(data))>>11)
#define TMDS_BIT_ERR_DET_get_bit_err_reset(data)                      ((0x00000400&(data))>>10)
#define TMDS_BIT_ERR_DET_get_bit_err_det_period(data)                 ((0x000003F0&(data))>>4)
#define TMDS_BIT_ERR_DET_get_bit_err_det_mode(data)                   ((0x00000002&(data))>>1)
#define TMDS_BIT_ERR_DET_get_bit_err_det_en(data)                     (0x00000001&(data))


#define TMDS_BIT_ERR_STATUS                                           0x9803470c
#define TMDS_BIT_ERR_STATUS_reg_addr                                  "0xd803470c"
#define TMDS_BIT_ERR_STATUS_reg                                       0xd803470c
#define TMDS_BIT_ERR_STATUS_inst_addr                                 "0x01C3"
#define TMDS_BIT_ERR_STATUS_inst                                      0x01C3
#define set_TMDS_BIT_ERR_STATUS_reg(data)                             (*((volatile unsigned int*)TMDS_BIT_ERR_STATUS_reg)=data)
#define get_TMDS_BIT_ERR_STATUS_reg                                   (*((volatile unsigned int*)TMDS_BIT_ERR_STATUS_reg))
#define TMDS_BIT_ERR_STATUS_tmds_ad_max_shift                         (26)
#define TMDS_BIT_ERR_STATUS_tmds_ad_min_shift                         (20)
#define TMDS_BIT_ERR_STATUS_tmds_no_dis_reset_shift                   (19)
#define TMDS_BIT_ERR_STATUS_tmds_bit_err_thd_shift                    (18)
#define TMDS_BIT_ERR_STATUS_tmds_bit_err_shift                        (17)
#define TMDS_BIT_ERR_STATUS_tmds_bit_err_cnt_of_shift                 (16)
#define TMDS_BIT_ERR_STATUS_tmds_bit_err_cnt_shift                    (0)
#define TMDS_BIT_ERR_STATUS_tmds_ad_max_mask                          (0xFC000000)
#define TMDS_BIT_ERR_STATUS_tmds_ad_min_mask                          (0x03F00000)
#define TMDS_BIT_ERR_STATUS_tmds_no_dis_reset_mask                    (0x00080000)
#define TMDS_BIT_ERR_STATUS_tmds_bit_err_thd_mask                     (0x00040000)
#define TMDS_BIT_ERR_STATUS_tmds_bit_err_mask                         (0x00020000)
#define TMDS_BIT_ERR_STATUS_tmds_bit_err_cnt_of_mask                  (0x00010000)
#define TMDS_BIT_ERR_STATUS_tmds_bit_err_cnt_mask                     (0x0000FFFF)
#define TMDS_BIT_ERR_STATUS_tmds_ad_max(data)                         (0xFC000000&((data)<<26))
#define TMDS_BIT_ERR_STATUS_tmds_ad_min(data)                         (0x03F00000&((data)<<20))
#define TMDS_BIT_ERR_STATUS_tmds_no_dis_reset(data)                   (0x00080000&((data)<<19))
#define TMDS_BIT_ERR_STATUS_tmds_bit_err_thd(data)                    (0x00040000&((data)<<18))
#define TMDS_BIT_ERR_STATUS_tmds_bit_err(data)                        (0x00020000&((data)<<17))
#define TMDS_BIT_ERR_STATUS_tmds_bit_err_cnt_of(data)                 (0x00010000&((data)<<16))
#define TMDS_BIT_ERR_STATUS_tmds_bit_err_cnt(data)                    (0x0000FFFF&(data))
#define TMDS_BIT_ERR_STATUS_get_tmds_ad_max(data)                     ((0xFC000000&(data))>>26)
#define TMDS_BIT_ERR_STATUS_get_tmds_ad_min(data)                     ((0x03F00000&(data))>>20)
#define TMDS_BIT_ERR_STATUS_get_tmds_no_dis_reset(data)               ((0x00080000&(data))>>19)
#define TMDS_BIT_ERR_STATUS_get_tmds_bit_err_thd(data)                ((0x00040000&(data))>>18)
#define TMDS_BIT_ERR_STATUS_get_tmds_bit_err(data)                    ((0x00020000&(data))>>17)
#define TMDS_BIT_ERR_STATUS_get_tmds_bit_err_cnt_of(data)             ((0x00010000&(data))>>16)
#define TMDS_BIT_ERR_STATUS_get_tmds_bit_err_cnt(data)                (0x0000FFFF&(data))


#define MHL_BIST_CTRL                                                 0x98034710
#define MHL_BIST_CTRL_reg_addr                                        "0xd8034710"
#define MHL_BIST_CTRL_reg                                             0xd8034710
#define MHL_BIST_CTRL_inst_addr                                       "0x01C4"
#define MHL_BIST_CTRL_inst                                            0x01C4
#define set_MHL_BIST_CTRL_reg(data)                                   (*((volatile unsigned int*)MHL_BIST_CTRL_reg)=data)
#define get_MHL_BIST_CTRL_reg                                         (*((volatile unsigned int*)MHL_BIST_CTRL_reg))
#define MHL_BIST_CTRL_bist_frame_num_shift                            (24)
#define MHL_BIST_CTRL_dummy_23_shift                                  (23)
#define MHL_BIST_CTRL_fixed10_align_en_shift                          (22)
#define MHL_BIST_CTRL_bist_fixed_shift                                (12)
#define MHL_BIST_CTRL_bist_fix10_inverse_shift                        (11)
#define MHL_BIST_CTRL_bist_data_align_en_shift                        (10)
#define MHL_BIST_CTRL_bist_data_align_num_shift                       (8)
#define MHL_BIST_CTRL_bist_en_shift                                   (7)
#define MHL_BIST_CTRL_bist_pattern_shift                              (5)
#define MHL_BIST_CTRL_bist_duration_shift                             (4)
#define MHL_BIST_CTRL_bist_stop_shift                                 (3)
#define MHL_BIST_CTRL_bist_rdm_bypass_shift                           (2)
#define MHL_BIST_CTRL_bist_cnt_mode_shift                             (1)
#define MHL_BIST_CTRL_bist_fixed10_align_bypass_shift                 (0)
#define MHL_BIST_CTRL_bist_frame_num_mask                             (0xFF000000)
#define MHL_BIST_CTRL_dummy_23_mask                                   (0x00800000)
#define MHL_BIST_CTRL_fixed10_align_en_mask                           (0x00400000)
#define MHL_BIST_CTRL_bist_fixed_mask                                 (0x003FF000)
#define MHL_BIST_CTRL_bist_fix10_inverse_mask                         (0x00000800)
#define MHL_BIST_CTRL_bist_data_align_en_mask                         (0x00000400)
#define MHL_BIST_CTRL_bist_data_align_num_mask                        (0x00000300)
#define MHL_BIST_CTRL_bist_en_mask                                    (0x00000080)
#define MHL_BIST_CTRL_bist_pattern_mask                               (0x00000060)
#define MHL_BIST_CTRL_bist_duration_mask                              (0x00000010)
#define MHL_BIST_CTRL_bist_stop_mask                                  (0x00000008)
#define MHL_BIST_CTRL_bist_rdm_bypass_mask                            (0x00000004)
#define MHL_BIST_CTRL_bist_cnt_mode_mask                              (0x00000002)
#define MHL_BIST_CTRL_bist_fixed10_align_bypass_mask                  (0x00000001)
#define MHL_BIST_CTRL_bist_frame_num(data)                            (0xFF000000&((data)<<24))
#define MHL_BIST_CTRL_dummy_23(data)                                  (0x00800000&((data)<<23))
#define MHL_BIST_CTRL_fixed10_align_en(data)                          (0x00400000&((data)<<22))
#define MHL_BIST_CTRL_bist_fixed(data)                                (0x003FF000&((data)<<12))
#define MHL_BIST_CTRL_bist_fix10_inverse(data)                        (0x00000800&((data)<<11))
#define MHL_BIST_CTRL_bist_data_align_en(data)                        (0x00000400&((data)<<10))
#define MHL_BIST_CTRL_bist_data_align_num(data)                       (0x00000300&((data)<<8))
#define MHL_BIST_CTRL_bist_en(data)                                   (0x00000080&((data)<<7))
#define MHL_BIST_CTRL_bist_pattern(data)                              (0x00000060&((data)<<5))
#define MHL_BIST_CTRL_bist_duration(data)                             (0x00000010&((data)<<4))
#define MHL_BIST_CTRL_bist_stop(data)                                 (0x00000008&((data)<<3))
#define MHL_BIST_CTRL_bist_rdm_bypass(data)                           (0x00000004&((data)<<2))
#define MHL_BIST_CTRL_bist_cnt_mode(data)                             (0x00000002&((data)<<1))
#define MHL_BIST_CTRL_bist_fixed10_align_bypass(data)                 (0x00000001&(data))
#define MHL_BIST_CTRL_get_bist_frame_num(data)                        ((0xFF000000&(data))>>24)
#define MHL_BIST_CTRL_get_dummy_23(data)                              ((0x00800000&(data))>>23)
#define MHL_BIST_CTRL_get_fixed10_align_en(data)                      ((0x00400000&(data))>>22)
#define MHL_BIST_CTRL_get_bist_fixed(data)                            ((0x003FF000&(data))>>12)
#define MHL_BIST_CTRL_get_bist_fix10_inverse(data)                    ((0x00000800&(data))>>11)
#define MHL_BIST_CTRL_get_bist_data_align_en(data)                    ((0x00000400&(data))>>10)
#define MHL_BIST_CTRL_get_bist_data_align_num(data)                   ((0x00000300&(data))>>8)
#define MHL_BIST_CTRL_get_bist_en(data)                               ((0x00000080&(data))>>7)
#define MHL_BIST_CTRL_get_bist_pattern(data)                          ((0x00000060&(data))>>5)
#define MHL_BIST_CTRL_get_bist_duration(data)                         ((0x00000010&(data))>>4)
#define MHL_BIST_CTRL_get_bist_stop(data)                             ((0x00000008&(data))>>3)
#define MHL_BIST_CTRL_get_bist_rdm_bypass(data)                       ((0x00000004&(data))>>2)
#define MHL_BIST_CTRL_get_bist_cnt_mode(data)                         ((0x00000002&(data))>>1)
#define MHL_BIST_CTRL_get_bist_fixed10_align_bypass(data)             (0x00000001&(data))


#define MHL_BIST_ERR_CNT                                              0x98034714
#define MHL_BIST_ERR_CNT_reg_addr                                     "0xd8034714"
#define MHL_BIST_ERR_CNT_reg                                          0xd8034714
#define MHL_BIST_ERR_CNT_inst_addr                                    "0x01C5"
#define MHL_BIST_ERR_CNT_inst                                         0x01C5
#define set_MHL_BIST_ERR_CNT_reg(data)                                (*((volatile unsigned int*)MHL_BIST_ERR_CNT_reg)=data)
#define get_MHL_BIST_ERR_CNT_reg                                      (*((volatile unsigned int*)MHL_BIST_ERR_CNT_reg))
#define MHL_BIST_ERR_CNT_fixed10_align_done_shift                     (16)
#define MHL_BIST_ERR_CNT_bist_err_cnt_shift                           (0)
#define MHL_BIST_ERR_CNT_fixed10_align_done_mask                      (0x00010000)
#define MHL_BIST_ERR_CNT_bist_err_cnt_mask                            (0x0000FFFF)
#define MHL_BIST_ERR_CNT_fixed10_align_done(data)                     (0x00010000&((data)<<16))
#define MHL_BIST_ERR_CNT_bist_err_cnt(data)                           (0x0000FFFF&(data))
#define MHL_BIST_ERR_CNT_get_fixed10_align_done(data)                 ((0x00010000&(data))>>16)
#define MHL_BIST_ERR_CNT_get_bist_err_cnt(data)                       (0x0000FFFF&(data))


#define HDCP_CTRL                                                     0x98034718
#define HDCP_CTRL_reg_addr                                            "0xd8034718"
#define HDCP_CTRL_reg                                                 0xd8034718
#define HDCP_CTRL_inst_addr                                           "0x01C6"
#define HDCP_CTRL_inst                                                0x01C6
#define set_HDCP_CTRL_reg(data)                                       (*((volatile unsigned int*)HDCP_CTRL_reg)=data)
#define get_HDCP_CTRL_reg                                             (*((volatile unsigned int*)HDCP_CTRL_reg))
#define HDCP_CTRL_enc_window_end_shift                                (12)
#define HDCP_CTRL_dummy_11_10_shift                                   (10)
#define HDCP_CTRL_enc_window_start_shift                              (0)
#define HDCP_CTRL_enc_window_end_mask                                 (0x001FF000)
#define HDCP_CTRL_dummy_11_10_mask                                    (0x00000C00)
#define HDCP_CTRL_enc_window_start_mask                               (0x000003FF)
#define HDCP_CTRL_enc_window_end(data)                                (0x001FF000&((data)<<12))
#define HDCP_CTRL_dummy_11_10(data)                                   (0x00000C00&((data)<<10))
#define HDCP_CTRL_enc_window_start(data)                              (0x000003FF&(data))
#define HDCP_CTRL_get_enc_window_end(data)                            ((0x001FF000&(data))>>12)
#define HDCP_CTRL_get_dummy_11_10(data)                               ((0x00000C00&(data))>>10)
#define HDCP_CTRL_get_enc_window_start(data)                          (0x000003FF&(data))
#endif
