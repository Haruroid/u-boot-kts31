/**************************************************************
// Spec Version                  : 1.00
// Parser Version                : DVR_Parser_6.11(120105)
// CModelGen Version             : 5.1 2012.01.05
// Naming Rule                   :  Register_Name
// Naming Rule                   : Module_Register_Name_reg
// Parse Option                  : Only Parse _op1
// Parse Address Region          : All Address Region 
// Decode bit number             : 12 bits
// Firmware Header Generate Date : 2015/6/15 13:55:30
***************************************************************/


#ifndef _GPU_CHIP_TOP_REG_H_INCLUDED_
#define _GPU_CHIP_TOP_REG_H_INCLUDED_
#ifdef  _GPU_CHIP_TOP_USE_STRUCT
typedef struct 
{
unsigned int     reserved_0:8;
unsigned int     outstd_wcmd:6;
unsigned int     outstd_rcmd:6;
unsigned int     grp_lmt:5;
unsigned int     grp_size:3;
unsigned int     clk_gate_dbus_dis:1;
unsigned int     burst_lmt:1;
unsigned int     grp_wen:1;
unsigned int     grp_ren:1;
}GROUP;

typedef struct 
{
unsigned int     reserved_0:15;
unsigned int     clk_gate_l4_dis:1;
unsigned int     wcmd_kn:6;
unsigned int     rcmd_kn:6;
unsigned int     wlast_opt:1;
unsigned int     sram_bypass_en:1;
unsigned int     rcmd_chk_rdfifo:1;
unsigned int     wcmd_wait_wd:1;
}CHK_RDFIFO;

typedef struct 
{
unsigned int     reserved_0:31;
unsigned int     BIST_MODE19:1;
}BIST_MODE19;

typedef struct 
{
unsigned int     reserved_0:30;
unsigned int     DRF_TEST_RESUME19:1;
unsigned int     DRF_BIST_MODE19:1;
}DRF_BIST_RESULT19;

typedef struct 
{
unsigned int     reserved_0:27;
unsigned int     DRF_START_PAUSE19:1;
unsigned int     DRF_BIST_FAIL19_0:1;
unsigned int     DRF_BIST_DONE19:1;
unsigned int     BIST_FAIL19_0:1;
unsigned int     BIST_DONE19:1;
}BIST_RESULT19;

typedef struct 
{
unsigned int     reserved_0:26;
unsigned int     sram_ls:1;
unsigned int     sram_rm:4;
unsigned int     sram_rme:1;
}SRAM_RM19;

typedef struct 
{
unsigned int     reserved_0:23;
unsigned int     dbg_sel:1;
unsigned int     dbg_sel1:4;
unsigned int     dbg_sel0:4;
}DEBUGPORTS;

typedef struct 
{
unsigned int     dummy_reg0:32;
}DUMMYREGISTERS0;

typedef struct 
{
unsigned int     dummy_reg1:32;
}DUMMYREGISTERS1;

typedef struct 
{
unsigned int     mon_err_status_00:28;
unsigned int     reserved_0:4;
}CTI_ERR00;

typedef struct 
{
unsigned int     reserved_0:25;
unsigned int     mon_err_status_01:7;
}CTI_ERR01;

typedef struct 
{
unsigned int     mon_err_status_10:28;
unsigned int     reserved_0:4;
}CTI_ERR10;

typedef struct 
{
unsigned int     reserved_0:25;
unsigned int     mon_err_status_11:7;
}CTI_ERR11;

typedef struct 
{
unsigned int     mon_err_status_20:28;
unsigned int     reserved_0:4;
}CTI_ERR20;

typedef struct 
{
unsigned int     reserved_0:25;
unsigned int     mon_err_status_21:7;
}CTI_ERR21;

typedef struct 
{
unsigned int     mon_err_status_30:28;
unsigned int     reserved_0:4;
}CTI_ERR30;

typedef struct 
{
unsigned int     err_cmd_wp:2;
unsigned int     mon_err_flag:1;
unsigned int     reserved_0:22;
unsigned int     mon_err_status_31:7;
}CTI_ERR31;

typedef struct 
{
unsigned int     rng_ctrl_lfsr_cfg_lsb:32;
}RND_GEN_SEED0;

typedef struct 
{
unsigned int     reserved_0:16;
unsigned int     rng_ctrl_lfsr_cfg_msb:16;
}RND_GEN_SEED1;

typedef struct 
{
unsigned int     base_address:32;
}CIT_CMD_BASE;

typedef struct 
{
unsigned int     limit:32;
}CIT_CMD_LIMIT;

typedef struct 
{
unsigned int     reserved_0:16;
unsigned int     range:16;
}CIT_CMD_RANGE;

typedef struct 
{
unsigned int     default_rd:32;
}CIT_GOLDEN;

typedef struct 
{
unsigned int     data_sc_key0:32;
}DATA_KEY0;

typedef struct 
{
unsigned int     data_sc_key1:32;
}DATA_KEY1;

typedef struct 
{
unsigned int     data_sc_key2:32;
}DATA_KEY2;

typedef struct 
{
unsigned int     data_sc_key3:32;
}DATA_KEY31;

typedef struct 
{
unsigned int     data_sc_key4:32;
}DATA_KEY4;

typedef struct 
{
unsigned int     data_sc_key5:32;
}DATA_KEY5;

typedef struct 
{
unsigned int     data_sc_key6:32;
}DATA_KEY6;

typedef struct 
{
unsigned int     data_sc_key7:32;
}DATA_KEY7;

typedef struct 
{
unsigned int     cmp_sel:1;
unsigned int     len_ctrl:3;
unsigned int     rdy_ctrl:3;
unsigned int     reserved_0:22;
unsigned int     cti_monitor_en:1;
unsigned int     rng_ctrl_lfsr_mode:1;
unsigned int     fw_rst:1;
}MONITOR_CTRL;

#endif

#define GROUP                                                                        0x98055000
#define GROUP_reg_addr                                                               "0xD8055000"
#define GROUP_reg                                                                    0xD8055000
#define set_GROUP_reg(data)   (*((volatile unsigned int*) GROUP_reg)=data)
#define get_GROUP_reg   (*((volatile unsigned int*) GROUP_reg))
#define GROUP_inst_adr                                                               "0x0000"
#define GROUP_inst                                                                   0x0000
#define GROUP_outstd_wcmd_shift                                                      (18)
#define GROUP_outstd_wcmd_mask                                                       (0x00FC0000)
#define GROUP_outstd_wcmd(data)                                                      (0x00FC0000&((data)<<18))
#define GROUP_outstd_wcmd_src(data)                                                  ((0x00FC0000&(data))>>18)
#define GROUP_get_outstd_wcmd(data)                                                  ((0x00FC0000&(data))>>18)
#define GROUP_outstd_rcmd_shift                                                      (12)
#define GROUP_outstd_rcmd_mask                                                       (0x0003F000)
#define GROUP_outstd_rcmd(data)                                                      (0x0003F000&((data)<<12))
#define GROUP_outstd_rcmd_src(data)                                                  ((0x0003F000&(data))>>12)
#define GROUP_get_outstd_rcmd(data)                                                  ((0x0003F000&(data))>>12)
#define GROUP_grp_lmt_shift                                                          (7)
#define GROUP_grp_lmt_mask                                                           (0x00000F80)
#define GROUP_grp_lmt(data)                                                          (0x00000F80&((data)<<7))
#define GROUP_grp_lmt_src(data)                                                      ((0x00000F80&(data))>>7)
#define GROUP_get_grp_lmt(data)                                                      ((0x00000F80&(data))>>7)
#define GROUP_grp_size_shift                                                         (4)
#define GROUP_grp_size_mask                                                          (0x00000070)
#define GROUP_grp_size(data)                                                         (0x00000070&((data)<<4))
#define GROUP_grp_size_src(data)                                                     ((0x00000070&(data))>>4)
#define GROUP_get_grp_size(data)                                                     ((0x00000070&(data))>>4)
#define GROUP_clk_gate_dbus_dis_shift                                                (3)
#define GROUP_clk_gate_dbus_dis_mask                                                 (0x00000008)
#define GROUP_clk_gate_dbus_dis(data)                                                (0x00000008&((data)<<3))
#define GROUP_clk_gate_dbus_dis_src(data)                                            ((0x00000008&(data))>>3)
#define GROUP_get_clk_gate_dbus_dis(data)                                            ((0x00000008&(data))>>3)
#define GROUP_burst_lmt_shift                                                        (2)
#define GROUP_burst_lmt_mask                                                         (0x00000004)
#define GROUP_burst_lmt(data)                                                        (0x00000004&((data)<<2))
#define GROUP_burst_lmt_src(data)                                                    ((0x00000004&(data))>>2)
#define GROUP_get_burst_lmt(data)                                                    ((0x00000004&(data))>>2)
#define GROUP_grp_wen_shift                                                          (1)
#define GROUP_grp_wen_mask                                                           (0x00000002)
#define GROUP_grp_wen(data)                                                          (0x00000002&((data)<<1))
#define GROUP_grp_wen_src(data)                                                      ((0x00000002&(data))>>1)
#define GROUP_get_grp_wen(data)                                                      ((0x00000002&(data))>>1)
#define GROUP_grp_ren_shift                                                          (0)
#define GROUP_grp_ren_mask                                                           (0x00000001)
#define GROUP_grp_ren(data)                                                          (0x00000001&((data)<<0))
#define GROUP_grp_ren_src(data)                                                      ((0x00000001&(data))>>0)
#define GROUP_get_grp_ren(data)                                                      ((0x00000001&(data))>>0)


#define CHK_RDFIFO                                                                   0x98055004
#define CHK_RDFIFO_reg_addr                                                          "0xD8055004"
#define CHK_RDFIFO_reg                                                               0xD8055004
#define set_CHK_RDFIFO_reg(data)   (*((volatile unsigned int*) CHK_RDFIFO_reg)=data)
#define get_CHK_RDFIFO_reg   (*((volatile unsigned int*) CHK_RDFIFO_reg))
#define CHK_RDFIFO_inst_adr                                                          "0x0001"
#define CHK_RDFIFO_inst                                                              0x0001
#define CHK_RDFIFO_clk_gate_l4_dis_shift                                             (16)
#define CHK_RDFIFO_clk_gate_l4_dis_mask                                              (0x00010000)
#define CHK_RDFIFO_clk_gate_l4_dis(data)                                             (0x00010000&((data)<<16))
#define CHK_RDFIFO_clk_gate_l4_dis_src(data)                                         ((0x00010000&(data))>>16)
#define CHK_RDFIFO_get_clk_gate_l4_dis(data)                                         ((0x00010000&(data))>>16)
#define CHK_RDFIFO_wcmd_kn_shift                                                     (10)
#define CHK_RDFIFO_wcmd_kn_mask                                                      (0x0000FC00)
#define CHK_RDFIFO_wcmd_kn(data)                                                     (0x0000FC00&((data)<<10))
#define CHK_RDFIFO_wcmd_kn_src(data)                                                 ((0x0000FC00&(data))>>10)
#define CHK_RDFIFO_get_wcmd_kn(data)                                                 ((0x0000FC00&(data))>>10)
#define CHK_RDFIFO_rcmd_kn_shift                                                     (4)
#define CHK_RDFIFO_rcmd_kn_mask                                                      (0x000003F0)
#define CHK_RDFIFO_rcmd_kn(data)                                                     (0x000003F0&((data)<<4))
#define CHK_RDFIFO_rcmd_kn_src(data)                                                 ((0x000003F0&(data))>>4)
#define CHK_RDFIFO_get_rcmd_kn(data)                                                 ((0x000003F0&(data))>>4)
#define CHK_RDFIFO_wlast_opt_shift                                                   (3)
#define CHK_RDFIFO_wlast_opt_mask                                                    (0x00000008)
#define CHK_RDFIFO_wlast_opt(data)                                                   (0x00000008&((data)<<3))
#define CHK_RDFIFO_wlast_opt_src(data)                                               ((0x00000008&(data))>>3)
#define CHK_RDFIFO_get_wlast_opt(data)                                               ((0x00000008&(data))>>3)
#define CHK_RDFIFO_sram_bypass_en_shift                                              (2)
#define CHK_RDFIFO_sram_bypass_en_mask                                               (0x00000004)
#define CHK_RDFIFO_sram_bypass_en(data)                                              (0x00000004&((data)<<2))
#define CHK_RDFIFO_sram_bypass_en_src(data)                                          ((0x00000004&(data))>>2)
#define CHK_RDFIFO_get_sram_bypass_en(data)                                          ((0x00000004&(data))>>2)
#define CHK_RDFIFO_rcmd_chk_rdfifo_shift                                             (1)
#define CHK_RDFIFO_rcmd_chk_rdfifo_mask                                              (0x00000002)
#define CHK_RDFIFO_rcmd_chk_rdfifo(data)                                             (0x00000002&((data)<<1))
#define CHK_RDFIFO_rcmd_chk_rdfifo_src(data)                                         ((0x00000002&(data))>>1)
#define CHK_RDFIFO_get_rcmd_chk_rdfifo(data)                                         ((0x00000002&(data))>>1)
#define CHK_RDFIFO_wcmd_wait_wd_shift                                                (0)
#define CHK_RDFIFO_wcmd_wait_wd_mask                                                 (0x00000001)
#define CHK_RDFIFO_wcmd_wait_wd(data)                                                (0x00000001&((data)<<0))
#define CHK_RDFIFO_wcmd_wait_wd_src(data)                                            ((0x00000001&(data))>>0)
#define CHK_RDFIFO_get_wcmd_wait_wd(data)                                            ((0x00000001&(data))>>0)


#define BIST_MODE19                                                                  0x98055008
#define BIST_MODE19_reg_addr                                                         "0xD8055008"
#define BIST_MODE19_reg                                                              0xD8055008
#define set_BIST_MODE19_reg(data)   (*((volatile unsigned int*) BIST_MODE19_reg)=data)
#define get_BIST_MODE19_reg   (*((volatile unsigned int*) BIST_MODE19_reg))
#define BIST_MODE19_inst_adr                                                         "0x0002"
#define BIST_MODE19_inst                                                             0x0002
#define BIST_MODE19_BIST_MODE19_shift                                                (0)
#define BIST_MODE19_BIST_MODE19_mask                                                 (0x00000001)
#define BIST_MODE19_BIST_MODE19(data)                                                (0x00000001&((data)<<0))
#define BIST_MODE19_BIST_MODE19_src(data)                                            ((0x00000001&(data))>>0)
#define BIST_MODE19_get_BIST_MODE19(data)                                            ((0x00000001&(data))>>0)


#define DRF_BIST_RESULT19                                                            0x9805500C
#define DRF_BIST_RESULT19_reg_addr                                                   "0xD805500C"
#define DRF_BIST_RESULT19_reg                                                        0xD805500C
#define set_DRF_BIST_RESULT19_reg(data)   (*((volatile unsigned int*) DRF_BIST_RESULT19_reg)=data)
#define get_DRF_BIST_RESULT19_reg   (*((volatile unsigned int*) DRF_BIST_RESULT19_reg))
#define DRF_BIST_RESULT19_inst_adr                                                   "0x0003"
#define DRF_BIST_RESULT19_inst                                                       0x0003
#define DRF_BIST_RESULT19_DRF_TEST_RESUME19_shift                                    (1)
#define DRF_BIST_RESULT19_DRF_TEST_RESUME19_mask                                     (0x00000002)
#define DRF_BIST_RESULT19_DRF_TEST_RESUME19(data)                                    (0x00000002&((data)<<1))
#define DRF_BIST_RESULT19_DRF_TEST_RESUME19_src(data)                                ((0x00000002&(data))>>1)
#define DRF_BIST_RESULT19_get_DRF_TEST_RESUME19(data)                                ((0x00000002&(data))>>1)
#define DRF_BIST_RESULT19_DRF_BIST_MODE19_shift                                      (0)
#define DRF_BIST_RESULT19_DRF_BIST_MODE19_mask                                       (0x00000001)
#define DRF_BIST_RESULT19_DRF_BIST_MODE19(data)                                      (0x00000001&((data)<<0))
#define DRF_BIST_RESULT19_DRF_BIST_MODE19_src(data)                                  ((0x00000001&(data))>>0)
#define DRF_BIST_RESULT19_get_DRF_BIST_MODE19(data)                                  ((0x00000001&(data))>>0)


#define BIST_RESULT19                                                                0x98055010
#define BIST_RESULT19_reg_addr                                                       "0xD8055010"
#define BIST_RESULT19_reg                                                            0xD8055010
#define set_BIST_RESULT19_reg(data)   (*((volatile unsigned int*) BIST_RESULT19_reg)=data)
#define get_BIST_RESULT19_reg   (*((volatile unsigned int*) BIST_RESULT19_reg))
#define BIST_RESULT19_inst_adr                                                       "0x0004"
#define BIST_RESULT19_inst                                                           0x0004
#define BIST_RESULT19_DRF_START_PAUSE19_shift                                        (4)
#define BIST_RESULT19_DRF_START_PAUSE19_mask                                         (0x00000010)
#define BIST_RESULT19_DRF_START_PAUSE19(data)                                        (0x00000010&((data)<<4))
#define BIST_RESULT19_DRF_START_PAUSE19_src(data)                                    ((0x00000010&(data))>>4)
#define BIST_RESULT19_get_DRF_START_PAUSE19(data)                                    ((0x00000010&(data))>>4)
#define BIST_RESULT19_DRF_BIST_FAIL19_0_shift                                        (3)
#define BIST_RESULT19_DRF_BIST_FAIL19_0_mask                                         (0x00000008)
#define BIST_RESULT19_DRF_BIST_FAIL19_0(data)                                        (0x00000008&((data)<<3))
#define BIST_RESULT19_DRF_BIST_FAIL19_0_src(data)                                    ((0x00000008&(data))>>3)
#define BIST_RESULT19_get_DRF_BIST_FAIL19_0(data)                                    ((0x00000008&(data))>>3)
#define BIST_RESULT19_DRF_BIST_DONE19_shift                                          (2)
#define BIST_RESULT19_DRF_BIST_DONE19_mask                                           (0x00000004)
#define BIST_RESULT19_DRF_BIST_DONE19(data)                                          (0x00000004&((data)<<2))
#define BIST_RESULT19_DRF_BIST_DONE19_src(data)                                      ((0x00000004&(data))>>2)
#define BIST_RESULT19_get_DRF_BIST_DONE19(data)                                      ((0x00000004&(data))>>2)
#define BIST_RESULT19_BIST_FAIL19_0_shift                                            (1)
#define BIST_RESULT19_BIST_FAIL19_0_mask                                             (0x00000002)
#define BIST_RESULT19_BIST_FAIL19_0(data)                                            (0x00000002&((data)<<1))
#define BIST_RESULT19_BIST_FAIL19_0_src(data)                                        ((0x00000002&(data))>>1)
#define BIST_RESULT19_get_BIST_FAIL19_0(data)                                        ((0x00000002&(data))>>1)
#define BIST_RESULT19_BIST_DONE19_shift                                              (0)
#define BIST_RESULT19_BIST_DONE19_mask                                               (0x00000001)
#define BIST_RESULT19_BIST_DONE19(data)                                              (0x00000001&((data)<<0))
#define BIST_RESULT19_BIST_DONE19_src(data)                                          ((0x00000001&(data))>>0)
#define BIST_RESULT19_get_BIST_DONE19(data)                                          ((0x00000001&(data))>>0)


#define SRAM_RM19                                                                    0x98055014
#define SRAM_RM19_reg_addr                                                           "0xD8055014"
#define SRAM_RM19_reg                                                                0xD8055014
#define set_SRAM_RM19_reg(data)   (*((volatile unsigned int*) SRAM_RM19_reg)=data)
#define get_SRAM_RM19_reg   (*((volatile unsigned int*) SRAM_RM19_reg))
#define SRAM_RM19_inst_adr                                                           "0x0005"
#define SRAM_RM19_inst                                                               0x0005
#define SRAM_RM19_sram_ls_shift                                                      (5)
#define SRAM_RM19_sram_ls_mask                                                       (0x00000020)
#define SRAM_RM19_sram_ls(data)                                                      (0x00000020&((data)<<5))
#define SRAM_RM19_sram_ls_src(data)                                                  ((0x00000020&(data))>>5)
#define SRAM_RM19_get_sram_ls(data)                                                  ((0x00000020&(data))>>5)
#define SRAM_RM19_sram_rm_shift                                                      (1)
#define SRAM_RM19_sram_rm_mask                                                       (0x0000001E)
#define SRAM_RM19_sram_rm(data)                                                      (0x0000001E&((data)<<1))
#define SRAM_RM19_sram_rm_src(data)                                                  ((0x0000001E&(data))>>1)
#define SRAM_RM19_get_sram_rm(data)                                                  ((0x0000001E&(data))>>1)
#define SRAM_RM19_sram_rme_shift                                                     (0)
#define SRAM_RM19_sram_rme_mask                                                      (0x00000001)
#define SRAM_RM19_sram_rme(data)                                                     (0x00000001&((data)<<0))
#define SRAM_RM19_sram_rme_src(data)                                                 ((0x00000001&(data))>>0)
#define SRAM_RM19_get_sram_rme(data)                                                 ((0x00000001&(data))>>0)


#define DEBUGPORTS                                                                   0x98055018
#define DEBUGPORTS_reg_addr                                                          "0xD8055018"
#define DEBUGPORTS_reg                                                               0xD8055018
#define set_DEBUGPORTS_reg(data)   (*((volatile unsigned int*) DEBUGPORTS_reg)=data)
#define get_DEBUGPORTS_reg   (*((volatile unsigned int*) DEBUGPORTS_reg))
#define DEBUGPORTS_inst_adr                                                          "0x0006"
#define DEBUGPORTS_inst                                                              0x0006
#define DEBUGPORTS_dbg_sel_shift                                                     (8)
#define DEBUGPORTS_dbg_sel_mask                                                      (0x00000100)
#define DEBUGPORTS_dbg_sel(data)                                                     (0x00000100&((data)<<8))
#define DEBUGPORTS_dbg_sel_src(data)                                                 ((0x00000100&(data))>>8)
#define DEBUGPORTS_get_dbg_sel(data)                                                 ((0x00000100&(data))>>8)
#define DEBUGPORTS_dbg_sel1_shift                                                    (4)
#define DEBUGPORTS_dbg_sel1_mask                                                     (0x000000F0)
#define DEBUGPORTS_dbg_sel1(data)                                                    (0x000000F0&((data)<<4))
#define DEBUGPORTS_dbg_sel1_src(data)                                                ((0x000000F0&(data))>>4)
#define DEBUGPORTS_get_dbg_sel1(data)                                                ((0x000000F0&(data))>>4)
#define DEBUGPORTS_dbg_sel0_shift                                                    (0)
#define DEBUGPORTS_dbg_sel0_mask                                                     (0x0000000F)
#define DEBUGPORTS_dbg_sel0(data)                                                    (0x0000000F&((data)<<0))
#define DEBUGPORTS_dbg_sel0_src(data)                                                ((0x0000000F&(data))>>0)
#define DEBUGPORTS_get_dbg_sel0(data)                                                ((0x0000000F&(data))>>0)


#define DUMMYREGISTERS0                                                              0x9805501C
#define DUMMYREGISTERS0_reg_addr                                                     "0xD805501C"
#define DUMMYREGISTERS0_reg                                                          0xD805501C
#define set_DUMMYREGISTERS0_reg(data)   (*((volatile unsigned int*) DUMMYREGISTERS0_reg)=data)
#define get_DUMMYREGISTERS0_reg   (*((volatile unsigned int*) DUMMYREGISTERS0_reg))
#define DUMMYREGISTERS0_inst_adr                                                     "0x0007"
#define DUMMYREGISTERS0_inst                                                         0x0007
#define DUMMYREGISTERS0_dummy_reg0_shift                                             (0)
#define DUMMYREGISTERS0_dummy_reg0_mask                                              (0xFFFFFFFF)
#define DUMMYREGISTERS0_dummy_reg0(data)                                             (0xFFFFFFFF&((data)<<0))
#define DUMMYREGISTERS0_dummy_reg0_src(data)                                         ((0xFFFFFFFF&(data))>>0)
#define DUMMYREGISTERS0_get_dummy_reg0(data)                                         ((0xFFFFFFFF&(data))>>0)


#define DUMMYREGISTERS1                                                              0x98055020
#define DUMMYREGISTERS1_reg_addr                                                     "0xD8055020"
#define DUMMYREGISTERS1_reg                                                          0xD8055020
#define set_DUMMYREGISTERS1_reg(data)   (*((volatile unsigned int*) DUMMYREGISTERS1_reg)=data)
#define get_DUMMYREGISTERS1_reg   (*((volatile unsigned int*) DUMMYREGISTERS1_reg))
#define DUMMYREGISTERS1_inst_adr                                                     "0x0008"
#define DUMMYREGISTERS1_inst                                                         0x0008
#define DUMMYREGISTERS1_dummy_reg1_shift                                             (0)
#define DUMMYREGISTERS1_dummy_reg1_mask                                              (0xFFFFFFFF)
#define DUMMYREGISTERS1_dummy_reg1(data)                                             (0xFFFFFFFF&((data)<<0))
#define DUMMYREGISTERS1_dummy_reg1_src(data)                                         ((0xFFFFFFFF&(data))>>0)
#define DUMMYREGISTERS1_get_dummy_reg1(data)                                         ((0xFFFFFFFF&(data))>>0)


#define CTI_ERR00                                                                    0x98055024
#define CTI_ERR00_reg_addr                                                           "0xD8055024"
#define CTI_ERR00_reg                                                                0xD8055024
#define set_CTI_ERR00_reg(data)   (*((volatile unsigned int*) CTI_ERR00_reg)=data)
#define get_CTI_ERR00_reg   (*((volatile unsigned int*) CTI_ERR00_reg))
#define CTI_ERR00_inst_adr                                                           "0x0009"
#define CTI_ERR00_inst                                                               0x0009
#define CTI_ERR00_mon_err_status_00_shift                                            (4)
#define CTI_ERR00_mon_err_status_00_mask                                             (0xFFFFFFF0)
#define CTI_ERR00_mon_err_status_00(data)                                            (0xFFFFFFF0&((data)<<4))
#define CTI_ERR00_mon_err_status_00_src(data)                                        ((0xFFFFFFF0&(data))>>4)
#define CTI_ERR00_get_mon_err_status_00(data)                                        ((0xFFFFFFF0&(data))>>4)


#define CTI_ERR01                                                                    0x98055028
#define CTI_ERR01_reg_addr                                                           "0xD8055028"
#define CTI_ERR01_reg                                                                0xD8055028
#define set_CTI_ERR01_reg(data)   (*((volatile unsigned int*) CTI_ERR01_reg)=data)
#define get_CTI_ERR01_reg   (*((volatile unsigned int*) CTI_ERR01_reg))
#define CTI_ERR01_inst_adr                                                           "0x000A"
#define CTI_ERR01_inst                                                               0x000A
#define CTI_ERR01_mon_err_status_01_shift                                            (0)
#define CTI_ERR01_mon_err_status_01_mask                                             (0x0000007F)
#define CTI_ERR01_mon_err_status_01(data)                                            (0x0000007F&((data)<<0))
#define CTI_ERR01_mon_err_status_01_src(data)                                        ((0x0000007F&(data))>>0)
#define CTI_ERR01_get_mon_err_status_01(data)                                        ((0x0000007F&(data))>>0)


#define CTI_ERR10                                                                    0x9805502C
#define CTI_ERR10_reg_addr                                                           "0xD805502C"
#define CTI_ERR10_reg                                                                0xD805502C
#define set_CTI_ERR10_reg(data)   (*((volatile unsigned int*) CTI_ERR10_reg)=data)
#define get_CTI_ERR10_reg   (*((volatile unsigned int*) CTI_ERR10_reg))
#define CTI_ERR10_inst_adr                                                           "0x000B"
#define CTI_ERR10_inst                                                               0x000B
#define CTI_ERR10_mon_err_status_10_shift                                            (4)
#define CTI_ERR10_mon_err_status_10_mask                                             (0xFFFFFFF0)
#define CTI_ERR10_mon_err_status_10(data)                                            (0xFFFFFFF0&((data)<<4))
#define CTI_ERR10_mon_err_status_10_src(data)                                        ((0xFFFFFFF0&(data))>>4)
#define CTI_ERR10_get_mon_err_status_10(data)                                        ((0xFFFFFFF0&(data))>>4)


#define CTI_ERR11                                                                    0x98055030
#define CTI_ERR11_reg_addr                                                           "0xD8055030"
#define CTI_ERR11_reg                                                                0xD8055030
#define set_CTI_ERR11_reg(data)   (*((volatile unsigned int*) CTI_ERR11_reg)=data)
#define get_CTI_ERR11_reg   (*((volatile unsigned int*) CTI_ERR11_reg))
#define CTI_ERR11_inst_adr                                                           "0x000C"
#define CTI_ERR11_inst                                                               0x000C
#define CTI_ERR11_mon_err_status_11_shift                                            (0)
#define CTI_ERR11_mon_err_status_11_mask                                             (0x0000007F)
#define CTI_ERR11_mon_err_status_11(data)                                            (0x0000007F&((data)<<0))
#define CTI_ERR11_mon_err_status_11_src(data)                                        ((0x0000007F&(data))>>0)
#define CTI_ERR11_get_mon_err_status_11(data)                                        ((0x0000007F&(data))>>0)


#define CTI_ERR20                                                                    0x98055034
#define CTI_ERR20_reg_addr                                                           "0xD8055034"
#define CTI_ERR20_reg                                                                0xD8055034
#define set_CTI_ERR20_reg(data)   (*((volatile unsigned int*) CTI_ERR20_reg)=data)
#define get_CTI_ERR20_reg   (*((volatile unsigned int*) CTI_ERR20_reg))
#define CTI_ERR20_inst_adr                                                           "0x000D"
#define CTI_ERR20_inst                                                               0x000D
#define CTI_ERR20_mon_err_status_20_shift                                            (4)
#define CTI_ERR20_mon_err_status_20_mask                                             (0xFFFFFFF0)
#define CTI_ERR20_mon_err_status_20(data)                                            (0xFFFFFFF0&((data)<<4))
#define CTI_ERR20_mon_err_status_20_src(data)                                        ((0xFFFFFFF0&(data))>>4)
#define CTI_ERR20_get_mon_err_status_20(data)                                        ((0xFFFFFFF0&(data))>>4)


#define CTI_ERR21                                                                    0x98055038
#define CTI_ERR21_reg_addr                                                           "0xD8055038"
#define CTI_ERR21_reg                                                                0xD8055038
#define set_CTI_ERR21_reg(data)   (*((volatile unsigned int*) CTI_ERR21_reg)=data)
#define get_CTI_ERR21_reg   (*((volatile unsigned int*) CTI_ERR21_reg))
#define CTI_ERR21_inst_adr                                                           "0x000E"
#define CTI_ERR21_inst                                                               0x000E
#define CTI_ERR21_mon_err_status_21_shift                                            (0)
#define CTI_ERR21_mon_err_status_21_mask                                             (0x0000007F)
#define CTI_ERR21_mon_err_status_21(data)                                            (0x0000007F&((data)<<0))
#define CTI_ERR21_mon_err_status_21_src(data)                                        ((0x0000007F&(data))>>0)
#define CTI_ERR21_get_mon_err_status_21(data)                                        ((0x0000007F&(data))>>0)


#define CTI_ERR30                                                                    0x9805503C
#define CTI_ERR30_reg_addr                                                           "0xD805503C"
#define CTI_ERR30_reg                                                                0xD805503C
#define set_CTI_ERR30_reg(data)   (*((volatile unsigned int*) CTI_ERR30_reg)=data)
#define get_CTI_ERR30_reg   (*((volatile unsigned int*) CTI_ERR30_reg))
#define CTI_ERR30_inst_adr                                                           "0x000F"
#define CTI_ERR30_inst                                                               0x000F
#define CTI_ERR30_mon_err_status_30_shift                                            (4)
#define CTI_ERR30_mon_err_status_30_mask                                             (0xFFFFFFF0)
#define CTI_ERR30_mon_err_status_30(data)                                            (0xFFFFFFF0&((data)<<4))
#define CTI_ERR30_mon_err_status_30_src(data)                                        ((0xFFFFFFF0&(data))>>4)
#define CTI_ERR30_get_mon_err_status_30(data)                                        ((0xFFFFFFF0&(data))>>4)


#define CTI_ERR31                                                                    0x98055040
#define CTI_ERR31_reg_addr                                                           "0xD8055040"
#define CTI_ERR31_reg                                                                0xD8055040
#define set_CTI_ERR31_reg(data)   (*((volatile unsigned int*) CTI_ERR31_reg)=data)
#define get_CTI_ERR31_reg   (*((volatile unsigned int*) CTI_ERR31_reg))
#define CTI_ERR31_inst_adr                                                           "0x0010"
#define CTI_ERR31_inst                                                               0x0010
#define CTI_ERR31_err_cmd_wp_shift                                                   (30)
#define CTI_ERR31_err_cmd_wp_mask                                                    (0xC0000000)
#define CTI_ERR31_err_cmd_wp(data)                                                   (0xC0000000&((data)<<30))
#define CTI_ERR31_err_cmd_wp_src(data)                                               ((0xC0000000&(data))>>30)
#define CTI_ERR31_get_err_cmd_wp(data)                                               ((0xC0000000&(data))>>30)
#define CTI_ERR31_mon_err_flag_shift                                                 (29)
#define CTI_ERR31_mon_err_flag_mask                                                  (0x20000000)
#define CTI_ERR31_mon_err_flag(data)                                                 (0x20000000&((data)<<29))
#define CTI_ERR31_mon_err_flag_src(data)                                             ((0x20000000&(data))>>29)
#define CTI_ERR31_get_mon_err_flag(data)                                             ((0x20000000&(data))>>29)
#define CTI_ERR31_mon_err_status_31_shift                                            (0)
#define CTI_ERR31_mon_err_status_31_mask                                             (0x0000007F)
#define CTI_ERR31_mon_err_status_31(data)                                            (0x0000007F&((data)<<0))
#define CTI_ERR31_mon_err_status_31_src(data)                                        ((0x0000007F&(data))>>0)
#define CTI_ERR31_get_mon_err_status_31(data)                                        ((0x0000007F&(data))>>0)


#define RND_GEN_SEED0                                                                0x98055044
#define RND_GEN_SEED0_reg_addr                                                       "0xD8055044"
#define RND_GEN_SEED0_reg                                                            0xD8055044
#define set_RND_GEN_SEED0_reg(data)   (*((volatile unsigned int*) RND_GEN_SEED0_reg)=data)
#define get_RND_GEN_SEED0_reg   (*((volatile unsigned int*) RND_GEN_SEED0_reg))
#define RND_GEN_SEED0_inst_adr                                                       "0x0011"
#define RND_GEN_SEED0_inst                                                           0x0011
#define RND_GEN_SEED0_rng_ctrl_lfsr_cfg_lsb_shift                                    (0)
#define RND_GEN_SEED0_rng_ctrl_lfsr_cfg_lsb_mask                                     (0xFFFFFFFF)
#define RND_GEN_SEED0_rng_ctrl_lfsr_cfg_lsb(data)                                    (0xFFFFFFFF&((data)<<0))
#define RND_GEN_SEED0_rng_ctrl_lfsr_cfg_lsb_src(data)                                ((0xFFFFFFFF&(data))>>0)
#define RND_GEN_SEED0_get_rng_ctrl_lfsr_cfg_lsb(data)                                ((0xFFFFFFFF&(data))>>0)


#define RND_GEN_SEED1                                                                0x98055048
#define RND_GEN_SEED1_reg_addr                                                       "0xD8055048"
#define RND_GEN_SEED1_reg                                                            0xD8055048
#define set_RND_GEN_SEED1_reg(data)   (*((volatile unsigned int*) RND_GEN_SEED1_reg)=data)
#define get_RND_GEN_SEED1_reg   (*((volatile unsigned int*) RND_GEN_SEED1_reg))
#define RND_GEN_SEED1_inst_adr                                                       "0x0012"
#define RND_GEN_SEED1_inst                                                           0x0012
#define RND_GEN_SEED1_rng_ctrl_lfsr_cfg_msb_shift                                    (0)
#define RND_GEN_SEED1_rng_ctrl_lfsr_cfg_msb_mask                                     (0x0000FFFF)
#define RND_GEN_SEED1_rng_ctrl_lfsr_cfg_msb(data)                                    (0x0000FFFF&((data)<<0))
#define RND_GEN_SEED1_rng_ctrl_lfsr_cfg_msb_src(data)                                ((0x0000FFFF&(data))>>0)
#define RND_GEN_SEED1_get_rng_ctrl_lfsr_cfg_msb(data)                                ((0x0000FFFF&(data))>>0)


#define CIT_CMD_BASE                                                                 0x9805504C
#define CIT_CMD_BASE_reg_addr                                                        "0xD805504C"
#define CIT_CMD_BASE_reg                                                             0xD805504C
#define set_CIT_CMD_BASE_reg(data)   (*((volatile unsigned int*) CIT_CMD_BASE_reg)=data)
#define get_CIT_CMD_BASE_reg   (*((volatile unsigned int*) CIT_CMD_BASE_reg))
#define CIT_CMD_BASE_inst_adr                                                        "0x0013"
#define CIT_CMD_BASE_inst                                                            0x0013
#define CIT_CMD_BASE_base_address_shift                                              (0)
#define CIT_CMD_BASE_base_address_mask                                               (0xFFFFFFFF)
#define CIT_CMD_BASE_base_address(data)                                              (0xFFFFFFFF&((data)<<0))
#define CIT_CMD_BASE_base_address_src(data)                                          ((0xFFFFFFFF&(data))>>0)
#define CIT_CMD_BASE_get_base_address(data)                                          ((0xFFFFFFFF&(data))>>0)


#define CIT_CMD_LIMIT                                                                0x98055050
#define CIT_CMD_LIMIT_reg_addr                                                       "0xD8055050"
#define CIT_CMD_LIMIT_reg                                                            0xD8055050
#define set_CIT_CMD_LIMIT_reg(data)   (*((volatile unsigned int*) CIT_CMD_LIMIT_reg)=data)
#define get_CIT_CMD_LIMIT_reg   (*((volatile unsigned int*) CIT_CMD_LIMIT_reg))
#define CIT_CMD_LIMIT_inst_adr                                                       "0x0014"
#define CIT_CMD_LIMIT_inst                                                           0x0014
#define CIT_CMD_LIMIT_limit_shift                                                    (0)
#define CIT_CMD_LIMIT_limit_mask                                                     (0xFFFFFFFF)
#define CIT_CMD_LIMIT_limit(data)                                                    (0xFFFFFFFF&((data)<<0))
#define CIT_CMD_LIMIT_limit_src(data)                                                ((0xFFFFFFFF&(data))>>0)
#define CIT_CMD_LIMIT_get_limit(data)                                                ((0xFFFFFFFF&(data))>>0)


#define CIT_CMD_RANGE                                                                0x98055054
#define CIT_CMD_RANGE_reg_addr                                                       "0xD8055054"
#define CIT_CMD_RANGE_reg                                                            0xD8055054
#define set_CIT_CMD_RANGE_reg(data)   (*((volatile unsigned int*) CIT_CMD_RANGE_reg)=data)
#define get_CIT_CMD_RANGE_reg   (*((volatile unsigned int*) CIT_CMD_RANGE_reg))
#define CIT_CMD_RANGE_inst_adr                                                       "0x0015"
#define CIT_CMD_RANGE_inst                                                           0x0015
#define CIT_CMD_RANGE_range_shift                                                    (0)
#define CIT_CMD_RANGE_range_mask                                                     (0x0000FFFF)
#define CIT_CMD_RANGE_range(data)                                                    (0x0000FFFF&((data)<<0))
#define CIT_CMD_RANGE_range_src(data)                                                ((0x0000FFFF&(data))>>0)
#define CIT_CMD_RANGE_get_range(data)                                                ((0x0000FFFF&(data))>>0)


#define CIT_GOLDEN                                                                   0x98055058
#define CIT_GOLDEN_reg_addr                                                          "0xD8055058"
#define CIT_GOLDEN_reg                                                               0xD8055058
#define set_CIT_GOLDEN_reg(data)   (*((volatile unsigned int*) CIT_GOLDEN_reg)=data)
#define get_CIT_GOLDEN_reg   (*((volatile unsigned int*) CIT_GOLDEN_reg))
#define CIT_GOLDEN_inst_adr                                                          "0x0016"
#define CIT_GOLDEN_inst                                                              0x0016
#define CIT_GOLDEN_default_rd_shift                                                  (0)
#define CIT_GOLDEN_default_rd_mask                                                   (0xFFFFFFFF)
#define CIT_GOLDEN_default_rd(data)                                                  (0xFFFFFFFF&((data)<<0))
#define CIT_GOLDEN_default_rd_src(data)                                              ((0xFFFFFFFF&(data))>>0)
#define CIT_GOLDEN_get_default_rd(data)                                              ((0xFFFFFFFF&(data))>>0)


#define DATA_KEY0                                                                    0x9805505C
#define DATA_KEY0_reg_addr                                                           "0xD805505C"
#define DATA_KEY0_reg                                                                0xD805505C
#define set_DATA_KEY0_reg(data)   (*((volatile unsigned int*) DATA_KEY0_reg)=data)
#define get_DATA_KEY0_reg   (*((volatile unsigned int*) DATA_KEY0_reg))
#define DATA_KEY0_inst_adr                                                           "0x0017"
#define DATA_KEY0_inst                                                               0x0017
#define DATA_KEY0_data_sc_key0_shift                                                 (0)
#define DATA_KEY0_data_sc_key0_mask                                                  (0xFFFFFFFF)
#define DATA_KEY0_data_sc_key0(data)                                                 (0xFFFFFFFF&((data)<<0))
#define DATA_KEY0_data_sc_key0_src(data)                                             ((0xFFFFFFFF&(data))>>0)
#define DATA_KEY0_get_data_sc_key0(data)                                             ((0xFFFFFFFF&(data))>>0)


#define DATA_KEY1                                                                    0x98055060
#define DATA_KEY1_reg_addr                                                           "0xD8055060"
#define DATA_KEY1_reg                                                                0xD8055060
#define set_DATA_KEY1_reg(data)   (*((volatile unsigned int*) DATA_KEY1_reg)=data)
#define get_DATA_KEY1_reg   (*((volatile unsigned int*) DATA_KEY1_reg))
#define DATA_KEY1_inst_adr                                                           "0x0018"
#define DATA_KEY1_inst                                                               0x0018
#define DATA_KEY1_data_sc_key1_shift                                                 (0)
#define DATA_KEY1_data_sc_key1_mask                                                  (0xFFFFFFFF)
#define DATA_KEY1_data_sc_key1(data)                                                 (0xFFFFFFFF&((data)<<0))
#define DATA_KEY1_data_sc_key1_src(data)                                             ((0xFFFFFFFF&(data))>>0)
#define DATA_KEY1_get_data_sc_key1(data)                                             ((0xFFFFFFFF&(data))>>0)


#define DATA_KEY2                                                                    0x98055064
#define DATA_KEY2_reg_addr                                                           "0xD8055064"
#define DATA_KEY2_reg                                                                0xD8055064
#define set_DATA_KEY2_reg(data)   (*((volatile unsigned int*) DATA_KEY2_reg)=data)
#define get_DATA_KEY2_reg   (*((volatile unsigned int*) DATA_KEY2_reg))
#define DATA_KEY2_inst_adr                                                           "0x0019"
#define DATA_KEY2_inst                                                               0x0019
#define DATA_KEY2_data_sc_key2_shift                                                 (0)
#define DATA_KEY2_data_sc_key2_mask                                                  (0xFFFFFFFF)
#define DATA_KEY2_data_sc_key2(data)                                                 (0xFFFFFFFF&((data)<<0))
#define DATA_KEY2_data_sc_key2_src(data)                                             ((0xFFFFFFFF&(data))>>0)
#define DATA_KEY2_get_data_sc_key2(data)                                             ((0xFFFFFFFF&(data))>>0)


#define DATA_KEY31                                                                   0x98055068
#define DATA_KEY31_reg_addr                                                          "0xD8055068"
#define DATA_KEY31_reg                                                               0xD8055068
#define set_DATA_KEY31_reg(data)   (*((volatile unsigned int*) DATA_KEY31_reg)=data)
#define get_DATA_KEY31_reg   (*((volatile unsigned int*) DATA_KEY31_reg))
#define DATA_KEY31_inst_adr                                                          "0x001A"
#define DATA_KEY31_inst                                                              0x001A
#define DATA_KEY31_data_sc_key3_shift                                                (0)
#define DATA_KEY31_data_sc_key3_mask                                                 (0xFFFFFFFF)
#define DATA_KEY31_data_sc_key3(data)                                                (0xFFFFFFFF&((data)<<0))
#define DATA_KEY31_data_sc_key3_src(data)                                            ((0xFFFFFFFF&(data))>>0)
#define DATA_KEY31_get_data_sc_key3(data)                                            ((0xFFFFFFFF&(data))>>0)


#define DATA_KEY4                                                                    0x9805506C
#define DATA_KEY4_reg_addr                                                           "0xD805506C"
#define DATA_KEY4_reg                                                                0xD805506C
#define set_DATA_KEY4_reg(data)   (*((volatile unsigned int*) DATA_KEY4_reg)=data)
#define get_DATA_KEY4_reg   (*((volatile unsigned int*) DATA_KEY4_reg))
#define DATA_KEY4_inst_adr                                                           "0x001B"
#define DATA_KEY4_inst                                                               0x001B
#define DATA_KEY4_data_sc_key4_shift                                                 (0)
#define DATA_KEY4_data_sc_key4_mask                                                  (0xFFFFFFFF)
#define DATA_KEY4_data_sc_key4(data)                                                 (0xFFFFFFFF&((data)<<0))
#define DATA_KEY4_data_sc_key4_src(data)                                             ((0xFFFFFFFF&(data))>>0)
#define DATA_KEY4_get_data_sc_key4(data)                                             ((0xFFFFFFFF&(data))>>0)


#define DATA_KEY5                                                                    0x98055070
#define DATA_KEY5_reg_addr                                                           "0xD8055070"
#define DATA_KEY5_reg                                                                0xD8055070
#define set_DATA_KEY5_reg(data)   (*((volatile unsigned int*) DATA_KEY5_reg)=data)
#define get_DATA_KEY5_reg   (*((volatile unsigned int*) DATA_KEY5_reg))
#define DATA_KEY5_inst_adr                                                           "0x001C"
#define DATA_KEY5_inst                                                               0x001C
#define DATA_KEY5_data_sc_key5_shift                                                 (0)
#define DATA_KEY5_data_sc_key5_mask                                                  (0xFFFFFFFF)
#define DATA_KEY5_data_sc_key5(data)                                                 (0xFFFFFFFF&((data)<<0))
#define DATA_KEY5_data_sc_key5_src(data)                                             ((0xFFFFFFFF&(data))>>0)
#define DATA_KEY5_get_data_sc_key5(data)                                             ((0xFFFFFFFF&(data))>>0)


#define DATA_KEY6                                                                    0x98055074
#define DATA_KEY6_reg_addr                                                           "0xD8055074"
#define DATA_KEY6_reg                                                                0xD8055074
#define set_DATA_KEY6_reg(data)   (*((volatile unsigned int*) DATA_KEY6_reg)=data)
#define get_DATA_KEY6_reg   (*((volatile unsigned int*) DATA_KEY6_reg))
#define DATA_KEY6_inst_adr                                                           "0x001D"
#define DATA_KEY6_inst                                                               0x001D
#define DATA_KEY6_data_sc_key6_shift                                                 (0)
#define DATA_KEY6_data_sc_key6_mask                                                  (0xFFFFFFFF)
#define DATA_KEY6_data_sc_key6(data)                                                 (0xFFFFFFFF&((data)<<0))
#define DATA_KEY6_data_sc_key6_src(data)                                             ((0xFFFFFFFF&(data))>>0)
#define DATA_KEY6_get_data_sc_key6(data)                                             ((0xFFFFFFFF&(data))>>0)


#define DATA_KEY7                                                                    0x98055078
#define DATA_KEY7_reg_addr                                                           "0xD8055078"
#define DATA_KEY7_reg                                                                0xD8055078
#define set_DATA_KEY7_reg(data)   (*((volatile unsigned int*) DATA_KEY7_reg)=data)
#define get_DATA_KEY7_reg   (*((volatile unsigned int*) DATA_KEY7_reg))
#define DATA_KEY7_inst_adr                                                           "0x001E"
#define DATA_KEY7_inst                                                               0x001E
#define DATA_KEY7_data_sc_key7_shift                                                 (0)
#define DATA_KEY7_data_sc_key7_mask                                                  (0xFFFFFFFF)
#define DATA_KEY7_data_sc_key7(data)                                                 (0xFFFFFFFF&((data)<<0))
#define DATA_KEY7_data_sc_key7_src(data)                                             ((0xFFFFFFFF&(data))>>0)
#define DATA_KEY7_get_data_sc_key7(data)                                             ((0xFFFFFFFF&(data))>>0)


#define MONITOR_CTRL                                                                 0x9805507C
#define MONITOR_CTRL_reg_addr                                                        "0xD805507C"
#define MONITOR_CTRL_reg                                                             0xD805507C
#define set_MONITOR_CTRL_reg(data)   (*((volatile unsigned int*) MONITOR_CTRL_reg)=data)
#define get_MONITOR_CTRL_reg   (*((volatile unsigned int*) MONITOR_CTRL_reg))
#define MONITOR_CTRL_inst_adr                                                        "0x001F"
#define MONITOR_CTRL_inst                                                            0x001F
#define MONITOR_CTRL_cmp_sel_shift                                                   (31)
#define MONITOR_CTRL_cmp_sel_mask                                                    (0x80000000)
#define MONITOR_CTRL_cmp_sel(data)                                                   (0x80000000&((data)<<31))
#define MONITOR_CTRL_cmp_sel_src(data)                                               ((0x80000000&(data))>>31)
#define MONITOR_CTRL_get_cmp_sel(data)                                               ((0x80000000&(data))>>31)
#define MONITOR_CTRL_len_ctrl_shift                                                  (28)
#define MONITOR_CTRL_len_ctrl_mask                                                   (0x70000000)
#define MONITOR_CTRL_len_ctrl(data)                                                  (0x70000000&((data)<<28))
#define MONITOR_CTRL_len_ctrl_src(data)                                              ((0x70000000&(data))>>28)
#define MONITOR_CTRL_get_len_ctrl(data)                                              ((0x70000000&(data))>>28)
#define MONITOR_CTRL_rdy_ctrl_shift                                                  (25)
#define MONITOR_CTRL_rdy_ctrl_mask                                                   (0x0E000000)
#define MONITOR_CTRL_rdy_ctrl(data)                                                  (0x0E000000&((data)<<25))
#define MONITOR_CTRL_rdy_ctrl_src(data)                                              ((0x0E000000&(data))>>25)
#define MONITOR_CTRL_get_rdy_ctrl(data)                                              ((0x0E000000&(data))>>25)
#define MONITOR_CTRL_cti_monitor_en_shift                                            (2)
#define MONITOR_CTRL_cti_monitor_en_mask                                             (0x00000004)
#define MONITOR_CTRL_cti_monitor_en(data)                                            (0x00000004&((data)<<2))
#define MONITOR_CTRL_cti_monitor_en_src(data)                                        ((0x00000004&(data))>>2)
#define MONITOR_CTRL_get_cti_monitor_en(data)                                        ((0x00000004&(data))>>2)
#define MONITOR_CTRL_rng_ctrl_lfsr_mode_shift                                        (1)
#define MONITOR_CTRL_rng_ctrl_lfsr_mode_mask                                         (0x00000002)
#define MONITOR_CTRL_rng_ctrl_lfsr_mode(data)                                        (0x00000002&((data)<<1))
#define MONITOR_CTRL_rng_ctrl_lfsr_mode_src(data)                                    ((0x00000002&(data))>>1)
#define MONITOR_CTRL_get_rng_ctrl_lfsr_mode(data)                                    ((0x00000002&(data))>>1)
#define MONITOR_CTRL_fw_rst_shift                                                    (0)
#define MONITOR_CTRL_fw_rst_mask                                                     (0x00000001)
#define MONITOR_CTRL_fw_rst(data)                                                    (0x00000001&((data)<<0))
#define MONITOR_CTRL_fw_rst_src(data)                                                ((0x00000001&(data))>>0)
#define MONITOR_CTRL_get_fw_rst(data)                                                ((0x00000001&(data))>>0)


#endif
