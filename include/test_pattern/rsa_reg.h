/**************************************************************
// Spec Version                  : 0.9.2
// Parser Version                : DVR_Parser_6.11(120105)
// CModelGen Version             : 5.1 2012.01.05
// Naming Rule                   :  Register_Name
// Naming Rule                   : Register_Name_reg
// Parse Option                  : Only Parse _op1
// Parse Address Region          : All Address Region 
// Decode bit number             : 12 bits
// Firmware Header Generate Date : 2015/6/5 20:13:41
***************************************************************/


#ifndef _RSA_REG_H_INCLUDED_
#define _RSA_REG_H_INCLUDED_
#ifdef  _RSA_USE_STRUCT
typedef struct 
{
unsigned int     reserved_0:25;
unsigned int     minus_sel:1;
unsigned int     raddr_no_auto:1;
unsigned int     little_to_big:1;
unsigned int     byte_swap:1;
unsigned int     nbits_sel:3;
}CTRL1;

typedef struct 
{
unsigned int     np_inv:32;
}CTRL2;

typedef struct 
{
unsigned int     go:1;
unsigned int     reserved_0:29;
unsigned int     int_en:1;
unsigned int     int:1;
}CTRL3;

typedef struct 
{
unsigned int     reserved_0:20;
unsigned int     minus_ori_msb1:1;
unsigned int     minus_ori_msb0:1;
unsigned int     minus_sign_bit:1;
unsigned int     minus_ori_addr:1;
unsigned int     m_range_err:1;
unsigned int     exp_err:1;
unsigned int     rsa_sec_fin:1;
unsigned int     rsa_nor_fin:1;
unsigned int     reserved_1:2;
unsigned int     m_lt_n:1;
unsigned int     me_done:1;
}CTRL4;

typedef struct 
{
unsigned int     reserved_0:23;
unsigned int     ls:1;
unsigned int     rm:4;
unsigned int     rme:1;
unsigned int     drf_test_resume:1;
unsigned int     drf_bist_mode:1;
unsigned int     bist_mode:1;
}MBIST1;

typedef struct 
{
unsigned int     reserved_0:25;
unsigned int     drf_start_pause:1;
unsigned int     drf_bist_fail_1:1;
unsigned int     bist_fail_1:1;
unsigned int     drf_bist_fail_0:1;
unsigned int     bist_fail_0:1;
unsigned int     drf_bist_done:1;
unsigned int     bist_done:1;
}MBIST2;

typedef struct 
{
unsigned int     dmy:32;
}DUMMY;

typedef struct 
{
unsigned int     reserved_0:31;
unsigned int     dis_ckg:1;
}PWR_CTRL;

typedef struct 
{
unsigned int     reserved_0:28;
unsigned int     fake_en:1;
unsigned int     nbits_sel:3;
}SEC_CTRL1;

typedef struct 
{
unsigned int     np_inv:32;
}SEC_CTRL3;

typedef struct 
{
unsigned int     go:1;
unsigned int     reserved_0:30;
unsigned int     fake_result:1;
}SEC_CTRL4;

#endif

#define CTRL1                                                                        0x9804cf00
#define CTRL1_reg_addr                                                               "0xD804CF00"
#define CTRL1_reg                                                                    0xD804CF00
#define set_CTRL1_reg(data)   (*((volatile unsigned int*) CTRL1_reg)=data)
#define get_CTRL1_reg   (*((volatile unsigned int*) CTRL1_reg))
#define CTRL1_inst_adr                                                               "0x00C0"
#define CTRL1_inst                                                                   0x00C0
#define CTRL1_minus_sel_shift                                                        (6)
#define CTRL1_minus_sel_mask                                                         (0x00000040)
#define CTRL1_minus_sel(data)                                                        (0x00000040&((data)<<6))
#define CTRL1_minus_sel_src(data)                                                    ((0x00000040&(data))>>6)
#define CTRL1_get_minus_sel(data)                                                    ((0x00000040&(data))>>6)
#define CTRL1_raddr_no_auto_shift                                                    (5)
#define CTRL1_raddr_no_auto_mask                                                     (0x00000020)
#define CTRL1_raddr_no_auto(data)                                                    (0x00000020&((data)<<5))
#define CTRL1_raddr_no_auto_src(data)                                                ((0x00000020&(data))>>5)
#define CTRL1_get_raddr_no_auto(data)                                                ((0x00000020&(data))>>5)
#define CTRL1_little_to_big_shift                                                    (4)
#define CTRL1_little_to_big_mask                                                     (0x00000010)
#define CTRL1_little_to_big(data)                                                    (0x00000010&((data)<<4))
#define CTRL1_little_to_big_src(data)                                                ((0x00000010&(data))>>4)
#define CTRL1_get_little_to_big(data)                                                ((0x00000010&(data))>>4)
#define CTRL1_byte_swap_shift                                                        (3)
#define CTRL1_byte_swap_mask                                                         (0x00000008)
#define CTRL1_byte_swap(data)                                                        (0x00000008&((data)<<3))
#define CTRL1_byte_swap_src(data)                                                    ((0x00000008&(data))>>3)
#define CTRL1_get_byte_swap(data)                                                    ((0x00000008&(data))>>3)
#define CTRL1_nbits_sel_shift                                                        (0)
#define CTRL1_nbits_sel_mask                                                         (0x00000007)
#define CTRL1_nbits_sel(data)                                                        (0x00000007&((data)<<0))
#define CTRL1_nbits_sel_src(data)                                                    ((0x00000007&(data))>>0)
#define CTRL1_get_nbits_sel(data)                                                    ((0x00000007&(data))>>0)


#define CTRL2                                                                        0x9804cf04
#define CTRL2_reg_addr                                                               "0xD804CF04"
#define CTRL2_reg                                                                    0xD804CF04
#define set_CTRL2_reg(data)   (*((volatile unsigned int*) CTRL2_reg)=data)
#define get_CTRL2_reg   (*((volatile unsigned int*) CTRL2_reg))
#define CTRL2_inst_adr                                                               "0x00C1"
#define CTRL2_inst                                                                   0x00C1
#define CTRL2_np_inv_shift                                                           (0)
#define CTRL2_np_inv_mask                                                            (0xFFFFFFFF)
#define CTRL2_np_inv(data)                                                           (0xFFFFFFFF&((data)<<0))
#define CTRL2_np_inv_src(data)                                                       ((0xFFFFFFFF&(data))>>0)
#define CTRL2_get_np_inv(data)                                                       ((0xFFFFFFFF&(data))>>0)


#define CTRL3                                                                        0x9804cf08
#define CTRL3_reg_addr                                                               "0xD804CF08"
#define CTRL3_reg                                                                    0xD804CF08
#define set_CTRL3_reg(data)   (*((volatile unsigned int*) CTRL3_reg)=data)
#define get_CTRL3_reg   (*((volatile unsigned int*) CTRL3_reg))
#define CTRL3_inst_adr                                                               "0x00C2"
#define CTRL3_inst                                                                   0x00C2
#define CTRL3_go_shift                                                               (31)
#define CTRL3_go_mask                                                                (0x80000000)
#define CTRL3_go(data)                                                               (0x80000000&((data)<<31))
#define CTRL3_go_src(data)                                                           ((0x80000000&(data))>>31)
#define CTRL3_get_go(data)                                                           ((0x80000000&(data))>>31)
#define CTRL3_int_en_shift                                                           (1)
#define CTRL3_int_en_mask                                                            (0x00000002)
#define CTRL3_int_en(data)                                                           (0x00000002&((data)<<1))
#define CTRL3_int_en_src(data)                                                       ((0x00000002&(data))>>1)
#define CTRL3_get_int_en(data)                                                       ((0x00000002&(data))>>1)
#define CTRL3_int_shift                                                              (0)
#define CTRL3_int_mask                                                               (0x00000001)
#define CTRL3_int(data)                                                              (0x00000001&((data)<<0))
#define CTRL3_int_src(data)                                                          ((0x00000001&(data))>>0)
#define CTRL3_get_int(data)                                                          ((0x00000001&(data))>>0)


#define CTRL4                                                                        0x9804cf0c
#define CTRL4_reg_addr                                                               "0xD804CF0C"
#define CTRL4_reg                                                                    0xD804CF0C
#define set_CTRL4_reg(data)   (*((volatile unsigned int*) CTRL4_reg)=data)
#define get_CTRL4_reg   (*((volatile unsigned int*) CTRL4_reg))
#define CTRL4_inst_adr                                                               "0x00C3"
#define CTRL4_inst                                                                   0x00C3
#define CTRL4_minus_ori_msb1_shift                                                   (11)
#define CTRL4_minus_ori_msb1_mask                                                    (0x00000800)
#define CTRL4_minus_ori_msb1(data)                                                   (0x00000800&((data)<<11))
#define CTRL4_minus_ori_msb1_src(data)                                               ((0x00000800&(data))>>11)
#define CTRL4_get_minus_ori_msb1(data)                                               ((0x00000800&(data))>>11)
#define CTRL4_minus_ori_msb0_shift                                                   (10)
#define CTRL4_minus_ori_msb0_mask                                                    (0x00000400)
#define CTRL4_minus_ori_msb0(data)                                                   (0x00000400&((data)<<10))
#define CTRL4_minus_ori_msb0_src(data)                                               ((0x00000400&(data))>>10)
#define CTRL4_get_minus_ori_msb0(data)                                               ((0x00000400&(data))>>10)
#define CTRL4_minus_sign_bit_shift                                                   (9)
#define CTRL4_minus_sign_bit_mask                                                    (0x00000200)
#define CTRL4_minus_sign_bit(data)                                                   (0x00000200&((data)<<9))
#define CTRL4_minus_sign_bit_src(data)                                               ((0x00000200&(data))>>9)
#define CTRL4_get_minus_sign_bit(data)                                               ((0x00000200&(data))>>9)
#define CTRL4_minus_ori_addr_shift                                                   (8)
#define CTRL4_minus_ori_addr_mask                                                    (0x00000100)
#define CTRL4_minus_ori_addr(data)                                                   (0x00000100&((data)<<8))
#define CTRL4_minus_ori_addr_src(data)                                               ((0x00000100&(data))>>8)
#define CTRL4_get_minus_ori_addr(data)                                               ((0x00000100&(data))>>8)
#define CTRL4_m_range_err_shift                                                      (7)
#define CTRL4_m_range_err_mask                                                       (0x00000080)
#define CTRL4_m_range_err(data)                                                      (0x00000080&((data)<<7))
#define CTRL4_m_range_err_src(data)                                                  ((0x00000080&(data))>>7)
#define CTRL4_get_m_range_err(data)                                                  ((0x00000080&(data))>>7)
#define CTRL4_exp_err_shift                                                          (6)
#define CTRL4_exp_err_mask                                                           (0x00000040)
#define CTRL4_exp_err(data)                                                          (0x00000040&((data)<<6))
#define CTRL4_exp_err_src(data)                                                      ((0x00000040&(data))>>6)
#define CTRL4_get_exp_err(data)                                                      ((0x00000040&(data))>>6)
#define CTRL4_rsa_sec_fin_shift                                                      (5)
#define CTRL4_rsa_sec_fin_mask                                                       (0x00000020)
#define CTRL4_rsa_sec_fin(data)                                                      (0x00000020&((data)<<5))
#define CTRL4_rsa_sec_fin_src(data)                                                  ((0x00000020&(data))>>5)
#define CTRL4_get_rsa_sec_fin(data)                                                  ((0x00000020&(data))>>5)
#define CTRL4_rsa_nor_fin_shift                                                      (4)
#define CTRL4_rsa_nor_fin_mask                                                       (0x00000010)
#define CTRL4_rsa_nor_fin(data)                                                      (0x00000010&((data)<<4))
#define CTRL4_rsa_nor_fin_src(data)                                                  ((0x00000010&(data))>>4)
#define CTRL4_get_rsa_nor_fin(data)                                                  ((0x00000010&(data))>>4)
#define CTRL4_m_lt_n_shift                                                           (1)
#define CTRL4_m_lt_n_mask                                                            (0x00000002)
#define CTRL4_m_lt_n(data)                                                           (0x00000002&((data)<<1))
#define CTRL4_m_lt_n_src(data)                                                       ((0x00000002&(data))>>1)
#define CTRL4_get_m_lt_n(data)                                                       ((0x00000002&(data))>>1)
#define CTRL4_me_done_shift                                                          (0)
#define CTRL4_me_done_mask                                                           (0x00000001)
#define CTRL4_me_done(data)                                                          (0x00000001&((data)<<0))
#define CTRL4_me_done_src(data)                                                      ((0x00000001&(data))>>0)
#define CTRL4_get_me_done(data)                                                      ((0x00000001&(data))>>0)


#define MBIST1                                                                       0x9804cf20
#define MBIST1_reg_addr                                                              "0xD804CF20"
#define MBIST1_reg                                                                   0xD804CF20
#define set_MBIST1_reg(data)   (*((volatile unsigned int*) MBIST1_reg)=data)
#define get_MBIST1_reg   (*((volatile unsigned int*) MBIST1_reg))
#define MBIST1_inst_adr                                                              "0x00C8"
#define MBIST1_inst                                                                  0x00C8
#define MBIST1_ls_shift                                                              (8)
#define MBIST1_ls_mask                                                               (0x00000100)
#define MBIST1_ls(data)                                                              (0x00000100&((data)<<8))
#define MBIST1_ls_src(data)                                                          ((0x00000100&(data))>>8)
#define MBIST1_get_ls(data)                                                          ((0x00000100&(data))>>8)
#define MBIST1_rm_shift                                                              (4)
#define MBIST1_rm_mask                                                               (0x000000F0)
#define MBIST1_rm(data)                                                              (0x000000F0&((data)<<4))
#define MBIST1_rm_src(data)                                                          ((0x000000F0&(data))>>4)
#define MBIST1_get_rm(data)                                                          ((0x000000F0&(data))>>4)
#define MBIST1_rme_shift                                                             (3)
#define MBIST1_rme_mask                                                              (0x00000008)
#define MBIST1_rme(data)                                                             (0x00000008&((data)<<3))
#define MBIST1_rme_src(data)                                                         ((0x00000008&(data))>>3)
#define MBIST1_get_rme(data)                                                         ((0x00000008&(data))>>3)
#define MBIST1_drf_test_resume_shift                                                 (2)
#define MBIST1_drf_test_resume_mask                                                  (0x00000004)
#define MBIST1_drf_test_resume(data)                                                 (0x00000004&((data)<<2))
#define MBIST1_drf_test_resume_src(data)                                             ((0x00000004&(data))>>2)
#define MBIST1_get_drf_test_resume(data)                                             ((0x00000004&(data))>>2)
#define MBIST1_drf_bist_mode_shift                                                   (1)
#define MBIST1_drf_bist_mode_mask                                                    (0x00000002)
#define MBIST1_drf_bist_mode(data)                                                   (0x00000002&((data)<<1))
#define MBIST1_drf_bist_mode_src(data)                                               ((0x00000002&(data))>>1)
#define MBIST1_get_drf_bist_mode(data)                                               ((0x00000002&(data))>>1)
#define MBIST1_bist_mode_shift                                                       (0)
#define MBIST1_bist_mode_mask                                                        (0x00000001)
#define MBIST1_bist_mode(data)                                                       (0x00000001&((data)<<0))
#define MBIST1_bist_mode_src(data)                                                   ((0x00000001&(data))>>0)
#define MBIST1_get_bist_mode(data)                                                   ((0x00000001&(data))>>0)


#define MBIST2                                                                       0x9804cf24
#define MBIST2_reg_addr                                                              "0xD804CF24"
#define MBIST2_reg                                                                   0xD804CF24
#define set_MBIST2_reg(data)   (*((volatile unsigned int*) MBIST2_reg)=data)
#define get_MBIST2_reg   (*((volatile unsigned int*) MBIST2_reg))
#define MBIST2_inst_adr                                                              "0x00C9"
#define MBIST2_inst                                                                  0x00C9
#define MBIST2_drf_start_pause_shift                                                 (6)
#define MBIST2_drf_start_pause_mask                                                  (0x00000040)
#define MBIST2_drf_start_pause(data)                                                 (0x00000040&((data)<<6))
#define MBIST2_drf_start_pause_src(data)                                             ((0x00000040&(data))>>6)
#define MBIST2_get_drf_start_pause(data)                                             ((0x00000040&(data))>>6)
#define MBIST2_drf_bist_fail_1_shift                                                 (5)
#define MBIST2_drf_bist_fail_1_mask                                                  (0x00000020)
#define MBIST2_drf_bist_fail_1(data)                                                 (0x00000020&((data)<<5))
#define MBIST2_drf_bist_fail_1_src(data)                                             ((0x00000020&(data))>>5)
#define MBIST2_get_drf_bist_fail_1(data)                                             ((0x00000020&(data))>>5)
#define MBIST2_bist_fail_1_shift                                                     (4)
#define MBIST2_bist_fail_1_mask                                                      (0x00000010)
#define MBIST2_bist_fail_1(data)                                                     (0x00000010&((data)<<4))
#define MBIST2_bist_fail_1_src(data)                                                 ((0x00000010&(data))>>4)
#define MBIST2_get_bist_fail_1(data)                                                 ((0x00000010&(data))>>4)
#define MBIST2_drf_bist_fail_0_shift                                                 (3)
#define MBIST2_drf_bist_fail_0_mask                                                  (0x00000008)
#define MBIST2_drf_bist_fail_0(data)                                                 (0x00000008&((data)<<3))
#define MBIST2_drf_bist_fail_0_src(data)                                             ((0x00000008&(data))>>3)
#define MBIST2_get_drf_bist_fail_0(data)                                             ((0x00000008&(data))>>3)
#define MBIST2_bist_fail_0_shift                                                     (2)
#define MBIST2_bist_fail_0_mask                                                      (0x00000004)
#define MBIST2_bist_fail_0(data)                                                     (0x00000004&((data)<<2))
#define MBIST2_bist_fail_0_src(data)                                                 ((0x00000004&(data))>>2)
#define MBIST2_get_bist_fail_0(data)                                                 ((0x00000004&(data))>>2)
#define MBIST2_drf_bist_done_shift                                                   (1)
#define MBIST2_drf_bist_done_mask                                                    (0x00000002)
#define MBIST2_drf_bist_done(data)                                                   (0x00000002&((data)<<1))
#define MBIST2_drf_bist_done_src(data)                                               ((0x00000002&(data))>>1)
#define MBIST2_get_drf_bist_done(data)                                               ((0x00000002&(data))>>1)
#define MBIST2_bist_done_shift                                                       (0)
#define MBIST2_bist_done_mask                                                        (0x00000001)
#define MBIST2_bist_done(data)                                                       (0x00000001&((data)<<0))
#define MBIST2_bist_done_src(data)                                                   ((0x00000001&(data))>>0)
#define MBIST2_get_bist_done(data)                                                   ((0x00000001&(data))>>0)


#define DUMMY                                                                        0x9804cf28
#define DUMMY_reg_addr                                                               "0xD804CF28"
#define DUMMY_reg                                                                    0xD804CF28
#define set_DUMMY_reg(data)   (*((volatile unsigned int*) DUMMY_reg)=data)
#define get_DUMMY_reg   (*((volatile unsigned int*) DUMMY_reg))
#define DUMMY_inst_adr                                                               "0x00CA"
#define DUMMY_inst                                                                   0x00CA
#define DUMMY_dmy_shift                                                              (0)
#define DUMMY_dmy_mask                                                               (0xFFFFFFFF)
#define DUMMY_dmy(data)                                                              (0xFFFFFFFF&((data)<<0))
#define DUMMY_dmy_src(data)                                                          ((0xFFFFFFFF&(data))>>0)
#define DUMMY_get_dmy(data)                                                          ((0xFFFFFFFF&(data))>>0)


#define PWR_CTRL                                                                     0x9804cf2c
#define PWR_CTRL_reg_addr                                                            "0xD804CF2C"
#define PWR_CTRL_reg                                                                 0xD804CF2C
#define set_PWR_CTRL_reg(data)   (*((volatile unsigned int*) PWR_CTRL_reg)=data)
#define get_PWR_CTRL_reg   (*((volatile unsigned int*) PWR_CTRL_reg))
#define PWR_CTRL_inst_adr                                                            "0x00CB"
#define PWR_CTRL_inst                                                                0x00CB
#define PWR_CTRL_dis_ckg_shift                                                       (0)
#define PWR_CTRL_dis_ckg_mask                                                        (0x00000001)
#define PWR_CTRL_dis_ckg(data)                                                       (0x00000001&((data)<<0))
#define PWR_CTRL_dis_ckg_src(data)                                                   ((0x00000001&(data))>>0)
#define PWR_CTRL_get_dis_ckg(data)                                                   ((0x00000001&(data))>>0)


#define SEC_CTRL1                                                                    0x9804cf80
#define SEC_CTRL1_reg_addr                                                           "0xD804CF80"
#define SEC_CTRL1_reg                                                                0xD804CF80
#define set_SEC_CTRL1_reg(data)   (*((volatile unsigned int*) SEC_CTRL1_reg)=data)
#define get_SEC_CTRL1_reg   (*((volatile unsigned int*) SEC_CTRL1_reg))
#define SEC_CTRL1_inst_adr                                                           "0x00E0"
#define SEC_CTRL1_inst                                                               0x00E0
#define SEC_CTRL1_fake_en_shift                                                      (3)
#define SEC_CTRL1_fake_en_mask                                                       (0x00000008)
#define SEC_CTRL1_fake_en(data)                                                      (0x00000008&((data)<<3))
#define SEC_CTRL1_fake_en_src(data)                                                  ((0x00000008&(data))>>3)
#define SEC_CTRL1_get_fake_en(data)                                                  ((0x00000008&(data))>>3)
#define SEC_CTRL1_nbits_sel_shift                                                    (0)
#define SEC_CTRL1_nbits_sel_mask                                                     (0x00000007)
#define SEC_CTRL1_nbits_sel(data)                                                    (0x00000007&((data)<<0))
#define SEC_CTRL1_nbits_sel_src(data)                                                ((0x00000007&(data))>>0)
#define SEC_CTRL1_get_nbits_sel(data)                                                ((0x00000007&(data))>>0)


#define SEC_CTRL3                                                                    0x9804cf84
#define SEC_CTRL3_reg_addr                                                           "0xD804CF84"
#define SEC_CTRL3_reg                                                                0xD804CF84
#define set_SEC_CTRL3_reg(data)   (*((volatile unsigned int*) SEC_CTRL3_reg)=data)
#define get_SEC_CTRL3_reg   (*((volatile unsigned int*) SEC_CTRL3_reg))
#define SEC_CTRL3_inst_adr                                                           "0x00E1"
#define SEC_CTRL3_inst                                                               0x00E1
#define SEC_CTRL3_np_inv_shift                                                       (0)
#define SEC_CTRL3_np_inv_mask                                                        (0xFFFFFFFF)
#define SEC_CTRL3_np_inv(data)                                                       (0xFFFFFFFF&((data)<<0))
#define SEC_CTRL3_np_inv_src(data)                                                   ((0xFFFFFFFF&(data))>>0)
#define SEC_CTRL3_get_np_inv(data)                                                   ((0xFFFFFFFF&(data))>>0)


#define SEC_CTRL4                                                                    0x9804cf88
#define SEC_CTRL4_reg_addr                                                           "0xD804CF88"
#define SEC_CTRL4_reg                                                                0xD804CF88
#define set_SEC_CTRL4_reg(data)   (*((volatile unsigned int*) SEC_CTRL4_reg)=data)
#define get_SEC_CTRL4_reg   (*((volatile unsigned int*) SEC_CTRL4_reg))
#define SEC_CTRL4_inst_adr                                                           "0x00E2"
#define SEC_CTRL4_inst                                                               0x00E2
#define SEC_CTRL4_go_shift                                                           (31)
#define SEC_CTRL4_go_mask                                                            (0x80000000)
#define SEC_CTRL4_go(data)                                                           (0x80000000&((data)<<31))
#define SEC_CTRL4_go_src(data)                                                       ((0x80000000&(data))>>31)
#define SEC_CTRL4_get_go(data)                                                       ((0x80000000&(data))>>31)
#define SEC_CTRL4_fake_result_shift                                                  (0)
#define SEC_CTRL4_fake_result_mask                                                   (0x00000001)
#define SEC_CTRL4_fake_result(data)                                                  (0x00000001&((data)<<0))
#define SEC_CTRL4_fake_result_src(data)                                              ((0x00000001&(data))>>0)
#define SEC_CTRL4_get_fake_result(data)                                              ((0x00000001&(data))>>0)


#endif
