/*===========*@date:2015/4/14===========*/

#ifndef _CBUS_PMM_REG_H_INCLUDED_
#define _CBUS_PMM_REG_H_INCLUDED_

//#define  _CBUS_PMM_USE_STRUCT
#ifdef _CBUS_PMM_USE_STRUCT

typedef struct
{
    unsigned int    reserved_0:28;
    unsigned int    wake_pulse_det:1;
    unsigned int    dis_pulse_det:1;
    unsigned int    wake_irq_en:1;
    unsigned int    dis_irq_en:1;
}CBUS_standby_00;

typedef struct
{
    unsigned int    reserved_0:18;
    unsigned int    clk_1m_div:4;
    unsigned int    clk_1k_div:10;
}CBUS_standby_01;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    dis_deb_lv:3;
    unsigned int    deb_lv:3;
    unsigned int    disconn:2;
}CBUS_standby_02;

typedef struct
{
    unsigned int    reserved_0:12;
    unsigned int    wake_offset_low2:5;
    unsigned int    wake_offset_low:5;
    unsigned int    wake_cnt:3;
    unsigned int    wake_offset:5;
    unsigned int    cbus_disconn:1;
    unsigned int    disconn_irq_en:1;
}CBUS_standby_04;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    dis_upper:4;
    unsigned int    dis_lower:3;
    unsigned int    wake_eco_en:1;
}CBUS_standby_05;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    wake_num:3;
    unsigned int    dis_num:5;
}CBUS_standby_06;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    cbus_imp_auto:1;
    unsigned int    bypass_mode:1;
    unsigned int    sink_fsm_st:3;
    unsigned int    cbus_100k_en:1;
    unsigned int    cbus_1k_en:1;
    unsigned int    cbus_in_sig:1;
}CBUS_standby_07;

typedef struct
{
    unsigned int    reserved_0:26;
    unsigned int    goto_sink1_pos:1;
    unsigned int    goto_float:1;
    unsigned int    goto_sink1:1;
    unsigned int    cable_det:1;
    unsigned int    reserved_1:1;
    unsigned int    dbg_sel_phy:1;
}CBUS_standby_08;

typedef struct
{
    unsigned int    ctrl_09_resv:32;
}CBUS_standby_09;

typedef struct
{
    unsigned int    reserved_0:25;
    unsigned int    cbus_sr:1;
    unsigned int    cbus_smt:1;
    unsigned int    cbus_pu:1;
    unsigned int    cbus_pd:1;
    unsigned int    cbus_i:1;
    unsigned int    cbus_e2:1;
    unsigned int    cbus_e:1;
}CBUS_phy_0;

typedef struct
{
    unsigned int    adjr_1k:4;
    unsigned int    adjr_100k:5;
    unsigned int    auto_k_1k:1;
    unsigned int    auto_k_100k:1;
    unsigned int    en_res_cal_cbus:1;
    unsigned int    sel_cbus0_input_high:2;
    unsigned int    sel_cbus0_input_low:2;
    unsigned int    sel_cbus_0_driving:3;
    unsigned int    sel_vref_ldo:2;
    unsigned int    trim_ldo_cbus:4;
    unsigned int    triming_mode:1;
    unsigned int    en_cbus:1;
    unsigned int    en_cmp_cbus:1;
    unsigned int    en_driver_cbus:1;
    unsigned int    en_ldo_cbus:1;
    unsigned int    psm_cbus:1;
    unsigned int    sel_cbusb_gpio:1;
}CBUS_phy_1;

typedef struct
{
    unsigned int    reserved_0:31;
    unsigned int    cbus_o:1;
}CBUS_phy_2;

typedef struct
{
    unsigned int    reserved_0:20;
    unsigned int    sel_phy_soft_rst_n:1;
    unsigned int    cbus_res_tst:10;
    unsigned int    res_ok:1;
}CBUS_phy_3;
#endif


#define CBUS_STANDBY_00                                               0x98037400
#define CBUS_STANDBY_00_reg_addr                                      "0xd8037400"
#define CBUS_STANDBY_00_reg                                           0xd8037400
#define CBUS_STANDBY_00_inst_addr                                     "0x0100"
#define CBUS_STANDBY_00_inst                                          0x0100
#define set_CBUS_STANDBY_00_reg(data)                                 (*((volatile unsigned int*)CBUS_STANDBY_00_reg)=data)
#define get_CBUS_STANDBY_00_reg                                       (*((volatile unsigned int*)CBUS_STANDBY_00_reg))
#define CBUS_STANDBY_00_wake_pulse_det_shift                          (3)
#define CBUS_STANDBY_00_dis_pulse_det_shift                           (2)
#define CBUS_STANDBY_00_wake_irq_en_shift                             (1)
#define CBUS_STANDBY_00_dis_irq_en_shift                              (0)
#define CBUS_STANDBY_00_wake_pulse_det_mask                           (0x00000008)
#define CBUS_STANDBY_00_dis_pulse_det_mask                            (0x00000004)
#define CBUS_STANDBY_00_wake_irq_en_mask                              (0x00000002)
#define CBUS_STANDBY_00_dis_irq_en_mask                               (0x00000001)
#define CBUS_STANDBY_00_wake_pulse_det(data)                          (0x00000008&((data)<<3))
#define CBUS_STANDBY_00_dis_pulse_det(data)                           (0x00000004&((data)<<2))
#define CBUS_STANDBY_00_wake_irq_en(data)                             (0x00000002&((data)<<1))
#define CBUS_STANDBY_00_dis_irq_en(data)                              (0x00000001&(data))
#define CBUS_STANDBY_00_get_wake_pulse_det(data)                      ((0x00000008&(data))>>3)
#define CBUS_STANDBY_00_get_dis_pulse_det(data)                       ((0x00000004&(data))>>2)
#define CBUS_STANDBY_00_get_wake_irq_en(data)                         ((0x00000002&(data))>>1)
#define CBUS_STANDBY_00_get_dis_irq_en(data)                          (0x00000001&(data))


#define CBUS_STANDBY_01                                               0x98037404
#define CBUS_STANDBY_01_reg_addr                                      "0xd8037404"
#define CBUS_STANDBY_01_reg                                           0xd8037404
#define CBUS_STANDBY_01_inst_addr                                     "0x0101"
#define CBUS_STANDBY_01_inst                                          0x0101
#define set_CBUS_STANDBY_01_reg(data)                                 (*((volatile unsigned int*)CBUS_STANDBY_01_reg)=data)
#define get_CBUS_STANDBY_01_reg                                       (*((volatile unsigned int*)CBUS_STANDBY_01_reg))
#define CBUS_STANDBY_01_clk_1m_div_shift                              (10)
#define CBUS_STANDBY_01_clk_1k_div_shift                              (0)
#define CBUS_STANDBY_01_clk_1m_div_mask                               (0x00003C00)
#define CBUS_STANDBY_01_clk_1k_div_mask                               (0x000003FF)
#define CBUS_STANDBY_01_clk_1m_div(data)                              (0x00003C00&((data)<<10))
#define CBUS_STANDBY_01_clk_1k_div(data)                              (0x000003FF&(data))
#define CBUS_STANDBY_01_get_clk_1m_div(data)                          ((0x00003C00&(data))>>10)
#define CBUS_STANDBY_01_get_clk_1k_div(data)                          (0x000003FF&(data))


#define CBUS_STANDBY_02                                               0x98037408
#define CBUS_STANDBY_02_reg_addr                                      "0xd8037408"
#define CBUS_STANDBY_02_reg                                           0xd8037408
#define CBUS_STANDBY_02_inst_addr                                     "0x0102"
#define CBUS_STANDBY_02_inst                                          0x0102
#define set_CBUS_STANDBY_02_reg(data)                                 (*((volatile unsigned int*)CBUS_STANDBY_02_reg)=data)
#define get_CBUS_STANDBY_02_reg                                       (*((volatile unsigned int*)CBUS_STANDBY_02_reg))
#define CBUS_STANDBY_02_dis_deb_lv_shift                              (5)
#define CBUS_STANDBY_02_deb_lv_shift                                  (2)
#define CBUS_STANDBY_02_disconn_shift                                 (0)
#define CBUS_STANDBY_02_dis_deb_lv_mask                               (0x000000E0)
#define CBUS_STANDBY_02_deb_lv_mask                                   (0x0000001C)
#define CBUS_STANDBY_02_disconn_mask                                  (0x00000003)
#define CBUS_STANDBY_02_dis_deb_lv(data)                              (0x000000E0&((data)<<5))
#define CBUS_STANDBY_02_deb_lv(data)                                  (0x0000001C&((data)<<2))
#define CBUS_STANDBY_02_disconn(data)                                 (0x00000003&(data))
#define CBUS_STANDBY_02_get_dis_deb_lv(data)                          ((0x000000E0&(data))>>5)
#define CBUS_STANDBY_02_get_deb_lv(data)                              ((0x0000001C&(data))>>2)
#define CBUS_STANDBY_02_get_disconn(data)                             (0x00000003&(data))


#define CBUS_STANDBY_04                                               0x98037410
#define CBUS_STANDBY_04_reg_addr                                      "0xd8037410"
#define CBUS_STANDBY_04_reg                                           0xd8037410
#define CBUS_STANDBY_04_inst_addr                                     "0x0104"
#define CBUS_STANDBY_04_inst                                          0x0104
#define set_CBUS_STANDBY_04_reg(data)                                 (*((volatile unsigned int*)CBUS_STANDBY_04_reg)=data)
#define get_CBUS_STANDBY_04_reg                                       (*((volatile unsigned int*)CBUS_STANDBY_04_reg))
#define CBUS_STANDBY_04_wake_offset_low2_shift                        (15)
#define CBUS_STANDBY_04_wake_offset_low_shift                         (10)
#define CBUS_STANDBY_04_wake_cnt_shift                                (7)
#define CBUS_STANDBY_04_wake_offset_shift                             (2)
#define CBUS_STANDBY_04_cbus_disconn_shift                            (1)
#define CBUS_STANDBY_04_disconn_irq_en_shift                          (0)
#define CBUS_STANDBY_04_wake_offset_low2_mask                         (0x000F8000)
#define CBUS_STANDBY_04_wake_offset_low_mask                          (0x00007C00)
#define CBUS_STANDBY_04_wake_cnt_mask                                 (0x00000380)
#define CBUS_STANDBY_04_wake_offset_mask                              (0x0000007C)
#define CBUS_STANDBY_04_cbus_disconn_mask                             (0x00000002)
#define CBUS_STANDBY_04_disconn_irq_en_mask                           (0x00000001)
#define CBUS_STANDBY_04_wake_offset_low2(data)                        (0x000F8000&((data)<<15))
#define CBUS_STANDBY_04_wake_offset_low(data)                         (0x00007C00&((data)<<10))
#define CBUS_STANDBY_04_wake_cnt(data)                                (0x00000380&((data)<<7))
#define CBUS_STANDBY_04_wake_offset(data)                             (0x0000007C&((data)<<2))
#define CBUS_STANDBY_04_cbus_disconn(data)                            (0x00000002&((data)<<1))
#define CBUS_STANDBY_04_disconn_irq_en(data)                          (0x00000001&(data))
#define CBUS_STANDBY_04_get_wake_offset_low2(data)                    ((0x000F8000&(data))>>15)
#define CBUS_STANDBY_04_get_wake_offset_low(data)                     ((0x00007C00&(data))>>10)
#define CBUS_STANDBY_04_get_wake_cnt(data)                            ((0x00000380&(data))>>7)
#define CBUS_STANDBY_04_get_wake_offset(data)                         ((0x0000007C&(data))>>2)
#define CBUS_STANDBY_04_get_cbus_disconn(data)                        ((0x00000002&(data))>>1)
#define CBUS_STANDBY_04_get_disconn_irq_en(data)                      (0x00000001&(data))


#define CBUS_STANDBY_05                                               0x98037414
#define CBUS_STANDBY_05_reg_addr                                      "0xd8037414"
#define CBUS_STANDBY_05_reg                                           0xd8037414
#define CBUS_STANDBY_05_inst_addr                                     "0x0105"
#define CBUS_STANDBY_05_inst                                          0x0105
#define set_CBUS_STANDBY_05_reg(data)                                 (*((volatile unsigned int*)CBUS_STANDBY_05_reg)=data)
#define get_CBUS_STANDBY_05_reg                                       (*((volatile unsigned int*)CBUS_STANDBY_05_reg))
#define CBUS_STANDBY_05_dis_upper_shift                               (4)
#define CBUS_STANDBY_05_dis_lower_shift                               (1)
#define CBUS_STANDBY_05_wake_eco_en_shift                             (0)
#define CBUS_STANDBY_05_dis_upper_mask                                (0x000000F0)
#define CBUS_STANDBY_05_dis_lower_mask                                (0x0000000E)
#define CBUS_STANDBY_05_wake_eco_en_mask                              (0x00000001)
#define CBUS_STANDBY_05_dis_upper(data)                               (0x000000F0&((data)<<4))
#define CBUS_STANDBY_05_dis_lower(data)                               (0x0000000E&((data)<<1))
#define CBUS_STANDBY_05_wake_eco_en(data)                             (0x00000001&(data))
#define CBUS_STANDBY_05_get_dis_upper(data)                           ((0x000000F0&(data))>>4)
#define CBUS_STANDBY_05_get_dis_lower(data)                           ((0x0000000E&(data))>>1)
#define CBUS_STANDBY_05_get_wake_eco_en(data)                         (0x00000001&(data))


#define CBUS_STANDBY_06                                               0x98037418
#define CBUS_STANDBY_06_reg_addr                                      "0xd8037418"
#define CBUS_STANDBY_06_reg                                           0xd8037418
#define CBUS_STANDBY_06_inst_addr                                     "0x0106"
#define CBUS_STANDBY_06_inst                                          0x0106
#define set_CBUS_STANDBY_06_reg(data)                                 (*((volatile unsigned int*)CBUS_STANDBY_06_reg)=data)
#define get_CBUS_STANDBY_06_reg                                       (*((volatile unsigned int*)CBUS_STANDBY_06_reg))
#define CBUS_STANDBY_06_wake_num_shift                                (5)
#define CBUS_STANDBY_06_dis_num_shift                                 (0)
#define CBUS_STANDBY_06_wake_num_mask                                 (0x000000E0)
#define CBUS_STANDBY_06_dis_num_mask                                  (0x0000001F)
#define CBUS_STANDBY_06_wake_num(data)                                (0x000000E0&((data)<<5))
#define CBUS_STANDBY_06_dis_num(data)                                 (0x0000001F&(data))
#define CBUS_STANDBY_06_get_wake_num(data)                            ((0x000000E0&(data))>>5)
#define CBUS_STANDBY_06_get_dis_num(data)                             (0x0000001F&(data))


#define CBUS_STANDBY_07                                               0x9803741c
#define CBUS_STANDBY_07_reg_addr                                      "0xd803741c"
#define CBUS_STANDBY_07_reg                                           0xd803741c
#define CBUS_STANDBY_07_inst_addr                                     "0x0107"
#define CBUS_STANDBY_07_inst                                          0x0107
#define set_CBUS_STANDBY_07_reg(data)                                 (*((volatile unsigned int*)CBUS_STANDBY_07_reg)=data)
#define get_CBUS_STANDBY_07_reg                                       (*((volatile unsigned int*)CBUS_STANDBY_07_reg))
#define CBUS_STANDBY_07_cbus_imp_auto_shift                           (7)
#define CBUS_STANDBY_07_bypass_mode_shift                             (6)
#define CBUS_STANDBY_07_sink_fsm_st_shift                             (3)
#define CBUS_STANDBY_07_cbus_100k_en_shift                            (2)
#define CBUS_STANDBY_07_cbus_1k_en_shift                              (1)
#define CBUS_STANDBY_07_cbus_in_sig_shift                             (0)
#define CBUS_STANDBY_07_cbus_imp_auto_mask                            (0x00000080)
#define CBUS_STANDBY_07_bypass_mode_mask                              (0x00000040)
#define CBUS_STANDBY_07_sink_fsm_st_mask                              (0x00000038)
#define CBUS_STANDBY_07_cbus_100k_en_mask                             (0x00000004)
#define CBUS_STANDBY_07_cbus_1k_en_mask                               (0x00000002)
#define CBUS_STANDBY_07_cbus_in_sig_mask                              (0x00000001)
#define CBUS_STANDBY_07_cbus_imp_auto(data)                           (0x00000080&((data)<<7))
#define CBUS_STANDBY_07_bypass_mode(data)                             (0x00000040&((data)<<6))
#define CBUS_STANDBY_07_sink_fsm_st(data)                             (0x00000038&((data)<<3))
#define CBUS_STANDBY_07_cbus_100k_en(data)                            (0x00000004&((data)<<2))
#define CBUS_STANDBY_07_cbus_1k_en(data)                              (0x00000002&((data)<<1))
#define CBUS_STANDBY_07_cbus_in_sig(data)                             (0x00000001&(data))
#define CBUS_STANDBY_07_get_cbus_imp_auto(data)                       ((0x00000080&(data))>>7)
#define CBUS_STANDBY_07_get_bypass_mode(data)                         ((0x00000040&(data))>>6)
#define CBUS_STANDBY_07_get_sink_fsm_st(data)                         ((0x00000038&(data))>>3)
#define CBUS_STANDBY_07_get_cbus_100k_en(data)                        ((0x00000004&(data))>>2)
#define CBUS_STANDBY_07_get_cbus_1k_en(data)                          ((0x00000002&(data))>>1)
#define CBUS_STANDBY_07_get_cbus_in_sig(data)                         (0x00000001&(data))


#define CBUS_STANDBY_08                                               0x98037420
#define CBUS_STANDBY_08_reg_addr                                      "0xd8037420"
#define CBUS_STANDBY_08_reg                                           0xd8037420
#define CBUS_STANDBY_08_inst_addr                                     "0x0108"
#define CBUS_STANDBY_08_inst                                          0x0108
#define set_CBUS_STANDBY_08_reg(data)                                 (*((volatile unsigned int*)CBUS_STANDBY_08_reg)=data)
#define get_CBUS_STANDBY_08_reg                                       (*((volatile unsigned int*)CBUS_STANDBY_08_reg))
#define CBUS_STANDBY_08_goto_sink1_pos_shift                          (5)
#define CBUS_STANDBY_08_goto_float_shift                              (4)
#define CBUS_STANDBY_08_goto_sink1_shift                              (3)
#define CBUS_STANDBY_08_cable_det_shift                               (2)
#define CBUS_STANDBY_08_dbg_sel_phy_shift                             (0)
#define CBUS_STANDBY_08_goto_sink1_pos_mask                           (0x00000020)
#define CBUS_STANDBY_08_goto_float_mask                               (0x00000010)
#define CBUS_STANDBY_08_goto_sink1_mask                               (0x00000008)
#define CBUS_STANDBY_08_cable_det_mask                                (0x00000004)
#define CBUS_STANDBY_08_dbg_sel_phy_mask                              (0x00000001)
#define CBUS_STANDBY_08_goto_sink1_pos(data)                          (0x00000020&((data)<<5))
#define CBUS_STANDBY_08_goto_float(data)                              (0x00000010&((data)<<4))
#define CBUS_STANDBY_08_goto_sink1(data)                              (0x00000008&((data)<<3))
#define CBUS_STANDBY_08_cable_det(data)                               (0x00000004&((data)<<2))
#define CBUS_STANDBY_08_dbg_sel_phy(data)                             (0x00000001&(data))
#define CBUS_STANDBY_08_get_goto_sink1_pos(data)                      ((0x00000020&(data))>>5)
#define CBUS_STANDBY_08_get_goto_float(data)                          ((0x00000010&(data))>>4)
#define CBUS_STANDBY_08_get_goto_sink1(data)                          ((0x00000008&(data))>>3)
#define CBUS_STANDBY_08_get_cable_det(data)                           ((0x00000004&(data))>>2)
#define CBUS_STANDBY_08_get_dbg_sel_phy(data)                         (0x00000001&(data))


#define CBUS_STANDBY_09                                               0x98037424
#define CBUS_STANDBY_09_reg_addr                                      "0xd8037424"
#define CBUS_STANDBY_09_reg                                           0xd8037424
#define CBUS_STANDBY_09_inst_addr                                     "0x0109"
#define CBUS_STANDBY_09_inst                                          0x0109
#define set_CBUS_STANDBY_09_reg(data)                                 (*((volatile unsigned int*)CBUS_STANDBY_09_reg)=data)
#define get_CBUS_STANDBY_09_reg                                       (*((volatile unsigned int*)CBUS_STANDBY_09_reg))
#define CBUS_STANDBY_09_ctrl_09_resv_shift                            (0)
#define CBUS_STANDBY_09_ctrl_09_resv_mask                             (0xFFFFFFFF)
#define CBUS_STANDBY_09_ctrl_09_resv(data)                            (0xFFFFFFFF&(data))
#define CBUS_STANDBY_09_get_ctrl_09_resv(data)                        (0xFFFFFFFF&(data))


#define CBUS_PHY_0                                                    0x98037430
#define CBUS_PHY_0_reg_addr                                           "0xd8037430"
#define CBUS_PHY_0_reg                                                0xd8037430
#define CBUS_PHY_0_inst_addr                                          "0x010C"
#define CBUS_PHY_0_inst                                               0x010C
#define set_CBUS_PHY_0_reg(data)                                      (*((volatile unsigned int*)CBUS_PHY_0_reg)=data)
#define get_CBUS_PHY_0_reg                                            (*((volatile unsigned int*)CBUS_PHY_0_reg))
#define CBUS_PHY_0_cbus_sr_shift                                      (6)
#define CBUS_PHY_0_cbus_smt_shift                                     (5)
#define CBUS_PHY_0_cbus_pu_shift                                      (4)
#define CBUS_PHY_0_cbus_pd_shift                                      (3)
#define CBUS_PHY_0_cbus_i_shift                                       (2)
#define CBUS_PHY_0_cbus_e2_shift                                      (1)
#define CBUS_PHY_0_cbus_e_shift                                       (0)
#define CBUS_PHY_0_cbus_sr_mask                                       (0x00000040)
#define CBUS_PHY_0_cbus_smt_mask                                      (0x00000020)
#define CBUS_PHY_0_cbus_pu_mask                                       (0x00000010)
#define CBUS_PHY_0_cbus_pd_mask                                       (0x00000008)
#define CBUS_PHY_0_cbus_i_mask                                        (0x00000004)
#define CBUS_PHY_0_cbus_e2_mask                                       (0x00000002)
#define CBUS_PHY_0_cbus_e_mask                                        (0x00000001)
#define CBUS_PHY_0_cbus_sr(data)                                      (0x00000040&((data)<<6))
#define CBUS_PHY_0_cbus_smt(data)                                     (0x00000020&((data)<<5))
#define CBUS_PHY_0_cbus_pu(data)                                      (0x00000010&((data)<<4))
#define CBUS_PHY_0_cbus_pd(data)                                      (0x00000008&((data)<<3))
#define CBUS_PHY_0_cbus_i(data)                                       (0x00000004&((data)<<2))
#define CBUS_PHY_0_cbus_e2(data)                                      (0x00000002&((data)<<1))
#define CBUS_PHY_0_cbus_e(data)                                       (0x00000001&(data))
#define CBUS_PHY_0_get_cbus_sr(data)                                  ((0x00000040&(data))>>6)
#define CBUS_PHY_0_get_cbus_smt(data)                                 ((0x00000020&(data))>>5)
#define CBUS_PHY_0_get_cbus_pu(data)                                  ((0x00000010&(data))>>4)
#define CBUS_PHY_0_get_cbus_pd(data)                                  ((0x00000008&(data))>>3)
#define CBUS_PHY_0_get_cbus_i(data)                                   ((0x00000004&(data))>>2)
#define CBUS_PHY_0_get_cbus_e2(data)                                  ((0x00000002&(data))>>1)
#define CBUS_PHY_0_get_cbus_e(data)                                   (0x00000001&(data))


#define CBUS_PHY_1                                                    0x98037434
#define CBUS_PHY_1_reg_addr                                           "0xd8037434"
#define CBUS_PHY_1_reg                                                0xd8037434
#define CBUS_PHY_1_inst_addr                                          "0x010D"
#define CBUS_PHY_1_inst                                               0x010D
#define set_CBUS_PHY_1_reg(data)                                      (*((volatile unsigned int*)CBUS_PHY_1_reg)=data)
#define get_CBUS_PHY_1_reg                                            (*((volatile unsigned int*)CBUS_PHY_1_reg))
#define CBUS_PHY_1_adjr_1k_shift                                      (28)
#define CBUS_PHY_1_adjr_100k_shift                                    (23)
#define CBUS_PHY_1_auto_k_1k_shift                                    (22)
#define CBUS_PHY_1_auto_k_100k_shift                                  (21)
#define CBUS_PHY_1_en_res_cal_cbus_shift                              (20)
#define CBUS_PHY_1_sel_cbus0_input_high_shift                         (18)
#define CBUS_PHY_1_sel_cbus0_input_low_shift                          (16)
#define CBUS_PHY_1_sel_cbus_0_driving_shift                           (13)
#define CBUS_PHY_1_sel_vref_ldo_shift                                 (11)
#define CBUS_PHY_1_trim_ldo_cbus_shift                                (7)
#define CBUS_PHY_1_triming_mode_shift                                 (6)
#define CBUS_PHY_1_en_cbus_shift                                      (5)
#define CBUS_PHY_1_en_cmp_cbus_shift                                  (4)
#define CBUS_PHY_1_en_driver_cbus_shift                               (3)
#define CBUS_PHY_1_en_ldo_cbus_shift                                  (2)
#define CBUS_PHY_1_psm_cbus_shift                                     (1)
#define CBUS_PHY_1_sel_cbusb_gpio_shift                               (0)
#define CBUS_PHY_1_adjr_1k_mask                                       (0xF0000000)
#define CBUS_PHY_1_adjr_100k_mask                                     (0x0F800000)
#define CBUS_PHY_1_auto_k_1k_mask                                     (0x00400000)
#define CBUS_PHY_1_auto_k_100k_mask                                   (0x00200000)
#define CBUS_PHY_1_en_res_cal_cbus_mask                               (0x00100000)
#define CBUS_PHY_1_sel_cbus0_input_high_mask                          (0x000C0000)
#define CBUS_PHY_1_sel_cbus0_input_low_mask                           (0x00030000)
#define CBUS_PHY_1_sel_cbus_0_driving_mask                            (0x0000E000)
#define CBUS_PHY_1_sel_vref_ldo_mask                                  (0x00001800)
#define CBUS_PHY_1_trim_ldo_cbus_mask                                 (0x00000780)
#define CBUS_PHY_1_triming_mode_mask                                  (0x00000040)
#define CBUS_PHY_1_en_cbus_mask                                       (0x00000020)
#define CBUS_PHY_1_en_cmp_cbus_mask                                   (0x00000010)
#define CBUS_PHY_1_en_driver_cbus_mask                                (0x00000008)
#define CBUS_PHY_1_en_ldo_cbus_mask                                   (0x00000004)
#define CBUS_PHY_1_psm_cbus_mask                                      (0x00000002)
#define CBUS_PHY_1_sel_cbusb_gpio_mask                                (0x00000001)
#define CBUS_PHY_1_adjr_1k(data)                                      (0xF0000000&((data)<<28))
#define CBUS_PHY_1_adjr_100k(data)                                    (0x0F800000&((data)<<23))
#define CBUS_PHY_1_auto_k_1k(data)                                    (0x00400000&((data)<<22))
#define CBUS_PHY_1_auto_k_100k(data)                                  (0x00200000&((data)<<21))
#define CBUS_PHY_1_en_res_cal_cbus(data)                              (0x00100000&((data)<<20))
#define CBUS_PHY_1_sel_cbus0_input_high(data)                         (0x000C0000&((data)<<18))
#define CBUS_PHY_1_sel_cbus0_input_low(data)                          (0x00030000&((data)<<16))
#define CBUS_PHY_1_sel_cbus_0_driving(data)                           (0x0000E000&((data)<<13))
#define CBUS_PHY_1_sel_vref_ldo(data)                                 (0x00001800&((data)<<11))
#define CBUS_PHY_1_trim_ldo_cbus(data)                                (0x00000780&((data)<<7))
#define CBUS_PHY_1_triming_mode(data)                                 (0x00000040&((data)<<6))
#define CBUS_PHY_1_en_cbus(data)                                      (0x00000020&((data)<<5))
#define CBUS_PHY_1_en_cmp_cbus(data)                                  (0x00000010&((data)<<4))
#define CBUS_PHY_1_en_driver_cbus(data)                               (0x00000008&((data)<<3))
#define CBUS_PHY_1_en_ldo_cbus(data)                                  (0x00000004&((data)<<2))
#define CBUS_PHY_1_psm_cbus(data)                                     (0x00000002&((data)<<1))
#define CBUS_PHY_1_sel_cbusb_gpio(data)                               (0x00000001&(data))
#define CBUS_PHY_1_get_adjr_1k(data)                                  ((0xF0000000&(data))>>28)
#define CBUS_PHY_1_get_adjr_100k(data)                                ((0x0F800000&(data))>>23)
#define CBUS_PHY_1_get_auto_k_1k(data)                                ((0x00400000&(data))>>22)
#define CBUS_PHY_1_get_auto_k_100k(data)                              ((0x00200000&(data))>>21)
#define CBUS_PHY_1_get_en_res_cal_cbus(data)                          ((0x00100000&(data))>>20)
#define CBUS_PHY_1_get_sel_cbus0_input_high(data)                     ((0x000C0000&(data))>>18)
#define CBUS_PHY_1_get_sel_cbus0_input_low(data)                      ((0x00030000&(data))>>16)
#define CBUS_PHY_1_get_sel_cbus_0_driving(data)                       ((0x0000E000&(data))>>13)
#define CBUS_PHY_1_get_sel_vref_ldo(data)                             ((0x00001800&(data))>>11)
#define CBUS_PHY_1_get_trim_ldo_cbus(data)                            ((0x00000780&(data))>>7)
#define CBUS_PHY_1_get_triming_mode(data)                             ((0x00000040&(data))>>6)
#define CBUS_PHY_1_get_en_cbus(data)                                  ((0x00000020&(data))>>5)
#define CBUS_PHY_1_get_en_cmp_cbus(data)                              ((0x00000010&(data))>>4)
#define CBUS_PHY_1_get_en_driver_cbus(data)                           ((0x00000008&(data))>>3)
#define CBUS_PHY_1_get_en_ldo_cbus(data)                              ((0x00000004&(data))>>2)
#define CBUS_PHY_1_get_psm_cbus(data)                                 ((0x00000002&(data))>>1)
#define CBUS_PHY_1_get_sel_cbusb_gpio(data)                           (0x00000001&(data))


#define CBUS_PHY_2                                                    0x98037438
#define CBUS_PHY_2_reg_addr                                           "0xd8037438"
#define CBUS_PHY_2_reg                                                0xd8037438
#define CBUS_PHY_2_inst_addr                                          "0x010E"
#define CBUS_PHY_2_inst                                               0x010E
#define set_CBUS_PHY_2_reg(data)                                      (*((volatile unsigned int*)CBUS_PHY_2_reg)=data)
#define get_CBUS_PHY_2_reg                                            (*((volatile unsigned int*)CBUS_PHY_2_reg))
#define CBUS_PHY_2_cbus_o_shift                                       (0)
#define CBUS_PHY_2_cbus_o_mask                                        (0x00000001)
#define CBUS_PHY_2_cbus_o(data)                                       (0x00000001&(data))
#define CBUS_PHY_2_get_cbus_o(data)                                   (0x00000001&(data))


#define CBUS_PHY_3                                                    0x9803743c
#define CBUS_PHY_3_reg_addr                                           "0xd803743c"
#define CBUS_PHY_3_reg                                                0xd803743c
#define CBUS_PHY_3_inst_addr                                          "0x010F"
#define CBUS_PHY_3_inst                                               0x010F
#define set_CBUS_PHY_3_reg(data)                                      (*((volatile unsigned int*)CBUS_PHY_3_reg)=data)
#define get_CBUS_PHY_3_reg                                            (*((volatile unsigned int*)CBUS_PHY_3_reg))
#define CBUS_PHY_3_sel_phy_soft_rst_n_shift                           (11)
#define CBUS_PHY_3_cbus_res_tst_shift                                 (1)
#define CBUS_PHY_3_res_ok_shift                                       (0)
#define CBUS_PHY_3_sel_phy_soft_rst_n_mask                            (0x00000800)
#define CBUS_PHY_3_cbus_res_tst_mask                                  (0x000007FE)
#define CBUS_PHY_3_res_ok_mask                                        (0x00000001)
#define CBUS_PHY_3_sel_phy_soft_rst_n(data)                           (0x00000800&((data)<<11))
#define CBUS_PHY_3_cbus_res_tst(data)                                 (0x000007FE&((data)<<1))
#define CBUS_PHY_3_res_ok(data)                                       (0x00000001&(data))
#define CBUS_PHY_3_get_sel_phy_soft_rst_n(data)                       ((0x00000800&(data))>>11)
#define CBUS_PHY_3_get_cbus_res_tst(data)                             ((0x000007FE&(data))>>1)
#define CBUS_PHY_3_get_res_ok(data)                                   (0x00000001&(data))
#endif
