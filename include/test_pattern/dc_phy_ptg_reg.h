/**************************************************************
// Spec Version                  : 0.0.1
// Parser Version                : DVR_Parser_6.11(120105)
// CModelGen Version             : 5.1 2012.01.05
// Naming Rule                   :  Module_Register_Name
// Naming Rule                   : Module_Register_Name_reg
// Parse Option                  : Only Parse _op1
// Parse Address Region          : All Address Region 
// Decode bit number             : 12 bits
// Firmware Header Generate Date : 2014/3/11 14:23:10
***************************************************************/


#ifndef _DC_PHY_PTG_REG_H_INCLUDED_
#define _DC_PHY_PTG_REG_H_INCLUDED_
#ifdef  _DC_PHY_PTG_USE_STRUCT
typedef struct 
{
unsigned int     errstp_num:8;
unsigned int     cmdwai_num:8;
unsigned int     torept_num:8;
unsigned int     rwrept_num:8;
}DC_PHY_PTG_CFG_REG_00;

typedef struct 
{
unsigned int     dummy1:2;
unsigned int     ini_8be:2;
unsigned int     ini_mod:3;
unsigned int     inc_bak:2;
unsigned int     ini_bak:3;
unsigned int     ini_y:2;
unsigned int     ini_x:1;
unsigned int     ini_ddr:1;
unsigned int     dummy0:7;
unsigned int     slflopback:1;
unsigned int     phylopback:1;
unsigned int     torept_cti:1;
unsigned int     rcv_closed:1;
unsigned int     xmt_closed:1;
unsigned int     tst_st:3;
unsigned int     tst_strt:1;
}DC_PHY_PTG_CFG_REG_04;

typedef struct 
{
unsigned int     reserved_0:11;
unsigned int     ini_wr:1;
unsigned int     inc_col:4;
unsigned int     ini_col:8;
unsigned int     inc_bl:3;
unsigned int     ini_bl:5;
}DC_PHY_PTG_CFG_REG_08;

typedef struct 
{
unsigned int     reserved_0:9;
unsigned int     ini_xch:3;
unsigned int     reserved_1:1;
unsigned int     inc_pag:3;
unsigned int     ini_pag:16;
}DC_PHY_PTG_CFG_REG_0C;

typedef struct 
{
unsigned int     reserved_0:20;
unsigned int     sa_rcverr:4;
unsigned int     cnt_rcverr:8;
}DC_PHY_PTG_CFG_REG_10;

typedef struct 
{
unsigned int     reserved_0:26;
unsigned int     clr_fail_cmd:1;
unsigned int     en_cap_fail_cmd:1;
unsigned int     cmp_err_flag:1;
unsigned int     scramble_en:1;
unsigned int     pause:1;
unsigned int     sw_en:1;
}DC_PHY_PTG_HW_SW_CTRL;

typedef struct 
{
unsigned int     reserved_0:3;
unsigned int     QFIFO_THR:5;
unsigned int     reserved_1:1;
unsigned int     cmd_num:7;
unsigned int     reserved_2:5;
unsigned int     cmp_fail_stop_num:1;
unsigned int     go:1;
unsigned int     reserved_3:1;
unsigned int     rpt_num:8;
}DC_PHY_PTG_CMD_SRAM_CTRL;

typedef struct 
{
unsigned int     reserved_0:24;
unsigned int     cmd_cfg_en:1;
unsigned int     cmd_wr:1;
unsigned int     cmd_addr:6;
}DC_PHY_PTG_CMD_SRAM_PROG;

typedef struct 
{
unsigned int     dat:32;
}DC_PHY_PTG_CMD_SRAM_0;

typedef struct 
{
unsigned int     reserved_0:16;
unsigned int     dat:16;
}DC_PHY_PTG_CMD_SRAM_1;

typedef struct 
{
unsigned int     dat:32;
}DC_PHY_PTG_CMP_FAIL_CMD_0;

typedef struct 
{
unsigned int     wmask:16;
unsigned int     dat:16;
}DC_PHY_PTG_CMP_FAIL_CMD_1;

typedef struct 
{
unsigned int     dat:32;
}DC_PHY_PTG_CMP_FAIL_EXP_0;

typedef struct 
{
unsigned int     dat:32;
}DC_PHY_PTG_CMP_FAIL_EXP_1;

typedef struct 
{
unsigned int     dat:32;
}DC_PHY_PTG_CMP_FAIL_EXP_2;

typedef struct 
{
unsigned int     dat:32;
}DC_PHY_PTG_CMP_FAIL_EXP_3;

typedef struct 
{
unsigned int     dat:32;
}DC_PHY_PTG_CMP_FAIL_READ_0;

typedef struct 
{
unsigned int     dat:32;
}DC_PHY_PTG_CMP_FAIL_READ_1;

typedef struct 
{
unsigned int     dat:32;
}DC_PHY_PTG_CMP_FAIL_READ_2;

typedef struct 
{
unsigned int     dat:32;
}DC_PHY_PTG_CMP_FAIL_READ_3;

typedef struct 
{
unsigned int     sent_cmd:32;
}DC_PHY_PTG_STS_0;

typedef struct 
{
unsigned int     cmp_cmd:32;
}DC_PHY_PTG_STS_1;

typedef struct 
{
unsigned int     sent_wr_cmd:32;
}DC_PHY_PTG_STS_2;

typedef struct 
{
unsigned int     sent_rd_cmd:32;
}DC_PHY_PTG_STS_3;

typedef struct 
{
unsigned int     data:32;
}DC_PHY_PTG_RANDOM_0;

typedef struct 
{
unsigned int     data:32;
}DC_PHY_PTG_RANDOM_1;

typedef struct 
{
unsigned int     data:32;
}DC_PHY_PTG_RANDOM_2;

typedef struct 
{
unsigned int     data:32;
}DC_PHY_PTG_RANDOM_3;

typedef struct 
{
unsigned int     reserved_0:14;
unsigned int     rcv_cfg_en:1;
unsigned int     rcv_wr:1;
unsigned int     cmp_cfg_en:1;
unsigned int     cmp_wr:1;
unsigned int     xmt_cfg_en:1;
unsigned int     xmt_wr:1;
unsigned int     rcv_addr:4;
unsigned int     cmp_addr:4;
unsigned int     xmt_addr:4;
}DC_PHY_PTG_RW_SRAM_CTRL;

typedef struct 
{
unsigned int     reserved_0:19;
unsigned int     test_sys_en:1;
unsigned int     test_sys_sel2:4;
unsigned int     test_sys_sel1:4;
unsigned int     test_sys_sel0:4;
}DC_PHY_PTG_DBG;

typedef struct 
{
unsigned int     dat:32;
}DC_PHY_PTG_XMT_SRAM;

typedef struct 
{
unsigned int     dat:32;
}DC_PHY_PTG_CMP_SRAM;

typedef struct 
{
unsigned int     dat:32;
}DC_PHY_PTG_RCV_SRAM;

typedef struct 
{
unsigned int     dat:32;
}DC_PHY_PTG_WMASK;

#endif

#define DC_PHY_PTG_CFG_REG_00                                                        0x18008F00
#define DC_PHY_PTG_CFG_REG_00_reg_addr                                               "0xB8008F00"
#define DC_PHY_PTG_CFG_REG_00_reg                                                    0xB8008F00
#define set_DC_PHY_PTG_CFG_REG_00_reg(data)   (*((volatile unsigned int*) DC_PHY_PTG_CFG_REG_00_reg)=data)
#define get_DC_PHY_PTG_CFG_REG_00_reg   (*((volatile unsigned int*) DC_PHY_PTG_CFG_REG_00_reg))
#define DC_PHY_PTG_CFG_REG_00_inst_adr                                               "0x00C0"
#define DC_PHY_PTG_CFG_REG_00_inst                                                   0x00C0
#define DC_PHY_PTG_CFG_REG_00_errstp_num_shift                                       (24)
#define DC_PHY_PTG_CFG_REG_00_errstp_num_mask                                        (0xFF000000)
#define DC_PHY_PTG_CFG_REG_00_errstp_num(data)                                       (0xFF000000&((data)<<24))
#define DC_PHY_PTG_CFG_REG_00_errstp_num_src(data)                                   ((0xFF000000&(data))>>24)
#define DC_PHY_PTG_CFG_REG_00_get_errstp_num(data)                                   ((0xFF000000&(data))>>24)
#define DC_PHY_PTG_CFG_REG_00_cmdwai_num_shift                                       (16)
#define DC_PHY_PTG_CFG_REG_00_cmdwai_num_mask                                        (0x00FF0000)
#define DC_PHY_PTG_CFG_REG_00_cmdwai_num(data)                                       (0x00FF0000&((data)<<16))
#define DC_PHY_PTG_CFG_REG_00_cmdwai_num_src(data)                                   ((0x00FF0000&(data))>>16)
#define DC_PHY_PTG_CFG_REG_00_get_cmdwai_num(data)                                   ((0x00FF0000&(data))>>16)
#define DC_PHY_PTG_CFG_REG_00_torept_num_shift                                       (8)
#define DC_PHY_PTG_CFG_REG_00_torept_num_mask                                        (0x0000FF00)
#define DC_PHY_PTG_CFG_REG_00_torept_num(data)                                       (0x0000FF00&((data)<<8))
#define DC_PHY_PTG_CFG_REG_00_torept_num_src(data)                                   ((0x0000FF00&(data))>>8)
#define DC_PHY_PTG_CFG_REG_00_get_torept_num(data)                                   ((0x0000FF00&(data))>>8)
#define DC_PHY_PTG_CFG_REG_00_rwrept_num_shift                                       (0)
#define DC_PHY_PTG_CFG_REG_00_rwrept_num_mask                                        (0x000000FF)
#define DC_PHY_PTG_CFG_REG_00_rwrept_num(data)                                       (0x000000FF&((data)<<0))
#define DC_PHY_PTG_CFG_REG_00_rwrept_num_src(data)                                   ((0x000000FF&(data))>>0)
#define DC_PHY_PTG_CFG_REG_00_get_rwrept_num(data)                                   ((0x000000FF&(data))>>0)


#define DC_PHY_PTG_CFG_REG_04                                                        0x18008F04
#define DC_PHY_PTG_CFG_REG_04_reg_addr                                               "0xB8008F04"
#define DC_PHY_PTG_CFG_REG_04_reg                                                    0xB8008F04
#define set_DC_PHY_PTG_CFG_REG_04_reg(data)   (*((volatile unsigned int*) DC_PHY_PTG_CFG_REG_04_reg)=data)
#define get_DC_PHY_PTG_CFG_REG_04_reg   (*((volatile unsigned int*) DC_PHY_PTG_CFG_REG_04_reg))
#define DC_PHY_PTG_CFG_REG_04_inst_adr                                               "0x00C1"
#define DC_PHY_PTG_CFG_REG_04_inst                                                   0x00C1
#define DC_PHY_PTG_CFG_REG_04_dummy1_shift                                           (30)
#define DC_PHY_PTG_CFG_REG_04_dummy1_mask                                            (0xC0000000)
#define DC_PHY_PTG_CFG_REG_04_dummy1(data)                                           (0xC0000000&((data)<<30))
#define DC_PHY_PTG_CFG_REG_04_dummy1_src(data)                                       ((0xC0000000&(data))>>30)
#define DC_PHY_PTG_CFG_REG_04_get_dummy1(data)                                       ((0xC0000000&(data))>>30)
#define DC_PHY_PTG_CFG_REG_04_ini_8be_shift                                          (28)
#define DC_PHY_PTG_CFG_REG_04_ini_8be_mask                                           (0x30000000)
#define DC_PHY_PTG_CFG_REG_04_ini_8be(data)                                          (0x30000000&((data)<<28))
#define DC_PHY_PTG_CFG_REG_04_ini_8be_src(data)                                      ((0x30000000&(data))>>28)
#define DC_PHY_PTG_CFG_REG_04_get_ini_8be(data)                                      ((0x30000000&(data))>>28)
#define DC_PHY_PTG_CFG_REG_04_ini_mod_shift                                          (25)
#define DC_PHY_PTG_CFG_REG_04_ini_mod_mask                                           (0x0E000000)
#define DC_PHY_PTG_CFG_REG_04_ini_mod(data)                                          (0x0E000000&((data)<<25))
#define DC_PHY_PTG_CFG_REG_04_ini_mod_src(data)                                      ((0x0E000000&(data))>>25)
#define DC_PHY_PTG_CFG_REG_04_get_ini_mod(data)                                      ((0x0E000000&(data))>>25)
#define DC_PHY_PTG_CFG_REG_04_inc_bak_shift                                          (23)
#define DC_PHY_PTG_CFG_REG_04_inc_bak_mask                                           (0x01800000)
#define DC_PHY_PTG_CFG_REG_04_inc_bak(data)                                          (0x01800000&((data)<<23))
#define DC_PHY_PTG_CFG_REG_04_inc_bak_src(data)                                      ((0x01800000&(data))>>23)
#define DC_PHY_PTG_CFG_REG_04_get_inc_bak(data)                                      ((0x01800000&(data))>>23)
#define DC_PHY_PTG_CFG_REG_04_ini_bak_shift                                          (20)
#define DC_PHY_PTG_CFG_REG_04_ini_bak_mask                                           (0x00700000)
#define DC_PHY_PTG_CFG_REG_04_ini_bak(data)                                          (0x00700000&((data)<<20))
#define DC_PHY_PTG_CFG_REG_04_ini_bak_src(data)                                      ((0x00700000&(data))>>20)
#define DC_PHY_PTG_CFG_REG_04_get_ini_bak(data)                                      ((0x00700000&(data))>>20)
#define DC_PHY_PTG_CFG_REG_04_ini_y_shift                                            (18)
#define DC_PHY_PTG_CFG_REG_04_ini_y_mask                                             (0x000C0000)
#define DC_PHY_PTG_CFG_REG_04_ini_y(data)                                            (0x000C0000&((data)<<18))
#define DC_PHY_PTG_CFG_REG_04_ini_y_src(data)                                        ((0x000C0000&(data))>>18)
#define DC_PHY_PTG_CFG_REG_04_get_ini_y(data)                                        ((0x000C0000&(data))>>18)
#define DC_PHY_PTG_CFG_REG_04_ini_x_shift                                            (17)
#define DC_PHY_PTG_CFG_REG_04_ini_x_mask                                             (0x00020000)
#define DC_PHY_PTG_CFG_REG_04_ini_x(data)                                            (0x00020000&((data)<<17))
#define DC_PHY_PTG_CFG_REG_04_ini_x_src(data)                                        ((0x00020000&(data))>>17)
#define DC_PHY_PTG_CFG_REG_04_get_ini_x(data)                                        ((0x00020000&(data))>>17)
#define DC_PHY_PTG_CFG_REG_04_ini_ddr_shift                                          (16)
#define DC_PHY_PTG_CFG_REG_04_ini_ddr_mask                                           (0x00010000)
#define DC_PHY_PTG_CFG_REG_04_ini_ddr(data)                                          (0x00010000&((data)<<16))
#define DC_PHY_PTG_CFG_REG_04_ini_ddr_src(data)                                      ((0x00010000&(data))>>16)
#define DC_PHY_PTG_CFG_REG_04_get_ini_ddr(data)                                      ((0x00010000&(data))>>16)
#define DC_PHY_PTG_CFG_REG_04_dummy0_shift                                           (9)
#define DC_PHY_PTG_CFG_REG_04_dummy0_mask                                            (0x0000FE00)
#define DC_PHY_PTG_CFG_REG_04_dummy0(data)                                           (0x0000FE00&((data)<<9))
#define DC_PHY_PTG_CFG_REG_04_dummy0_src(data)                                       ((0x0000FE00&(data))>>9)
#define DC_PHY_PTG_CFG_REG_04_get_dummy0(data)                                       ((0x0000FE00&(data))>>9)
#define DC_PHY_PTG_CFG_REG_04_slflopback_shift                                       (8)
#define DC_PHY_PTG_CFG_REG_04_slflopback_mask                                        (0x00000100)
#define DC_PHY_PTG_CFG_REG_04_slflopback(data)                                       (0x00000100&((data)<<8))
#define DC_PHY_PTG_CFG_REG_04_slflopback_src(data)                                   ((0x00000100&(data))>>8)
#define DC_PHY_PTG_CFG_REG_04_get_slflopback(data)                                   ((0x00000100&(data))>>8)
#define DC_PHY_PTG_CFG_REG_04_phylopback_shift                                       (7)
#define DC_PHY_PTG_CFG_REG_04_phylopback_mask                                        (0x00000080)
#define DC_PHY_PTG_CFG_REG_04_phylopback(data)                                       (0x00000080&((data)<<7))
#define DC_PHY_PTG_CFG_REG_04_phylopback_src(data)                                   ((0x00000080&(data))>>7)
#define DC_PHY_PTG_CFG_REG_04_get_phylopback(data)                                   ((0x00000080&(data))>>7)
#define DC_PHY_PTG_CFG_REG_04_torept_cti_shift                                       (6)
#define DC_PHY_PTG_CFG_REG_04_torept_cti_mask                                        (0x00000040)
#define DC_PHY_PTG_CFG_REG_04_torept_cti(data)                                       (0x00000040&((data)<<6))
#define DC_PHY_PTG_CFG_REG_04_torept_cti_src(data)                                   ((0x00000040&(data))>>6)
#define DC_PHY_PTG_CFG_REG_04_get_torept_cti(data)                                   ((0x00000040&(data))>>6)
#define DC_PHY_PTG_CFG_REG_04_rcv_closed_shift                                       (5)
#define DC_PHY_PTG_CFG_REG_04_rcv_closed_mask                                        (0x00000020)
#define DC_PHY_PTG_CFG_REG_04_rcv_closed(data)                                       (0x00000020&((data)<<5))
#define DC_PHY_PTG_CFG_REG_04_rcv_closed_src(data)                                   ((0x00000020&(data))>>5)
#define DC_PHY_PTG_CFG_REG_04_get_rcv_closed(data)                                   ((0x00000020&(data))>>5)
#define DC_PHY_PTG_CFG_REG_04_xmt_closed_shift                                       (4)
#define DC_PHY_PTG_CFG_REG_04_xmt_closed_mask                                        (0x00000010)
#define DC_PHY_PTG_CFG_REG_04_xmt_closed(data)                                       (0x00000010&((data)<<4))
#define DC_PHY_PTG_CFG_REG_04_xmt_closed_src(data)                                   ((0x00000010&(data))>>4)
#define DC_PHY_PTG_CFG_REG_04_get_xmt_closed(data)                                   ((0x00000010&(data))>>4)
#define DC_PHY_PTG_CFG_REG_04_tst_st_shift                                           (1)
#define DC_PHY_PTG_CFG_REG_04_tst_st_mask                                            (0x0000000E)
#define DC_PHY_PTG_CFG_REG_04_tst_st(data)                                           (0x0000000E&((data)<<1))
#define DC_PHY_PTG_CFG_REG_04_tst_st_src(data)                                       ((0x0000000E&(data))>>1)
#define DC_PHY_PTG_CFG_REG_04_get_tst_st(data)                                       ((0x0000000E&(data))>>1)
#define DC_PHY_PTG_CFG_REG_04_tst_strt_shift                                         (0)
#define DC_PHY_PTG_CFG_REG_04_tst_strt_mask                                          (0x00000001)
#define DC_PHY_PTG_CFG_REG_04_tst_strt(data)                                         (0x00000001&((data)<<0))
#define DC_PHY_PTG_CFG_REG_04_tst_strt_src(data)                                     ((0x00000001&(data))>>0)
#define DC_PHY_PTG_CFG_REG_04_get_tst_strt(data)                                     ((0x00000001&(data))>>0)


#define DC_PHY_PTG_CFG_REG_08                                                        0x18008F08
#define DC_PHY_PTG_CFG_REG_08_reg_addr                                               "0xB8008F08"
#define DC_PHY_PTG_CFG_REG_08_reg                                                    0xB8008F08
#define set_DC_PHY_PTG_CFG_REG_08_reg(data)   (*((volatile unsigned int*) DC_PHY_PTG_CFG_REG_08_reg)=data)
#define get_DC_PHY_PTG_CFG_REG_08_reg   (*((volatile unsigned int*) DC_PHY_PTG_CFG_REG_08_reg))
#define DC_PHY_PTG_CFG_REG_08_inst_adr                                               "0x00C2"
#define DC_PHY_PTG_CFG_REG_08_inst                                                   0x00C2
#define DC_PHY_PTG_CFG_REG_08_ini_wr_shift                                           (20)
#define DC_PHY_PTG_CFG_REG_08_ini_wr_mask                                            (0x00100000)
#define DC_PHY_PTG_CFG_REG_08_ini_wr(data)                                           (0x00100000&((data)<<20))
#define DC_PHY_PTG_CFG_REG_08_ini_wr_src(data)                                       ((0x00100000&(data))>>20)
#define DC_PHY_PTG_CFG_REG_08_get_ini_wr(data)                                       ((0x00100000&(data))>>20)
#define DC_PHY_PTG_CFG_REG_08_inc_col_shift                                          (16)
#define DC_PHY_PTG_CFG_REG_08_inc_col_mask                                           (0x000F0000)
#define DC_PHY_PTG_CFG_REG_08_inc_col(data)                                          (0x000F0000&((data)<<16))
#define DC_PHY_PTG_CFG_REG_08_inc_col_src(data)                                      ((0x000F0000&(data))>>16)
#define DC_PHY_PTG_CFG_REG_08_get_inc_col(data)                                      ((0x000F0000&(data))>>16)
#define DC_PHY_PTG_CFG_REG_08_ini_col_shift                                          (8)
#define DC_PHY_PTG_CFG_REG_08_ini_col_mask                                           (0x0000FF00)
#define DC_PHY_PTG_CFG_REG_08_ini_col(data)                                          (0x0000FF00&((data)<<8))
#define DC_PHY_PTG_CFG_REG_08_ini_col_src(data)                                      ((0x0000FF00&(data))>>8)
#define DC_PHY_PTG_CFG_REG_08_get_ini_col(data)                                      ((0x0000FF00&(data))>>8)
#define DC_PHY_PTG_CFG_REG_08_inc_bl_shift                                           (5)
#define DC_PHY_PTG_CFG_REG_08_inc_bl_mask                                            (0x000000E0)
#define DC_PHY_PTG_CFG_REG_08_inc_bl(data)                                           (0x000000E0&((data)<<5))
#define DC_PHY_PTG_CFG_REG_08_inc_bl_src(data)                                       ((0x000000E0&(data))>>5)
#define DC_PHY_PTG_CFG_REG_08_get_inc_bl(data)                                       ((0x000000E0&(data))>>5)
#define DC_PHY_PTG_CFG_REG_08_ini_bl_shift                                           (0)
#define DC_PHY_PTG_CFG_REG_08_ini_bl_mask                                            (0x0000001F)
#define DC_PHY_PTG_CFG_REG_08_ini_bl(data)                                           (0x0000001F&((data)<<0))
#define DC_PHY_PTG_CFG_REG_08_ini_bl_src(data)                                       ((0x0000001F&(data))>>0)
#define DC_PHY_PTG_CFG_REG_08_get_ini_bl(data)                                       ((0x0000001F&(data))>>0)


#define DC_PHY_PTG_CFG_REG_0C                                                        0x18008F0C
#define DC_PHY_PTG_CFG_REG_0C_reg_addr                                               "0xB8008F0C"
#define DC_PHY_PTG_CFG_REG_0C_reg                                                    0xB8008F0C
#define set_DC_PHY_PTG_CFG_REG_0C_reg(data)   (*((volatile unsigned int*) DC_PHY_PTG_CFG_REG_0C_reg)=data)
#define get_DC_PHY_PTG_CFG_REG_0C_reg   (*((volatile unsigned int*) DC_PHY_PTG_CFG_REG_0C_reg))
#define DC_PHY_PTG_CFG_REG_0C_inst_adr                                               "0x00C3"
#define DC_PHY_PTG_CFG_REG_0C_inst                                                   0x00C3
#define DC_PHY_PTG_CFG_REG_0C_ini_xch_shift                                          (20)
#define DC_PHY_PTG_CFG_REG_0C_ini_xch_mask                                           (0x00700000)
#define DC_PHY_PTG_CFG_REG_0C_ini_xch(data)                                          (0x00700000&((data)<<20))
#define DC_PHY_PTG_CFG_REG_0C_ini_xch_src(data)                                      ((0x00700000&(data))>>20)
#define DC_PHY_PTG_CFG_REG_0C_get_ini_xch(data)                                      ((0x00700000&(data))>>20)
#define DC_PHY_PTG_CFG_REG_0C_inc_pag_shift                                          (16)
#define DC_PHY_PTG_CFG_REG_0C_inc_pag_mask                                           (0x00070000)
#define DC_PHY_PTG_CFG_REG_0C_inc_pag(data)                                          (0x00070000&((data)<<16))
#define DC_PHY_PTG_CFG_REG_0C_inc_pag_src(data)                                      ((0x00070000&(data))>>16)
#define DC_PHY_PTG_CFG_REG_0C_get_inc_pag(data)                                      ((0x00070000&(data))>>16)
#define DC_PHY_PTG_CFG_REG_0C_ini_pag_shift                                          (0)
#define DC_PHY_PTG_CFG_REG_0C_ini_pag_mask                                           (0x0000FFFF)
#define DC_PHY_PTG_CFG_REG_0C_ini_pag(data)                                          (0x0000FFFF&((data)<<0))
#define DC_PHY_PTG_CFG_REG_0C_ini_pag_src(data)                                      ((0x0000FFFF&(data))>>0)
#define DC_PHY_PTG_CFG_REG_0C_get_ini_pag(data)                                      ((0x0000FFFF&(data))>>0)


#define DC_PHY_PTG_CFG_REG_10                                                        0x18008F10
#define DC_PHY_PTG_CFG_REG_10_reg_addr                                               "0xB8008F10"
#define DC_PHY_PTG_CFG_REG_10_reg                                                    0xB8008F10
#define set_DC_PHY_PTG_CFG_REG_10_reg(data)   (*((volatile unsigned int*) DC_PHY_PTG_CFG_REG_10_reg)=data)
#define get_DC_PHY_PTG_CFG_REG_10_reg   (*((volatile unsigned int*) DC_PHY_PTG_CFG_REG_10_reg))
#define DC_PHY_PTG_CFG_REG_10_inst_adr                                               "0x00C4"
#define DC_PHY_PTG_CFG_REG_10_inst                                                   0x00C4
#define DC_PHY_PTG_CFG_REG_10_sa_rcverr_shift                                        (8)
#define DC_PHY_PTG_CFG_REG_10_sa_rcverr_mask                                         (0x00000F00)
#define DC_PHY_PTG_CFG_REG_10_sa_rcverr(data)                                        (0x00000F00&((data)<<8))
#define DC_PHY_PTG_CFG_REG_10_sa_rcverr_src(data)                                    ((0x00000F00&(data))>>8)
#define DC_PHY_PTG_CFG_REG_10_get_sa_rcverr(data)                                    ((0x00000F00&(data))>>8)
#define DC_PHY_PTG_CFG_REG_10_cnt_rcverr_shift                                       (0)
#define DC_PHY_PTG_CFG_REG_10_cnt_rcverr_mask                                        (0x000000FF)
#define DC_PHY_PTG_CFG_REG_10_cnt_rcverr(data)                                       (0x000000FF&((data)<<0))
#define DC_PHY_PTG_CFG_REG_10_cnt_rcverr_src(data)                                   ((0x000000FF&(data))>>0)
#define DC_PHY_PTG_CFG_REG_10_get_cnt_rcverr(data)                                   ((0x000000FF&(data))>>0)


#define DC_PHY_PTG_HW_SW_CTRL                                                        0x18008F14
#define DC_PHY_PTG_HW_SW_CTRL_reg_addr                                               "0xB8008F14"
#define DC_PHY_PTG_HW_SW_CTRL_reg                                                    0xB8008F14
#define set_DC_PHY_PTG_HW_SW_CTRL_reg(data)   (*((volatile unsigned int*) DC_PHY_PTG_HW_SW_CTRL_reg)=data)
#define get_DC_PHY_PTG_HW_SW_CTRL_reg   (*((volatile unsigned int*) DC_PHY_PTG_HW_SW_CTRL_reg))
#define DC_PHY_PTG_HW_SW_CTRL_inst_adr                                               "0x00C5"
#define DC_PHY_PTG_HW_SW_CTRL_inst                                                   0x00C5
#define DC_PHY_PTG_HW_SW_CTRL_clr_fail_cmd_shift                                     (5)
#define DC_PHY_PTG_HW_SW_CTRL_clr_fail_cmd_mask                                      (0x00000020)
#define DC_PHY_PTG_HW_SW_CTRL_clr_fail_cmd(data)                                     (0x00000020&((data)<<5))
#define DC_PHY_PTG_HW_SW_CTRL_clr_fail_cmd_src(data)                                 ((0x00000020&(data))>>5)
#define DC_PHY_PTG_HW_SW_CTRL_get_clr_fail_cmd(data)                                 ((0x00000020&(data))>>5)
#define DC_PHY_PTG_HW_SW_CTRL_en_cap_fail_cmd_shift                                  (4)
#define DC_PHY_PTG_HW_SW_CTRL_en_cap_fail_cmd_mask                                   (0x00000010)
#define DC_PHY_PTG_HW_SW_CTRL_en_cap_fail_cmd(data)                                  (0x00000010&((data)<<4))
#define DC_PHY_PTG_HW_SW_CTRL_en_cap_fail_cmd_src(data)                              ((0x00000010&(data))>>4)
#define DC_PHY_PTG_HW_SW_CTRL_get_en_cap_fail_cmd(data)                              ((0x00000010&(data))>>4)
#define DC_PHY_PTG_HW_SW_CTRL_cmp_err_flag_shift                                     (3)
#define DC_PHY_PTG_HW_SW_CTRL_cmp_err_flag_mask                                      (0x00000008)
#define DC_PHY_PTG_HW_SW_CTRL_cmp_err_flag(data)                                     (0x00000008&((data)<<3))
#define DC_PHY_PTG_HW_SW_CTRL_cmp_err_flag_src(data)                                 ((0x00000008&(data))>>3)
#define DC_PHY_PTG_HW_SW_CTRL_get_cmp_err_flag(data)                                 ((0x00000008&(data))>>3)
#define DC_PHY_PTG_HW_SW_CTRL_scramble_en_shift                                      (2)
#define DC_PHY_PTG_HW_SW_CTRL_scramble_en_mask                                       (0x00000004)
#define DC_PHY_PTG_HW_SW_CTRL_scramble_en(data)                                      (0x00000004&((data)<<2))
#define DC_PHY_PTG_HW_SW_CTRL_scramble_en_src(data)                                  ((0x00000004&(data))>>2)
#define DC_PHY_PTG_HW_SW_CTRL_get_scramble_en(data)                                  ((0x00000004&(data))>>2)
#define DC_PHY_PTG_HW_SW_CTRL_pause_shift                                            (1)
#define DC_PHY_PTG_HW_SW_CTRL_pause_mask                                             (0x00000002)
#define DC_PHY_PTG_HW_SW_CTRL_pause(data)                                            (0x00000002&((data)<<1))
#define DC_PHY_PTG_HW_SW_CTRL_pause_src(data)                                        ((0x00000002&(data))>>1)
#define DC_PHY_PTG_HW_SW_CTRL_get_pause(data)                                        ((0x00000002&(data))>>1)
#define DC_PHY_PTG_HW_SW_CTRL_sw_en_shift                                            (0)
#define DC_PHY_PTG_HW_SW_CTRL_sw_en_mask                                             (0x00000001)
#define DC_PHY_PTG_HW_SW_CTRL_sw_en(data)                                            (0x00000001&((data)<<0))
#define DC_PHY_PTG_HW_SW_CTRL_sw_en_src(data)                                        ((0x00000001&(data))>>0)
#define DC_PHY_PTG_HW_SW_CTRL_get_sw_en(data)                                        ((0x00000001&(data))>>0)


#define DC_PHY_PTG_CMD_SRAM_CTRL                                                     0x18008F18
#define DC_PHY_PTG_CMD_SRAM_CTRL_reg_addr                                            "0xB8008F18"
#define DC_PHY_PTG_CMD_SRAM_CTRL_reg                                                 0xB8008F18
#define set_DC_PHY_PTG_CMD_SRAM_CTRL_reg(data)   (*((volatile unsigned int*) DC_PHY_PTG_CMD_SRAM_CTRL_reg)=data)
#define get_DC_PHY_PTG_CMD_SRAM_CTRL_reg   (*((volatile unsigned int*) DC_PHY_PTG_CMD_SRAM_CTRL_reg))
#define DC_PHY_PTG_CMD_SRAM_CTRL_inst_adr                                            "0x00C6"
#define DC_PHY_PTG_CMD_SRAM_CTRL_inst                                                0x00C6
#define DC_PHY_PTG_CMD_SRAM_CTRL_QFIFO_THR_shift                                     (24)
#define DC_PHY_PTG_CMD_SRAM_CTRL_QFIFO_THR_mask                                      (0x1F000000)
#define DC_PHY_PTG_CMD_SRAM_CTRL_QFIFO_THR(data)                                     (0x1F000000&((data)<<24))
#define DC_PHY_PTG_CMD_SRAM_CTRL_QFIFO_THR_src(data)                                 ((0x1F000000&(data))>>24)
#define DC_PHY_PTG_CMD_SRAM_CTRL_get_QFIFO_THR(data)                                 ((0x1F000000&(data))>>24)
#define DC_PHY_PTG_CMD_SRAM_CTRL_cmd_num_shift                                       (16)
#define DC_PHY_PTG_CMD_SRAM_CTRL_cmd_num_mask                                        (0x007F0000)
#define DC_PHY_PTG_CMD_SRAM_CTRL_cmd_num(data)                                       (0x007F0000&((data)<<16))
#define DC_PHY_PTG_CMD_SRAM_CTRL_cmd_num_src(data)                                   ((0x007F0000&(data))>>16)
#define DC_PHY_PTG_CMD_SRAM_CTRL_get_cmd_num(data)                                   ((0x007F0000&(data))>>16)
#define DC_PHY_PTG_CMD_SRAM_CTRL_cmp_fail_stop_num_shift                             (10)
#define DC_PHY_PTG_CMD_SRAM_CTRL_cmp_fail_stop_num_mask                              (0x00000400)
#define DC_PHY_PTG_CMD_SRAM_CTRL_cmp_fail_stop_num(data)                             (0x00000400&((data)<<10))
#define DC_PHY_PTG_CMD_SRAM_CTRL_cmp_fail_stop_num_src(data)                         ((0x00000400&(data))>>10)
#define DC_PHY_PTG_CMD_SRAM_CTRL_get_cmp_fail_stop_num(data)                         ((0x00000400&(data))>>10)
#define DC_PHY_PTG_CMD_SRAM_CTRL_go_shift                                            (9)
#define DC_PHY_PTG_CMD_SRAM_CTRL_go_mask                                             (0x00000200)
#define DC_PHY_PTG_CMD_SRAM_CTRL_go(data)                                            (0x00000200&((data)<<9))
#define DC_PHY_PTG_CMD_SRAM_CTRL_go_src(data)                                        ((0x00000200&(data))>>9)
#define DC_PHY_PTG_CMD_SRAM_CTRL_get_go(data)                                        ((0x00000200&(data))>>9)
#define DC_PHY_PTG_CMD_SRAM_CTRL_rpt_num_shift                                       (0)
#define DC_PHY_PTG_CMD_SRAM_CTRL_rpt_num_mask                                        (0x000000FF)
#define DC_PHY_PTG_CMD_SRAM_CTRL_rpt_num(data)                                       (0x000000FF&((data)<<0))
#define DC_PHY_PTG_CMD_SRAM_CTRL_rpt_num_src(data)                                   ((0x000000FF&(data))>>0)
#define DC_PHY_PTG_CMD_SRAM_CTRL_get_rpt_num(data)                                   ((0x000000FF&(data))>>0)


#define DC_PHY_PTG_CMD_SRAM_PROG                                                     0x18008F1C
#define DC_PHY_PTG_CMD_SRAM_PROG_reg_addr                                            "0xB8008F1C"
#define DC_PHY_PTG_CMD_SRAM_PROG_reg                                                 0xB8008F1C
#define set_DC_PHY_PTG_CMD_SRAM_PROG_reg(data)   (*((volatile unsigned int*) DC_PHY_PTG_CMD_SRAM_PROG_reg)=data)
#define get_DC_PHY_PTG_CMD_SRAM_PROG_reg   (*((volatile unsigned int*) DC_PHY_PTG_CMD_SRAM_PROG_reg))
#define DC_PHY_PTG_CMD_SRAM_PROG_inst_adr                                            "0x00C7"
#define DC_PHY_PTG_CMD_SRAM_PROG_inst                                                0x00C7
#define DC_PHY_PTG_CMD_SRAM_PROG_cmd_cfg_en_shift                                    (7)
#define DC_PHY_PTG_CMD_SRAM_PROG_cmd_cfg_en_mask                                     (0x00000080)
#define DC_PHY_PTG_CMD_SRAM_PROG_cmd_cfg_en(data)                                    (0x00000080&((data)<<7))
#define DC_PHY_PTG_CMD_SRAM_PROG_cmd_cfg_en_src(data)                                ((0x00000080&(data))>>7)
#define DC_PHY_PTG_CMD_SRAM_PROG_get_cmd_cfg_en(data)                                ((0x00000080&(data))>>7)
#define DC_PHY_PTG_CMD_SRAM_PROG_cmd_wr_shift                                        (6)
#define DC_PHY_PTG_CMD_SRAM_PROG_cmd_wr_mask                                         (0x00000040)
#define DC_PHY_PTG_CMD_SRAM_PROG_cmd_wr(data)                                        (0x00000040&((data)<<6))
#define DC_PHY_PTG_CMD_SRAM_PROG_cmd_wr_src(data)                                    ((0x00000040&(data))>>6)
#define DC_PHY_PTG_CMD_SRAM_PROG_get_cmd_wr(data)                                    ((0x00000040&(data))>>6)
#define DC_PHY_PTG_CMD_SRAM_PROG_cmd_addr_shift                                      (0)
#define DC_PHY_PTG_CMD_SRAM_PROG_cmd_addr_mask                                       (0x0000003F)
#define DC_PHY_PTG_CMD_SRAM_PROG_cmd_addr(data)                                      (0x0000003F&((data)<<0))
#define DC_PHY_PTG_CMD_SRAM_PROG_cmd_addr_src(data)                                  ((0x0000003F&(data))>>0)
#define DC_PHY_PTG_CMD_SRAM_PROG_get_cmd_addr(data)                                  ((0x0000003F&(data))>>0)


#define DC_PHY_PTG_CMD_SRAM_0                                                        0x18008F20
#define DC_PHY_PTG_CMD_SRAM_0_reg_addr                                               "0xB8008F20"
#define DC_PHY_PTG_CMD_SRAM_0_reg                                                    0xB8008F20
#define set_DC_PHY_PTG_CMD_SRAM_0_reg(data)   (*((volatile unsigned int*) DC_PHY_PTG_CMD_SRAM_0_reg)=data)
#define get_DC_PHY_PTG_CMD_SRAM_0_reg   (*((volatile unsigned int*) DC_PHY_PTG_CMD_SRAM_0_reg))
#define DC_PHY_PTG_CMD_SRAM_0_inst_adr                                               "0x00C8"
#define DC_PHY_PTG_CMD_SRAM_0_inst                                                   0x00C8
#define DC_PHY_PTG_CMD_SRAM_0_dat_shift                                              (0)
#define DC_PHY_PTG_CMD_SRAM_0_dat_mask                                               (0xFFFFFFFF)
#define DC_PHY_PTG_CMD_SRAM_0_dat(data)                                              (0xFFFFFFFF&((data)<<0))
#define DC_PHY_PTG_CMD_SRAM_0_dat_src(data)                                          ((0xFFFFFFFF&(data))>>0)
#define DC_PHY_PTG_CMD_SRAM_0_get_dat(data)                                          ((0xFFFFFFFF&(data))>>0)


#define DC_PHY_PTG_CMD_SRAM_1                                                        0x18008F24
#define DC_PHY_PTG_CMD_SRAM_1_reg_addr                                               "0xB8008F24"
#define DC_PHY_PTG_CMD_SRAM_1_reg                                                    0xB8008F24
#define set_DC_PHY_PTG_CMD_SRAM_1_reg(data)   (*((volatile unsigned int*) DC_PHY_PTG_CMD_SRAM_1_reg)=data)
#define get_DC_PHY_PTG_CMD_SRAM_1_reg   (*((volatile unsigned int*) DC_PHY_PTG_CMD_SRAM_1_reg))
#define DC_PHY_PTG_CMD_SRAM_1_inst_adr                                               "0x00C9"
#define DC_PHY_PTG_CMD_SRAM_1_inst                                                   0x00C9
#define DC_PHY_PTG_CMD_SRAM_1_dat_shift                                              (0)
#define DC_PHY_PTG_CMD_SRAM_1_dat_mask                                               (0x0000FFFF)
#define DC_PHY_PTG_CMD_SRAM_1_dat(data)                                              (0x0000FFFF&((data)<<0))
#define DC_PHY_PTG_CMD_SRAM_1_dat_src(data)                                          ((0x0000FFFF&(data))>>0)
#define DC_PHY_PTG_CMD_SRAM_1_get_dat(data)                                          ((0x0000FFFF&(data))>>0)


#define DC_PHY_PTG_CMP_FAIL_CMD_0                                                    0x18008F28
#define DC_PHY_PTG_CMP_FAIL_CMD_0_reg_addr                                           "0xB8008F28"
#define DC_PHY_PTG_CMP_FAIL_CMD_0_reg                                                0xB8008F28
#define set_DC_PHY_PTG_CMP_FAIL_CMD_0_reg(data)   (*((volatile unsigned int*) DC_PHY_PTG_CMP_FAIL_CMD_0_reg)=data)
#define get_DC_PHY_PTG_CMP_FAIL_CMD_0_reg   (*((volatile unsigned int*) DC_PHY_PTG_CMP_FAIL_CMD_0_reg))
#define DC_PHY_PTG_CMP_FAIL_CMD_0_inst_adr                                           "0x00CA"
#define DC_PHY_PTG_CMP_FAIL_CMD_0_inst                                               0x00CA
#define DC_PHY_PTG_CMP_FAIL_CMD_0_dat_shift                                          (0)
#define DC_PHY_PTG_CMP_FAIL_CMD_0_dat_mask                                           (0xFFFFFFFF)
#define DC_PHY_PTG_CMP_FAIL_CMD_0_dat(data)                                          (0xFFFFFFFF&((data)<<0))
#define DC_PHY_PTG_CMP_FAIL_CMD_0_dat_src(data)                                      ((0xFFFFFFFF&(data))>>0)
#define DC_PHY_PTG_CMP_FAIL_CMD_0_get_dat(data)                                      ((0xFFFFFFFF&(data))>>0)


#define DC_PHY_PTG_CMP_FAIL_CMD_1                                                    0x18008F2C
#define DC_PHY_PTG_CMP_FAIL_CMD_1_reg_addr                                           "0xB8008F2C"
#define DC_PHY_PTG_CMP_FAIL_CMD_1_reg                                                0xB8008F2C
#define set_DC_PHY_PTG_CMP_FAIL_CMD_1_reg(data)   (*((volatile unsigned int*) DC_PHY_PTG_CMP_FAIL_CMD_1_reg)=data)
#define get_DC_PHY_PTG_CMP_FAIL_CMD_1_reg   (*((volatile unsigned int*) DC_PHY_PTG_CMP_FAIL_CMD_1_reg))
#define DC_PHY_PTG_CMP_FAIL_CMD_1_inst_adr                                           "0x00CB"
#define DC_PHY_PTG_CMP_FAIL_CMD_1_inst                                               0x00CB
#define DC_PHY_PTG_CMP_FAIL_CMD_1_wmask_shift                                        (16)
#define DC_PHY_PTG_CMP_FAIL_CMD_1_wmask_mask                                         (0xFFFF0000)
#define DC_PHY_PTG_CMP_FAIL_CMD_1_wmask(data)                                        (0xFFFF0000&((data)<<16))
#define DC_PHY_PTG_CMP_FAIL_CMD_1_wmask_src(data)                                    ((0xFFFF0000&(data))>>16)
#define DC_PHY_PTG_CMP_FAIL_CMD_1_get_wmask(data)                                    ((0xFFFF0000&(data))>>16)
#define DC_PHY_PTG_CMP_FAIL_CMD_1_dat_shift                                          (0)
#define DC_PHY_PTG_CMP_FAIL_CMD_1_dat_mask                                           (0x0000FFFF)
#define DC_PHY_PTG_CMP_FAIL_CMD_1_dat(data)                                          (0x0000FFFF&((data)<<0))
#define DC_PHY_PTG_CMP_FAIL_CMD_1_dat_src(data)                                      ((0x0000FFFF&(data))>>0)
#define DC_PHY_PTG_CMP_FAIL_CMD_1_get_dat(data)                                      ((0x0000FFFF&(data))>>0)


#define DC_PHY_PTG_CMP_FAIL_EXP_0                                                    0x18008F30
#define DC_PHY_PTG_CMP_FAIL_EXP_0_reg_addr                                           "0xB8008F30"
#define DC_PHY_PTG_CMP_FAIL_EXP_0_reg                                                0xB8008F30
#define set_DC_PHY_PTG_CMP_FAIL_EXP_0_reg(data)   (*((volatile unsigned int*) DC_PHY_PTG_CMP_FAIL_EXP_0_reg)=data)
#define get_DC_PHY_PTG_CMP_FAIL_EXP_0_reg   (*((volatile unsigned int*) DC_PHY_PTG_CMP_FAIL_EXP_0_reg))
#define DC_PHY_PTG_CMP_FAIL_EXP_0_inst_adr                                           "0x00CC"
#define DC_PHY_PTG_CMP_FAIL_EXP_0_inst                                               0x00CC
#define DC_PHY_PTG_CMP_FAIL_EXP_0_dat_shift                                          (0)
#define DC_PHY_PTG_CMP_FAIL_EXP_0_dat_mask                                           (0xFFFFFFFF)
#define DC_PHY_PTG_CMP_FAIL_EXP_0_dat(data)                                          (0xFFFFFFFF&((data)<<0))
#define DC_PHY_PTG_CMP_FAIL_EXP_0_dat_src(data)                                      ((0xFFFFFFFF&(data))>>0)
#define DC_PHY_PTG_CMP_FAIL_EXP_0_get_dat(data)                                      ((0xFFFFFFFF&(data))>>0)


#define DC_PHY_PTG_CMP_FAIL_EXP_1                                                    0x18008F34
#define DC_PHY_PTG_CMP_FAIL_EXP_1_reg_addr                                           "0xB8008F34"
#define DC_PHY_PTG_CMP_FAIL_EXP_1_reg                                                0xB8008F34
#define set_DC_PHY_PTG_CMP_FAIL_EXP_1_reg(data)   (*((volatile unsigned int*) DC_PHY_PTG_CMP_FAIL_EXP_1_reg)=data)
#define get_DC_PHY_PTG_CMP_FAIL_EXP_1_reg   (*((volatile unsigned int*) DC_PHY_PTG_CMP_FAIL_EXP_1_reg))
#define DC_PHY_PTG_CMP_FAIL_EXP_1_inst_adr                                           "0x00CD"
#define DC_PHY_PTG_CMP_FAIL_EXP_1_inst                                               0x00CD
#define DC_PHY_PTG_CMP_FAIL_EXP_1_dat_shift                                          (0)
#define DC_PHY_PTG_CMP_FAIL_EXP_1_dat_mask                                           (0xFFFFFFFF)
#define DC_PHY_PTG_CMP_FAIL_EXP_1_dat(data)                                          (0xFFFFFFFF&((data)<<0))
#define DC_PHY_PTG_CMP_FAIL_EXP_1_dat_src(data)                                      ((0xFFFFFFFF&(data))>>0)
#define DC_PHY_PTG_CMP_FAIL_EXP_1_get_dat(data)                                      ((0xFFFFFFFF&(data))>>0)


#define DC_PHY_PTG_CMP_FAIL_EXP_2                                                    0x18008F38
#define DC_PHY_PTG_CMP_FAIL_EXP_2_reg_addr                                           "0xB8008F38"
#define DC_PHY_PTG_CMP_FAIL_EXP_2_reg                                                0xB8008F38
#define set_DC_PHY_PTG_CMP_FAIL_EXP_2_reg(data)   (*((volatile unsigned int*) DC_PHY_PTG_CMP_FAIL_EXP_2_reg)=data)
#define get_DC_PHY_PTG_CMP_FAIL_EXP_2_reg   (*((volatile unsigned int*) DC_PHY_PTG_CMP_FAIL_EXP_2_reg))
#define DC_PHY_PTG_CMP_FAIL_EXP_2_inst_adr                                           "0x00CE"
#define DC_PHY_PTG_CMP_FAIL_EXP_2_inst                                               0x00CE
#define DC_PHY_PTG_CMP_FAIL_EXP_2_dat_shift                                          (0)
#define DC_PHY_PTG_CMP_FAIL_EXP_2_dat_mask                                           (0xFFFFFFFF)
#define DC_PHY_PTG_CMP_FAIL_EXP_2_dat(data)                                          (0xFFFFFFFF&((data)<<0))
#define DC_PHY_PTG_CMP_FAIL_EXP_2_dat_src(data)                                      ((0xFFFFFFFF&(data))>>0)
#define DC_PHY_PTG_CMP_FAIL_EXP_2_get_dat(data)                                      ((0xFFFFFFFF&(data))>>0)


#define DC_PHY_PTG_CMP_FAIL_EXP_3                                                    0x18008F3C
#define DC_PHY_PTG_CMP_FAIL_EXP_3_reg_addr                                           "0xB8008F3C"
#define DC_PHY_PTG_CMP_FAIL_EXP_3_reg                                                0xB8008F3C
#define set_DC_PHY_PTG_CMP_FAIL_EXP_3_reg(data)   (*((volatile unsigned int*) DC_PHY_PTG_CMP_FAIL_EXP_3_reg)=data)
#define get_DC_PHY_PTG_CMP_FAIL_EXP_3_reg   (*((volatile unsigned int*) DC_PHY_PTG_CMP_FAIL_EXP_3_reg))
#define DC_PHY_PTG_CMP_FAIL_EXP_3_inst_adr                                           "0x00CF"
#define DC_PHY_PTG_CMP_FAIL_EXP_3_inst                                               0x00CF
#define DC_PHY_PTG_CMP_FAIL_EXP_3_dat_shift                                          (0)
#define DC_PHY_PTG_CMP_FAIL_EXP_3_dat_mask                                           (0xFFFFFFFF)
#define DC_PHY_PTG_CMP_FAIL_EXP_3_dat(data)                                          (0xFFFFFFFF&((data)<<0))
#define DC_PHY_PTG_CMP_FAIL_EXP_3_dat_src(data)                                      ((0xFFFFFFFF&(data))>>0)
#define DC_PHY_PTG_CMP_FAIL_EXP_3_get_dat(data)                                      ((0xFFFFFFFF&(data))>>0)


#define DC_PHY_PTG_CMP_FAIL_READ_0                                                   0x18008F40
#define DC_PHY_PTG_CMP_FAIL_READ_0_reg_addr                                          "0xB8008F40"
#define DC_PHY_PTG_CMP_FAIL_READ_0_reg                                               0xB8008F40
#define set_DC_PHY_PTG_CMP_FAIL_READ_0_reg(data)   (*((volatile unsigned int*) DC_PHY_PTG_CMP_FAIL_READ_0_reg)=data)
#define get_DC_PHY_PTG_CMP_FAIL_READ_0_reg   (*((volatile unsigned int*) DC_PHY_PTG_CMP_FAIL_READ_0_reg))
#define DC_PHY_PTG_CMP_FAIL_READ_0_inst_adr                                          "0x00D0"
#define DC_PHY_PTG_CMP_FAIL_READ_0_inst                                              0x00D0
#define DC_PHY_PTG_CMP_FAIL_READ_0_dat_shift                                         (0)
#define DC_PHY_PTG_CMP_FAIL_READ_0_dat_mask                                          (0xFFFFFFFF)
#define DC_PHY_PTG_CMP_FAIL_READ_0_dat(data)                                         (0xFFFFFFFF&((data)<<0))
#define DC_PHY_PTG_CMP_FAIL_READ_0_dat_src(data)                                     ((0xFFFFFFFF&(data))>>0)
#define DC_PHY_PTG_CMP_FAIL_READ_0_get_dat(data)                                     ((0xFFFFFFFF&(data))>>0)


#define DC_PHY_PTG_CMP_FAIL_READ_1                                                   0x18008F44
#define DC_PHY_PTG_CMP_FAIL_READ_1_reg_addr                                          "0xB8008F44"
#define DC_PHY_PTG_CMP_FAIL_READ_1_reg                                               0xB8008F44
#define set_DC_PHY_PTG_CMP_FAIL_READ_1_reg(data)   (*((volatile unsigned int*) DC_PHY_PTG_CMP_FAIL_READ_1_reg)=data)
#define get_DC_PHY_PTG_CMP_FAIL_READ_1_reg   (*((volatile unsigned int*) DC_PHY_PTG_CMP_FAIL_READ_1_reg))
#define DC_PHY_PTG_CMP_FAIL_READ_1_inst_adr                                          "0x00D1"
#define DC_PHY_PTG_CMP_FAIL_READ_1_inst                                              0x00D1
#define DC_PHY_PTG_CMP_FAIL_READ_1_dat_shift                                         (0)
#define DC_PHY_PTG_CMP_FAIL_READ_1_dat_mask                                          (0xFFFFFFFF)
#define DC_PHY_PTG_CMP_FAIL_READ_1_dat(data)                                         (0xFFFFFFFF&((data)<<0))
#define DC_PHY_PTG_CMP_FAIL_READ_1_dat_src(data)                                     ((0xFFFFFFFF&(data))>>0)
#define DC_PHY_PTG_CMP_FAIL_READ_1_get_dat(data)                                     ((0xFFFFFFFF&(data))>>0)


#define DC_PHY_PTG_CMP_FAIL_READ_2                                                   0x18008F48
#define DC_PHY_PTG_CMP_FAIL_READ_2_reg_addr                                          "0xB8008F48"
#define DC_PHY_PTG_CMP_FAIL_READ_2_reg                                               0xB8008F48
#define set_DC_PHY_PTG_CMP_FAIL_READ_2_reg(data)   (*((volatile unsigned int*) DC_PHY_PTG_CMP_FAIL_READ_2_reg)=data)
#define get_DC_PHY_PTG_CMP_FAIL_READ_2_reg   (*((volatile unsigned int*) DC_PHY_PTG_CMP_FAIL_READ_2_reg))
#define DC_PHY_PTG_CMP_FAIL_READ_2_inst_adr                                          "0x00D2"
#define DC_PHY_PTG_CMP_FAIL_READ_2_inst                                              0x00D2
#define DC_PHY_PTG_CMP_FAIL_READ_2_dat_shift                                         (0)
#define DC_PHY_PTG_CMP_FAIL_READ_2_dat_mask                                          (0xFFFFFFFF)
#define DC_PHY_PTG_CMP_FAIL_READ_2_dat(data)                                         (0xFFFFFFFF&((data)<<0))
#define DC_PHY_PTG_CMP_FAIL_READ_2_dat_src(data)                                     ((0xFFFFFFFF&(data))>>0)
#define DC_PHY_PTG_CMP_FAIL_READ_2_get_dat(data)                                     ((0xFFFFFFFF&(data))>>0)


#define DC_PHY_PTG_CMP_FAIL_READ_3                                                   0x18008F4C
#define DC_PHY_PTG_CMP_FAIL_READ_3_reg_addr                                          "0xB8008F4C"
#define DC_PHY_PTG_CMP_FAIL_READ_3_reg                                               0xB8008F4C
#define set_DC_PHY_PTG_CMP_FAIL_READ_3_reg(data)   (*((volatile unsigned int*) DC_PHY_PTG_CMP_FAIL_READ_3_reg)=data)
#define get_DC_PHY_PTG_CMP_FAIL_READ_3_reg   (*((volatile unsigned int*) DC_PHY_PTG_CMP_FAIL_READ_3_reg))
#define DC_PHY_PTG_CMP_FAIL_READ_3_inst_adr                                          "0x00D3"
#define DC_PHY_PTG_CMP_FAIL_READ_3_inst                                              0x00D3
#define DC_PHY_PTG_CMP_FAIL_READ_3_dat_shift                                         (0)
#define DC_PHY_PTG_CMP_FAIL_READ_3_dat_mask                                          (0xFFFFFFFF)
#define DC_PHY_PTG_CMP_FAIL_READ_3_dat(data)                                         (0xFFFFFFFF&((data)<<0))
#define DC_PHY_PTG_CMP_FAIL_READ_3_dat_src(data)                                     ((0xFFFFFFFF&(data))>>0)
#define DC_PHY_PTG_CMP_FAIL_READ_3_get_dat(data)                                     ((0xFFFFFFFF&(data))>>0)


#define DC_PHY_PTG_STS_0                                                             0x18008F50
#define DC_PHY_PTG_STS_0_reg_addr                                                    "0xB8008F50"
#define DC_PHY_PTG_STS_0_reg                                                         0xB8008F50
#define set_DC_PHY_PTG_STS_0_reg(data)   (*((volatile unsigned int*) DC_PHY_PTG_STS_0_reg)=data)
#define get_DC_PHY_PTG_STS_0_reg   (*((volatile unsigned int*) DC_PHY_PTG_STS_0_reg))
#define DC_PHY_PTG_STS_0_inst_adr                                                    "0x00D4"
#define DC_PHY_PTG_STS_0_inst                                                        0x00D4
#define DC_PHY_PTG_STS_0_sent_cmd_shift                                              (0)
#define DC_PHY_PTG_STS_0_sent_cmd_mask                                               (0xFFFFFFFF)
#define DC_PHY_PTG_STS_0_sent_cmd(data)                                              (0xFFFFFFFF&((data)<<0))
#define DC_PHY_PTG_STS_0_sent_cmd_src(data)                                          ((0xFFFFFFFF&(data))>>0)
#define DC_PHY_PTG_STS_0_get_sent_cmd(data)                                          ((0xFFFFFFFF&(data))>>0)


#define DC_PHY_PTG_STS_1                                                             0x18008F54
#define DC_PHY_PTG_STS_1_reg_addr                                                    "0xB8008F54"
#define DC_PHY_PTG_STS_1_reg                                                         0xB8008F54
#define set_DC_PHY_PTG_STS_1_reg(data)   (*((volatile unsigned int*) DC_PHY_PTG_STS_1_reg)=data)
#define get_DC_PHY_PTG_STS_1_reg   (*((volatile unsigned int*) DC_PHY_PTG_STS_1_reg))
#define DC_PHY_PTG_STS_1_inst_adr                                                    "0x00D5"
#define DC_PHY_PTG_STS_1_inst                                                        0x00D5
#define DC_PHY_PTG_STS_1_cmp_cmd_shift                                               (0)
#define DC_PHY_PTG_STS_1_cmp_cmd_mask                                                (0xFFFFFFFF)
#define DC_PHY_PTG_STS_1_cmp_cmd(data)                                               (0xFFFFFFFF&((data)<<0))
#define DC_PHY_PTG_STS_1_cmp_cmd_src(data)                                           ((0xFFFFFFFF&(data))>>0)
#define DC_PHY_PTG_STS_1_get_cmp_cmd(data)                                           ((0xFFFFFFFF&(data))>>0)


#define DC_PHY_PTG_STS_2                                                             0x18008F58
#define DC_PHY_PTG_STS_2_reg_addr                                                    "0xB8008F58"
#define DC_PHY_PTG_STS_2_reg                                                         0xB8008F58
#define set_DC_PHY_PTG_STS_2_reg(data)   (*((volatile unsigned int*) DC_PHY_PTG_STS_2_reg)=data)
#define get_DC_PHY_PTG_STS_2_reg   (*((volatile unsigned int*) DC_PHY_PTG_STS_2_reg))
#define DC_PHY_PTG_STS_2_inst_adr                                                    "0x00D6"
#define DC_PHY_PTG_STS_2_inst                                                        0x00D6
#define DC_PHY_PTG_STS_2_sent_wr_cmd_shift                                           (0)
#define DC_PHY_PTG_STS_2_sent_wr_cmd_mask                                            (0xFFFFFFFF)
#define DC_PHY_PTG_STS_2_sent_wr_cmd(data)                                           (0xFFFFFFFF&((data)<<0))
#define DC_PHY_PTG_STS_2_sent_wr_cmd_src(data)                                       ((0xFFFFFFFF&(data))>>0)
#define DC_PHY_PTG_STS_2_get_sent_wr_cmd(data)                                       ((0xFFFFFFFF&(data))>>0)


#define DC_PHY_PTG_STS_3                                                             0x18008F5C
#define DC_PHY_PTG_STS_3_reg_addr                                                    "0xB8008F5C"
#define DC_PHY_PTG_STS_3_reg                                                         0xB8008F5C
#define set_DC_PHY_PTG_STS_3_reg(data)   (*((volatile unsigned int*) DC_PHY_PTG_STS_3_reg)=data)
#define get_DC_PHY_PTG_STS_3_reg   (*((volatile unsigned int*) DC_PHY_PTG_STS_3_reg))
#define DC_PHY_PTG_STS_3_inst_adr                                                    "0x00D7"
#define DC_PHY_PTG_STS_3_inst                                                        0x00D7
#define DC_PHY_PTG_STS_3_sent_rd_cmd_shift                                           (0)
#define DC_PHY_PTG_STS_3_sent_rd_cmd_mask                                            (0xFFFFFFFF)
#define DC_PHY_PTG_STS_3_sent_rd_cmd(data)                                           (0xFFFFFFFF&((data)<<0))
#define DC_PHY_PTG_STS_3_sent_rd_cmd_src(data)                                       ((0xFFFFFFFF&(data))>>0)
#define DC_PHY_PTG_STS_3_get_sent_rd_cmd(data)                                       ((0xFFFFFFFF&(data))>>0)


#define DC_PHY_PTG_RANDOM_0                                                          0x18008F60
#define DC_PHY_PTG_RANDOM_0_reg_addr                                                 "0xB8008F60"
#define DC_PHY_PTG_RANDOM_0_reg                                                      0xB8008F60
#define set_DC_PHY_PTG_RANDOM_0_reg(data)   (*((volatile unsigned int*) DC_PHY_PTG_RANDOM_0_reg)=data)
#define get_DC_PHY_PTG_RANDOM_0_reg   (*((volatile unsigned int*) DC_PHY_PTG_RANDOM_0_reg))
#define DC_PHY_PTG_RANDOM_0_inst_adr                                                 "0x00D8"
#define DC_PHY_PTG_RANDOM_0_inst                                                     0x00D8
#define DC_PHY_PTG_RANDOM_0_data_shift                                               (0)
#define DC_PHY_PTG_RANDOM_0_data_mask                                                (0xFFFFFFFF)
#define DC_PHY_PTG_RANDOM_0_data(data)                                               (0xFFFFFFFF&((data)<<0))
#define DC_PHY_PTG_RANDOM_0_data_src(data)                                           ((0xFFFFFFFF&(data))>>0)
#define DC_PHY_PTG_RANDOM_0_get_data(data)                                           ((0xFFFFFFFF&(data))>>0)


#define DC_PHY_PTG_RANDOM_1                                                          0x18008F64
#define DC_PHY_PTG_RANDOM_1_reg_addr                                                 "0xB8008F64"
#define DC_PHY_PTG_RANDOM_1_reg                                                      0xB8008F64
#define set_DC_PHY_PTG_RANDOM_1_reg(data)   (*((volatile unsigned int*) DC_PHY_PTG_RANDOM_1_reg)=data)
#define get_DC_PHY_PTG_RANDOM_1_reg   (*((volatile unsigned int*) DC_PHY_PTG_RANDOM_1_reg))
#define DC_PHY_PTG_RANDOM_1_inst_adr                                                 "0x00D9"
#define DC_PHY_PTG_RANDOM_1_inst                                                     0x00D9
#define DC_PHY_PTG_RANDOM_1_data_shift                                               (0)
#define DC_PHY_PTG_RANDOM_1_data_mask                                                (0xFFFFFFFF)
#define DC_PHY_PTG_RANDOM_1_data(data)                                               (0xFFFFFFFF&((data)<<0))
#define DC_PHY_PTG_RANDOM_1_data_src(data)                                           ((0xFFFFFFFF&(data))>>0)
#define DC_PHY_PTG_RANDOM_1_get_data(data)                                           ((0xFFFFFFFF&(data))>>0)


#define DC_PHY_PTG_RANDOM_2                                                          0x18008F68
#define DC_PHY_PTG_RANDOM_2_reg_addr                                                 "0xB8008F68"
#define DC_PHY_PTG_RANDOM_2_reg                                                      0xB8008F68
#define set_DC_PHY_PTG_RANDOM_2_reg(data)   (*((volatile unsigned int*) DC_PHY_PTG_RANDOM_2_reg)=data)
#define get_DC_PHY_PTG_RANDOM_2_reg   (*((volatile unsigned int*) DC_PHY_PTG_RANDOM_2_reg))
#define DC_PHY_PTG_RANDOM_2_inst_adr                                                 "0x00DA"
#define DC_PHY_PTG_RANDOM_2_inst                                                     0x00DA
#define DC_PHY_PTG_RANDOM_2_data_shift                                               (0)
#define DC_PHY_PTG_RANDOM_2_data_mask                                                (0xFFFFFFFF)
#define DC_PHY_PTG_RANDOM_2_data(data)                                               (0xFFFFFFFF&((data)<<0))
#define DC_PHY_PTG_RANDOM_2_data_src(data)                                           ((0xFFFFFFFF&(data))>>0)
#define DC_PHY_PTG_RANDOM_2_get_data(data)                                           ((0xFFFFFFFF&(data))>>0)


#define DC_PHY_PTG_RANDOM_3                                                          0x18008F6C
#define DC_PHY_PTG_RANDOM_3_reg_addr                                                 "0xB8008F6C"
#define DC_PHY_PTG_RANDOM_3_reg                                                      0xB8008F6C
#define set_DC_PHY_PTG_RANDOM_3_reg(data)   (*((volatile unsigned int*) DC_PHY_PTG_RANDOM_3_reg)=data)
#define get_DC_PHY_PTG_RANDOM_3_reg   (*((volatile unsigned int*) DC_PHY_PTG_RANDOM_3_reg))
#define DC_PHY_PTG_RANDOM_3_inst_adr                                                 "0x00DB"
#define DC_PHY_PTG_RANDOM_3_inst                                                     0x00DB
#define DC_PHY_PTG_RANDOM_3_data_shift                                               (0)
#define DC_PHY_PTG_RANDOM_3_data_mask                                                (0xFFFFFFFF)
#define DC_PHY_PTG_RANDOM_3_data(data)                                               (0xFFFFFFFF&((data)<<0))
#define DC_PHY_PTG_RANDOM_3_data_src(data)                                           ((0xFFFFFFFF&(data))>>0)
#define DC_PHY_PTG_RANDOM_3_get_data(data)                                           ((0xFFFFFFFF&(data))>>0)


#define DC_PHY_PTG_RW_SRAM_CTRL                                                      0x18008F70
#define DC_PHY_PTG_RW_SRAM_CTRL_reg_addr                                             "0xB8008F70"
#define DC_PHY_PTG_RW_SRAM_CTRL_reg                                                  0xB8008F70
#define set_DC_PHY_PTG_RW_SRAM_CTRL_reg(data)   (*((volatile unsigned int*) DC_PHY_PTG_RW_SRAM_CTRL_reg)=data)
#define get_DC_PHY_PTG_RW_SRAM_CTRL_reg   (*((volatile unsigned int*) DC_PHY_PTG_RW_SRAM_CTRL_reg))
#define DC_PHY_PTG_RW_SRAM_CTRL_inst_adr                                             "0x00DC"
#define DC_PHY_PTG_RW_SRAM_CTRL_inst                                                 0x00DC
#define DC_PHY_PTG_RW_SRAM_CTRL_rcv_cfg_en_shift                                     (17)
#define DC_PHY_PTG_RW_SRAM_CTRL_rcv_cfg_en_mask                                      (0x00020000)
#define DC_PHY_PTG_RW_SRAM_CTRL_rcv_cfg_en(data)                                     (0x00020000&((data)<<17))
#define DC_PHY_PTG_RW_SRAM_CTRL_rcv_cfg_en_src(data)                                 ((0x00020000&(data))>>17)
#define DC_PHY_PTG_RW_SRAM_CTRL_get_rcv_cfg_en(data)                                 ((0x00020000&(data))>>17)
#define DC_PHY_PTG_RW_SRAM_CTRL_rcv_wr_shift                                         (16)
#define DC_PHY_PTG_RW_SRAM_CTRL_rcv_wr_mask                                          (0x00010000)
#define DC_PHY_PTG_RW_SRAM_CTRL_rcv_wr(data)                                         (0x00010000&((data)<<16))
#define DC_PHY_PTG_RW_SRAM_CTRL_rcv_wr_src(data)                                     ((0x00010000&(data))>>16)
#define DC_PHY_PTG_RW_SRAM_CTRL_get_rcv_wr(data)                                     ((0x00010000&(data))>>16)
#define DC_PHY_PTG_RW_SRAM_CTRL_cmp_cfg_en_shift                                     (15)
#define DC_PHY_PTG_RW_SRAM_CTRL_cmp_cfg_en_mask                                      (0x00008000)
#define DC_PHY_PTG_RW_SRAM_CTRL_cmp_cfg_en(data)                                     (0x00008000&((data)<<15))
#define DC_PHY_PTG_RW_SRAM_CTRL_cmp_cfg_en_src(data)                                 ((0x00008000&(data))>>15)
#define DC_PHY_PTG_RW_SRAM_CTRL_get_cmp_cfg_en(data)                                 ((0x00008000&(data))>>15)
#define DC_PHY_PTG_RW_SRAM_CTRL_cmp_wr_shift                                         (14)
#define DC_PHY_PTG_RW_SRAM_CTRL_cmp_wr_mask                                          (0x00004000)
#define DC_PHY_PTG_RW_SRAM_CTRL_cmp_wr(data)                                         (0x00004000&((data)<<14))
#define DC_PHY_PTG_RW_SRAM_CTRL_cmp_wr_src(data)                                     ((0x00004000&(data))>>14)
#define DC_PHY_PTG_RW_SRAM_CTRL_get_cmp_wr(data)                                     ((0x00004000&(data))>>14)
#define DC_PHY_PTG_RW_SRAM_CTRL_xmt_cfg_en_shift                                     (13)
#define DC_PHY_PTG_RW_SRAM_CTRL_xmt_cfg_en_mask                                      (0x00002000)
#define DC_PHY_PTG_RW_SRAM_CTRL_xmt_cfg_en(data)                                     (0x00002000&((data)<<13))
#define DC_PHY_PTG_RW_SRAM_CTRL_xmt_cfg_en_src(data)                                 ((0x00002000&(data))>>13)
#define DC_PHY_PTG_RW_SRAM_CTRL_get_xmt_cfg_en(data)                                 ((0x00002000&(data))>>13)
#define DC_PHY_PTG_RW_SRAM_CTRL_xmt_wr_shift                                         (12)
#define DC_PHY_PTG_RW_SRAM_CTRL_xmt_wr_mask                                          (0x00001000)
#define DC_PHY_PTG_RW_SRAM_CTRL_xmt_wr(data)                                         (0x00001000&((data)<<12))
#define DC_PHY_PTG_RW_SRAM_CTRL_xmt_wr_src(data)                                     ((0x00001000&(data))>>12)
#define DC_PHY_PTG_RW_SRAM_CTRL_get_xmt_wr(data)                                     ((0x00001000&(data))>>12)
#define DC_PHY_PTG_RW_SRAM_CTRL_rcv_addr_shift                                       (8)
#define DC_PHY_PTG_RW_SRAM_CTRL_rcv_addr_mask                                        (0x00000F00)
#define DC_PHY_PTG_RW_SRAM_CTRL_rcv_addr(data)                                       (0x00000F00&((data)<<8))
#define DC_PHY_PTG_RW_SRAM_CTRL_rcv_addr_src(data)                                   ((0x00000F00&(data))>>8)
#define DC_PHY_PTG_RW_SRAM_CTRL_get_rcv_addr(data)                                   ((0x00000F00&(data))>>8)
#define DC_PHY_PTG_RW_SRAM_CTRL_cmp_addr_shift                                       (4)
#define DC_PHY_PTG_RW_SRAM_CTRL_cmp_addr_mask                                        (0x000000F0)
#define DC_PHY_PTG_RW_SRAM_CTRL_cmp_addr(data)                                       (0x000000F0&((data)<<4))
#define DC_PHY_PTG_RW_SRAM_CTRL_cmp_addr_src(data)                                   ((0x000000F0&(data))>>4)
#define DC_PHY_PTG_RW_SRAM_CTRL_get_cmp_addr(data)                                   ((0x000000F0&(data))>>4)
#define DC_PHY_PTG_RW_SRAM_CTRL_xmt_addr_shift                                       (0)
#define DC_PHY_PTG_RW_SRAM_CTRL_xmt_addr_mask                                        (0x0000000F)
#define DC_PHY_PTG_RW_SRAM_CTRL_xmt_addr(data)                                       (0x0000000F&((data)<<0))
#define DC_PHY_PTG_RW_SRAM_CTRL_xmt_addr_src(data)                                   ((0x0000000F&(data))>>0)
#define DC_PHY_PTG_RW_SRAM_CTRL_get_xmt_addr(data)                                   ((0x0000000F&(data))>>0)


#define DC_PHY_PTG_DBG                                                               0x18008F74
#define DC_PHY_PTG_DBG_reg_addr                                                      "0xB8008F74"
#define DC_PHY_PTG_DBG_reg                                                           0xB8008F74
#define set_DC_PHY_PTG_DBG_reg(data)   (*((volatile unsigned int*) DC_PHY_PTG_DBG_reg)=data)
#define get_DC_PHY_PTG_DBG_reg   (*((volatile unsigned int*) DC_PHY_PTG_DBG_reg))
#define DC_PHY_PTG_DBG_inst_adr                                                      "0x00DD"
#define DC_PHY_PTG_DBG_inst                                                          0x00DD
#define DC_PHY_PTG_DBG_test_sys_en_shift                                             (12)
#define DC_PHY_PTG_DBG_test_sys_en_mask                                              (0x00001000)
#define DC_PHY_PTG_DBG_test_sys_en(data)                                             (0x00001000&((data)<<12))
#define DC_PHY_PTG_DBG_test_sys_en_src(data)                                         ((0x00001000&(data))>>12)
#define DC_PHY_PTG_DBG_get_test_sys_en(data)                                         ((0x00001000&(data))>>12)
#define DC_PHY_PTG_DBG_test_sys_sel2_shift                                           (8)
#define DC_PHY_PTG_DBG_test_sys_sel2_mask                                            (0x00000F00)
#define DC_PHY_PTG_DBG_test_sys_sel2(data)                                           (0x00000F00&((data)<<8))
#define DC_PHY_PTG_DBG_test_sys_sel2_src(data)                                       ((0x00000F00&(data))>>8)
#define DC_PHY_PTG_DBG_get_test_sys_sel2(data)                                       ((0x00000F00&(data))>>8)
#define DC_PHY_PTG_DBG_test_sys_sel1_shift                                           (4)
#define DC_PHY_PTG_DBG_test_sys_sel1_mask                                            (0x000000F0)
#define DC_PHY_PTG_DBG_test_sys_sel1(data)                                           (0x000000F0&((data)<<4))
#define DC_PHY_PTG_DBG_test_sys_sel1_src(data)                                       ((0x000000F0&(data))>>4)
#define DC_PHY_PTG_DBG_get_test_sys_sel1(data)                                       ((0x000000F0&(data))>>4)
#define DC_PHY_PTG_DBG_test_sys_sel0_shift                                           (0)
#define DC_PHY_PTG_DBG_test_sys_sel0_mask                                            (0x0000000F)
#define DC_PHY_PTG_DBG_test_sys_sel0(data)                                           (0x0000000F&((data)<<0))
#define DC_PHY_PTG_DBG_test_sys_sel0_src(data)                                       ((0x0000000F&(data))>>0)
#define DC_PHY_PTG_DBG_get_test_sys_sel0(data)                                       ((0x0000000F&(data))>>0)


#define DC_PHY_PTG_XMT_SRAM_0                                                        0x18008F80
#define DC_PHY_PTG_XMT_SRAM_1                                                        0x18008F84
#define DC_PHY_PTG_XMT_SRAM_2                                                        0x18008F88
#define DC_PHY_PTG_XMT_SRAM_3                                                        0x18008F8C
#define DC_PHY_PTG_XMT_SRAM_0_reg_addr                                               "0xB8008F80"
#define DC_PHY_PTG_XMT_SRAM_1_reg_addr                                               "0xB8008F84"
#define DC_PHY_PTG_XMT_SRAM_2_reg_addr                                               "0xB8008F88"
#define DC_PHY_PTG_XMT_SRAM_3_reg_addr                                               "0xB8008F8C"
#define DC_PHY_PTG_XMT_SRAM_0_reg                                                    0xB8008F80
#define DC_PHY_PTG_XMT_SRAM_1_reg                                                    0xB8008F84
#define DC_PHY_PTG_XMT_SRAM_2_reg                                                    0xB8008F88
#define DC_PHY_PTG_XMT_SRAM_3_reg                                                    0xB8008F8C
#define set_DC_PHY_PTG_XMT_SRAM_0_reg(data)   (*((volatile unsigned int*) DC_PHY_PTG_XMT_SRAM_0_reg)=data)
#define set_DC_PHY_PTG_XMT_SRAM_1_reg(data)   (*((volatile unsigned int*) DC_PHY_PTG_XMT_SRAM_1_reg)=data)
#define set_DC_PHY_PTG_XMT_SRAM_2_reg(data)   (*((volatile unsigned int*) DC_PHY_PTG_XMT_SRAM_2_reg)=data)
#define set_DC_PHY_PTG_XMT_SRAM_3_reg(data)   (*((volatile unsigned int*) DC_PHY_PTG_XMT_SRAM_3_reg)=data)
#define get_DC_PHY_PTG_XMT_SRAM_0_reg   (*((volatile unsigned int*) DC_PHY_PTG_XMT_SRAM_0_reg))
#define get_DC_PHY_PTG_XMT_SRAM_1_reg   (*((volatile unsigned int*) DC_PHY_PTG_XMT_SRAM_1_reg))
#define get_DC_PHY_PTG_XMT_SRAM_2_reg   (*((volatile unsigned int*) DC_PHY_PTG_XMT_SRAM_2_reg))
#define get_DC_PHY_PTG_XMT_SRAM_3_reg   (*((volatile unsigned int*) DC_PHY_PTG_XMT_SRAM_3_reg))
#define DC_PHY_PTG_XMT_SRAM_0_inst_adr                                               "0x00E0"
#define DC_PHY_PTG_XMT_SRAM_1_inst_adr                                               "0x00E1"
#define DC_PHY_PTG_XMT_SRAM_2_inst_adr                                               "0x00E2"
#define DC_PHY_PTG_XMT_SRAM_3_inst_adr                                               "0x00E3"
#define DC_PHY_PTG_XMT_SRAM_0_inst                                                   0x00E0
#define DC_PHY_PTG_XMT_SRAM_1_inst                                                   0x00E1
#define DC_PHY_PTG_XMT_SRAM_2_inst                                                   0x00E2
#define DC_PHY_PTG_XMT_SRAM_3_inst                                                   0x00E3
#define DC_PHY_PTG_XMT_SRAM_dat_shift                                                (0)
#define DC_PHY_PTG_XMT_SRAM_dat_mask                                                 (0xFFFFFFFF)
#define DC_PHY_PTG_XMT_SRAM_dat(data)                                                (0xFFFFFFFF&((data)<<0))
#define DC_PHY_PTG_XMT_SRAM_dat_src(data)                                            ((0xFFFFFFFF&(data))>>0)
#define DC_PHY_PTG_XMT_SRAM_get_dat(data)                                            ((0xFFFFFFFF&(data))>>0)


#define DC_PHY_PTG_CMP_SRAM_0                                                        0x18008F90
#define DC_PHY_PTG_CMP_SRAM_1                                                        0x18008F94
#define DC_PHY_PTG_CMP_SRAM_2                                                        0x18008F98
#define DC_PHY_PTG_CMP_SRAM_3                                                        0x18008F9C
#define DC_PHY_PTG_CMP_SRAM_0_reg_addr                                               "0xB8008F90"
#define DC_PHY_PTG_CMP_SRAM_1_reg_addr                                               "0xB8008F94"
#define DC_PHY_PTG_CMP_SRAM_2_reg_addr                                               "0xB8008F98"
#define DC_PHY_PTG_CMP_SRAM_3_reg_addr                                               "0xB8008F9C"
#define DC_PHY_PTG_CMP_SRAM_0_reg                                                    0xB8008F90
#define DC_PHY_PTG_CMP_SRAM_1_reg                                                    0xB8008F94
#define DC_PHY_PTG_CMP_SRAM_2_reg                                                    0xB8008F98
#define DC_PHY_PTG_CMP_SRAM_3_reg                                                    0xB8008F9C
#define set_DC_PHY_PTG_CMP_SRAM_0_reg(data)   (*((volatile unsigned int*) DC_PHY_PTG_CMP_SRAM_0_reg)=data)
#define set_DC_PHY_PTG_CMP_SRAM_1_reg(data)   (*((volatile unsigned int*) DC_PHY_PTG_CMP_SRAM_1_reg)=data)
#define set_DC_PHY_PTG_CMP_SRAM_2_reg(data)   (*((volatile unsigned int*) DC_PHY_PTG_CMP_SRAM_2_reg)=data)
#define set_DC_PHY_PTG_CMP_SRAM_3_reg(data)   (*((volatile unsigned int*) DC_PHY_PTG_CMP_SRAM_3_reg)=data)
#define get_DC_PHY_PTG_CMP_SRAM_0_reg   (*((volatile unsigned int*) DC_PHY_PTG_CMP_SRAM_0_reg))
#define get_DC_PHY_PTG_CMP_SRAM_1_reg   (*((volatile unsigned int*) DC_PHY_PTG_CMP_SRAM_1_reg))
#define get_DC_PHY_PTG_CMP_SRAM_2_reg   (*((volatile unsigned int*) DC_PHY_PTG_CMP_SRAM_2_reg))
#define get_DC_PHY_PTG_CMP_SRAM_3_reg   (*((volatile unsigned int*) DC_PHY_PTG_CMP_SRAM_3_reg))
#define DC_PHY_PTG_CMP_SRAM_0_inst_adr                                               "0x00E4"
#define DC_PHY_PTG_CMP_SRAM_1_inst_adr                                               "0x00E5"
#define DC_PHY_PTG_CMP_SRAM_2_inst_adr                                               "0x00E6"
#define DC_PHY_PTG_CMP_SRAM_3_inst_adr                                               "0x00E7"
#define DC_PHY_PTG_CMP_SRAM_0_inst                                                   0x00E4
#define DC_PHY_PTG_CMP_SRAM_1_inst                                                   0x00E5
#define DC_PHY_PTG_CMP_SRAM_2_inst                                                   0x00E6
#define DC_PHY_PTG_CMP_SRAM_3_inst                                                   0x00E7
#define DC_PHY_PTG_CMP_SRAM_dat_shift                                                (0)
#define DC_PHY_PTG_CMP_SRAM_dat_mask                                                 (0xFFFFFFFF)
#define DC_PHY_PTG_CMP_SRAM_dat(data)                                                (0xFFFFFFFF&((data)<<0))
#define DC_PHY_PTG_CMP_SRAM_dat_src(data)                                            ((0xFFFFFFFF&(data))>>0)
#define DC_PHY_PTG_CMP_SRAM_get_dat(data)                                            ((0xFFFFFFFF&(data))>>0)


#define DC_PHY_PTG_RCV_SRAM_0                                                        0x18008FA0
#define DC_PHY_PTG_RCV_SRAM_1                                                        0x18008FA4
#define DC_PHY_PTG_RCV_SRAM_2                                                        0x18008FA8
#define DC_PHY_PTG_RCV_SRAM_3                                                        0x18008FAC
#define DC_PHY_PTG_RCV_SRAM_0_reg_addr                                               "0xB8008FA0"
#define DC_PHY_PTG_RCV_SRAM_1_reg_addr                                               "0xB8008FA4"
#define DC_PHY_PTG_RCV_SRAM_2_reg_addr                                               "0xB8008FA8"
#define DC_PHY_PTG_RCV_SRAM_3_reg_addr                                               "0xB8008FAC"
#define DC_PHY_PTG_RCV_SRAM_0_reg                                                    0xB8008FA0
#define DC_PHY_PTG_RCV_SRAM_1_reg                                                    0xB8008FA4
#define DC_PHY_PTG_RCV_SRAM_2_reg                                                    0xB8008FA8
#define DC_PHY_PTG_RCV_SRAM_3_reg                                                    0xB8008FAC
#define set_DC_PHY_PTG_RCV_SRAM_0_reg(data)   (*((volatile unsigned int*) DC_PHY_PTG_RCV_SRAM_0_reg)=data)
#define set_DC_PHY_PTG_RCV_SRAM_1_reg(data)   (*((volatile unsigned int*) DC_PHY_PTG_RCV_SRAM_1_reg)=data)
#define set_DC_PHY_PTG_RCV_SRAM_2_reg(data)   (*((volatile unsigned int*) DC_PHY_PTG_RCV_SRAM_2_reg)=data)
#define set_DC_PHY_PTG_RCV_SRAM_3_reg(data)   (*((volatile unsigned int*) DC_PHY_PTG_RCV_SRAM_3_reg)=data)
#define get_DC_PHY_PTG_RCV_SRAM_0_reg   (*((volatile unsigned int*) DC_PHY_PTG_RCV_SRAM_0_reg))
#define get_DC_PHY_PTG_RCV_SRAM_1_reg   (*((volatile unsigned int*) DC_PHY_PTG_RCV_SRAM_1_reg))
#define get_DC_PHY_PTG_RCV_SRAM_2_reg   (*((volatile unsigned int*) DC_PHY_PTG_RCV_SRAM_2_reg))
#define get_DC_PHY_PTG_RCV_SRAM_3_reg   (*((volatile unsigned int*) DC_PHY_PTG_RCV_SRAM_3_reg))
#define DC_PHY_PTG_RCV_SRAM_0_inst_adr                                               "0x00E8"
#define DC_PHY_PTG_RCV_SRAM_1_inst_adr                                               "0x00E9"
#define DC_PHY_PTG_RCV_SRAM_2_inst_adr                                               "0x00EA"
#define DC_PHY_PTG_RCV_SRAM_3_inst_adr                                               "0x00EB"
#define DC_PHY_PTG_RCV_SRAM_0_inst                                                   0x00E8
#define DC_PHY_PTG_RCV_SRAM_1_inst                                                   0x00E9
#define DC_PHY_PTG_RCV_SRAM_2_inst                                                   0x00EA
#define DC_PHY_PTG_RCV_SRAM_3_inst                                                   0x00EB
#define DC_PHY_PTG_RCV_SRAM_dat_shift                                                (0)
#define DC_PHY_PTG_RCV_SRAM_dat_mask                                                 (0xFFFFFFFF)
#define DC_PHY_PTG_RCV_SRAM_dat(data)                                                (0xFFFFFFFF&((data)<<0))
#define DC_PHY_PTG_RCV_SRAM_dat_src(data)                                            ((0xFFFFFFFF&(data))>>0)
#define DC_PHY_PTG_RCV_SRAM_get_dat(data)                                            ((0xFFFFFFFF&(data))>>0)


#define DC_PHY_PTG_WMASK_0                                                           0x18008FE0
#define DC_PHY_PTG_WMASK_1                                                           0x18008FE4
#define DC_PHY_PTG_WMASK_2                                                           0x18008FE8
#define DC_PHY_PTG_WMASK_3                                                           0x18008FEC
#define DC_PHY_PTG_WMASK_4                                                           0x18008FF0
#define DC_PHY_PTG_WMASK_5                                                           0x18008FF4
#define DC_PHY_PTG_WMASK_6                                                           0x18008FF8
#define DC_PHY_PTG_WMASK_7                                                           0x18008FFC
#define DC_PHY_PTG_WMASK_0_reg_addr                                                  "0xB8008FE0"
#define DC_PHY_PTG_WMASK_1_reg_addr                                                  "0xB8008FE4"
#define DC_PHY_PTG_WMASK_2_reg_addr                                                  "0xB8008FE8"
#define DC_PHY_PTG_WMASK_3_reg_addr                                                  "0xB8008FEC"
#define DC_PHY_PTG_WMASK_4_reg_addr                                                  "0xB8008FF0"
#define DC_PHY_PTG_WMASK_5_reg_addr                                                  "0xB8008FF4"
#define DC_PHY_PTG_WMASK_6_reg_addr                                                  "0xB8008FF8"
#define DC_PHY_PTG_WMASK_7_reg_addr                                                  "0xB8008FFC"
#define DC_PHY_PTG_WMASK_0_reg                                                       0xB8008FE0
#define DC_PHY_PTG_WMASK_1_reg                                                       0xB8008FE4
#define DC_PHY_PTG_WMASK_2_reg                                                       0xB8008FE8
#define DC_PHY_PTG_WMASK_3_reg                                                       0xB8008FEC
#define DC_PHY_PTG_WMASK_4_reg                                                       0xB8008FF0
#define DC_PHY_PTG_WMASK_5_reg                                                       0xB8008FF4
#define DC_PHY_PTG_WMASK_6_reg                                                       0xB8008FF8
#define DC_PHY_PTG_WMASK_7_reg                                                       0xB8008FFC
#define set_DC_PHY_PTG_WMASK_0_reg(data)   (*((volatile unsigned int*) DC_PHY_PTG_WMASK_0_reg)=data)
#define set_DC_PHY_PTG_WMASK_1_reg(data)   (*((volatile unsigned int*) DC_PHY_PTG_WMASK_1_reg)=data)
#define set_DC_PHY_PTG_WMASK_2_reg(data)   (*((volatile unsigned int*) DC_PHY_PTG_WMASK_2_reg)=data)
#define set_DC_PHY_PTG_WMASK_3_reg(data)   (*((volatile unsigned int*) DC_PHY_PTG_WMASK_3_reg)=data)
#define set_DC_PHY_PTG_WMASK_4_reg(data)   (*((volatile unsigned int*) DC_PHY_PTG_WMASK_4_reg)=data)
#define set_DC_PHY_PTG_WMASK_5_reg(data)   (*((volatile unsigned int*) DC_PHY_PTG_WMASK_5_reg)=data)
#define set_DC_PHY_PTG_WMASK_6_reg(data)   (*((volatile unsigned int*) DC_PHY_PTG_WMASK_6_reg)=data)
#define set_DC_PHY_PTG_WMASK_7_reg(data)   (*((volatile unsigned int*) DC_PHY_PTG_WMASK_7_reg)=data)
#define get_DC_PHY_PTG_WMASK_0_reg   (*((volatile unsigned int*) DC_PHY_PTG_WMASK_0_reg))
#define get_DC_PHY_PTG_WMASK_1_reg   (*((volatile unsigned int*) DC_PHY_PTG_WMASK_1_reg))
#define get_DC_PHY_PTG_WMASK_2_reg   (*((volatile unsigned int*) DC_PHY_PTG_WMASK_2_reg))
#define get_DC_PHY_PTG_WMASK_3_reg   (*((volatile unsigned int*) DC_PHY_PTG_WMASK_3_reg))
#define get_DC_PHY_PTG_WMASK_4_reg   (*((volatile unsigned int*) DC_PHY_PTG_WMASK_4_reg))
#define get_DC_PHY_PTG_WMASK_5_reg   (*((volatile unsigned int*) DC_PHY_PTG_WMASK_5_reg))
#define get_DC_PHY_PTG_WMASK_6_reg   (*((volatile unsigned int*) DC_PHY_PTG_WMASK_6_reg))
#define get_DC_PHY_PTG_WMASK_7_reg   (*((volatile unsigned int*) DC_PHY_PTG_WMASK_7_reg))
#define DC_PHY_PTG_WMASK_0_inst_adr                                                  "0x00F8"
#define DC_PHY_PTG_WMASK_1_inst_adr                                                  "0x00F9"
#define DC_PHY_PTG_WMASK_2_inst_adr                                                  "0x00FA"
#define DC_PHY_PTG_WMASK_3_inst_adr                                                  "0x00FB"
#define DC_PHY_PTG_WMASK_4_inst_adr                                                  "0x00FC"
#define DC_PHY_PTG_WMASK_5_inst_adr                                                  "0x00FD"
#define DC_PHY_PTG_WMASK_6_inst_adr                                                  "0x00FE"
#define DC_PHY_PTG_WMASK_7_inst_adr                                                  "0x00FF"
#define DC_PHY_PTG_WMASK_0_inst                                                      0x00F8
#define DC_PHY_PTG_WMASK_1_inst                                                      0x00F9
#define DC_PHY_PTG_WMASK_2_inst                                                      0x00FA
#define DC_PHY_PTG_WMASK_3_inst                                                      0x00FB
#define DC_PHY_PTG_WMASK_4_inst                                                      0x00FC
#define DC_PHY_PTG_WMASK_5_inst                                                      0x00FD
#define DC_PHY_PTG_WMASK_6_inst                                                      0x00FE
#define DC_PHY_PTG_WMASK_7_inst                                                      0x00FF
#define DC_PHY_PTG_WMASK_dat_shift                                                   (0)
#define DC_PHY_PTG_WMASK_dat_mask                                                    (0xFFFFFFFF)
#define DC_PHY_PTG_WMASK_dat(data)                                                   (0xFFFFFFFF&((data)<<0))
#define DC_PHY_PTG_WMASK_dat_src(data)                                               ((0xFFFFFFFF&(data))>>0)
#define DC_PHY_PTG_WMASK_get_dat(data)                                               ((0xFFFFFFFF&(data))>>0)


#endif
