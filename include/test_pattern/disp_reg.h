/**************************************************************
// Spec Version                  : 2.03
// Parser Version                : DVR_Parser_6.11(120105)
// CModelGen Version             : 5.1 2012.01.05
// Naming Rule                   :  Module_Register_Name
// Naming Rule                   : Module_Register_Name
// Parse Option                  : Only Parse _op1
// Parse Address Region          : All Address Region 
// Decode bit number             : 12 bits
// Firmware Header Generate Date : 2015/6/16 21:31:59
***************************************************************/


#ifndef _DISP_REG_H_INCLUDED_
#define _DISP_REG_H_INCLUDED_
#ifdef  _DISP_USE_STRUCT
typedef struct 
{
unsigned int     reserved_0:20;
unsigned int     dmic_data_smt:1;
unsigned int     dmic_data_e2:1;
unsigned int     dmic_data_pud_en:1;
unsigned int     dmic_data_pud_sel:1;
unsigned int     dmic_clk_smt:1;
unsigned int     dmic_clk_e2:1;
unsigned int     dmic_clk_pud_en:1;
unsigned int     dmic_clk_pud_sel:1;
unsigned int     spdif_out_smt:1;
unsigned int     spdif_out_e2:1;
unsigned int     spdif_out_pud_en:1;
unsigned int     spdif_out_pud_sel:1;
}DISP_PFUNC0;

typedef struct 
{
unsigned int     reserved_0:4;
unsigned int     ao_sd_3_smt:1;
unsigned int     ao_sd_3_e2:1;
unsigned int     ao_sd_3_pud_en:1;
unsigned int     ao_sd_3_pud_sel:1;
unsigned int     ao_sd_2_smt:1;
unsigned int     ao_sd_2_e2:1;
unsigned int     ao_sd_2_pud_en:1;
unsigned int     ao_sd_2_pud_sel:1;
unsigned int     ao_sd_1_smt:1;
unsigned int     ao_sd_1_e2:1;
unsigned int     ao_sd_1_pud_en:1;
unsigned int     ao_sd_1_pud_sel:1;
unsigned int     ao_sd_0_smt:1;
unsigned int     ao_sd_0_e2:1;
unsigned int     ao_sd_0_pud_en:1;
unsigned int     ao_sd_0_pud_sel:1;
unsigned int     aock_smt:1;
unsigned int     aock_e2:1;
unsigned int     aock_pud_en:1;
unsigned int     aock_pud_sel:1;
unsigned int     ao_bck_smt:1;
unsigned int     ao_bck_e2:1;
unsigned int     ao_bck_pud_en:1;
unsigned int     ao_bck_pud_sel:1;
unsigned int     ao_lrck_smt:1;
unsigned int     ao_lrck_e2:1;
unsigned int     ao_lrck_pud_en:1;
unsigned int     ao_lrck_pud_sel:1;
}DISP_PFUNC1;

typedef struct 
{
unsigned int     reserved_0:10;
unsigned int     ai_loc:2;
unsigned int     ao_sd_3:2;
unsigned int     ao_sd_2:2;
unsigned int     ao_sd_1:2;
unsigned int     ao_sd_0:2;
unsigned int     aock:2;
unsigned int     ao_bck:2;
unsigned int     ao_lrck:2;
unsigned int     dmic_data:2;
unsigned int     dmic_clk:2;
unsigned int     spdif:2;
}DISP_MUXPAD0;

typedef struct 
{
unsigned int     reserved_0:24;
unsigned int     disp_dbg_out1_sel:4;
unsigned int     disp_dbg_out0_sel:4;
}DISP_MISC0;

typedef struct 
{
unsigned int     reserved_0:31;
unsigned int     pg_test_en:1;
}DISP_MISC1;

typedef struct 
{
unsigned int     reserved_0:29;
unsigned int     pg_test1_fail:1;
unsigned int     pg_test0_fail:1;
unsigned int     pg_test_done:1;
}DISP_MISC1;

#endif

#define DISP_PFUNC0                                                                  0x9804D000
#define DISP_PFUNC0_reg_addr                                                         "0xD804D000"
#define DISP_PFUNC0_reg                                                              0xD804D000
#define set_DISP_PFUNC0_reg(data)   (*((volatile unsigned int*) DISP_PFUNC0_reg)=data)
#define get_DISP_PFUNC0_reg   (*((volatile unsigned int*) DISP_PFUNC0_reg))
#define DISP_PFUNC0_inst_adr                                                         "0x0000"
#define DISP_PFUNC0_inst                                                             0x0000
#define DISP_PFUNC0_dmic_data_smt_shift                                              (11)
#define DISP_PFUNC0_dmic_data_smt_mask                                               (0x00000800)
#define DISP_PFUNC0_dmic_data_smt(data)                                              (0x00000800&((data)<<11))
#define DISP_PFUNC0_dmic_data_smt_src(data)                                          ((0x00000800&(data))>>11)
#define DISP_PFUNC0_get_dmic_data_smt(data)                                          ((0x00000800&(data))>>11)
#define DISP_PFUNC0_dmic_data_e2_shift                                               (10)
#define DISP_PFUNC0_dmic_data_e2_mask                                                (0x00000400)
#define DISP_PFUNC0_dmic_data_e2(data)                                               (0x00000400&((data)<<10))
#define DISP_PFUNC0_dmic_data_e2_src(data)                                           ((0x00000400&(data))>>10)
#define DISP_PFUNC0_get_dmic_data_e2(data)                                           ((0x00000400&(data))>>10)
#define DISP_PFUNC0_dmic_data_pud_en_shift                                           (9)
#define DISP_PFUNC0_dmic_data_pud_en_mask                                            (0x00000200)
#define DISP_PFUNC0_dmic_data_pud_en(data)                                           (0x00000200&((data)<<9))
#define DISP_PFUNC0_dmic_data_pud_en_src(data)                                       ((0x00000200&(data))>>9)
#define DISP_PFUNC0_get_dmic_data_pud_en(data)                                       ((0x00000200&(data))>>9)
#define DISP_PFUNC0_dmic_data_pud_sel_shift                                          (8)
#define DISP_PFUNC0_dmic_data_pud_sel_mask                                           (0x00000100)
#define DISP_PFUNC0_dmic_data_pud_sel(data)                                          (0x00000100&((data)<<8))
#define DISP_PFUNC0_dmic_data_pud_sel_src(data)                                      ((0x00000100&(data))>>8)
#define DISP_PFUNC0_get_dmic_data_pud_sel(data)                                      ((0x00000100&(data))>>8)
#define DISP_PFUNC0_dmic_clk_smt_shift                                               (7)
#define DISP_PFUNC0_dmic_clk_smt_mask                                                (0x00000080)
#define DISP_PFUNC0_dmic_clk_smt(data)                                               (0x00000080&((data)<<7))
#define DISP_PFUNC0_dmic_clk_smt_src(data)                                           ((0x00000080&(data))>>7)
#define DISP_PFUNC0_get_dmic_clk_smt(data)                                           ((0x00000080&(data))>>7)
#define DISP_PFUNC0_dmic_clk_e2_shift                                                (6)
#define DISP_PFUNC0_dmic_clk_e2_mask                                                 (0x00000040)
#define DISP_PFUNC0_dmic_clk_e2(data)                                                (0x00000040&((data)<<6))
#define DISP_PFUNC0_dmic_clk_e2_src(data)                                            ((0x00000040&(data))>>6)
#define DISP_PFUNC0_get_dmic_clk_e2(data)                                            ((0x00000040&(data))>>6)
#define DISP_PFUNC0_dmic_clk_pud_en_shift                                            (5)
#define DISP_PFUNC0_dmic_clk_pud_en_mask                                             (0x00000020)
#define DISP_PFUNC0_dmic_clk_pud_en(data)                                            (0x00000020&((data)<<5))
#define DISP_PFUNC0_dmic_clk_pud_en_src(data)                                        ((0x00000020&(data))>>5)
#define DISP_PFUNC0_get_dmic_clk_pud_en(data)                                        ((0x00000020&(data))>>5)
#define DISP_PFUNC0_dmic_clk_pud_sel_shift                                           (4)
#define DISP_PFUNC0_dmic_clk_pud_sel_mask                                            (0x00000010)
#define DISP_PFUNC0_dmic_clk_pud_sel(data)                                           (0x00000010&((data)<<4))
#define DISP_PFUNC0_dmic_clk_pud_sel_src(data)                                       ((0x00000010&(data))>>4)
#define DISP_PFUNC0_get_dmic_clk_pud_sel(data)                                       ((0x00000010&(data))>>4)
#define DISP_PFUNC0_spdif_out_smt_shift                                              (3)
#define DISP_PFUNC0_spdif_out_smt_mask                                               (0x00000008)
#define DISP_PFUNC0_spdif_out_smt(data)                                              (0x00000008&((data)<<3))
#define DISP_PFUNC0_spdif_out_smt_src(data)                                          ((0x00000008&(data))>>3)
#define DISP_PFUNC0_get_spdif_out_smt(data)                                          ((0x00000008&(data))>>3)
#define DISP_PFUNC0_spdif_out_e2_shift                                               (2)
#define DISP_PFUNC0_spdif_out_e2_mask                                                (0x00000004)
#define DISP_PFUNC0_spdif_out_e2(data)                                               (0x00000004&((data)<<2))
#define DISP_PFUNC0_spdif_out_e2_src(data)                                           ((0x00000004&(data))>>2)
#define DISP_PFUNC0_get_spdif_out_e2(data)                                           ((0x00000004&(data))>>2)
#define DISP_PFUNC0_spdif_out_pud_en_shift                                           (1)
#define DISP_PFUNC0_spdif_out_pud_en_mask                                            (0x00000002)
#define DISP_PFUNC0_spdif_out_pud_en(data)                                           (0x00000002&((data)<<1))
#define DISP_PFUNC0_spdif_out_pud_en_src(data)                                       ((0x00000002&(data))>>1)
#define DISP_PFUNC0_get_spdif_out_pud_en(data)                                       ((0x00000002&(data))>>1)
#define DISP_PFUNC0_spdif_out_pud_sel_shift                                          (0)
#define DISP_PFUNC0_spdif_out_pud_sel_mask                                           (0x00000001)
#define DISP_PFUNC0_spdif_out_pud_sel(data)                                          (0x00000001&((data)<<0))
#define DISP_PFUNC0_spdif_out_pud_sel_src(data)                                      ((0x00000001&(data))>>0)
#define DISP_PFUNC0_get_spdif_out_pud_sel(data)                                      ((0x00000001&(data))>>0)


#define DISP_PFUNC1                                                                  0x9804D004
#define DISP_PFUNC1_reg_addr                                                         "0xD804D004"
#define DISP_PFUNC1_reg                                                              0xD804D004
#define set_DISP_PFUNC1_reg(data)   (*((volatile unsigned int*) DISP_PFUNC1_reg)=data)
#define get_DISP_PFUNC1_reg   (*((volatile unsigned int*) DISP_PFUNC1_reg))
#define DISP_PFUNC1_inst_adr                                                         "0x0001"
#define DISP_PFUNC1_inst                                                             0x0001
#define DISP_PFUNC1_ao_sd_3_smt_shift                                                (27)
#define DISP_PFUNC1_ao_sd_3_smt_mask                                                 (0x08000000)
#define DISP_PFUNC1_ao_sd_3_smt(data)                                                (0x08000000&((data)<<27))
#define DISP_PFUNC1_ao_sd_3_smt_src(data)                                            ((0x08000000&(data))>>27)
#define DISP_PFUNC1_get_ao_sd_3_smt(data)                                            ((0x08000000&(data))>>27)
#define DISP_PFUNC1_ao_sd_3_e2_shift                                                 (26)
#define DISP_PFUNC1_ao_sd_3_e2_mask                                                  (0x04000000)
#define DISP_PFUNC1_ao_sd_3_e2(data)                                                 (0x04000000&((data)<<26))
#define DISP_PFUNC1_ao_sd_3_e2_src(data)                                             ((0x04000000&(data))>>26)
#define DISP_PFUNC1_get_ao_sd_3_e2(data)                                             ((0x04000000&(data))>>26)
#define DISP_PFUNC1_ao_sd_3_pud_en_shift                                             (25)
#define DISP_PFUNC1_ao_sd_3_pud_en_mask                                              (0x02000000)
#define DISP_PFUNC1_ao_sd_3_pud_en(data)                                             (0x02000000&((data)<<25))
#define DISP_PFUNC1_ao_sd_3_pud_en_src(data)                                         ((0x02000000&(data))>>25)
#define DISP_PFUNC1_get_ao_sd_3_pud_en(data)                                         ((0x02000000&(data))>>25)
#define DISP_PFUNC1_ao_sd_3_pud_sel_shift                                            (24)
#define DISP_PFUNC1_ao_sd_3_pud_sel_mask                                             (0x01000000)
#define DISP_PFUNC1_ao_sd_3_pud_sel(data)                                            (0x01000000&((data)<<24))
#define DISP_PFUNC1_ao_sd_3_pud_sel_src(data)                                        ((0x01000000&(data))>>24)
#define DISP_PFUNC1_get_ao_sd_3_pud_sel(data)                                        ((0x01000000&(data))>>24)
#define DISP_PFUNC1_ao_sd_2_smt_shift                                                (23)
#define DISP_PFUNC1_ao_sd_2_smt_mask                                                 (0x00800000)
#define DISP_PFUNC1_ao_sd_2_smt(data)                                                (0x00800000&((data)<<23))
#define DISP_PFUNC1_ao_sd_2_smt_src(data)                                            ((0x00800000&(data))>>23)
#define DISP_PFUNC1_get_ao_sd_2_smt(data)                                            ((0x00800000&(data))>>23)
#define DISP_PFUNC1_ao_sd_2_e2_shift                                                 (22)
#define DISP_PFUNC1_ao_sd_2_e2_mask                                                  (0x00400000)
#define DISP_PFUNC1_ao_sd_2_e2(data)                                                 (0x00400000&((data)<<22))
#define DISP_PFUNC1_ao_sd_2_e2_src(data)                                             ((0x00400000&(data))>>22)
#define DISP_PFUNC1_get_ao_sd_2_e2(data)                                             ((0x00400000&(data))>>22)
#define DISP_PFUNC1_ao_sd_2_pud_en_shift                                             (21)
#define DISP_PFUNC1_ao_sd_2_pud_en_mask                                              (0x00200000)
#define DISP_PFUNC1_ao_sd_2_pud_en(data)                                             (0x00200000&((data)<<21))
#define DISP_PFUNC1_ao_sd_2_pud_en_src(data)                                         ((0x00200000&(data))>>21)
#define DISP_PFUNC1_get_ao_sd_2_pud_en(data)                                         ((0x00200000&(data))>>21)
#define DISP_PFUNC1_ao_sd_2_pud_sel_shift                                            (20)
#define DISP_PFUNC1_ao_sd_2_pud_sel_mask                                             (0x00100000)
#define DISP_PFUNC1_ao_sd_2_pud_sel(data)                                            (0x00100000&((data)<<20))
#define DISP_PFUNC1_ao_sd_2_pud_sel_src(data)                                        ((0x00100000&(data))>>20)
#define DISP_PFUNC1_get_ao_sd_2_pud_sel(data)                                        ((0x00100000&(data))>>20)
#define DISP_PFUNC1_ao_sd_1_smt_shift                                                (19)
#define DISP_PFUNC1_ao_sd_1_smt_mask                                                 (0x00080000)
#define DISP_PFUNC1_ao_sd_1_smt(data)                                                (0x00080000&((data)<<19))
#define DISP_PFUNC1_ao_sd_1_smt_src(data)                                            ((0x00080000&(data))>>19)
#define DISP_PFUNC1_get_ao_sd_1_smt(data)                                            ((0x00080000&(data))>>19)
#define DISP_PFUNC1_ao_sd_1_e2_shift                                                 (18)
#define DISP_PFUNC1_ao_sd_1_e2_mask                                                  (0x00040000)
#define DISP_PFUNC1_ao_sd_1_e2(data)                                                 (0x00040000&((data)<<18))
#define DISP_PFUNC1_ao_sd_1_e2_src(data)                                             ((0x00040000&(data))>>18)
#define DISP_PFUNC1_get_ao_sd_1_e2(data)                                             ((0x00040000&(data))>>18)
#define DISP_PFUNC1_ao_sd_1_pud_en_shift                                             (17)
#define DISP_PFUNC1_ao_sd_1_pud_en_mask                                              (0x00020000)
#define DISP_PFUNC1_ao_sd_1_pud_en(data)                                             (0x00020000&((data)<<17))
#define DISP_PFUNC1_ao_sd_1_pud_en_src(data)                                         ((0x00020000&(data))>>17)
#define DISP_PFUNC1_get_ao_sd_1_pud_en(data)                                         ((0x00020000&(data))>>17)
#define DISP_PFUNC1_ao_sd_1_pud_sel_shift                                            (16)
#define DISP_PFUNC1_ao_sd_1_pud_sel_mask                                             (0x00010000)
#define DISP_PFUNC1_ao_sd_1_pud_sel(data)                                            (0x00010000&((data)<<16))
#define DISP_PFUNC1_ao_sd_1_pud_sel_src(data)                                        ((0x00010000&(data))>>16)
#define DISP_PFUNC1_get_ao_sd_1_pud_sel(data)                                        ((0x00010000&(data))>>16)
#define DISP_PFUNC1_ao_sd_0_smt_shift                                                (15)
#define DISP_PFUNC1_ao_sd_0_smt_mask                                                 (0x00008000)
#define DISP_PFUNC1_ao_sd_0_smt(data)                                                (0x00008000&((data)<<15))
#define DISP_PFUNC1_ao_sd_0_smt_src(data)                                            ((0x00008000&(data))>>15)
#define DISP_PFUNC1_get_ao_sd_0_smt(data)                                            ((0x00008000&(data))>>15)
#define DISP_PFUNC1_ao_sd_0_e2_shift                                                 (14)
#define DISP_PFUNC1_ao_sd_0_e2_mask                                                  (0x00004000)
#define DISP_PFUNC1_ao_sd_0_e2(data)                                                 (0x00004000&((data)<<14))
#define DISP_PFUNC1_ao_sd_0_e2_src(data)                                             ((0x00004000&(data))>>14)
#define DISP_PFUNC1_get_ao_sd_0_e2(data)                                             ((0x00004000&(data))>>14)
#define DISP_PFUNC1_ao_sd_0_pud_en_shift                                             (13)
#define DISP_PFUNC1_ao_sd_0_pud_en_mask                                              (0x00002000)
#define DISP_PFUNC1_ao_sd_0_pud_en(data)                                             (0x00002000&((data)<<13))
#define DISP_PFUNC1_ao_sd_0_pud_en_src(data)                                         ((0x00002000&(data))>>13)
#define DISP_PFUNC1_get_ao_sd_0_pud_en(data)                                         ((0x00002000&(data))>>13)
#define DISP_PFUNC1_ao_sd_0_pud_sel_shift                                            (12)
#define DISP_PFUNC1_ao_sd_0_pud_sel_mask                                             (0x00001000)
#define DISP_PFUNC1_ao_sd_0_pud_sel(data)                                            (0x00001000&((data)<<12))
#define DISP_PFUNC1_ao_sd_0_pud_sel_src(data)                                        ((0x00001000&(data))>>12)
#define DISP_PFUNC1_get_ao_sd_0_pud_sel(data)                                        ((0x00001000&(data))>>12)
#define DISP_PFUNC1_aock_smt_shift                                                   (11)
#define DISP_PFUNC1_aock_smt_mask                                                    (0x00000800)
#define DISP_PFUNC1_aock_smt(data)                                                   (0x00000800&((data)<<11))
#define DISP_PFUNC1_aock_smt_src(data)                                               ((0x00000800&(data))>>11)
#define DISP_PFUNC1_get_aock_smt(data)                                               ((0x00000800&(data))>>11)
#define DISP_PFUNC1_aock_e2_shift                                                    (10)
#define DISP_PFUNC1_aock_e2_mask                                                     (0x00000400)
#define DISP_PFUNC1_aock_e2(data)                                                    (0x00000400&((data)<<10))
#define DISP_PFUNC1_aock_e2_src(data)                                                ((0x00000400&(data))>>10)
#define DISP_PFUNC1_get_aock_e2(data)                                                ((0x00000400&(data))>>10)
#define DISP_PFUNC1_aock_pud_en_shift                                                (9)
#define DISP_PFUNC1_aock_pud_en_mask                                                 (0x00000200)
#define DISP_PFUNC1_aock_pud_en(data)                                                (0x00000200&((data)<<9))
#define DISP_PFUNC1_aock_pud_en_src(data)                                            ((0x00000200&(data))>>9)
#define DISP_PFUNC1_get_aock_pud_en(data)                                            ((0x00000200&(data))>>9)
#define DISP_PFUNC1_aock_pud_sel_shift                                               (8)
#define DISP_PFUNC1_aock_pud_sel_mask                                                (0x00000100)
#define DISP_PFUNC1_aock_pud_sel(data)                                               (0x00000100&((data)<<8))
#define DISP_PFUNC1_aock_pud_sel_src(data)                                           ((0x00000100&(data))>>8)
#define DISP_PFUNC1_get_aock_pud_sel(data)                                           ((0x00000100&(data))>>8)
#define DISP_PFUNC1_ao_bck_smt_shift                                                 (7)
#define DISP_PFUNC1_ao_bck_smt_mask                                                  (0x00000080)
#define DISP_PFUNC1_ao_bck_smt(data)                                                 (0x00000080&((data)<<7))
#define DISP_PFUNC1_ao_bck_smt_src(data)                                             ((0x00000080&(data))>>7)
#define DISP_PFUNC1_get_ao_bck_smt(data)                                             ((0x00000080&(data))>>7)
#define DISP_PFUNC1_ao_bck_e2_shift                                                  (6)
#define DISP_PFUNC1_ao_bck_e2_mask                                                   (0x00000040)
#define DISP_PFUNC1_ao_bck_e2(data)                                                  (0x00000040&((data)<<6))
#define DISP_PFUNC1_ao_bck_e2_src(data)                                              ((0x00000040&(data))>>6)
#define DISP_PFUNC1_get_ao_bck_e2(data)                                              ((0x00000040&(data))>>6)
#define DISP_PFUNC1_ao_bck_pud_en_shift                                              (5)
#define DISP_PFUNC1_ao_bck_pud_en_mask                                               (0x00000020)
#define DISP_PFUNC1_ao_bck_pud_en(data)                                              (0x00000020&((data)<<5))
#define DISP_PFUNC1_ao_bck_pud_en_src(data)                                          ((0x00000020&(data))>>5)
#define DISP_PFUNC1_get_ao_bck_pud_en(data)                                          ((0x00000020&(data))>>5)
#define DISP_PFUNC1_ao_bck_pud_sel_shift                                             (4)
#define DISP_PFUNC1_ao_bck_pud_sel_mask                                              (0x00000010)
#define DISP_PFUNC1_ao_bck_pud_sel(data)                                             (0x00000010&((data)<<4))
#define DISP_PFUNC1_ao_bck_pud_sel_src(data)                                         ((0x00000010&(data))>>4)
#define DISP_PFUNC1_get_ao_bck_pud_sel(data)                                         ((0x00000010&(data))>>4)
#define DISP_PFUNC1_ao_lrck_smt_shift                                                (3)
#define DISP_PFUNC1_ao_lrck_smt_mask                                                 (0x00000008)
#define DISP_PFUNC1_ao_lrck_smt(data)                                                (0x00000008&((data)<<3))
#define DISP_PFUNC1_ao_lrck_smt_src(data)                                            ((0x00000008&(data))>>3)
#define DISP_PFUNC1_get_ao_lrck_smt(data)                                            ((0x00000008&(data))>>3)
#define DISP_PFUNC1_ao_lrck_e2_shift                                                 (2)
#define DISP_PFUNC1_ao_lrck_e2_mask                                                  (0x00000004)
#define DISP_PFUNC1_ao_lrck_e2(data)                                                 (0x00000004&((data)<<2))
#define DISP_PFUNC1_ao_lrck_e2_src(data)                                             ((0x00000004&(data))>>2)
#define DISP_PFUNC1_get_ao_lrck_e2(data)                                             ((0x00000004&(data))>>2)
#define DISP_PFUNC1_ao_lrck_pud_en_shift                                             (1)
#define DISP_PFUNC1_ao_lrck_pud_en_mask                                              (0x00000002)
#define DISP_PFUNC1_ao_lrck_pud_en(data)                                             (0x00000002&((data)<<1))
#define DISP_PFUNC1_ao_lrck_pud_en_src(data)                                         ((0x00000002&(data))>>1)
#define DISP_PFUNC1_get_ao_lrck_pud_en(data)                                         ((0x00000002&(data))>>1)
#define DISP_PFUNC1_ao_lrck_pud_sel_shift                                            (0)
#define DISP_PFUNC1_ao_lrck_pud_sel_mask                                             (0x00000001)
#define DISP_PFUNC1_ao_lrck_pud_sel(data)                                            (0x00000001&((data)<<0))
#define DISP_PFUNC1_ao_lrck_pud_sel_src(data)                                        ((0x00000001&(data))>>0)
#define DISP_PFUNC1_get_ao_lrck_pud_sel(data)                                        ((0x00000001&(data))>>0)


#define DISP_MUXPAD0                                                                 0x9804D008
#define DISP_MUXPAD0_reg_addr                                                        "0xD804D008"
#define DISP_MUXPAD0_reg                                                             0xD804D008
#define set_DISP_MUXPAD0_reg(data)   (*((volatile unsigned int*) DISP_MUXPAD0_reg)=data)
#define get_DISP_MUXPAD0_reg   (*((volatile unsigned int*) DISP_MUXPAD0_reg))
#define DISP_MUXPAD0_inst_adr                                                        "0x0002"
#define DISP_MUXPAD0_inst                                                            0x0002
#define DISP_MUXPAD0_ai_loc_shift                                                    (20)
#define DISP_MUXPAD0_ai_loc_mask                                                     (0x00300000)
#define DISP_MUXPAD0_ai_loc(data)                                                    (0x00300000&((data)<<20))
#define DISP_MUXPAD0_ai_loc_src(data)                                                ((0x00300000&(data))>>20)
#define DISP_MUXPAD0_get_ai_loc(data)                                                ((0x00300000&(data))>>20)
#define DISP_MUXPAD0_ao_sd_3_shift                                                   (18)
#define DISP_MUXPAD0_ao_sd_3_mask                                                    (0x000C0000)
#define DISP_MUXPAD0_ao_sd_3(data)                                                   (0x000C0000&((data)<<18))
#define DISP_MUXPAD0_ao_sd_3_src(data)                                               ((0x000C0000&(data))>>18)
#define DISP_MUXPAD0_get_ao_sd_3(data)                                               ((0x000C0000&(data))>>18)
#define DISP_MUXPAD0_ao_sd_2_shift                                                   (16)
#define DISP_MUXPAD0_ao_sd_2_mask                                                    (0x00030000)
#define DISP_MUXPAD0_ao_sd_2(data)                                                   (0x00030000&((data)<<16))
#define DISP_MUXPAD0_ao_sd_2_src(data)                                               ((0x00030000&(data))>>16)
#define DISP_MUXPAD0_get_ao_sd_2(data)                                               ((0x00030000&(data))>>16)
#define DISP_MUXPAD0_ao_sd_1_shift                                                   (14)
#define DISP_MUXPAD0_ao_sd_1_mask                                                    (0x0000C000)
#define DISP_MUXPAD0_ao_sd_1(data)                                                   (0x0000C000&((data)<<14))
#define DISP_MUXPAD0_ao_sd_1_src(data)                                               ((0x0000C000&(data))>>14)
#define DISP_MUXPAD0_get_ao_sd_1(data)                                               ((0x0000C000&(data))>>14)
#define DISP_MUXPAD0_ao_sd_0_shift                                                   (12)
#define DISP_MUXPAD0_ao_sd_0_mask                                                    (0x00003000)
#define DISP_MUXPAD0_ao_sd_0(data)                                                   (0x00003000&((data)<<12))
#define DISP_MUXPAD0_ao_sd_0_src(data)                                               ((0x00003000&(data))>>12)
#define DISP_MUXPAD0_get_ao_sd_0(data)                                               ((0x00003000&(data))>>12)
#define DISP_MUXPAD0_aock_shift                                                      (10)
#define DISP_MUXPAD0_aock_mask                                                       (0x00000C00)
#define DISP_MUXPAD0_aock(data)                                                      (0x00000C00&((data)<<10))
#define DISP_MUXPAD0_aock_src(data)                                                  ((0x00000C00&(data))>>10)
#define DISP_MUXPAD0_get_aock(data)                                                  ((0x00000C00&(data))>>10)
#define DISP_MUXPAD0_ao_bck_shift                                                    (8)
#define DISP_MUXPAD0_ao_bck_mask                                                     (0x00000300)
#define DISP_MUXPAD0_ao_bck(data)                                                    (0x00000300&((data)<<8))
#define DISP_MUXPAD0_ao_bck_src(data)                                                ((0x00000300&(data))>>8)
#define DISP_MUXPAD0_get_ao_bck(data)                                                ((0x00000300&(data))>>8)
#define DISP_MUXPAD0_ao_lrck_shift                                                   (6)
#define DISP_MUXPAD0_ao_lrck_mask                                                    (0x000000C0)
#define DISP_MUXPAD0_ao_lrck(data)                                                   (0x000000C0&((data)<<6))
#define DISP_MUXPAD0_ao_lrck_src(data)                                               ((0x000000C0&(data))>>6)
#define DISP_MUXPAD0_get_ao_lrck(data)                                               ((0x000000C0&(data))>>6)
#define DISP_MUXPAD0_dmic_data_shift                                                 (4)
#define DISP_MUXPAD0_dmic_data_mask                                                  (0x00000030)
#define DISP_MUXPAD0_dmic_data(data)                                                 (0x00000030&((data)<<4))
#define DISP_MUXPAD0_dmic_data_src(data)                                             ((0x00000030&(data))>>4)
#define DISP_MUXPAD0_get_dmic_data(data)                                             ((0x00000030&(data))>>4)
#define DISP_MUXPAD0_dmic_clk_shift                                                  (2)
#define DISP_MUXPAD0_dmic_clk_mask                                                   (0x0000000C)
#define DISP_MUXPAD0_dmic_clk(data)                                                  (0x0000000C&((data)<<2))
#define DISP_MUXPAD0_dmic_clk_src(data)                                              ((0x0000000C&(data))>>2)
#define DISP_MUXPAD0_get_dmic_clk(data)                                              ((0x0000000C&(data))>>2)
#define DISP_MUXPAD0_spdif_shift                                                     (0)
#define DISP_MUXPAD0_spdif_mask                                                      (0x00000003)
#define DISP_MUXPAD0_spdif(data)                                                     (0x00000003&((data)<<0))
#define DISP_MUXPAD0_spdif_src(data)                                                 ((0x00000003&(data))>>0)
#define DISP_MUXPAD0_get_spdif(data)                                                 ((0x00000003&(data))>>0)


#define DISP_MISC0                                                                   0x9804D100
#define DISP_MISC0_reg_addr                                                          "0xD804D100"
#define DISP_MISC0_reg                                                               0xD804D100
#define set_DISP_MISC0_reg(data)   (*((volatile unsigned int*) DISP_MISC0_reg)=data)
#define get_DISP_MISC0_reg   (*((volatile unsigned int*) DISP_MISC0_reg))
#define DISP_MISC0_inst_adr                                                          "0x0040"
#define DISP_MISC0_inst                                                              0x0040
#define DISP_MISC0_disp_dbg_out1_sel_shift                                           (4)
#define DISP_MISC0_disp_dbg_out1_sel_mask                                            (0x000000F0)
#define DISP_MISC0_disp_dbg_out1_sel(data)                                           (0x000000F0&((data)<<4))
#define DISP_MISC0_disp_dbg_out1_sel_src(data)                                       ((0x000000F0&(data))>>4)
#define DISP_MISC0_get_disp_dbg_out1_sel(data)                                       ((0x000000F0&(data))>>4)
#define DISP_MISC0_disp_dbg_out0_sel_shift                                           (0)
#define DISP_MISC0_disp_dbg_out0_sel_mask                                            (0x0000000F)
#define DISP_MISC0_disp_dbg_out0_sel(data)                                           (0x0000000F&((data)<<0))
#define DISP_MISC0_disp_dbg_out0_sel_src(data)                                       ((0x0000000F&(data))>>0)
#define DISP_MISC0_get_disp_dbg_out0_sel(data)                                       ((0x0000000F&(data))>>0)


#define DISP_MISC1                                                                   0x9804D104
#define DISP_MISC1_reg_addr                                                          "0xD804D104"
#define DISP_MISC1_reg                                                               0xD804D104
#define set_DISP_MISC1_reg(data)   (*((volatile unsigned int*) DISP_MISC1_reg)=data)
#define get_DISP_MISC1_reg   (*((volatile unsigned int*) DISP_MISC1_reg))
#define DISP_MISC1_inst_adr                                                          "0x0041"
#define DISP_MISC1_inst                                                              0x0041
#define DISP_MISC1_pg_test_en_shift                                                  (0)
#define DISP_MISC1_pg_test_en_mask                                                   (0x00000001)
#define DISP_MISC1_pg_test_en(data)                                                  (0x00000001&((data)<<0))
#define DISP_MISC1_pg_test_en_src(data)                                              ((0x00000001&(data))>>0)
#define DISP_MISC1_get_pg_test_en(data)                                              ((0x00000001&(data))>>0)


#define DISP_MISC1                                                                   0x9804D108
#define DISP_MISC1_reg_addr                                                          "0xD804D108"
#define DISP_MISC1_reg                                                               0xD804D108
#define set_DISP_MISC1_reg(data)   (*((volatile unsigned int*) DISP_MISC1_reg)=data)
#define get_DISP_MISC1_reg   (*((volatile unsigned int*) DISP_MISC1_reg))
#define DISP_MISC1_inst_adr                                                          "0x0042"
#define DISP_MISC1_inst                                                              0x0042
#define DISP_MISC1_pg_test1_fail_shift                                               (2)
#define DISP_MISC1_pg_test1_fail_mask                                                (0x00000004)
#define DISP_MISC1_pg_test1_fail(data)                                               (0x00000004&((data)<<2))
#define DISP_MISC1_pg_test1_fail_src(data)                                           ((0x00000004&(data))>>2)
#define DISP_MISC1_get_pg_test1_fail(data)                                           ((0x00000004&(data))>>2)
#define DISP_MISC1_pg_test0_fail_shift                                               (1)
#define DISP_MISC1_pg_test0_fail_mask                                                (0x00000002)
#define DISP_MISC1_pg_test0_fail(data)                                               (0x00000002&((data)<<1))
#define DISP_MISC1_pg_test0_fail_src(data)                                           ((0x00000002&(data))>>1)
#define DISP_MISC1_get_pg_test0_fail(data)                                           ((0x00000002&(data))>>1)
#define DISP_MISC1_pg_test_done_shift                                                (0)
#define DISP_MISC1_pg_test_done_mask                                                 (0x00000001)
#define DISP_MISC1_pg_test_done(data)                                                (0x00000001&((data)<<0))
#define DISP_MISC1_pg_test_done_src(data)                                            ((0x00000001&(data))>>0)
#define DISP_MISC1_get_pg_test_done(data)                                            ((0x00000001&(data))>>0)


#endif
