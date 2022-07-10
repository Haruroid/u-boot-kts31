/**************************************************************
// Spec Version                  : 1.0.6
// Parser Version                : DVR_Parser_6.11(120105)
// CModelGen Version             : 5.1 2012.01.05
// Naming Rule                   :  Register_Name
// Naming Rule                   : Module_Register_Name_reg
// Parse Option                  : Only Parse _op1
// Parse Address Region          : All Address Region 
// Decode bit number             : 12 bits
// Firmware Header Generate Date : 2015/1/21 19:4:9
***************************************************************/


#ifndef _LVDS_GAMMA_REG_H_INCLUDED_
#define _LVDS_GAMMA_REG_H_INCLUDED_
#ifdef  _LVDS_GAMMA_USE_STRUCT
typedef struct 
{
unsigned int     reserved_0:27;
unsigned int     gamma_ax_rw_sel:2;
unsigned int     gamma_ax_ch_sel:2;
unsigned int     gamma_ax_type_sel:1;
}GAMMA_CTRL_1;

typedef struct 
{
unsigned int     reserved_0:29;
unsigned int     gamma_fifo_empty:1;
unsigned int     gamma_fifo_full:1;
unsigned int     gamma_wr_error:1;
}GAMMA_STATUS;

typedef struct 
{
unsigned int     reserved_0:23;
unsigned int     gamma_r_en:1;
unsigned int     gamma_g_en:1;
unsigned int     gamma_b_en:1;
unsigned int     gamma_m_tab_sel:1;
unsigned int     dummy:5;
}GAMMA_CTRL_2;

typedef struct 
{
unsigned int     reserved_0:27;
unsigned int     rme:1;
unsigned int     rm_3:1;
unsigned int     rm_2:1;
unsigned int     rm_1:1;
unsigned int     rm_0:1;
}LVDS_BIST_RM;

typedef struct 
{
unsigned int     reserved_0:28;
unsigned int     bist_fail2:1;
unsigned int     bist_fail1:1;
unsigned int     bist_fail0:1;
unsigned int     bist_done:1;
}LVDS_BIST_ST;

typedef struct 
{
unsigned int     reserved_0:15;
unsigned int     drf_start_pause:1;
unsigned int     reserved_1:12;
unsigned int     drf_fail2:1;
unsigned int     drf_fail1:1;
unsigned int     drf_fail0:1;
unsigned int     drf_done:1;
}LVDS_DRF_ST;

typedef struct 
{
unsigned int     reserved_0:29;
unsigned int     ls_2:1;
unsigned int     ls_1:1;
unsigned int     ls_0:1;
}LVDS_BIST_LS;

typedef struct 
{
unsigned int     reserved_0:29;
unsigned int     drf_test_resume:1;
unsigned int     drf_bist_mode:1;
unsigned int     bist_mode:1;
}LVDS_MBIST_CON;

typedef struct 
{
unsigned int     reserved_0:1;
unsigned int     d_stat_srcsel:1;
unsigned int     reserved_1:4;
unsigned int     r_low:10;
unsigned int     reserved_2:6;
unsigned int     r_high:10;
}LVDS_DSTAT_CTRL_R;

typedef struct 
{
unsigned int     reserved_0:6;
unsigned int     g_low:10;
unsigned int     reserved_1:6;
unsigned int     g_high:10;
}LVDS_DSTAT_CTRL_G;

typedef struct 
{
unsigned int     reserved_0:6;
unsigned int     b_low:10;
unsigned int     reserved_1:6;
unsigned int     b_high:10;
}LVDS_DSTAT_CTRL_B;

typedef struct 
{
unsigned int     reserved_0:11;
unsigned int     r_cnt:21;
}DSTAT_O_R1;

typedef struct 
{
unsigned int     reserved_0:6;
unsigned int     r_min:10;
unsigned int     reserved_1:6;
unsigned int     r_max:10;
}DSTAT_O_R2;

typedef struct 
{
unsigned int     reserved_0:11;
unsigned int     g_cnt:21;
}DSTAT_O_G1;

typedef struct 
{
unsigned int     reserved_0:6;
unsigned int     g_min:10;
unsigned int     reserved_1:6;
unsigned int     g_max:10;
}DSTAT_O_G2;

typedef struct 
{
unsigned int     reserved_0:11;
unsigned int     b_cnt:21;
}DSTAT_O_B1;

typedef struct 
{
unsigned int     reserved_0:6;
unsigned int     b_min:10;
unsigned int     reserved_1:6;
unsigned int     b_max:10;
}DSTAT_O_B2;

#endif

#define GAMMA_CTRL_1                                                                 0x98009864
#define GAMMA_CTRL_1_reg_addr                                                        "0xD8009864"
#define GAMMA_CTRL_1_reg                                                             0xD8009864
#define set_GAMMA_CTRL_1_reg(data)   (*((volatile unsigned int*) GAMMA_CTRL_1_reg)=data)
#define get_GAMMA_CTRL_1_reg   (*((volatile unsigned int*) GAMMA_CTRL_1_reg))
#define GAMMA_CTRL_1_inst_adr                                                        "0x0019"
#define GAMMA_CTRL_1_inst                                                            0x0019
#define GAMMA_CTRL_1_gamma_ax_rw_sel_shift                                           (3)
#define GAMMA_CTRL_1_gamma_ax_rw_sel_mask                                            (0x00000018)
#define GAMMA_CTRL_1_gamma_ax_rw_sel(data)                                           (0x00000018&((data)<<3))
#define GAMMA_CTRL_1_gamma_ax_rw_sel_src(data)                                       ((0x00000018&(data))>>3)
#define GAMMA_CTRL_1_get_gamma_ax_rw_sel(data)                                       ((0x00000018&(data))>>3)
#define GAMMA_CTRL_1_gamma_ax_ch_sel_shift                                           (1)
#define GAMMA_CTRL_1_gamma_ax_ch_sel_mask                                            (0x00000006)
#define GAMMA_CTRL_1_gamma_ax_ch_sel(data)                                           (0x00000006&((data)<<1))
#define GAMMA_CTRL_1_gamma_ax_ch_sel_src(data)                                       ((0x00000006&(data))>>1)
#define GAMMA_CTRL_1_get_gamma_ax_ch_sel(data)                                       ((0x00000006&(data))>>1)
#define GAMMA_CTRL_1_gamma_ax_type_sel_shift                                         (0)
#define GAMMA_CTRL_1_gamma_ax_type_sel_mask                                          (0x00000001)
#define GAMMA_CTRL_1_gamma_ax_type_sel(data)                                         (0x00000001&((data)<<0))
#define GAMMA_CTRL_1_gamma_ax_type_sel_src(data)                                     ((0x00000001&(data))>>0)
#define GAMMA_CTRL_1_get_gamma_ax_type_sel(data)                                     ((0x00000001&(data))>>0)


#define GAMMA_STATUS                                                                 0x98009868
#define GAMMA_STATUS_reg_addr                                                        "0xD8009868"
#define GAMMA_STATUS_reg                                                             0xD8009868
#define set_GAMMA_STATUS_reg(data)   (*((volatile unsigned int*) GAMMA_STATUS_reg)=data)
#define get_GAMMA_STATUS_reg   (*((volatile unsigned int*) GAMMA_STATUS_reg))
#define GAMMA_STATUS_inst_adr                                                        "0x001A"
#define GAMMA_STATUS_inst                                                            0x001A
#define GAMMA_STATUS_gamma_fifo_empty_shift                                          (2)
#define GAMMA_STATUS_gamma_fifo_empty_mask                                           (0x00000004)
#define GAMMA_STATUS_gamma_fifo_empty(data)                                          (0x00000004&((data)<<2))
#define GAMMA_STATUS_gamma_fifo_empty_src(data)                                      ((0x00000004&(data))>>2)
#define GAMMA_STATUS_get_gamma_fifo_empty(data)                                      ((0x00000004&(data))>>2)
#define GAMMA_STATUS_gamma_fifo_full_shift                                           (1)
#define GAMMA_STATUS_gamma_fifo_full_mask                                            (0x00000002)
#define GAMMA_STATUS_gamma_fifo_full(data)                                           (0x00000002&((data)<<1))
#define GAMMA_STATUS_gamma_fifo_full_src(data)                                       ((0x00000002&(data))>>1)
#define GAMMA_STATUS_get_gamma_fifo_full(data)                                       ((0x00000002&(data))>>1)
#define GAMMA_STATUS_gamma_wr_error_shift                                            (0)
#define GAMMA_STATUS_gamma_wr_error_mask                                             (0x00000001)
#define GAMMA_STATUS_gamma_wr_error(data)                                            (0x00000001&((data)<<0))
#define GAMMA_STATUS_gamma_wr_error_src(data)                                        ((0x00000001&(data))>>0)
#define GAMMA_STATUS_get_gamma_wr_error(data)                                        ((0x00000001&(data))>>0)


#define GAMMA_CTRL_2                                                                 0x9800986c
#define GAMMA_CTRL_2_reg_addr                                                        "0xD800986C"
#define GAMMA_CTRL_2_reg                                                             0xD800986C
#define set_GAMMA_CTRL_2_reg(data)   (*((volatile unsigned int*) GAMMA_CTRL_2_reg)=data)
#define get_GAMMA_CTRL_2_reg   (*((volatile unsigned int*) GAMMA_CTRL_2_reg))
#define GAMMA_CTRL_2_inst_adr                                                        "0x001B"
#define GAMMA_CTRL_2_inst                                                            0x001B
#define GAMMA_CTRL_2_gamma_r_en_shift                                                (8)
#define GAMMA_CTRL_2_gamma_r_en_mask                                                 (0x00000100)
#define GAMMA_CTRL_2_gamma_r_en(data)                                                (0x00000100&((data)<<8))
#define GAMMA_CTRL_2_gamma_r_en_src(data)                                            ((0x00000100&(data))>>8)
#define GAMMA_CTRL_2_get_gamma_r_en(data)                                            ((0x00000100&(data))>>8)
#define GAMMA_CTRL_2_gamma_g_en_shift                                                (7)
#define GAMMA_CTRL_2_gamma_g_en_mask                                                 (0x00000080)
#define GAMMA_CTRL_2_gamma_g_en(data)                                                (0x00000080&((data)<<7))
#define GAMMA_CTRL_2_gamma_g_en_src(data)                                            ((0x00000080&(data))>>7)
#define GAMMA_CTRL_2_get_gamma_g_en(data)                                            ((0x00000080&(data))>>7)
#define GAMMA_CTRL_2_gamma_b_en_shift                                                (6)
#define GAMMA_CTRL_2_gamma_b_en_mask                                                 (0x00000040)
#define GAMMA_CTRL_2_gamma_b_en(data)                                                (0x00000040&((data)<<6))
#define GAMMA_CTRL_2_gamma_b_en_src(data)                                            ((0x00000040&(data))>>6)
#define GAMMA_CTRL_2_get_gamma_b_en(data)                                            ((0x00000040&(data))>>6)
#define GAMMA_CTRL_2_gamma_m_tab_sel_shift                                           (5)
#define GAMMA_CTRL_2_gamma_m_tab_sel_mask                                            (0x00000020)
#define GAMMA_CTRL_2_gamma_m_tab_sel(data)                                           (0x00000020&((data)<<5))
#define GAMMA_CTRL_2_gamma_m_tab_sel_src(data)                                       ((0x00000020&(data))>>5)
#define GAMMA_CTRL_2_get_gamma_m_tab_sel(data)                                       ((0x00000020&(data))>>5)
#define GAMMA_CTRL_2_dummy_shift                                                     (0)
#define GAMMA_CTRL_2_dummy_mask                                                      (0x0000001F)
#define GAMMA_CTRL_2_dummy(data)                                                     (0x0000001F&((data)<<0))
#define GAMMA_CTRL_2_dummy_src(data)                                                 ((0x0000001F&(data))>>0)
#define GAMMA_CTRL_2_get_dummy(data)                                                 ((0x0000001F&(data))>>0)


#define LVDS_BIST_RM                                                                 0x98009870
#define LVDS_BIST_RM_reg_addr                                                        "0xD8009870"
#define LVDS_BIST_RM_reg                                                             0xD8009870
#define set_LVDS_BIST_RM_reg(data)   (*((volatile unsigned int*) LVDS_BIST_RM_reg)=data)
#define get_LVDS_BIST_RM_reg   (*((volatile unsigned int*) LVDS_BIST_RM_reg))
#define LVDS_BIST_RM_inst_adr                                                        "0x001C"
#define LVDS_BIST_RM_inst                                                            0x001C
#define LVDS_BIST_RM_rme_shift                                                       (4)
#define LVDS_BIST_RM_rme_mask                                                        (0x00000010)
#define LVDS_BIST_RM_rme(data)                                                       (0x00000010&((data)<<4))
#define LVDS_BIST_RM_rme_src(data)                                                   ((0x00000010&(data))>>4)
#define LVDS_BIST_RM_get_rme(data)                                                   ((0x00000010&(data))>>4)
#define LVDS_BIST_RM_rm_3_shift                                                      (3)
#define LVDS_BIST_RM_rm_3_mask                                                       (0x00000008)
#define LVDS_BIST_RM_rm_3(data)                                                      (0x00000008&((data)<<3))
#define LVDS_BIST_RM_rm_3_src(data)                                                  ((0x00000008&(data))>>3)
#define LVDS_BIST_RM_get_rm_3(data)                                                  ((0x00000008&(data))>>3)
#define LVDS_BIST_RM_rm_2_shift                                                      (2)
#define LVDS_BIST_RM_rm_2_mask                                                       (0x00000004)
#define LVDS_BIST_RM_rm_2(data)                                                      (0x00000004&((data)<<2))
#define LVDS_BIST_RM_rm_2_src(data)                                                  ((0x00000004&(data))>>2)
#define LVDS_BIST_RM_get_rm_2(data)                                                  ((0x00000004&(data))>>2)
#define LVDS_BIST_RM_rm_1_shift                                                      (1)
#define LVDS_BIST_RM_rm_1_mask                                                       (0x00000002)
#define LVDS_BIST_RM_rm_1(data)                                                      (0x00000002&((data)<<1))
#define LVDS_BIST_RM_rm_1_src(data)                                                  ((0x00000002&(data))>>1)
#define LVDS_BIST_RM_get_rm_1(data)                                                  ((0x00000002&(data))>>1)
#define LVDS_BIST_RM_rm_0_shift                                                      (0)
#define LVDS_BIST_RM_rm_0_mask                                                       (0x00000001)
#define LVDS_BIST_RM_rm_0(data)                                                      (0x00000001&((data)<<0))
#define LVDS_BIST_RM_rm_0_src(data)                                                  ((0x00000001&(data))>>0)
#define LVDS_BIST_RM_get_rm_0(data)                                                  ((0x00000001&(data))>>0)


#define LVDS_BIST_ST                                                                 0x98009874
#define LVDS_BIST_ST_reg_addr                                                        "0xD8009874"
#define LVDS_BIST_ST_reg                                                             0xD8009874
#define set_LVDS_BIST_ST_reg(data)   (*((volatile unsigned int*) LVDS_BIST_ST_reg)=data)
#define get_LVDS_BIST_ST_reg   (*((volatile unsigned int*) LVDS_BIST_ST_reg))
#define LVDS_BIST_ST_inst_adr                                                        "0x001D"
#define LVDS_BIST_ST_inst                                                            0x001D
#define LVDS_BIST_ST_bist_fail2_shift                                                (3)
#define LVDS_BIST_ST_bist_fail2_mask                                                 (0x00000008)
#define LVDS_BIST_ST_bist_fail2(data)                                                (0x00000008&((data)<<3))
#define LVDS_BIST_ST_bist_fail2_src(data)                                            ((0x00000008&(data))>>3)
#define LVDS_BIST_ST_get_bist_fail2(data)                                            ((0x00000008&(data))>>3)
#define LVDS_BIST_ST_bist_fail1_shift                                                (2)
#define LVDS_BIST_ST_bist_fail1_mask                                                 (0x00000004)
#define LVDS_BIST_ST_bist_fail1(data)                                                (0x00000004&((data)<<2))
#define LVDS_BIST_ST_bist_fail1_src(data)                                            ((0x00000004&(data))>>2)
#define LVDS_BIST_ST_get_bist_fail1(data)                                            ((0x00000004&(data))>>2)
#define LVDS_BIST_ST_bist_fail0_shift                                                (1)
#define LVDS_BIST_ST_bist_fail0_mask                                                 (0x00000002)
#define LVDS_BIST_ST_bist_fail0(data)                                                (0x00000002&((data)<<1))
#define LVDS_BIST_ST_bist_fail0_src(data)                                            ((0x00000002&(data))>>1)
#define LVDS_BIST_ST_get_bist_fail0(data)                                            ((0x00000002&(data))>>1)
#define LVDS_BIST_ST_bist_done_shift                                                 (0)
#define LVDS_BIST_ST_bist_done_mask                                                  (0x00000001)
#define LVDS_BIST_ST_bist_done(data)                                                 (0x00000001&((data)<<0))
#define LVDS_BIST_ST_bist_done_src(data)                                             ((0x00000001&(data))>>0)
#define LVDS_BIST_ST_get_bist_done(data)                                             ((0x00000001&(data))>>0)


#define LVDS_DRF_ST                                                                  0x98009878
#define LVDS_DRF_ST_reg_addr                                                         "0xD8009878"
#define LVDS_DRF_ST_reg                                                              0xD8009878
#define set_LVDS_DRF_ST_reg(data)   (*((volatile unsigned int*) LVDS_DRF_ST_reg)=data)
#define get_LVDS_DRF_ST_reg   (*((volatile unsigned int*) LVDS_DRF_ST_reg))
#define LVDS_DRF_ST_inst_adr                                                         "0x001E"
#define LVDS_DRF_ST_inst                                                             0x001E
#define LVDS_DRF_ST_drf_start_pause_shift                                            (16)
#define LVDS_DRF_ST_drf_start_pause_mask                                             (0x00010000)
#define LVDS_DRF_ST_drf_start_pause(data)                                            (0x00010000&((data)<<16))
#define LVDS_DRF_ST_drf_start_pause_src(data)                                        ((0x00010000&(data))>>16)
#define LVDS_DRF_ST_get_drf_start_pause(data)                                        ((0x00010000&(data))>>16)
#define LVDS_DRF_ST_drf_fail2_shift                                                  (3)
#define LVDS_DRF_ST_drf_fail2_mask                                                   (0x00000008)
#define LVDS_DRF_ST_drf_fail2(data)                                                  (0x00000008&((data)<<3))
#define LVDS_DRF_ST_drf_fail2_src(data)                                              ((0x00000008&(data))>>3)
#define LVDS_DRF_ST_get_drf_fail2(data)                                              ((0x00000008&(data))>>3)
#define LVDS_DRF_ST_drf_fail1_shift                                                  (2)
#define LVDS_DRF_ST_drf_fail1_mask                                                   (0x00000004)
#define LVDS_DRF_ST_drf_fail1(data)                                                  (0x00000004&((data)<<2))
#define LVDS_DRF_ST_drf_fail1_src(data)                                              ((0x00000004&(data))>>2)
#define LVDS_DRF_ST_get_drf_fail1(data)                                              ((0x00000004&(data))>>2)
#define LVDS_DRF_ST_drf_fail0_shift                                                  (1)
#define LVDS_DRF_ST_drf_fail0_mask                                                   (0x00000002)
#define LVDS_DRF_ST_drf_fail0(data)                                                  (0x00000002&((data)<<1))
#define LVDS_DRF_ST_drf_fail0_src(data)                                              ((0x00000002&(data))>>1)
#define LVDS_DRF_ST_get_drf_fail0(data)                                              ((0x00000002&(data))>>1)
#define LVDS_DRF_ST_drf_done_shift                                                   (0)
#define LVDS_DRF_ST_drf_done_mask                                                    (0x00000001)
#define LVDS_DRF_ST_drf_done(data)                                                   (0x00000001&((data)<<0))
#define LVDS_DRF_ST_drf_done_src(data)                                               ((0x00000001&(data))>>0)
#define LVDS_DRF_ST_get_drf_done(data)                                               ((0x00000001&(data))>>0)


#define LVDS_BIST_LS                                                                 0x980098A8
#define LVDS_BIST_LS_reg_addr                                                        "0xD80098A8"
#define LVDS_BIST_LS_reg                                                             0xD80098A8
#define set_LVDS_BIST_LS_reg(data)   (*((volatile unsigned int*) LVDS_BIST_LS_reg)=data)
#define get_LVDS_BIST_LS_reg   (*((volatile unsigned int*) LVDS_BIST_LS_reg))
#define LVDS_BIST_LS_inst_adr                                                        "0x002A"
#define LVDS_BIST_LS_inst                                                            0x002A
#define LVDS_BIST_LS_ls_2_shift                                                      (2)
#define LVDS_BIST_LS_ls_2_mask                                                       (0x00000004)
#define LVDS_BIST_LS_ls_2(data)                                                      (0x00000004&((data)<<2))
#define LVDS_BIST_LS_ls_2_src(data)                                                  ((0x00000004&(data))>>2)
#define LVDS_BIST_LS_get_ls_2(data)                                                  ((0x00000004&(data))>>2)
#define LVDS_BIST_LS_ls_1_shift                                                      (1)
#define LVDS_BIST_LS_ls_1_mask                                                       (0x00000002)
#define LVDS_BIST_LS_ls_1(data)                                                      (0x00000002&((data)<<1))
#define LVDS_BIST_LS_ls_1_src(data)                                                  ((0x00000002&(data))>>1)
#define LVDS_BIST_LS_get_ls_1(data)                                                  ((0x00000002&(data))>>1)
#define LVDS_BIST_LS_ls_0_shift                                                      (0)
#define LVDS_BIST_LS_ls_0_mask                                                       (0x00000001)
#define LVDS_BIST_LS_ls_0(data)                                                      (0x00000001&((data)<<0))
#define LVDS_BIST_LS_ls_0_src(data)                                                  ((0x00000001&(data))>>0)
#define LVDS_BIST_LS_get_ls_0(data)                                                  ((0x00000001&(data))>>0)


#define LVDS_MBIST_CON                                                               0x980098A4
#define LVDS_MBIST_CON_reg_addr                                                      "0xD80098A4"
#define LVDS_MBIST_CON_reg                                                           0xD80098A4
#define set_LVDS_MBIST_CON_reg(data)   (*((volatile unsigned int*) LVDS_MBIST_CON_reg)=data)
#define get_LVDS_MBIST_CON_reg   (*((volatile unsigned int*) LVDS_MBIST_CON_reg))
#define LVDS_MBIST_CON_inst_adr                                                      "0x0029"
#define LVDS_MBIST_CON_inst                                                          0x0029
#define LVDS_MBIST_CON_drf_test_resume_shift                                         (2)
#define LVDS_MBIST_CON_drf_test_resume_mask                                          (0x00000004)
#define LVDS_MBIST_CON_drf_test_resume(data)                                         (0x00000004&((data)<<2))
#define LVDS_MBIST_CON_drf_test_resume_src(data)                                     ((0x00000004&(data))>>2)
#define LVDS_MBIST_CON_get_drf_test_resume(data)                                     ((0x00000004&(data))>>2)
#define LVDS_MBIST_CON_drf_bist_mode_shift                                           (1)
#define LVDS_MBIST_CON_drf_bist_mode_mask                                            (0x00000002)
#define LVDS_MBIST_CON_drf_bist_mode(data)                                           (0x00000002&((data)<<1))
#define LVDS_MBIST_CON_drf_bist_mode_src(data)                                       ((0x00000002&(data))>>1)
#define LVDS_MBIST_CON_get_drf_bist_mode(data)                                       ((0x00000002&(data))>>1)
#define LVDS_MBIST_CON_bist_mode_shift                                               (0)
#define LVDS_MBIST_CON_bist_mode_mask                                                (0x00000001)
#define LVDS_MBIST_CON_bist_mode(data)                                               (0x00000001&((data)<<0))
#define LVDS_MBIST_CON_bist_mode_src(data)                                           ((0x00000001&(data))>>0)
#define LVDS_MBIST_CON_get_bist_mode(data)                                           ((0x00000001&(data))>>0)


#define LVDS_DSTAT_CTRL_R                                                            0x98009880
#define LVDS_DSTAT_CTRL_R_reg_addr                                                   "0xD8009880"
#define LVDS_DSTAT_CTRL_R_reg                                                        0xD8009880
#define set_LVDS_DSTAT_CTRL_R_reg(data)   (*((volatile unsigned int*) LVDS_DSTAT_CTRL_R_reg)=data)
#define get_LVDS_DSTAT_CTRL_R_reg   (*((volatile unsigned int*) LVDS_DSTAT_CTRL_R_reg))
#define LVDS_DSTAT_CTRL_R_inst_adr                                                   "0x0020"
#define LVDS_DSTAT_CTRL_R_inst                                                       0x0020
#define LVDS_DSTAT_CTRL_R_d_stat_srcsel_shift                                        (30)
#define LVDS_DSTAT_CTRL_R_d_stat_srcsel_mask                                         (0x40000000)
#define LVDS_DSTAT_CTRL_R_d_stat_srcsel(data)                                        (0x40000000&((data)<<30))
#define LVDS_DSTAT_CTRL_R_d_stat_srcsel_src(data)                                    ((0x40000000&(data))>>30)
#define LVDS_DSTAT_CTRL_R_get_d_stat_srcsel(data)                                    ((0x40000000&(data))>>30)
#define LVDS_DSTAT_CTRL_R_r_low_shift                                                (16)
#define LVDS_DSTAT_CTRL_R_r_low_mask                                                 (0x03FF0000)
#define LVDS_DSTAT_CTRL_R_r_low(data)                                                (0x03FF0000&((data)<<16))
#define LVDS_DSTAT_CTRL_R_r_low_src(data)                                            ((0x03FF0000&(data))>>16)
#define LVDS_DSTAT_CTRL_R_get_r_low(data)                                            ((0x03FF0000&(data))>>16)
#define LVDS_DSTAT_CTRL_R_r_high_shift                                               (0)
#define LVDS_DSTAT_CTRL_R_r_high_mask                                                (0x000003FF)
#define LVDS_DSTAT_CTRL_R_r_high(data)                                               (0x000003FF&((data)<<0))
#define LVDS_DSTAT_CTRL_R_r_high_src(data)                                           ((0x000003FF&(data))>>0)
#define LVDS_DSTAT_CTRL_R_get_r_high(data)                                           ((0x000003FF&(data))>>0)


#define LVDS_DSTAT_CTRL_G                                                            0x98009884
#define LVDS_DSTAT_CTRL_G_reg_addr                                                   "0xD8009884"
#define LVDS_DSTAT_CTRL_G_reg                                                        0xD8009884
#define set_LVDS_DSTAT_CTRL_G_reg(data)   (*((volatile unsigned int*) LVDS_DSTAT_CTRL_G_reg)=data)
#define get_LVDS_DSTAT_CTRL_G_reg   (*((volatile unsigned int*) LVDS_DSTAT_CTRL_G_reg))
#define LVDS_DSTAT_CTRL_G_inst_adr                                                   "0x0021"
#define LVDS_DSTAT_CTRL_G_inst                                                       0x0021
#define LVDS_DSTAT_CTRL_G_g_low_shift                                                (16)
#define LVDS_DSTAT_CTRL_G_g_low_mask                                                 (0x03FF0000)
#define LVDS_DSTAT_CTRL_G_g_low(data)                                                (0x03FF0000&((data)<<16))
#define LVDS_DSTAT_CTRL_G_g_low_src(data)                                            ((0x03FF0000&(data))>>16)
#define LVDS_DSTAT_CTRL_G_get_g_low(data)                                            ((0x03FF0000&(data))>>16)
#define LVDS_DSTAT_CTRL_G_g_high_shift                                               (0)
#define LVDS_DSTAT_CTRL_G_g_high_mask                                                (0x000003FF)
#define LVDS_DSTAT_CTRL_G_g_high(data)                                               (0x000003FF&((data)<<0))
#define LVDS_DSTAT_CTRL_G_g_high_src(data)                                           ((0x000003FF&(data))>>0)
#define LVDS_DSTAT_CTRL_G_get_g_high(data)                                           ((0x000003FF&(data))>>0)


#define LVDS_DSTAT_CTRL_B                                                            0x98009888
#define LVDS_DSTAT_CTRL_B_reg_addr                                                   "0xD8009888"
#define LVDS_DSTAT_CTRL_B_reg                                                        0xD8009888
#define set_LVDS_DSTAT_CTRL_B_reg(data)   (*((volatile unsigned int*) LVDS_DSTAT_CTRL_B_reg)=data)
#define get_LVDS_DSTAT_CTRL_B_reg   (*((volatile unsigned int*) LVDS_DSTAT_CTRL_B_reg))
#define LVDS_DSTAT_CTRL_B_inst_adr                                                   "0x0022"
#define LVDS_DSTAT_CTRL_B_inst                                                       0x0022
#define LVDS_DSTAT_CTRL_B_b_low_shift                                                (16)
#define LVDS_DSTAT_CTRL_B_b_low_mask                                                 (0x03FF0000)
#define LVDS_DSTAT_CTRL_B_b_low(data)                                                (0x03FF0000&((data)<<16))
#define LVDS_DSTAT_CTRL_B_b_low_src(data)                                            ((0x03FF0000&(data))>>16)
#define LVDS_DSTAT_CTRL_B_get_b_low(data)                                            ((0x03FF0000&(data))>>16)
#define LVDS_DSTAT_CTRL_B_b_high_shift                                               (0)
#define LVDS_DSTAT_CTRL_B_b_high_mask                                                (0x000003FF)
#define LVDS_DSTAT_CTRL_B_b_high(data)                                               (0x000003FF&((data)<<0))
#define LVDS_DSTAT_CTRL_B_b_high_src(data)                                           ((0x000003FF&(data))>>0)
#define LVDS_DSTAT_CTRL_B_get_b_high(data)                                           ((0x000003FF&(data))>>0)


#define DSTAT_O_R1                                                                   0x9800988c
#define DSTAT_O_R1_reg_addr                                                          "0xD800988C"
#define DSTAT_O_R1_reg                                                               0xD800988C
#define set_DSTAT_O_R1_reg(data)   (*((volatile unsigned int*) DSTAT_O_R1_reg)=data)
#define get_DSTAT_O_R1_reg   (*((volatile unsigned int*) DSTAT_O_R1_reg))
#define DSTAT_O_R1_inst_adr                                                          "0x0023"
#define DSTAT_O_R1_inst                                                              0x0023
#define DSTAT_O_R1_r_cnt_shift                                                       (0)
#define DSTAT_O_R1_r_cnt_mask                                                        (0x001FFFFF)
#define DSTAT_O_R1_r_cnt(data)                                                       (0x001FFFFF&((data)<<0))
#define DSTAT_O_R1_r_cnt_src(data)                                                   ((0x001FFFFF&(data))>>0)
#define DSTAT_O_R1_get_r_cnt(data)                                                   ((0x001FFFFF&(data))>>0)


#define DSTAT_O_R2                                                                   0x98009890
#define DSTAT_O_R2_reg_addr                                                          "0xD8009890"
#define DSTAT_O_R2_reg                                                               0xD8009890
#define set_DSTAT_O_R2_reg(data)   (*((volatile unsigned int*) DSTAT_O_R2_reg)=data)
#define get_DSTAT_O_R2_reg   (*((volatile unsigned int*) DSTAT_O_R2_reg))
#define DSTAT_O_R2_inst_adr                                                          "0x0024"
#define DSTAT_O_R2_inst                                                              0x0024
#define DSTAT_O_R2_r_min_shift                                                       (16)
#define DSTAT_O_R2_r_min_mask                                                        (0x03FF0000)
#define DSTAT_O_R2_r_min(data)                                                       (0x03FF0000&((data)<<16))
#define DSTAT_O_R2_r_min_src(data)                                                   ((0x03FF0000&(data))>>16)
#define DSTAT_O_R2_get_r_min(data)                                                   ((0x03FF0000&(data))>>16)
#define DSTAT_O_R2_r_max_shift                                                       (0)
#define DSTAT_O_R2_r_max_mask                                                        (0x000003FF)
#define DSTAT_O_R2_r_max(data)                                                       (0x000003FF&((data)<<0))
#define DSTAT_O_R2_r_max_src(data)                                                   ((0x000003FF&(data))>>0)
#define DSTAT_O_R2_get_r_max(data)                                                   ((0x000003FF&(data))>>0)


#define DSTAT_O_G1                                                                   0x98009894
#define DSTAT_O_G1_reg_addr                                                          "0xD8009894"
#define DSTAT_O_G1_reg                                                               0xD8009894
#define set_DSTAT_O_G1_reg(data)   (*((volatile unsigned int*) DSTAT_O_G1_reg)=data)
#define get_DSTAT_O_G1_reg   (*((volatile unsigned int*) DSTAT_O_G1_reg))
#define DSTAT_O_G1_inst_adr                                                          "0x0025"
#define DSTAT_O_G1_inst                                                              0x0025
#define DSTAT_O_G1_g_cnt_shift                                                       (0)
#define DSTAT_O_G1_g_cnt_mask                                                        (0x001FFFFF)
#define DSTAT_O_G1_g_cnt(data)                                                       (0x001FFFFF&((data)<<0))
#define DSTAT_O_G1_g_cnt_src(data)                                                   ((0x001FFFFF&(data))>>0)
#define DSTAT_O_G1_get_g_cnt(data)                                                   ((0x001FFFFF&(data))>>0)


#define DSTAT_O_G2                                                                   0x98009898
#define DSTAT_O_G2_reg_addr                                                          "0xD8009898"
#define DSTAT_O_G2_reg                                                               0xD8009898
#define set_DSTAT_O_G2_reg(data)   (*((volatile unsigned int*) DSTAT_O_G2_reg)=data)
#define get_DSTAT_O_G2_reg   (*((volatile unsigned int*) DSTAT_O_G2_reg))
#define DSTAT_O_G2_inst_adr                                                          "0x0026"
#define DSTAT_O_G2_inst                                                              0x0026
#define DSTAT_O_G2_g_min_shift                                                       (16)
#define DSTAT_O_G2_g_min_mask                                                        (0x03FF0000)
#define DSTAT_O_G2_g_min(data)                                                       (0x03FF0000&((data)<<16))
#define DSTAT_O_G2_g_min_src(data)                                                   ((0x03FF0000&(data))>>16)
#define DSTAT_O_G2_get_g_min(data)                                                   ((0x03FF0000&(data))>>16)
#define DSTAT_O_G2_g_max_shift                                                       (0)
#define DSTAT_O_G2_g_max_mask                                                        (0x000003FF)
#define DSTAT_O_G2_g_max(data)                                                       (0x000003FF&((data)<<0))
#define DSTAT_O_G2_g_max_src(data)                                                   ((0x000003FF&(data))>>0)
#define DSTAT_O_G2_get_g_max(data)                                                   ((0x000003FF&(data))>>0)


#define DSTAT_O_B1                                                                   0x9800989c
#define DSTAT_O_B1_reg_addr                                                          "0xD800989C"
#define DSTAT_O_B1_reg                                                               0xD800989C
#define set_DSTAT_O_B1_reg(data)   (*((volatile unsigned int*) DSTAT_O_B1_reg)=data)
#define get_DSTAT_O_B1_reg   (*((volatile unsigned int*) DSTAT_O_B1_reg))
#define DSTAT_O_B1_inst_adr                                                          "0x0027"
#define DSTAT_O_B1_inst                                                              0x0027
#define DSTAT_O_B1_b_cnt_shift                                                       (0)
#define DSTAT_O_B1_b_cnt_mask                                                        (0x001FFFFF)
#define DSTAT_O_B1_b_cnt(data)                                                       (0x001FFFFF&((data)<<0))
#define DSTAT_O_B1_b_cnt_src(data)                                                   ((0x001FFFFF&(data))>>0)
#define DSTAT_O_B1_get_b_cnt(data)                                                   ((0x001FFFFF&(data))>>0)


#define DSTAT_O_B2                                                                   0x980098a0
#define DSTAT_O_B2_reg_addr                                                          "0xD80098A0"
#define DSTAT_O_B2_reg                                                               0xD80098A0
#define set_DSTAT_O_B2_reg(data)   (*((volatile unsigned int*) DSTAT_O_B2_reg)=data)
#define get_DSTAT_O_B2_reg   (*((volatile unsigned int*) DSTAT_O_B2_reg))
#define DSTAT_O_B2_inst_adr                                                          "0x0028"
#define DSTAT_O_B2_inst                                                              0x0028
#define DSTAT_O_B2_b_min_shift                                                       (16)
#define DSTAT_O_B2_b_min_mask                                                        (0x03FF0000)
#define DSTAT_O_B2_b_min(data)                                                       (0x03FF0000&((data)<<16))
#define DSTAT_O_B2_b_min_src(data)                                                   ((0x03FF0000&(data))>>16)
#define DSTAT_O_B2_get_b_min(data)                                                   ((0x03FF0000&(data))>>16)
#define DSTAT_O_B2_b_max_shift                                                       (0)
#define DSTAT_O_B2_b_max_mask                                                        (0x000003FF)
#define DSTAT_O_B2_b_max(data)                                                       (0x000003FF&((data)<<0))
#define DSTAT_O_B2_b_max_src(data)                                                   ((0x000003FF&(data))>>0)
#define DSTAT_O_B2_get_b_max(data)                                                   ((0x000003FF&(data))>>0)


#endif
