/**************************************************************
// Spec Version                  : 0.3
// Parser Version                : DVR_Parser_6.11(120105)
// CModelGen Version             : 5.1 2012.01.05
// Naming Rule                   :  Register_Name
// Naming Rule                   : Module_Register_Name_reg
// Parse Option                  : Only Parse _op1
// Parse Address Region          : All Address Region 
// Decode bit number             : 12 bits
// Firmware Header Generate Date : 2015/6/15 20:19:38
***************************************************************/


#ifndef _NAT_REG_H_INCLUDED_
#define _NAT_REG_H_INCLUDED_
#ifdef  _NAT_USE_STRUCT
typedef struct 
{
unsigned int     reserved_0:10;
unsigned int     r_drf_pause:2;
unsigned int     r_drf_fail:2;
unsigned int     r_drf_done:2;
unsigned int     reserved_1:12;
unsigned int     r_bisr_fail:1;
unsigned int     r_bisr_done:1;
unsigned int     r_bist_fail:1;
unsigned int     r_bist_done:1;
}BIST_ST;

typedef struct 
{
unsigned int     reserved_0:30;
unsigned int     bisr_rts_n:1;
unsigned int     bist_rts_n:1;
}BIST_RESET;

typedef struct 
{
unsigned int     reserved_0:19;
unsigned int     pg_test_en:1;
unsigned int     reserved_1:2;
unsigned int     hold_remap_swcore:1;
unsigned int     drf_bisr_en:1;
unsigned int     reserved_2:4;
unsigned int     drf_test_resume:2;
unsigned int     drf_bist_en:1;
unsigned int     bist_en:1;
}BIST_EN;

typedef struct 
{
unsigned int     reserved_0:27;
unsigned int     rme:1;
unsigned int     rm_0:4;
}L2D_BIST_RM;

typedef struct 
{
unsigned int     reserved_0:16;
unsigned int     pg_test1_fail:1;
unsigned int     pg_test0_fail:1;
unsigned int     pg_test1_done:1;
unsigned int     pg_test0_done:1;
unsigned int     reserved_1:3;
unsigned int     bisr_repaired:1;
unsigned int     reserved_2:1;
unsigned int     bist_fail3:1;
unsigned int     bist_fail2:1;
unsigned int     bist_done1:1;
unsigned int     reserved_3:1;
unsigned int     bist_fail1:1;
unsigned int     bist_fail0:1;
unsigned int     bist_done0:1;
}L2D_BIST_ST;

typedef struct 
{
unsigned int     reserved_0:24;
unsigned int     drf_fail3:1;
unsigned int     drf_fail2:1;
unsigned int     drf_start_pause1:1;
unsigned int     drf_done1:1;
unsigned int     drf_fail1:1;
unsigned int     drf_fail0:1;
unsigned int     drf_start_pause0:1;
unsigned int     drf_done0:1;
}L2D_DRF_ST;

typedef struct 
{
unsigned int     reserved_0:25;
unsigned int     drf_test_resume1:1;
unsigned int     drf_bist_en1:1;
unsigned int     bist_en1:1;
unsigned int     reserved_1:1;
unsigned int     drf_test_resume0:1;
unsigned int     drf_bist_en0:1;
unsigned int     bist_en0:1;
}L2D_DRF;

typedef struct 
{
unsigned int     reserved_0:28;
unsigned int     ls_3:1;
unsigned int     ls_2:1;
unsigned int     ls_1:1;
unsigned int     ls_0:1;
}L2D_BIST_LS;

typedef struct 
{
unsigned int     dmy:32;
}DMY_A;

typedef struct 
{
unsigned int     dmy:32;
}DMY_B;

typedef struct 
{
unsigned int     reserved_0:20;
unsigned int     dbg_mode:12;
}DEBUG;

typedef struct 
{
unsigned int     reserved_0:19;
unsigned int     sata_phy_mdio_en:1;
unsigned int     reserved_1:2;
unsigned int     serdes_clk_en:1;
unsigned int     sdsif_clk_en:1;
unsigned int     reserved_2:3;
unsigned int     sds_idx:5;
}SERDES;

typedef struct 
{
unsigned int     reserved_0:24;
unsigned int     pwrsave:6;
unsigned int     dying_gasp_sp:1;
unsigned int     en_olt_auto_test:1;
}SWCORE_REG;

typedef struct 
{
unsigned int     reserved_0:30;
unsigned int     txc_inv:1;
unsigned int     gtxc_inv:1;
}GMII_ETN;

typedef struct 
{
unsigned int     reserved_0:27;
unsigned int     pre_write_disable:1;
unsigned int     multireq_disable:1;
unsigned int     int_mask_disable:1;
unsigned int     pre_load:1;
unsigned int     clk_gating_en:1;
}DBUS_WRAP;

typedef struct 
{
unsigned int     reserved_0:31;
unsigned int     swcore:1;
}INT_EN;

typedef struct 
{
unsigned int     reserved_0:25;
unsigned int     ecc_mode0:1;
unsigned int     sds_phy_mode:1;
unsigned int     sds_mode0:5;
}SDS_MODE;

typedef struct 
{
unsigned int     reserved_0:16;
unsigned int     unidir_tx_able_s0:1;
unsigned int     fib_iso_s0:1;
unsigned int     sds_link_ok_sum:1;
unsigned int     sds_link_ok:1;
unsigned int     phy_crs:1;
unsigned int     sds_rx_disable:1;
unsigned int     sds_tx_disable:1;
unsigned int     sds_sdet_out_s0:1;
unsigned int     fib_100_sdet_s0:1;
unsigned int     fib_100_det_s0:1;
unsigned int     fib_eee_ablty_s0:1;
unsigned int     frc_reg4_fib100_s0:1;
unsigned int     frc_reg4_en_s0:1;
unsigned int     sds_iso_on_s0:1;
unsigned int     sds_frc_ld_s0:1;
unsigned int     sds_intb_s0:1;
}SDS_MISC;

typedef struct 
{
unsigned int     reserved_0:20;
unsigned int     phy_eeep_lpi_tx:1;
unsigned int     phy_eeep_lpi_rx:1;
unsigned int     mac_eeep_lpi_tx:1;
unsigned int     mac_eeep_lpi_rx:1;
unsigned int     cmd_stop_gli_clk:1;
unsigned int     phy_sdet:1;
unsigned int     mac_trx_idle:1;
unsigned int     phy_lpi_rx:1;
unsigned int     phy_lpi_tx:1;
unsigned int     mac_lpi_rx:1;
unsigned int     mac_lpi_tx:1;
unsigned int     lpi_gmii_sel:1;
}SDS_LPI;

typedef struct 
{
unsigned int     reserved_0:8;
unsigned int     sds0_link_partner_ablty:12;
unsigned int     sds0_ablty:12;
}SDS_LINK;

#endif

#define BIST_ST                                                                      0x981C9000
#define BIST_ST_reg_addr                                                             "0xD81C9000"
#define BIST_ST_reg                                                                  0xD81C9000
#define set_BIST_ST_reg(data)   (*((volatile unsigned int*) BIST_ST_reg)=data)
#define get_BIST_ST_reg   (*((volatile unsigned int*) BIST_ST_reg))
#define BIST_ST_inst_adr                                                             "0x0000"
#define BIST_ST_inst                                                                 0x0000
#define BIST_ST_r_drf_pause_shift                                                    (20)
#define BIST_ST_r_drf_pause_mask                                                     (0x00300000)
#define BIST_ST_r_drf_pause(data)                                                    (0x00300000&((data)<<20))
#define BIST_ST_r_drf_pause_src(data)                                                ((0x00300000&(data))>>20)
#define BIST_ST_get_r_drf_pause(data)                                                ((0x00300000&(data))>>20)
#define BIST_ST_r_drf_fail_shift                                                     (18)
#define BIST_ST_r_drf_fail_mask                                                      (0x000C0000)
#define BIST_ST_r_drf_fail(data)                                                     (0x000C0000&((data)<<18))
#define BIST_ST_r_drf_fail_src(data)                                                 ((0x000C0000&(data))>>18)
#define BIST_ST_get_r_drf_fail(data)                                                 ((0x000C0000&(data))>>18)
#define BIST_ST_r_drf_done_shift                                                     (16)
#define BIST_ST_r_drf_done_mask                                                      (0x00030000)
#define BIST_ST_r_drf_done(data)                                                     (0x00030000&((data)<<16))
#define BIST_ST_r_drf_done_src(data)                                                 ((0x00030000&(data))>>16)
#define BIST_ST_get_r_drf_done(data)                                                 ((0x00030000&(data))>>16)
#define BIST_ST_r_bisr_fail_shift                                                    (3)
#define BIST_ST_r_bisr_fail_mask                                                     (0x00000008)
#define BIST_ST_r_bisr_fail(data)                                                    (0x00000008&((data)<<3))
#define BIST_ST_r_bisr_fail_src(data)                                                ((0x00000008&(data))>>3)
#define BIST_ST_get_r_bisr_fail(data)                                                ((0x00000008&(data))>>3)
#define BIST_ST_r_bisr_done_shift                                                    (2)
#define BIST_ST_r_bisr_done_mask                                                     (0x00000004)
#define BIST_ST_r_bisr_done(data)                                                    (0x00000004&((data)<<2))
#define BIST_ST_r_bisr_done_src(data)                                                ((0x00000004&(data))>>2)
#define BIST_ST_get_r_bisr_done(data)                                                ((0x00000004&(data))>>2)
#define BIST_ST_r_bist_fail_shift                                                    (1)
#define BIST_ST_r_bist_fail_mask                                                     (0x00000002)
#define BIST_ST_r_bist_fail(data)                                                    (0x00000002&((data)<<1))
#define BIST_ST_r_bist_fail_src(data)                                                ((0x00000002&(data))>>1)
#define BIST_ST_get_r_bist_fail(data)                                                ((0x00000002&(data))>>1)
#define BIST_ST_r_bist_done_shift                                                    (0)
#define BIST_ST_r_bist_done_mask                                                     (0x00000001)
#define BIST_ST_r_bist_done(data)                                                    (0x00000001&((data)<<0))
#define BIST_ST_r_bist_done_src(data)                                                ((0x00000001&(data))>>0)
#define BIST_ST_get_r_bist_done(data)                                                ((0x00000001&(data))>>0)


#define BIST_RESET                                                                   0x981C9004
#define BIST_RESET_reg_addr                                                          "0xD81C9004"
#define BIST_RESET_reg                                                               0xD81C9004
#define set_BIST_RESET_reg(data)   (*((volatile unsigned int*) BIST_RESET_reg)=data)
#define get_BIST_RESET_reg   (*((volatile unsigned int*) BIST_RESET_reg))
#define BIST_RESET_inst_adr                                                          "0x0001"
#define BIST_RESET_inst                                                              0x0001
#define BIST_RESET_bisr_rts_n_shift                                                  (1)
#define BIST_RESET_bisr_rts_n_mask                                                   (0x00000002)
#define BIST_RESET_bisr_rts_n(data)                                                  (0x00000002&((data)<<1))
#define BIST_RESET_bisr_rts_n_src(data)                                              ((0x00000002&(data))>>1)
#define BIST_RESET_get_bisr_rts_n(data)                                              ((0x00000002&(data))>>1)
#define BIST_RESET_bist_rts_n_shift                                                  (0)
#define BIST_RESET_bist_rts_n_mask                                                   (0x00000001)
#define BIST_RESET_bist_rts_n(data)                                                  (0x00000001&((data)<<0))
#define BIST_RESET_bist_rts_n_src(data)                                              ((0x00000001&(data))>>0)
#define BIST_RESET_get_bist_rts_n(data)                                              ((0x00000001&(data))>>0)


#define BIST_EN                                                                      0x981C9008
#define BIST_EN_reg_addr                                                             "0xD81C9008"
#define BIST_EN_reg                                                                  0xD81C9008
#define set_BIST_EN_reg(data)   (*((volatile unsigned int*) BIST_EN_reg)=data)
#define get_BIST_EN_reg   (*((volatile unsigned int*) BIST_EN_reg))
#define BIST_EN_inst_adr                                                             "0x0002"
#define BIST_EN_inst                                                                 0x0002
#define BIST_EN_pg_test_en_shift                                                     (12)
#define BIST_EN_pg_test_en_mask                                                      (0x00001000)
#define BIST_EN_pg_test_en(data)                                                     (0x00001000&((data)<<12))
#define BIST_EN_pg_test_en_src(data)                                                 ((0x00001000&(data))>>12)
#define BIST_EN_get_pg_test_en(data)                                                 ((0x00001000&(data))>>12)
#define BIST_EN_hold_remap_swcore_shift                                              (9)
#define BIST_EN_hold_remap_swcore_mask                                               (0x00000200)
#define BIST_EN_hold_remap_swcore(data)                                              (0x00000200&((data)<<9))
#define BIST_EN_hold_remap_swcore_src(data)                                          ((0x00000200&(data))>>9)
#define BIST_EN_get_hold_remap_swcore(data)                                          ((0x00000200&(data))>>9)
#define BIST_EN_drf_bisr_en_shift                                                    (8)
#define BIST_EN_drf_bisr_en_mask                                                     (0x00000100)
#define BIST_EN_drf_bisr_en(data)                                                    (0x00000100&((data)<<8))
#define BIST_EN_drf_bisr_en_src(data)                                                ((0x00000100&(data))>>8)
#define BIST_EN_get_drf_bisr_en(data)                                                ((0x00000100&(data))>>8)
#define BIST_EN_drf_test_resume_shift                                                (2)
#define BIST_EN_drf_test_resume_mask                                                 (0x0000000C)
#define BIST_EN_drf_test_resume(data)                                                (0x0000000C&((data)<<2))
#define BIST_EN_drf_test_resume_src(data)                                            ((0x0000000C&(data))>>2)
#define BIST_EN_get_drf_test_resume(data)                                            ((0x0000000C&(data))>>2)
#define BIST_EN_drf_bist_en_shift                                                    (1)
#define BIST_EN_drf_bist_en_mask                                                     (0x00000002)
#define BIST_EN_drf_bist_en(data)                                                    (0x00000002&((data)<<1))
#define BIST_EN_drf_bist_en_src(data)                                                ((0x00000002&(data))>>1)
#define BIST_EN_get_drf_bist_en(data)                                                ((0x00000002&(data))>>1)
#define BIST_EN_bist_en_shift                                                        (0)
#define BIST_EN_bist_en_mask                                                         (0x00000001)
#define BIST_EN_bist_en(data)                                                        (0x00000001&((data)<<0))
#define BIST_EN_bist_en_src(data)                                                    ((0x00000001&(data))>>0)
#define BIST_EN_get_bist_en(data)                                                    ((0x00000001&(data))>>0)


#define L2D_BIST_RM                                                                  0x981C9040
#define L2D_BIST_RM_reg_addr                                                         "0xD81C9040"
#define L2D_BIST_RM_reg                                                              0xD81C9040
#define set_L2D_BIST_RM_reg(data)   (*((volatile unsigned int*) L2D_BIST_RM_reg)=data)
#define get_L2D_BIST_RM_reg   (*((volatile unsigned int*) L2D_BIST_RM_reg))
#define L2D_BIST_RM_inst_adr                                                         "0x0010"
#define L2D_BIST_RM_inst                                                             0x0010
#define L2D_BIST_RM_rme_shift                                                        (4)
#define L2D_BIST_RM_rme_mask                                                         (0x00000010)
#define L2D_BIST_RM_rme(data)                                                        (0x00000010&((data)<<4))
#define L2D_BIST_RM_rme_src(data)                                                    ((0x00000010&(data))>>4)
#define L2D_BIST_RM_get_rme(data)                                                    ((0x00000010&(data))>>4)
#define L2D_BIST_RM_rm_0_shift                                                       (0)
#define L2D_BIST_RM_rm_0_mask                                                        (0x0000000F)
#define L2D_BIST_RM_rm_0(data)                                                       (0x0000000F&((data)<<0))
#define L2D_BIST_RM_rm_0_src(data)                                                   ((0x0000000F&(data))>>0)
#define L2D_BIST_RM_get_rm_0(data)                                                   ((0x0000000F&(data))>>0)


#define L2D_BIST_ST                                                                  0x981C9044
#define L2D_BIST_ST_reg_addr                                                         "0xD81C9044"
#define L2D_BIST_ST_reg                                                              0xD81C9044
#define set_L2D_BIST_ST_reg(data)   (*((volatile unsigned int*) L2D_BIST_ST_reg)=data)
#define get_L2D_BIST_ST_reg   (*((volatile unsigned int*) L2D_BIST_ST_reg))
#define L2D_BIST_ST_inst_adr                                                         "0x0011"
#define L2D_BIST_ST_inst                                                             0x0011
#define L2D_BIST_ST_pg_test1_fail_shift                                              (15)
#define L2D_BIST_ST_pg_test1_fail_mask                                               (0x00008000)
#define L2D_BIST_ST_pg_test1_fail(data)                                              (0x00008000&((data)<<15))
#define L2D_BIST_ST_pg_test1_fail_src(data)                                          ((0x00008000&(data))>>15)
#define L2D_BIST_ST_get_pg_test1_fail(data)                                          ((0x00008000&(data))>>15)
#define L2D_BIST_ST_pg_test0_fail_shift                                              (14)
#define L2D_BIST_ST_pg_test0_fail_mask                                               (0x00004000)
#define L2D_BIST_ST_pg_test0_fail(data)                                              (0x00004000&((data)<<14))
#define L2D_BIST_ST_pg_test0_fail_src(data)                                          ((0x00004000&(data))>>14)
#define L2D_BIST_ST_get_pg_test0_fail(data)                                          ((0x00004000&(data))>>14)
#define L2D_BIST_ST_pg_test1_done_shift                                              (13)
#define L2D_BIST_ST_pg_test1_done_mask                                               (0x00002000)
#define L2D_BIST_ST_pg_test1_done(data)                                              (0x00002000&((data)<<13))
#define L2D_BIST_ST_pg_test1_done_src(data)                                          ((0x00002000&(data))>>13)
#define L2D_BIST_ST_get_pg_test1_done(data)                                          ((0x00002000&(data))>>13)
#define L2D_BIST_ST_pg_test0_done_shift                                              (12)
#define L2D_BIST_ST_pg_test0_done_mask                                               (0x00001000)
#define L2D_BIST_ST_pg_test0_done(data)                                              (0x00001000&((data)<<12))
#define L2D_BIST_ST_pg_test0_done_src(data)                                          ((0x00001000&(data))>>12)
#define L2D_BIST_ST_get_pg_test0_done(data)                                          ((0x00001000&(data))>>12)
#define L2D_BIST_ST_bisr_repaired_shift                                              (8)
#define L2D_BIST_ST_bisr_repaired_mask                                               (0x00000100)
#define L2D_BIST_ST_bisr_repaired(data)                                              (0x00000100&((data)<<8))
#define L2D_BIST_ST_bisr_repaired_src(data)                                          ((0x00000100&(data))>>8)
#define L2D_BIST_ST_get_bisr_repaired(data)                                          ((0x00000100&(data))>>8)
#define L2D_BIST_ST_bist_fail3_shift                                                 (6)
#define L2D_BIST_ST_bist_fail3_mask                                                  (0x00000040)
#define L2D_BIST_ST_bist_fail3(data)                                                 (0x00000040&((data)<<6))
#define L2D_BIST_ST_bist_fail3_src(data)                                             ((0x00000040&(data))>>6)
#define L2D_BIST_ST_get_bist_fail3(data)                                             ((0x00000040&(data))>>6)
#define L2D_BIST_ST_bist_fail2_shift                                                 (5)
#define L2D_BIST_ST_bist_fail2_mask                                                  (0x00000020)
#define L2D_BIST_ST_bist_fail2(data)                                                 (0x00000020&((data)<<5))
#define L2D_BIST_ST_bist_fail2_src(data)                                             ((0x00000020&(data))>>5)
#define L2D_BIST_ST_get_bist_fail2(data)                                             ((0x00000020&(data))>>5)
#define L2D_BIST_ST_bist_done1_shift                                                 (4)
#define L2D_BIST_ST_bist_done1_mask                                                  (0x00000010)
#define L2D_BIST_ST_bist_done1(data)                                                 (0x00000010&((data)<<4))
#define L2D_BIST_ST_bist_done1_src(data)                                             ((0x00000010&(data))>>4)
#define L2D_BIST_ST_get_bist_done1(data)                                             ((0x00000010&(data))>>4)
#define L2D_BIST_ST_bist_fail1_shift                                                 (2)
#define L2D_BIST_ST_bist_fail1_mask                                                  (0x00000004)
#define L2D_BIST_ST_bist_fail1(data)                                                 (0x00000004&((data)<<2))
#define L2D_BIST_ST_bist_fail1_src(data)                                             ((0x00000004&(data))>>2)
#define L2D_BIST_ST_get_bist_fail1(data)                                             ((0x00000004&(data))>>2)
#define L2D_BIST_ST_bist_fail0_shift                                                 (1)
#define L2D_BIST_ST_bist_fail0_mask                                                  (0x00000002)
#define L2D_BIST_ST_bist_fail0(data)                                                 (0x00000002&((data)<<1))
#define L2D_BIST_ST_bist_fail0_src(data)                                             ((0x00000002&(data))>>1)
#define L2D_BIST_ST_get_bist_fail0(data)                                             ((0x00000002&(data))>>1)
#define L2D_BIST_ST_bist_done0_shift                                                 (0)
#define L2D_BIST_ST_bist_done0_mask                                                  (0x00000001)
#define L2D_BIST_ST_bist_done0(data)                                                 (0x00000001&((data)<<0))
#define L2D_BIST_ST_bist_done0_src(data)                                             ((0x00000001&(data))>>0)
#define L2D_BIST_ST_get_bist_done0(data)                                             ((0x00000001&(data))>>0)


#define L2D_DRF_ST                                                                   0x981C9048
#define L2D_DRF_ST_reg_addr                                                          "0xD81C9048"
#define L2D_DRF_ST_reg                                                               0xD81C9048
#define set_L2D_DRF_ST_reg(data)   (*((volatile unsigned int*) L2D_DRF_ST_reg)=data)
#define get_L2D_DRF_ST_reg   (*((volatile unsigned int*) L2D_DRF_ST_reg))
#define L2D_DRF_ST_inst_adr                                                          "0x0012"
#define L2D_DRF_ST_inst                                                              0x0012
#define L2D_DRF_ST_drf_fail3_shift                                                   (7)
#define L2D_DRF_ST_drf_fail3_mask                                                    (0x00000080)
#define L2D_DRF_ST_drf_fail3(data)                                                   (0x00000080&((data)<<7))
#define L2D_DRF_ST_drf_fail3_src(data)                                               ((0x00000080&(data))>>7)
#define L2D_DRF_ST_get_drf_fail3(data)                                               ((0x00000080&(data))>>7)
#define L2D_DRF_ST_drf_fail2_shift                                                   (6)
#define L2D_DRF_ST_drf_fail2_mask                                                    (0x00000040)
#define L2D_DRF_ST_drf_fail2(data)                                                   (0x00000040&((data)<<6))
#define L2D_DRF_ST_drf_fail2_src(data)                                               ((0x00000040&(data))>>6)
#define L2D_DRF_ST_get_drf_fail2(data)                                               ((0x00000040&(data))>>6)
#define L2D_DRF_ST_drf_start_pause1_shift                                            (5)
#define L2D_DRF_ST_drf_start_pause1_mask                                             (0x00000020)
#define L2D_DRF_ST_drf_start_pause1(data)                                            (0x00000020&((data)<<5))
#define L2D_DRF_ST_drf_start_pause1_src(data)                                        ((0x00000020&(data))>>5)
#define L2D_DRF_ST_get_drf_start_pause1(data)                                        ((0x00000020&(data))>>5)
#define L2D_DRF_ST_drf_done1_shift                                                   (4)
#define L2D_DRF_ST_drf_done1_mask                                                    (0x00000010)
#define L2D_DRF_ST_drf_done1(data)                                                   (0x00000010&((data)<<4))
#define L2D_DRF_ST_drf_done1_src(data)                                               ((0x00000010&(data))>>4)
#define L2D_DRF_ST_get_drf_done1(data)                                               ((0x00000010&(data))>>4)
#define L2D_DRF_ST_drf_fail1_shift                                                   (3)
#define L2D_DRF_ST_drf_fail1_mask                                                    (0x00000008)
#define L2D_DRF_ST_drf_fail1(data)                                                   (0x00000008&((data)<<3))
#define L2D_DRF_ST_drf_fail1_src(data)                                               ((0x00000008&(data))>>3)
#define L2D_DRF_ST_get_drf_fail1(data)                                               ((0x00000008&(data))>>3)
#define L2D_DRF_ST_drf_fail0_shift                                                   (2)
#define L2D_DRF_ST_drf_fail0_mask                                                    (0x00000004)
#define L2D_DRF_ST_drf_fail0(data)                                                   (0x00000004&((data)<<2))
#define L2D_DRF_ST_drf_fail0_src(data)                                               ((0x00000004&(data))>>2)
#define L2D_DRF_ST_get_drf_fail0(data)                                               ((0x00000004&(data))>>2)
#define L2D_DRF_ST_drf_start_pause0_shift                                            (1)
#define L2D_DRF_ST_drf_start_pause0_mask                                             (0x00000002)
#define L2D_DRF_ST_drf_start_pause0(data)                                            (0x00000002&((data)<<1))
#define L2D_DRF_ST_drf_start_pause0_src(data)                                        ((0x00000002&(data))>>1)
#define L2D_DRF_ST_get_drf_start_pause0(data)                                        ((0x00000002&(data))>>1)
#define L2D_DRF_ST_drf_done0_shift                                                   (0)
#define L2D_DRF_ST_drf_done0_mask                                                    (0x00000001)
#define L2D_DRF_ST_drf_done0(data)                                                   (0x00000001&((data)<<0))
#define L2D_DRF_ST_drf_done0_src(data)                                               ((0x00000001&(data))>>0)
#define L2D_DRF_ST_get_drf_done0(data)                                               ((0x00000001&(data))>>0)


#define L2D_DRF                                                                      0x981C904c
#define L2D_DRF_reg_addr                                                             "0xD81C904C"
#define L2D_DRF_reg                                                                  0xD81C904C
#define set_L2D_DRF_reg(data)   (*((volatile unsigned int*) L2D_DRF_reg)=data)
#define get_L2D_DRF_reg   (*((volatile unsigned int*) L2D_DRF_reg))
#define L2D_DRF_inst_adr                                                             "0x0013"
#define L2D_DRF_inst                                                                 0x0013
#define L2D_DRF_drf_test_resume1_shift                                               (6)
#define L2D_DRF_drf_test_resume1_mask                                                (0x00000040)
#define L2D_DRF_drf_test_resume1(data)                                               (0x00000040&((data)<<6))
#define L2D_DRF_drf_test_resume1_src(data)                                           ((0x00000040&(data))>>6)
#define L2D_DRF_get_drf_test_resume1(data)                                           ((0x00000040&(data))>>6)
#define L2D_DRF_drf_bist_en1_shift                                                   (5)
#define L2D_DRF_drf_bist_en1_mask                                                    (0x00000020)
#define L2D_DRF_drf_bist_en1(data)                                                   (0x00000020&((data)<<5))
#define L2D_DRF_drf_bist_en1_src(data)                                               ((0x00000020&(data))>>5)
#define L2D_DRF_get_drf_bist_en1(data)                                               ((0x00000020&(data))>>5)
#define L2D_DRF_bist_en1_shift                                                       (4)
#define L2D_DRF_bist_en1_mask                                                        (0x00000010)
#define L2D_DRF_bist_en1(data)                                                       (0x00000010&((data)<<4))
#define L2D_DRF_bist_en1_src(data)                                                   ((0x00000010&(data))>>4)
#define L2D_DRF_get_bist_en1(data)                                                   ((0x00000010&(data))>>4)
#define L2D_DRF_drf_test_resume0_shift                                               (2)
#define L2D_DRF_drf_test_resume0_mask                                                (0x00000004)
#define L2D_DRF_drf_test_resume0(data)                                               (0x00000004&((data)<<2))
#define L2D_DRF_drf_test_resume0_src(data)                                           ((0x00000004&(data))>>2)
#define L2D_DRF_get_drf_test_resume0(data)                                           ((0x00000004&(data))>>2)
#define L2D_DRF_drf_bist_en0_shift                                                   (1)
#define L2D_DRF_drf_bist_en0_mask                                                    (0x00000002)
#define L2D_DRF_drf_bist_en0(data)                                                   (0x00000002&((data)<<1))
#define L2D_DRF_drf_bist_en0_src(data)                                               ((0x00000002&(data))>>1)
#define L2D_DRF_get_drf_bist_en0(data)                                               ((0x00000002&(data))>>1)
#define L2D_DRF_bist_en0_shift                                                       (0)
#define L2D_DRF_bist_en0_mask                                                        (0x00000001)
#define L2D_DRF_bist_en0(data)                                                       (0x00000001&((data)<<0))
#define L2D_DRF_bist_en0_src(data)                                                   ((0x00000001&(data))>>0)
#define L2D_DRF_get_bist_en0(data)                                                   ((0x00000001&(data))>>0)


#define L2D_BIST_LS                                                                  0x981C9050
#define L2D_BIST_LS_reg_addr                                                         "0xD81C9050"
#define L2D_BIST_LS_reg                                                              0xD81C9050
#define set_L2D_BIST_LS_reg(data)   (*((volatile unsigned int*) L2D_BIST_LS_reg)=data)
#define get_L2D_BIST_LS_reg   (*((volatile unsigned int*) L2D_BIST_LS_reg))
#define L2D_BIST_LS_inst_adr                                                         "0x0014"
#define L2D_BIST_LS_inst                                                             0x0014
#define L2D_BIST_LS_ls_3_shift                                                       (3)
#define L2D_BIST_LS_ls_3_mask                                                        (0x00000008)
#define L2D_BIST_LS_ls_3(data)                                                       (0x00000008&((data)<<3))
#define L2D_BIST_LS_ls_3_src(data)                                                   ((0x00000008&(data))>>3)
#define L2D_BIST_LS_get_ls_3(data)                                                   ((0x00000008&(data))>>3)
#define L2D_BIST_LS_ls_2_shift                                                       (2)
#define L2D_BIST_LS_ls_2_mask                                                        (0x00000004)
#define L2D_BIST_LS_ls_2(data)                                                       (0x00000004&((data)<<2))
#define L2D_BIST_LS_ls_2_src(data)                                                   ((0x00000004&(data))>>2)
#define L2D_BIST_LS_get_ls_2(data)                                                   ((0x00000004&(data))>>2)
#define L2D_BIST_LS_ls_1_shift                                                       (1)
#define L2D_BIST_LS_ls_1_mask                                                        (0x00000002)
#define L2D_BIST_LS_ls_1(data)                                                       (0x00000002&((data)<<1))
#define L2D_BIST_LS_ls_1_src(data)                                                   ((0x00000002&(data))>>1)
#define L2D_BIST_LS_get_ls_1(data)                                                   ((0x00000002&(data))>>1)
#define L2D_BIST_LS_ls_0_shift                                                       (0)
#define L2D_BIST_LS_ls_0_mask                                                        (0x00000001)
#define L2D_BIST_LS_ls_0(data)                                                       (0x00000001&((data)<<0))
#define L2D_BIST_LS_ls_0_src(data)                                                   ((0x00000001&(data))>>0)
#define L2D_BIST_LS_get_ls_0(data)                                                   ((0x00000001&(data))>>0)


#define DMY_A                                                                        0x981C9100
#define DMY_A_reg_addr                                                               "0xD81C9100"
#define DMY_A_reg                                                                    0xD81C9100
#define set_DMY_A_reg(data)   (*((volatile unsigned int*) DMY_A_reg)=data)
#define get_DMY_A_reg   (*((volatile unsigned int*) DMY_A_reg))
#define DMY_A_inst_adr                                                               "0x0040"
#define DMY_A_inst                                                                   0x0040
#define DMY_A_dmy_shift                                                              (0)
#define DMY_A_dmy_mask                                                               (0xFFFFFFFF)
#define DMY_A_dmy(data)                                                              (0xFFFFFFFF&((data)<<0))
#define DMY_A_dmy_src(data)                                                          ((0xFFFFFFFF&(data))>>0)
#define DMY_A_get_dmy(data)                                                          ((0xFFFFFFFF&(data))>>0)


#define DMY_B                                                                        0x981C9104
#define DMY_B_reg_addr                                                               "0xD81C9104"
#define DMY_B_reg                                                                    0xD81C9104
#define set_DMY_B_reg(data)   (*((volatile unsigned int*) DMY_B_reg)=data)
#define get_DMY_B_reg   (*((volatile unsigned int*) DMY_B_reg))
#define DMY_B_inst_adr                                                               "0x0041"
#define DMY_B_inst                                                                   0x0041
#define DMY_B_dmy_shift                                                              (0)
#define DMY_B_dmy_mask                                                               (0xFFFFFFFF)
#define DMY_B_dmy(data)                                                              (0xFFFFFFFF&((data)<<0))
#define DMY_B_dmy_src(data)                                                          ((0xFFFFFFFF&(data))>>0)
#define DMY_B_get_dmy(data)                                                          ((0xFFFFFFFF&(data))>>0)


#define DEBUG                                                                        0x981C9108
#define DEBUG_reg_addr                                                               "0xD81C9108"
#define DEBUG_reg                                                                    0xD81C9108
#define set_DEBUG_reg(data)   (*((volatile unsigned int*) DEBUG_reg)=data)
#define get_DEBUG_reg   (*((volatile unsigned int*) DEBUG_reg))
#define DEBUG_inst_adr                                                               "0x0042"
#define DEBUG_inst                                                                   0x0042
#define DEBUG_dbg_mode_shift                                                         (0)
#define DEBUG_dbg_mode_mask                                                          (0x00000FFF)
#define DEBUG_dbg_mode(data)                                                         (0x00000FFF&((data)<<0))
#define DEBUG_dbg_mode_src(data)                                                     ((0x00000FFF&(data))>>0)
#define DEBUG_get_dbg_mode(data)                                                     ((0x00000FFF&(data))>>0)


#define SERDES                                                                       0x981C910C
#define SERDES_reg_addr                                                              "0xD81C910C"
#define SERDES_reg                                                                   0xD81C910C
#define set_SERDES_reg(data)   (*((volatile unsigned int*) SERDES_reg)=data)
#define get_SERDES_reg   (*((volatile unsigned int*) SERDES_reg))
#define SERDES_inst_adr                                                              "0x0043"
#define SERDES_inst                                                                  0x0043
#define SERDES_sata_phy_mdio_en_shift                                                (12)
#define SERDES_sata_phy_mdio_en_mask                                                 (0x00001000)
#define SERDES_sata_phy_mdio_en(data)                                                (0x00001000&((data)<<12))
#define SERDES_sata_phy_mdio_en_src(data)                                            ((0x00001000&(data))>>12)
#define SERDES_get_sata_phy_mdio_en(data)                                            ((0x00001000&(data))>>12)
#define SERDES_serdes_clk_en_shift                                                   (9)
#define SERDES_serdes_clk_en_mask                                                    (0x00000200)
#define SERDES_serdes_clk_en(data)                                                   (0x00000200&((data)<<9))
#define SERDES_serdes_clk_en_src(data)                                               ((0x00000200&(data))>>9)
#define SERDES_get_serdes_clk_en(data)                                               ((0x00000200&(data))>>9)
#define SERDES_sdsif_clk_en_shift                                                    (8)
#define SERDES_sdsif_clk_en_mask                                                     (0x00000100)
#define SERDES_sdsif_clk_en(data)                                                    (0x00000100&((data)<<8))
#define SERDES_sdsif_clk_en_src(data)                                                ((0x00000100&(data))>>8)
#define SERDES_get_sdsif_clk_en(data)                                                ((0x00000100&(data))>>8)
#define SERDES_sds_idx_shift                                                         (0)
#define SERDES_sds_idx_mask                                                          (0x0000001F)
#define SERDES_sds_idx(data)                                                         (0x0000001F&((data)<<0))
#define SERDES_sds_idx_src(data)                                                     ((0x0000001F&(data))>>0)
#define SERDES_get_sds_idx(data)                                                     ((0x0000001F&(data))>>0)


#define SWCORE_REG                                                                   0x981C9110
#define SWCORE_REG_reg_addr                                                          "0xD81C9110"
#define SWCORE_REG_reg                                                               0xD81C9110
#define set_SWCORE_REG_reg(data)   (*((volatile unsigned int*) SWCORE_REG_reg)=data)
#define get_SWCORE_REG_reg   (*((volatile unsigned int*) SWCORE_REG_reg))
#define SWCORE_REG_inst_adr                                                          "0x0044"
#define SWCORE_REG_inst                                                              0x0044
#define SWCORE_REG_pwrsave_shift                                                     (2)
#define SWCORE_REG_pwrsave_mask                                                      (0x000000FC)
#define SWCORE_REG_pwrsave(data)                                                     (0x000000FC&((data)<<2))
#define SWCORE_REG_pwrsave_src(data)                                                 ((0x000000FC&(data))>>2)
#define SWCORE_REG_get_pwrsave(data)                                                 ((0x000000FC&(data))>>2)
#define SWCORE_REG_dying_gasp_sp_shift                                               (1)
#define SWCORE_REG_dying_gasp_sp_mask                                                (0x00000002)
#define SWCORE_REG_dying_gasp_sp(data)                                               (0x00000002&((data)<<1))
#define SWCORE_REG_dying_gasp_sp_src(data)                                           ((0x00000002&(data))>>1)
#define SWCORE_REG_get_dying_gasp_sp(data)                                           ((0x00000002&(data))>>1)
#define SWCORE_REG_en_olt_auto_test_shift                                            (0)
#define SWCORE_REG_en_olt_auto_test_mask                                             (0x00000001)
#define SWCORE_REG_en_olt_auto_test(data)                                            (0x00000001&((data)<<0))
#define SWCORE_REG_en_olt_auto_test_src(data)                                        ((0x00000001&(data))>>0)
#define SWCORE_REG_get_en_olt_auto_test(data)                                        ((0x00000001&(data))>>0)


#define GMII_ETN                                                                     0x981C9114
#define GMII_ETN_reg_addr                                                            "0xD81C9114"
#define GMII_ETN_reg                                                                 0xD81C9114
#define set_GMII_ETN_reg(data)   (*((volatile unsigned int*) GMII_ETN_reg)=data)
#define get_GMII_ETN_reg   (*((volatile unsigned int*) GMII_ETN_reg))
#define GMII_ETN_inst_adr                                                            "0x0045"
#define GMII_ETN_inst                                                                0x0045
#define GMII_ETN_txc_inv_shift                                                       (1)
#define GMII_ETN_txc_inv_mask                                                        (0x00000002)
#define GMII_ETN_txc_inv(data)                                                       (0x00000002&((data)<<1))
#define GMII_ETN_txc_inv_src(data)                                                   ((0x00000002&(data))>>1)
#define GMII_ETN_get_txc_inv(data)                                                   ((0x00000002&(data))>>1)
#define GMII_ETN_gtxc_inv_shift                                                      (0)
#define GMII_ETN_gtxc_inv_mask                                                       (0x00000001)
#define GMII_ETN_gtxc_inv(data)                                                      (0x00000001&((data)<<0))
#define GMII_ETN_gtxc_inv_src(data)                                                  ((0x00000001&(data))>>0)
#define GMII_ETN_get_gtxc_inv(data)                                                  ((0x00000001&(data))>>0)


#define DBUS_WRAP                                                                    0x981C9118
#define DBUS_WRAP_reg_addr                                                           "0xD81C9118"
#define DBUS_WRAP_reg                                                                0xD81C9118
#define set_DBUS_WRAP_reg(data)   (*((volatile unsigned int*) DBUS_WRAP_reg)=data)
#define get_DBUS_WRAP_reg   (*((volatile unsigned int*) DBUS_WRAP_reg))
#define DBUS_WRAP_inst_adr                                                           "0x0046"
#define DBUS_WRAP_inst                                                               0x0046
#define DBUS_WRAP_pre_write_disable_shift                                            (4)
#define DBUS_WRAP_pre_write_disable_mask                                             (0x00000010)
#define DBUS_WRAP_pre_write_disable(data)                                            (0x00000010&((data)<<4))
#define DBUS_WRAP_pre_write_disable_src(data)                                        ((0x00000010&(data))>>4)
#define DBUS_WRAP_get_pre_write_disable(data)                                        ((0x00000010&(data))>>4)
#define DBUS_WRAP_multireq_disable_shift                                             (3)
#define DBUS_WRAP_multireq_disable_mask                                              (0x00000008)
#define DBUS_WRAP_multireq_disable(data)                                             (0x00000008&((data)<<3))
#define DBUS_WRAP_multireq_disable_src(data)                                         ((0x00000008&(data))>>3)
#define DBUS_WRAP_get_multireq_disable(data)                                         ((0x00000008&(data))>>3)
#define DBUS_WRAP_int_mask_disable_shift                                             (2)
#define DBUS_WRAP_int_mask_disable_mask                                              (0x00000004)
#define DBUS_WRAP_int_mask_disable(data)                                             (0x00000004&((data)<<2))
#define DBUS_WRAP_int_mask_disable_src(data)                                         ((0x00000004&(data))>>2)
#define DBUS_WRAP_get_int_mask_disable(data)                                         ((0x00000004&(data))>>2)
#define DBUS_WRAP_pre_load_shift                                                     (1)
#define DBUS_WRAP_pre_load_mask                                                      (0x00000002)
#define DBUS_WRAP_pre_load(data)                                                     (0x00000002&((data)<<1))
#define DBUS_WRAP_pre_load_src(data)                                                 ((0x00000002&(data))>>1)
#define DBUS_WRAP_get_pre_load(data)                                                 ((0x00000002&(data))>>1)
#define DBUS_WRAP_clk_gating_en_shift                                                (0)
#define DBUS_WRAP_clk_gating_en_mask                                                 (0x00000001)
#define DBUS_WRAP_clk_gating_en(data)                                                (0x00000001&((data)<<0))
#define DBUS_WRAP_clk_gating_en_src(data)                                            ((0x00000001&(data))>>0)
#define DBUS_WRAP_get_clk_gating_en(data)                                            ((0x00000001&(data))>>0)


#define INT_EN                                                                       0x981C911C
#define INT_EN_reg_addr                                                              "0xD81C911C"
#define INT_EN_reg                                                                   0xD81C911C
#define set_INT_EN_reg(data)   (*((volatile unsigned int*) INT_EN_reg)=data)
#define get_INT_EN_reg   (*((volatile unsigned int*) INT_EN_reg))
#define INT_EN_inst_adr                                                              "0x0047"
#define INT_EN_inst                                                                  0x0047
#define INT_EN_swcore_shift                                                          (0)
#define INT_EN_swcore_mask                                                           (0x00000001)
#define INT_EN_swcore(data)                                                          (0x00000001&((data)<<0))
#define INT_EN_swcore_src(data)                                                      ((0x00000001&(data))>>0)
#define INT_EN_get_swcore(data)                                                      ((0x00000001&(data))>>0)


#define SDS_MODE                                                                     0x981C9800
#define SDS_MODE_reg_addr                                                            "0xD81C9800"
#define SDS_MODE_reg                                                                 0xD81C9800
#define set_SDS_MODE_reg(data)   (*((volatile unsigned int*) SDS_MODE_reg)=data)
#define get_SDS_MODE_reg   (*((volatile unsigned int*) SDS_MODE_reg))
#define SDS_MODE_inst_adr                                                            "0x0000"
#define SDS_MODE_inst                                                                0x0000
#define SDS_MODE_ecc_mode0_shift                                                     (6)
#define SDS_MODE_ecc_mode0_mask                                                      (0x00000040)
#define SDS_MODE_ecc_mode0(data)                                                     (0x00000040&((data)<<6))
#define SDS_MODE_ecc_mode0_src(data)                                                 ((0x00000040&(data))>>6)
#define SDS_MODE_get_ecc_mode0(data)                                                 ((0x00000040&(data))>>6)
#define SDS_MODE_sds_phy_mode_shift                                                  (5)
#define SDS_MODE_sds_phy_mode_mask                                                   (0x00000020)
#define SDS_MODE_sds_phy_mode(data)                                                  (0x00000020&((data)<<5))
#define SDS_MODE_sds_phy_mode_src(data)                                              ((0x00000020&(data))>>5)
#define SDS_MODE_get_sds_phy_mode(data)                                              ((0x00000020&(data))>>5)
#define SDS_MODE_sds_mode0_shift                                                     (0)
#define SDS_MODE_sds_mode0_mask                                                      (0x0000001F)
#define SDS_MODE_sds_mode0(data)                                                     (0x0000001F&((data)<<0))
#define SDS_MODE_sds_mode0_src(data)                                                 ((0x0000001F&(data))>>0)
#define SDS_MODE_get_sds_mode0(data)                                                 ((0x0000001F&(data))>>0)


#define SDS_MISC                                                                     0x981C9804
#define SDS_MISC_reg_addr                                                            "0xD81C9804"
#define SDS_MISC_reg                                                                 0xD81C9804
#define set_SDS_MISC_reg(data)   (*((volatile unsigned int*) SDS_MISC_reg)=data)
#define get_SDS_MISC_reg   (*((volatile unsigned int*) SDS_MISC_reg))
#define SDS_MISC_inst_adr                                                            "0x0001"
#define SDS_MISC_inst                                                                0x0001
#define SDS_MISC_unidir_tx_able_s0_shift                                             (15)
#define SDS_MISC_unidir_tx_able_s0_mask                                              (0x00008000)
#define SDS_MISC_unidir_tx_able_s0(data)                                             (0x00008000&((data)<<15))
#define SDS_MISC_unidir_tx_able_s0_src(data)                                         ((0x00008000&(data))>>15)
#define SDS_MISC_get_unidir_tx_able_s0(data)                                         ((0x00008000&(data))>>15)
#define SDS_MISC_fib_iso_s0_shift                                                    (14)
#define SDS_MISC_fib_iso_s0_mask                                                     (0x00004000)
#define SDS_MISC_fib_iso_s0(data)                                                    (0x00004000&((data)<<14))
#define SDS_MISC_fib_iso_s0_src(data)                                                ((0x00004000&(data))>>14)
#define SDS_MISC_get_fib_iso_s0(data)                                                ((0x00004000&(data))>>14)
#define SDS_MISC_sds_link_ok_sum_shift                                               (13)
#define SDS_MISC_sds_link_ok_sum_mask                                                (0x00002000)
#define SDS_MISC_sds_link_ok_sum(data)                                               (0x00002000&((data)<<13))
#define SDS_MISC_sds_link_ok_sum_src(data)                                           ((0x00002000&(data))>>13)
#define SDS_MISC_get_sds_link_ok_sum(data)                                           ((0x00002000&(data))>>13)
#define SDS_MISC_sds_link_ok_shift                                                   (12)
#define SDS_MISC_sds_link_ok_mask                                                    (0x00001000)
#define SDS_MISC_sds_link_ok(data)                                                   (0x00001000&((data)<<12))
#define SDS_MISC_sds_link_ok_src(data)                                               ((0x00001000&(data))>>12)
#define SDS_MISC_get_sds_link_ok(data)                                               ((0x00001000&(data))>>12)
#define SDS_MISC_phy_crs_shift                                                       (11)
#define SDS_MISC_phy_crs_mask                                                        (0x00000800)
#define SDS_MISC_phy_crs(data)                                                       (0x00000800&((data)<<11))
#define SDS_MISC_phy_crs_src(data)                                                   ((0x00000800&(data))>>11)
#define SDS_MISC_get_phy_crs(data)                                                   ((0x00000800&(data))>>11)
#define SDS_MISC_sds_rx_disable_shift                                                (10)
#define SDS_MISC_sds_rx_disable_mask                                                 (0x00000400)
#define SDS_MISC_sds_rx_disable(data)                                                (0x00000400&((data)<<10))
#define SDS_MISC_sds_rx_disable_src(data)                                            ((0x00000400&(data))>>10)
#define SDS_MISC_get_sds_rx_disable(data)                                            ((0x00000400&(data))>>10)
#define SDS_MISC_sds_tx_disable_shift                                                (9)
#define SDS_MISC_sds_tx_disable_mask                                                 (0x00000200)
#define SDS_MISC_sds_tx_disable(data)                                                (0x00000200&((data)<<9))
#define SDS_MISC_sds_tx_disable_src(data)                                            ((0x00000200&(data))>>9)
#define SDS_MISC_get_sds_tx_disable(data)                                            ((0x00000200&(data))>>9)
#define SDS_MISC_sds_sdet_out_s0_shift                                               (8)
#define SDS_MISC_sds_sdet_out_s0_mask                                                (0x00000100)
#define SDS_MISC_sds_sdet_out_s0(data)                                               (0x00000100&((data)<<8))
#define SDS_MISC_sds_sdet_out_s0_src(data)                                           ((0x00000100&(data))>>8)
#define SDS_MISC_get_sds_sdet_out_s0(data)                                           ((0x00000100&(data))>>8)
#define SDS_MISC_fib_100_sdet_s0_shift                                               (7)
#define SDS_MISC_fib_100_sdet_s0_mask                                                (0x00000080)
#define SDS_MISC_fib_100_sdet_s0(data)                                               (0x00000080&((data)<<7))
#define SDS_MISC_fib_100_sdet_s0_src(data)                                           ((0x00000080&(data))>>7)
#define SDS_MISC_get_fib_100_sdet_s0(data)                                           ((0x00000080&(data))>>7)
#define SDS_MISC_fib_100_det_s0_shift                                                (6)
#define SDS_MISC_fib_100_det_s0_mask                                                 (0x00000040)
#define SDS_MISC_fib_100_det_s0(data)                                                (0x00000040&((data)<<6))
#define SDS_MISC_fib_100_det_s0_src(data)                                            ((0x00000040&(data))>>6)
#define SDS_MISC_get_fib_100_det_s0(data)                                            ((0x00000040&(data))>>6)
#define SDS_MISC_fib_eee_ablty_s0_shift                                              (5)
#define SDS_MISC_fib_eee_ablty_s0_mask                                               (0x00000020)
#define SDS_MISC_fib_eee_ablty_s0(data)                                              (0x00000020&((data)<<5))
#define SDS_MISC_fib_eee_ablty_s0_src(data)                                          ((0x00000020&(data))>>5)
#define SDS_MISC_get_fib_eee_ablty_s0(data)                                          ((0x00000020&(data))>>5)
#define SDS_MISC_frc_reg4_fib100_s0_shift                                            (4)
#define SDS_MISC_frc_reg4_fib100_s0_mask                                             (0x00000010)
#define SDS_MISC_frc_reg4_fib100_s0(data)                                            (0x00000010&((data)<<4))
#define SDS_MISC_frc_reg4_fib100_s0_src(data)                                        ((0x00000010&(data))>>4)
#define SDS_MISC_get_frc_reg4_fib100_s0(data)                                        ((0x00000010&(data))>>4)
#define SDS_MISC_frc_reg4_en_s0_shift                                                (3)
#define SDS_MISC_frc_reg4_en_s0_mask                                                 (0x00000008)
#define SDS_MISC_frc_reg4_en_s0(data)                                                (0x00000008&((data)<<3))
#define SDS_MISC_frc_reg4_en_s0_src(data)                                            ((0x00000008&(data))>>3)
#define SDS_MISC_get_frc_reg4_en_s0(data)                                            ((0x00000008&(data))>>3)
#define SDS_MISC_sds_iso_on_s0_shift                                                 (2)
#define SDS_MISC_sds_iso_on_s0_mask                                                  (0x00000004)
#define SDS_MISC_sds_iso_on_s0(data)                                                 (0x00000004&((data)<<2))
#define SDS_MISC_sds_iso_on_s0_src(data)                                             ((0x00000004&(data))>>2)
#define SDS_MISC_get_sds_iso_on_s0(data)                                             ((0x00000004&(data))>>2)
#define SDS_MISC_sds_frc_ld_s0_shift                                                 (1)
#define SDS_MISC_sds_frc_ld_s0_mask                                                  (0x00000002)
#define SDS_MISC_sds_frc_ld_s0(data)                                                 (0x00000002&((data)<<1))
#define SDS_MISC_sds_frc_ld_s0_src(data)                                             ((0x00000002&(data))>>1)
#define SDS_MISC_get_sds_frc_ld_s0(data)                                             ((0x00000002&(data))>>1)
#define SDS_MISC_sds_intb_s0_shift                                                   (0)
#define SDS_MISC_sds_intb_s0_mask                                                    (0x00000001)
#define SDS_MISC_sds_intb_s0(data)                                                   (0x00000001&((data)<<0))
#define SDS_MISC_sds_intb_s0_src(data)                                               ((0x00000001&(data))>>0)
#define SDS_MISC_get_sds_intb_s0(data)                                               ((0x00000001&(data))>>0)


#define SDS_LPI                                                                      0x981C9808
#define SDS_LPI_reg_addr                                                             "0xD81C9808"
#define SDS_LPI_reg                                                                  0xD81C9808
#define set_SDS_LPI_reg(data)   (*((volatile unsigned int*) SDS_LPI_reg)=data)
#define get_SDS_LPI_reg   (*((volatile unsigned int*) SDS_LPI_reg))
#define SDS_LPI_inst_adr                                                             "0x0002"
#define SDS_LPI_inst                                                                 0x0002
#define SDS_LPI_phy_eeep_lpi_tx_shift                                                (11)
#define SDS_LPI_phy_eeep_lpi_tx_mask                                                 (0x00000800)
#define SDS_LPI_phy_eeep_lpi_tx(data)                                                (0x00000800&((data)<<11))
#define SDS_LPI_phy_eeep_lpi_tx_src(data)                                            ((0x00000800&(data))>>11)
#define SDS_LPI_get_phy_eeep_lpi_tx(data)                                            ((0x00000800&(data))>>11)
#define SDS_LPI_phy_eeep_lpi_rx_shift                                                (10)
#define SDS_LPI_phy_eeep_lpi_rx_mask                                                 (0x00000400)
#define SDS_LPI_phy_eeep_lpi_rx(data)                                                (0x00000400&((data)<<10))
#define SDS_LPI_phy_eeep_lpi_rx_src(data)                                            ((0x00000400&(data))>>10)
#define SDS_LPI_get_phy_eeep_lpi_rx(data)                                            ((0x00000400&(data))>>10)
#define SDS_LPI_mac_eeep_lpi_tx_shift                                                (9)
#define SDS_LPI_mac_eeep_lpi_tx_mask                                                 (0x00000200)
#define SDS_LPI_mac_eeep_lpi_tx(data)                                                (0x00000200&((data)<<9))
#define SDS_LPI_mac_eeep_lpi_tx_src(data)                                            ((0x00000200&(data))>>9)
#define SDS_LPI_get_mac_eeep_lpi_tx(data)                                            ((0x00000200&(data))>>9)
#define SDS_LPI_mac_eeep_lpi_rx_shift                                                (8)
#define SDS_LPI_mac_eeep_lpi_rx_mask                                                 (0x00000100)
#define SDS_LPI_mac_eeep_lpi_rx(data)                                                (0x00000100&((data)<<8))
#define SDS_LPI_mac_eeep_lpi_rx_src(data)                                            ((0x00000100&(data))>>8)
#define SDS_LPI_get_mac_eeep_lpi_rx(data)                                            ((0x00000100&(data))>>8)
#define SDS_LPI_cmd_stop_gli_clk_shift                                               (7)
#define SDS_LPI_cmd_stop_gli_clk_mask                                                (0x00000080)
#define SDS_LPI_cmd_stop_gli_clk(data)                                               (0x00000080&((data)<<7))
#define SDS_LPI_cmd_stop_gli_clk_src(data)                                           ((0x00000080&(data))>>7)
#define SDS_LPI_get_cmd_stop_gli_clk(data)                                           ((0x00000080&(data))>>7)
#define SDS_LPI_phy_sdet_shift                                                       (6)
#define SDS_LPI_phy_sdet_mask                                                        (0x00000040)
#define SDS_LPI_phy_sdet(data)                                                       (0x00000040&((data)<<6))
#define SDS_LPI_phy_sdet_src(data)                                                   ((0x00000040&(data))>>6)
#define SDS_LPI_get_phy_sdet(data)                                                   ((0x00000040&(data))>>6)
#define SDS_LPI_mac_trx_idle_shift                                                   (5)
#define SDS_LPI_mac_trx_idle_mask                                                    (0x00000020)
#define SDS_LPI_mac_trx_idle(data)                                                   (0x00000020&((data)<<5))
#define SDS_LPI_mac_trx_idle_src(data)                                               ((0x00000020&(data))>>5)
#define SDS_LPI_get_mac_trx_idle(data)                                               ((0x00000020&(data))>>5)
#define SDS_LPI_phy_lpi_rx_shift                                                     (4)
#define SDS_LPI_phy_lpi_rx_mask                                                      (0x00000010)
#define SDS_LPI_phy_lpi_rx(data)                                                     (0x00000010&((data)<<4))
#define SDS_LPI_phy_lpi_rx_src(data)                                                 ((0x00000010&(data))>>4)
#define SDS_LPI_get_phy_lpi_rx(data)                                                 ((0x00000010&(data))>>4)
#define SDS_LPI_phy_lpi_tx_shift                                                     (3)
#define SDS_LPI_phy_lpi_tx_mask                                                      (0x00000008)
#define SDS_LPI_phy_lpi_tx(data)                                                     (0x00000008&((data)<<3))
#define SDS_LPI_phy_lpi_tx_src(data)                                                 ((0x00000008&(data))>>3)
#define SDS_LPI_get_phy_lpi_tx(data)                                                 ((0x00000008&(data))>>3)
#define SDS_LPI_mac_lpi_rx_shift                                                     (2)
#define SDS_LPI_mac_lpi_rx_mask                                                      (0x00000004)
#define SDS_LPI_mac_lpi_rx(data)                                                     (0x00000004&((data)<<2))
#define SDS_LPI_mac_lpi_rx_src(data)                                                 ((0x00000004&(data))>>2)
#define SDS_LPI_get_mac_lpi_rx(data)                                                 ((0x00000004&(data))>>2)
#define SDS_LPI_mac_lpi_tx_shift                                                     (1)
#define SDS_LPI_mac_lpi_tx_mask                                                      (0x00000002)
#define SDS_LPI_mac_lpi_tx(data)                                                     (0x00000002&((data)<<1))
#define SDS_LPI_mac_lpi_tx_src(data)                                                 ((0x00000002&(data))>>1)
#define SDS_LPI_get_mac_lpi_tx(data)                                                 ((0x00000002&(data))>>1)
#define SDS_LPI_lpi_gmii_sel_shift                                                   (0)
#define SDS_LPI_lpi_gmii_sel_mask                                                    (0x00000001)
#define SDS_LPI_lpi_gmii_sel(data)                                                   (0x00000001&((data)<<0))
#define SDS_LPI_lpi_gmii_sel_src(data)                                               ((0x00000001&(data))>>0)
#define SDS_LPI_get_lpi_gmii_sel(data)                                               ((0x00000001&(data))>>0)


#define SDS_LINK                                                                     0x981C980C
#define SDS_LINK_reg_addr                                                            "0xD81C980C"
#define SDS_LINK_reg                                                                 0xD81C980C
#define set_SDS_LINK_reg(data)   (*((volatile unsigned int*) SDS_LINK_reg)=data)
#define get_SDS_LINK_reg   (*((volatile unsigned int*) SDS_LINK_reg))
#define SDS_LINK_inst_adr                                                            "0x0003"
#define SDS_LINK_inst                                                                0x0003
#define SDS_LINK_sds0_link_partner_ablty_shift                                       (12)
#define SDS_LINK_sds0_link_partner_ablty_mask                                        (0x00FFF000)
#define SDS_LINK_sds0_link_partner_ablty(data)                                       (0x00FFF000&((data)<<12))
#define SDS_LINK_sds0_link_partner_ablty_src(data)                                   ((0x00FFF000&(data))>>12)
#define SDS_LINK_get_sds0_link_partner_ablty(data)                                   ((0x00FFF000&(data))>>12)
#define SDS_LINK_sds0_ablty_shift                                                    (0)
#define SDS_LINK_sds0_ablty_mask                                                     (0x00000FFF)
#define SDS_LINK_sds0_ablty(data)                                                    (0x00000FFF&((data)<<0))
#define SDS_LINK_sds0_ablty_src(data)                                                ((0x00000FFF&(data))>>0)
#define SDS_LINK_get_sds0_ablty(data)                                                ((0x00000FFF&(data))>>0)


#endif
