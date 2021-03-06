/**************************************************************
// Spec Version                  : 1.0
// Parser Version                : DVR_Parser_6.11(120105)
// CModelGen Version             : 5.1 2012.01.05
// Naming Rule                   :  Module_Register_Name
// Naming Rule                   : Module_Register_Name_reg
// Parse Option                  : Only Parse _op1
// Parse Address Region          : All Address Region 
// Decode bit number             : 12 bits
// Firmware Header Generate Date : 2015/10/1 11:20:51
***************************************************************/


#ifndef _ISO_CBUS_TX_REG_H_INCLUDED_
#define _ISO_CBUS_TX_REG_H_INCLUDED_
#ifdef  _ISO_CBUS_TX_USE_STRUCT
typedef struct 
{
unsigned int     REG_MHL_TST_EN_TXRX:1;
unsigned int     REG_TST_SEL_TXRX:3;
unsigned int     REG_CBUS_CONTROL:8;
unsigned int     REG_SEL_CBUSB_GPIO_TX:1;
unsigned int     REG_EN_CBUS_TX:1;
unsigned int     REG_MHL_HPD_DET_TX:1;
unsigned int     REG_EN_CMP_TX:1;
unsigned int     REG_HDMI_HPD_VSEL_TX:2;
unsigned int     REG_MHL_HPD_VSEL_TX:2;
unsigned int     REG_R1K_HIGH_VSEL_TX:2;
unsigned int     REG_R1K_LOW_VSEL_TX:2;
unsigned int     REG_SEL_INPUT_HIGH_TX:2;
unsigned int     REG_SEL_INPUT_LOW_TX:2;
unsigned int     REG_HDMI_MHL_SEL:1;
unsigned int     REG_PLL_OEB_ECBUSTX:1;
unsigned int     reserved_0:2;
}ISO_CBUS_TX_PHY_CTRL1;

typedef struct 
{
unsigned int     REG_EN_BUF_ECBUSTX:1;
unsigned int     REG_FORWD_TST_EN_ECBUSTX:1;
unsigned int     REG_BUF_IBSEL_ECBUSTX:3;
unsigned int     REG_BUF_R50_ECBUSTX:4;
unsigned int     REG_BKWD_TST_EN_ECBUSTX:1;
unsigned int     REG_HPD_R1K_BYPASS:1;
unsigned int     REG_BUF_CSEL_ECBUSTX:2;
unsigned int     REG_BUF_RSEL_ECBUSTX:2;
unsigned int     REG_DELAY_RESERVED_ECBUSTX:2;
unsigned int     reserved_0:1;
unsigned int     REG_HPD_R1K_SEL:3;
unsigned int     REG_BUF_DELAY_SEL_ECBUSTX:4;
unsigned int     REG_BUF_VREF_SEL_ECBUSTX:3;
unsigned int     reserved_1:4;
}ISO_CBUS_TX_PHY_CTRL2;

typedef struct 
{
unsigned int     REG_PLL_CP_ECBUSTX:2;
unsigned int     REG_PLL_CS_ECBUSTX:2;
unsigned int     reserved_0:2;
unsigned int     REG_PLL_LDO1V_SEL_ECBUSTX:2;
unsigned int     REG_PLL_LDO_SEL_ECBUSTX:2;
unsigned int     REG_PLL_FREEZE_ECBUSTX:1;
unsigned int     REG_PLL_POW_ECBUSTX:1;
unsigned int     REG_PLL_LDO_POW_ECBUSTX:1;
unsigned int     REG_PLL_VCORSTB_ECBUSTX:1;
unsigned int     REG_PLL_WDRST_ECBUSTX:1;
unsigned int     REG_PLL_WDSET_ECBUSTX:1;
unsigned int     REG_PLL_M_ECBUSTX:8;
unsigned int     REG_PLL_PHSEL_ECBUSTX:4;
unsigned int     REG_PLL_N_ECBUSTX:3;
unsigned int     REG_PLL_LDO1V_POW_ECBUSTX:1;
}ISO_CBUS_TX_PHY_CTRL3;

typedef struct 
{
unsigned int     REG_AUTO_K_R50_ECBUSTX:1;
unsigned int     REG_DATAGEN_POW_ECBUSTX:1;
unsigned int     REG_DATA_EN_ECBUSTX:1;
unsigned int     REG_DATA_IN_SEL_ECBUSTX:1;
unsigned int     REG_DELAY_RSEL_ECBUSTX:1;
unsigned int     REG_RCAL_EN_ECBUSTX:1;
unsigned int     REG_BUF_RCAL_ECBUSTX:4;
unsigned int     REG_CKIN_BPS_ECBUSTX:1;
unsigned int     REG_CMP_VSEL_ECBUSTX:2;
unsigned int     REG_CKOUT_EDGE_SEL_ECBUSTX:1;
unsigned int     REG_BKWD_BYP_ECBUSTX:1;
unsigned int     REG_TEST_SEL_ECBUSTX:2;
unsigned int     REG_BUF_VREF_RSEL_ECBUSTX:2;
unsigned int     REG_PLL_RS_ECBUSTX:3;
unsigned int     REG_PLL_IP_ECBUSTX:3;
unsigned int     reserved_0:7;
}ISO_CBUS_TX_PHY_CTRL4;

typedef struct 
{
unsigned int     CBUS_I_TX:1;
unsigned int     CBUS_E_TX:1;
unsigned int     CBUS_E2_TX:1;
unsigned int     CBUS_PD_TX:1;
unsigned int     CBUS_PU_TX:1;
unsigned int     CBUS_SMT_TX:1;
unsigned int     CBUS_SR_TX:1;
unsigned int     CBUS_O_TX:1;
unsigned int     REGO_PLL_WDO_ECBUSTX:1;
unsigned int     REGO_MHL_HPD_DET_TX:1;
unsigned int     REGO_5V_DETECT:1;
unsigned int     TEST_OUT_TXRX:2;
unsigned int     reserved_0:15;
unsigned int     REGO_CAL_R50:4;
}ISO_CBUS_TX_PHY_CTRL5;

typedef struct 
{
unsigned int     reg_threshold:5;
unsigned int     reg_cal_ctrl:3;
unsigned int     reg_threshold1:4;
unsigned int     reg_cond_675:1;
unsigned int     reg_cond_sel:2;
unsigned int     reg_check_fail:1;
unsigned int     reg_neg_out:1;
unsigned int     reg_cond675_sel:2;
unsigned int     reg_dbg_sel:1;
unsigned int     reg_dphy_en:1;
unsigned int     reg_cal_next:2;
unsigned int     reg_dphy_rst:1;
unsigned int     reg_read_data:4;
unsigned int     reg_cal_data_sel:4;
}ISO_CBUS_TX_PHY_CTRL6;

typedef struct 
{
unsigned int     iso_cbus_dbg:32;
}ISO_CBUS_TX_ISO_DBG0;

typedef struct 
{
unsigned int     REG_MHL_BMOS_EN_TX:1;
unsigned int     REG_HDMI_HPD_EN_TX:1;
unsigned int     REG_MHL_R1K_DET_TX:1;
unsigned int     REG_R1K_VTH_SEL_TX:1;
unsigned int     REG_MHL_TST_EN_TX:1;
unsigned int     REG_MHL_VSEL_TX:3;
unsigned int     REG_MHL_R10K_TX:3;
unsigned int     REG_CBUS_STRC_TX:3;
unsigned int     REG_EN_BIAS_TXRX:1;
unsigned int     TST_SEL_H_TX:2;
unsigned int     hw_r1k_det_en:1;
unsigned int     reserved_0:4;
unsigned int     cbus_fw_rst:1;
unsigned int     cbus_clk_bypass:1;
unsigned int     reserved_1:2;
unsigned int     sel_clk_75m:2;
unsigned int     reserved_2:1;
unsigned int     sys_clk_div:3;
}ISO_CBUS_TX_PHY_CTRL;

typedef struct 
{
unsigned int     reserved_0:25;
unsigned int     cbus_hpd_irq:1;
unsigned int     cbus_hpd_irq_en:1;
unsigned int     detect_5v_irq:1;
unsigned int     detect_5v_irq_en:1;
unsigned int     det_z1k_irq:1;
unsigned int     det_z1k_irq_en:1;
unsigned int     write_data:1;
}ISO_CBUS_TX_PHY_IRQ;

typedef struct 
{
unsigned int     rego_mhl_r1k_det_tx:1;
unsigned int     hdmi_hpd_out_tx:1;
unsigned int     hw_en_10k:1;
unsigned int     hw_en_5k:1;
unsigned int     det_r1k_st:2;
unsigned int     cbus_dbn:1;
unsigned int     hw_mhl_r10k_test:1;
unsigned int     hw_mhl_r1k_det:1;
unsigned int     hw_mhl_bmos_en:1;
unsigned int     hw_mhl_vtl_sel:1;
unsigned int     reserved_0:5;
unsigned int     det_r1k_cnt:8;
unsigned int     reserved_1:4;
unsigned int     fw_rst_r1k_st:1;
unsigned int     reserved_2:1;
unsigned int     fw_r1k_det_en:1;
unsigned int     fw_r1k_det:1;
}ISO_CBUS_TX_PHY_STATUS;

#endif

#define ISO_CBUS_TX_PHY_CTRL1                                                        0x98037000
#define ISO_CBUS_TX_PHY_CTRL1_reg_addr                                               "0xD8037000"
#define ISO_CBUS_TX_PHY_CTRL1_reg                                                    0xD8037000
#define set_ISO_CBUS_TX_PHY_CTRL1_reg(data)   (*((volatile unsigned int*) ISO_CBUS_TX_PHY_CTRL1_reg)=data)
#define get_ISO_CBUS_TX_PHY_CTRL1_reg   (*((volatile unsigned int*) ISO_CBUS_TX_PHY_CTRL1_reg))
#define ISO_CBUS_TX_PHY_CTRL1_inst_adr                                               "0x0000"
#define ISO_CBUS_TX_PHY_CTRL1_inst                                                   0x0000
#define ISO_CBUS_TX_PHY_CTRL1_REG_MHL_TST_EN_TXRX_shift                              (31)
#define ISO_CBUS_TX_PHY_CTRL1_REG_MHL_TST_EN_TXRX_mask                               (0x80000000)
#define ISO_CBUS_TX_PHY_CTRL1_REG_MHL_TST_EN_TXRX(data)                              (0x80000000&((data)<<31))
#define ISO_CBUS_TX_PHY_CTRL1_REG_MHL_TST_EN_TXRX_src(data)                          ((0x80000000&(data))>>31)
#define ISO_CBUS_TX_PHY_CTRL1_get_REG_MHL_TST_EN_TXRX(data)                          ((0x80000000&(data))>>31)
#define ISO_CBUS_TX_PHY_CTRL1_REG_TST_SEL_TXRX_shift                                 (28)
#define ISO_CBUS_TX_PHY_CTRL1_REG_TST_SEL_TXRX_mask                                  (0x70000000)
#define ISO_CBUS_TX_PHY_CTRL1_REG_TST_SEL_TXRX(data)                                 (0x70000000&((data)<<28))
#define ISO_CBUS_TX_PHY_CTRL1_REG_TST_SEL_TXRX_src(data)                             ((0x70000000&(data))>>28)
#define ISO_CBUS_TX_PHY_CTRL1_get_REG_TST_SEL_TXRX(data)                             ((0x70000000&(data))>>28)
#define ISO_CBUS_TX_PHY_CTRL1_REG_CBUS_CONTROL_shift                                 (20)
#define ISO_CBUS_TX_PHY_CTRL1_REG_CBUS_CONTROL_mask                                  (0x0FF00000)
#define ISO_CBUS_TX_PHY_CTRL1_REG_CBUS_CONTROL(data)                                 (0x0FF00000&((data)<<20))
#define ISO_CBUS_TX_PHY_CTRL1_REG_CBUS_CONTROL_src(data)                             ((0x0FF00000&(data))>>20)
#define ISO_CBUS_TX_PHY_CTRL1_get_REG_CBUS_CONTROL(data)                             ((0x0FF00000&(data))>>20)
#define ISO_CBUS_TX_PHY_CTRL1_REG_SEL_CBUSB_GPIO_TX_shift                            (19)
#define ISO_CBUS_TX_PHY_CTRL1_REG_SEL_CBUSB_GPIO_TX_mask                             (0x00080000)
#define ISO_CBUS_TX_PHY_CTRL1_REG_SEL_CBUSB_GPIO_TX(data)                            (0x00080000&((data)<<19))
#define ISO_CBUS_TX_PHY_CTRL1_REG_SEL_CBUSB_GPIO_TX_src(data)                        ((0x00080000&(data))>>19)
#define ISO_CBUS_TX_PHY_CTRL1_get_REG_SEL_CBUSB_GPIO_TX(data)                        ((0x00080000&(data))>>19)
#define ISO_CBUS_TX_PHY_CTRL1_REG_EN_CBUS_TX_shift                                   (18)
#define ISO_CBUS_TX_PHY_CTRL1_REG_EN_CBUS_TX_mask                                    (0x00040000)
#define ISO_CBUS_TX_PHY_CTRL1_REG_EN_CBUS_TX(data)                                   (0x00040000&((data)<<18))
#define ISO_CBUS_TX_PHY_CTRL1_REG_EN_CBUS_TX_src(data)                               ((0x00040000&(data))>>18)
#define ISO_CBUS_TX_PHY_CTRL1_get_REG_EN_CBUS_TX(data)                               ((0x00040000&(data))>>18)
#define ISO_CBUS_TX_PHY_CTRL1_REG_MHL_HPD_DET_TX_shift                               (17)
#define ISO_CBUS_TX_PHY_CTRL1_REG_MHL_HPD_DET_TX_mask                                (0x00020000)
#define ISO_CBUS_TX_PHY_CTRL1_REG_MHL_HPD_DET_TX(data)                               (0x00020000&((data)<<17))
#define ISO_CBUS_TX_PHY_CTRL1_REG_MHL_HPD_DET_TX_src(data)                           ((0x00020000&(data))>>17)
#define ISO_CBUS_TX_PHY_CTRL1_get_REG_MHL_HPD_DET_TX(data)                           ((0x00020000&(data))>>17)
#define ISO_CBUS_TX_PHY_CTRL1_REG_EN_CMP_TX_shift                                    (16)
#define ISO_CBUS_TX_PHY_CTRL1_REG_EN_CMP_TX_mask                                     (0x00010000)
#define ISO_CBUS_TX_PHY_CTRL1_REG_EN_CMP_TX(data)                                    (0x00010000&((data)<<16))
#define ISO_CBUS_TX_PHY_CTRL1_REG_EN_CMP_TX_src(data)                                ((0x00010000&(data))>>16)
#define ISO_CBUS_TX_PHY_CTRL1_get_REG_EN_CMP_TX(data)                                ((0x00010000&(data))>>16)
#define ISO_CBUS_TX_PHY_CTRL1_REG_HDMI_HPD_VSEL_TX_shift                             (14)
#define ISO_CBUS_TX_PHY_CTRL1_REG_HDMI_HPD_VSEL_TX_mask                              (0x0000C000)
#define ISO_CBUS_TX_PHY_CTRL1_REG_HDMI_HPD_VSEL_TX(data)                             (0x0000C000&((data)<<14))
#define ISO_CBUS_TX_PHY_CTRL1_REG_HDMI_HPD_VSEL_TX_src(data)                         ((0x0000C000&(data))>>14)
#define ISO_CBUS_TX_PHY_CTRL1_get_REG_HDMI_HPD_VSEL_TX(data)                         ((0x0000C000&(data))>>14)
#define ISO_CBUS_TX_PHY_CTRL1_REG_MHL_HPD_VSEL_TX_shift                              (12)
#define ISO_CBUS_TX_PHY_CTRL1_REG_MHL_HPD_VSEL_TX_mask                               (0x00003000)
#define ISO_CBUS_TX_PHY_CTRL1_REG_MHL_HPD_VSEL_TX(data)                              (0x00003000&((data)<<12))
#define ISO_CBUS_TX_PHY_CTRL1_REG_MHL_HPD_VSEL_TX_src(data)                          ((0x00003000&(data))>>12)
#define ISO_CBUS_TX_PHY_CTRL1_get_REG_MHL_HPD_VSEL_TX(data)                          ((0x00003000&(data))>>12)
#define ISO_CBUS_TX_PHY_CTRL1_REG_R1K_HIGH_VSEL_TX_shift                             (10)
#define ISO_CBUS_TX_PHY_CTRL1_REG_R1K_HIGH_VSEL_TX_mask                              (0x00000C00)
#define ISO_CBUS_TX_PHY_CTRL1_REG_R1K_HIGH_VSEL_TX(data)                             (0x00000C00&((data)<<10))
#define ISO_CBUS_TX_PHY_CTRL1_REG_R1K_HIGH_VSEL_TX_src(data)                         ((0x00000C00&(data))>>10)
#define ISO_CBUS_TX_PHY_CTRL1_get_REG_R1K_HIGH_VSEL_TX(data)                         ((0x00000C00&(data))>>10)
#define ISO_CBUS_TX_PHY_CTRL1_REG_R1K_LOW_VSEL_TX_shift                              (8)
#define ISO_CBUS_TX_PHY_CTRL1_REG_R1K_LOW_VSEL_TX_mask                               (0x00000300)
#define ISO_CBUS_TX_PHY_CTRL1_REG_R1K_LOW_VSEL_TX(data)                              (0x00000300&((data)<<8))
#define ISO_CBUS_TX_PHY_CTRL1_REG_R1K_LOW_VSEL_TX_src(data)                          ((0x00000300&(data))>>8)
#define ISO_CBUS_TX_PHY_CTRL1_get_REG_R1K_LOW_VSEL_TX(data)                          ((0x00000300&(data))>>8)
#define ISO_CBUS_TX_PHY_CTRL1_REG_SEL_INPUT_HIGH_TX_shift                            (6)
#define ISO_CBUS_TX_PHY_CTRL1_REG_SEL_INPUT_HIGH_TX_mask                             (0x000000C0)
#define ISO_CBUS_TX_PHY_CTRL1_REG_SEL_INPUT_HIGH_TX(data)                            (0x000000C0&((data)<<6))
#define ISO_CBUS_TX_PHY_CTRL1_REG_SEL_INPUT_HIGH_TX_src(data)                        ((0x000000C0&(data))>>6)
#define ISO_CBUS_TX_PHY_CTRL1_get_REG_SEL_INPUT_HIGH_TX(data)                        ((0x000000C0&(data))>>6)
#define ISO_CBUS_TX_PHY_CTRL1_REG_SEL_INPUT_LOW_TX_shift                             (4)
#define ISO_CBUS_TX_PHY_CTRL1_REG_SEL_INPUT_LOW_TX_mask                              (0x00000030)
#define ISO_CBUS_TX_PHY_CTRL1_REG_SEL_INPUT_LOW_TX(data)                             (0x00000030&((data)<<4))
#define ISO_CBUS_TX_PHY_CTRL1_REG_SEL_INPUT_LOW_TX_src(data)                         ((0x00000030&(data))>>4)
#define ISO_CBUS_TX_PHY_CTRL1_get_REG_SEL_INPUT_LOW_TX(data)                         ((0x00000030&(data))>>4)
#define ISO_CBUS_TX_PHY_CTRL1_REG_HDMI_MHL_SEL_shift                                 (3)
#define ISO_CBUS_TX_PHY_CTRL1_REG_HDMI_MHL_SEL_mask                                  (0x00000008)
#define ISO_CBUS_TX_PHY_CTRL1_REG_HDMI_MHL_SEL(data)                                 (0x00000008&((data)<<3))
#define ISO_CBUS_TX_PHY_CTRL1_REG_HDMI_MHL_SEL_src(data)                             ((0x00000008&(data))>>3)
#define ISO_CBUS_TX_PHY_CTRL1_get_REG_HDMI_MHL_SEL(data)                             ((0x00000008&(data))>>3)
#define ISO_CBUS_TX_PHY_CTRL1_REG_PLL_OEB_ECBUSTX_shift                              (2)
#define ISO_CBUS_TX_PHY_CTRL1_REG_PLL_OEB_ECBUSTX_mask                               (0x00000004)
#define ISO_CBUS_TX_PHY_CTRL1_REG_PLL_OEB_ECBUSTX(data)                              (0x00000004&((data)<<2))
#define ISO_CBUS_TX_PHY_CTRL1_REG_PLL_OEB_ECBUSTX_src(data)                          ((0x00000004&(data))>>2)
#define ISO_CBUS_TX_PHY_CTRL1_get_REG_PLL_OEB_ECBUSTX(data)                          ((0x00000004&(data))>>2)


#define ISO_CBUS_TX_PHY_CTRL2                                                        0x98037004
#define ISO_CBUS_TX_PHY_CTRL2_reg_addr                                               "0xD8037004"
#define ISO_CBUS_TX_PHY_CTRL2_reg                                                    0xD8037004
#define set_ISO_CBUS_TX_PHY_CTRL2_reg(data)   (*((volatile unsigned int*) ISO_CBUS_TX_PHY_CTRL2_reg)=data)
#define get_ISO_CBUS_TX_PHY_CTRL2_reg   (*((volatile unsigned int*) ISO_CBUS_TX_PHY_CTRL2_reg))
#define ISO_CBUS_TX_PHY_CTRL2_inst_adr                                               "0x0001"
#define ISO_CBUS_TX_PHY_CTRL2_inst                                                   0x0001
#define ISO_CBUS_TX_PHY_CTRL2_REG_EN_BUF_ECBUSTX_shift                               (31)
#define ISO_CBUS_TX_PHY_CTRL2_REG_EN_BUF_ECBUSTX_mask                                (0x80000000)
#define ISO_CBUS_TX_PHY_CTRL2_REG_EN_BUF_ECBUSTX(data)                               (0x80000000&((data)<<31))
#define ISO_CBUS_TX_PHY_CTRL2_REG_EN_BUF_ECBUSTX_src(data)                           ((0x80000000&(data))>>31)
#define ISO_CBUS_TX_PHY_CTRL2_get_REG_EN_BUF_ECBUSTX(data)                           ((0x80000000&(data))>>31)
#define ISO_CBUS_TX_PHY_CTRL2_REG_FORWD_TST_EN_ECBUSTX_shift                         (30)
#define ISO_CBUS_TX_PHY_CTRL2_REG_FORWD_TST_EN_ECBUSTX_mask                          (0x40000000)
#define ISO_CBUS_TX_PHY_CTRL2_REG_FORWD_TST_EN_ECBUSTX(data)                         (0x40000000&((data)<<30))
#define ISO_CBUS_TX_PHY_CTRL2_REG_FORWD_TST_EN_ECBUSTX_src(data)                     ((0x40000000&(data))>>30)
#define ISO_CBUS_TX_PHY_CTRL2_get_REG_FORWD_TST_EN_ECBUSTX(data)                     ((0x40000000&(data))>>30)
#define ISO_CBUS_TX_PHY_CTRL2_REG_BUF_IBSEL_ECBUSTX_shift                            (27)
#define ISO_CBUS_TX_PHY_CTRL2_REG_BUF_IBSEL_ECBUSTX_mask                             (0x38000000)
#define ISO_CBUS_TX_PHY_CTRL2_REG_BUF_IBSEL_ECBUSTX(data)                            (0x38000000&((data)<<27))
#define ISO_CBUS_TX_PHY_CTRL2_REG_BUF_IBSEL_ECBUSTX_src(data)                        ((0x38000000&(data))>>27)
#define ISO_CBUS_TX_PHY_CTRL2_get_REG_BUF_IBSEL_ECBUSTX(data)                        ((0x38000000&(data))>>27)
#define ISO_CBUS_TX_PHY_CTRL2_REG_BUF_R50_ECBUSTX_shift                              (23)
#define ISO_CBUS_TX_PHY_CTRL2_REG_BUF_R50_ECBUSTX_mask                               (0x07800000)
#define ISO_CBUS_TX_PHY_CTRL2_REG_BUF_R50_ECBUSTX(data)                              (0x07800000&((data)<<23))
#define ISO_CBUS_TX_PHY_CTRL2_REG_BUF_R50_ECBUSTX_src(data)                          ((0x07800000&(data))>>23)
#define ISO_CBUS_TX_PHY_CTRL2_get_REG_BUF_R50_ECBUSTX(data)                          ((0x07800000&(data))>>23)
#define ISO_CBUS_TX_PHY_CTRL2_REG_BKWD_TST_EN_ECBUSTX_shift                          (22)
#define ISO_CBUS_TX_PHY_CTRL2_REG_BKWD_TST_EN_ECBUSTX_mask                           (0x00400000)
#define ISO_CBUS_TX_PHY_CTRL2_REG_BKWD_TST_EN_ECBUSTX(data)                          (0x00400000&((data)<<22))
#define ISO_CBUS_TX_PHY_CTRL2_REG_BKWD_TST_EN_ECBUSTX_src(data)                      ((0x00400000&(data))>>22)
#define ISO_CBUS_TX_PHY_CTRL2_get_REG_BKWD_TST_EN_ECBUSTX(data)                      ((0x00400000&(data))>>22)
#define ISO_CBUS_TX_PHY_CTRL2_REG_HPD_R1K_BYPASS_shift                               (21)
#define ISO_CBUS_TX_PHY_CTRL2_REG_HPD_R1K_BYPASS_mask                                (0x00200000)
#define ISO_CBUS_TX_PHY_CTRL2_REG_HPD_R1K_BYPASS(data)                               (0x00200000&((data)<<21))
#define ISO_CBUS_TX_PHY_CTRL2_REG_HPD_R1K_BYPASS_src(data)                           ((0x00200000&(data))>>21)
#define ISO_CBUS_TX_PHY_CTRL2_get_REG_HPD_R1K_BYPASS(data)                           ((0x00200000&(data))>>21)
#define ISO_CBUS_TX_PHY_CTRL2_REG_BUF_CSEL_ECBUSTX_shift                             (19)
#define ISO_CBUS_TX_PHY_CTRL2_REG_BUF_CSEL_ECBUSTX_mask                              (0x00180000)
#define ISO_CBUS_TX_PHY_CTRL2_REG_BUF_CSEL_ECBUSTX(data)                             (0x00180000&((data)<<19))
#define ISO_CBUS_TX_PHY_CTRL2_REG_BUF_CSEL_ECBUSTX_src(data)                         ((0x00180000&(data))>>19)
#define ISO_CBUS_TX_PHY_CTRL2_get_REG_BUF_CSEL_ECBUSTX(data)                         ((0x00180000&(data))>>19)
#define ISO_CBUS_TX_PHY_CTRL2_REG_BUF_RSEL_ECBUSTX_shift                             (17)
#define ISO_CBUS_TX_PHY_CTRL2_REG_BUF_RSEL_ECBUSTX_mask                              (0x00060000)
#define ISO_CBUS_TX_PHY_CTRL2_REG_BUF_RSEL_ECBUSTX(data)                             (0x00060000&((data)<<17))
#define ISO_CBUS_TX_PHY_CTRL2_REG_BUF_RSEL_ECBUSTX_src(data)                         ((0x00060000&(data))>>17)
#define ISO_CBUS_TX_PHY_CTRL2_get_REG_BUF_RSEL_ECBUSTX(data)                         ((0x00060000&(data))>>17)
#define ISO_CBUS_TX_PHY_CTRL2_REG_DELAY_RESERVED_ECBUSTX_shift                       (15)
#define ISO_CBUS_TX_PHY_CTRL2_REG_DELAY_RESERVED_ECBUSTX_mask                        (0x00018000)
#define ISO_CBUS_TX_PHY_CTRL2_REG_DELAY_RESERVED_ECBUSTX(data)                       (0x00018000&((data)<<15))
#define ISO_CBUS_TX_PHY_CTRL2_REG_DELAY_RESERVED_ECBUSTX_src(data)                   ((0x00018000&(data))>>15)
#define ISO_CBUS_TX_PHY_CTRL2_get_REG_DELAY_RESERVED_ECBUSTX(data)                   ((0x00018000&(data))>>15)
#define ISO_CBUS_TX_PHY_CTRL2_REG_HPD_R1K_SEL_shift                                  (11)
#define ISO_CBUS_TX_PHY_CTRL2_REG_HPD_R1K_SEL_mask                                   (0x00003800)
#define ISO_CBUS_TX_PHY_CTRL2_REG_HPD_R1K_SEL(data)                                  (0x00003800&((data)<<11))
#define ISO_CBUS_TX_PHY_CTRL2_REG_HPD_R1K_SEL_src(data)                              ((0x00003800&(data))>>11)
#define ISO_CBUS_TX_PHY_CTRL2_get_REG_HPD_R1K_SEL(data)                              ((0x00003800&(data))>>11)
#define ISO_CBUS_TX_PHY_CTRL2_REG_BUF_DELAY_SEL_ECBUSTX_shift                        (7)
#define ISO_CBUS_TX_PHY_CTRL2_REG_BUF_DELAY_SEL_ECBUSTX_mask                         (0x00000780)
#define ISO_CBUS_TX_PHY_CTRL2_REG_BUF_DELAY_SEL_ECBUSTX(data)                        (0x00000780&((data)<<7))
#define ISO_CBUS_TX_PHY_CTRL2_REG_BUF_DELAY_SEL_ECBUSTX_src(data)                    ((0x00000780&(data))>>7)
#define ISO_CBUS_TX_PHY_CTRL2_get_REG_BUF_DELAY_SEL_ECBUSTX(data)                    ((0x00000780&(data))>>7)
#define ISO_CBUS_TX_PHY_CTRL2_REG_BUF_VREF_SEL_ECBUSTX_shift                         (4)
#define ISO_CBUS_TX_PHY_CTRL2_REG_BUF_VREF_SEL_ECBUSTX_mask                          (0x00000070)
#define ISO_CBUS_TX_PHY_CTRL2_REG_BUF_VREF_SEL_ECBUSTX(data)                         (0x00000070&((data)<<4))
#define ISO_CBUS_TX_PHY_CTRL2_REG_BUF_VREF_SEL_ECBUSTX_src(data)                     ((0x00000070&(data))>>4)
#define ISO_CBUS_TX_PHY_CTRL2_get_REG_BUF_VREF_SEL_ECBUSTX(data)                     ((0x00000070&(data))>>4)


#define ISO_CBUS_TX_PHY_CTRL3                                                        0x98037008
#define ISO_CBUS_TX_PHY_CTRL3_reg_addr                                               "0xD8037008"
#define ISO_CBUS_TX_PHY_CTRL3_reg                                                    0xD8037008
#define set_ISO_CBUS_TX_PHY_CTRL3_reg(data)   (*((volatile unsigned int*) ISO_CBUS_TX_PHY_CTRL3_reg)=data)
#define get_ISO_CBUS_TX_PHY_CTRL3_reg   (*((volatile unsigned int*) ISO_CBUS_TX_PHY_CTRL3_reg))
#define ISO_CBUS_TX_PHY_CTRL3_inst_adr                                               "0x0002"
#define ISO_CBUS_TX_PHY_CTRL3_inst                                                   0x0002
#define ISO_CBUS_TX_PHY_CTRL3_REG_PLL_CP_ECBUSTX_shift                               (30)
#define ISO_CBUS_TX_PHY_CTRL3_REG_PLL_CP_ECBUSTX_mask                                (0xC0000000)
#define ISO_CBUS_TX_PHY_CTRL3_REG_PLL_CP_ECBUSTX(data)                               (0xC0000000&((data)<<30))
#define ISO_CBUS_TX_PHY_CTRL3_REG_PLL_CP_ECBUSTX_src(data)                           ((0xC0000000&(data))>>30)
#define ISO_CBUS_TX_PHY_CTRL3_get_REG_PLL_CP_ECBUSTX(data)                           ((0xC0000000&(data))>>30)
#define ISO_CBUS_TX_PHY_CTRL3_REG_PLL_CS_ECBUSTX_shift                               (28)
#define ISO_CBUS_TX_PHY_CTRL3_REG_PLL_CS_ECBUSTX_mask                                (0x30000000)
#define ISO_CBUS_TX_PHY_CTRL3_REG_PLL_CS_ECBUSTX(data)                               (0x30000000&((data)<<28))
#define ISO_CBUS_TX_PHY_CTRL3_REG_PLL_CS_ECBUSTX_src(data)                           ((0x30000000&(data))>>28)
#define ISO_CBUS_TX_PHY_CTRL3_get_REG_PLL_CS_ECBUSTX(data)                           ((0x30000000&(data))>>28)
#define ISO_CBUS_TX_PHY_CTRL3_REG_PLL_LDO1V_SEL_ECBUSTX_shift                        (24)
#define ISO_CBUS_TX_PHY_CTRL3_REG_PLL_LDO1V_SEL_ECBUSTX_mask                         (0x03000000)
#define ISO_CBUS_TX_PHY_CTRL3_REG_PLL_LDO1V_SEL_ECBUSTX(data)                        (0x03000000&((data)<<24))
#define ISO_CBUS_TX_PHY_CTRL3_REG_PLL_LDO1V_SEL_ECBUSTX_src(data)                    ((0x03000000&(data))>>24)
#define ISO_CBUS_TX_PHY_CTRL3_get_REG_PLL_LDO1V_SEL_ECBUSTX(data)                    ((0x03000000&(data))>>24)
#define ISO_CBUS_TX_PHY_CTRL3_REG_PLL_LDO_SEL_ECBUSTX_shift                          (22)
#define ISO_CBUS_TX_PHY_CTRL3_REG_PLL_LDO_SEL_ECBUSTX_mask                           (0x00C00000)
#define ISO_CBUS_TX_PHY_CTRL3_REG_PLL_LDO_SEL_ECBUSTX(data)                          (0x00C00000&((data)<<22))
#define ISO_CBUS_TX_PHY_CTRL3_REG_PLL_LDO_SEL_ECBUSTX_src(data)                      ((0x00C00000&(data))>>22)
#define ISO_CBUS_TX_PHY_CTRL3_get_REG_PLL_LDO_SEL_ECBUSTX(data)                      ((0x00C00000&(data))>>22)
#define ISO_CBUS_TX_PHY_CTRL3_REG_PLL_FREEZE_ECBUSTX_shift                           (21)
#define ISO_CBUS_TX_PHY_CTRL3_REG_PLL_FREEZE_ECBUSTX_mask                            (0x00200000)
#define ISO_CBUS_TX_PHY_CTRL3_REG_PLL_FREEZE_ECBUSTX(data)                           (0x00200000&((data)<<21))
#define ISO_CBUS_TX_PHY_CTRL3_REG_PLL_FREEZE_ECBUSTX_src(data)                       ((0x00200000&(data))>>21)
#define ISO_CBUS_TX_PHY_CTRL3_get_REG_PLL_FREEZE_ECBUSTX(data)                       ((0x00200000&(data))>>21)
#define ISO_CBUS_TX_PHY_CTRL3_REG_PLL_POW_ECBUSTX_shift                              (20)
#define ISO_CBUS_TX_PHY_CTRL3_REG_PLL_POW_ECBUSTX_mask                               (0x00100000)
#define ISO_CBUS_TX_PHY_CTRL3_REG_PLL_POW_ECBUSTX(data)                              (0x00100000&((data)<<20))
#define ISO_CBUS_TX_PHY_CTRL3_REG_PLL_POW_ECBUSTX_src(data)                          ((0x00100000&(data))>>20)
#define ISO_CBUS_TX_PHY_CTRL3_get_REG_PLL_POW_ECBUSTX(data)                          ((0x00100000&(data))>>20)
#define ISO_CBUS_TX_PHY_CTRL3_REG_PLL_LDO_POW_ECBUSTX_shift                          (19)
#define ISO_CBUS_TX_PHY_CTRL3_REG_PLL_LDO_POW_ECBUSTX_mask                           (0x00080000)
#define ISO_CBUS_TX_PHY_CTRL3_REG_PLL_LDO_POW_ECBUSTX(data)                          (0x00080000&((data)<<19))
#define ISO_CBUS_TX_PHY_CTRL3_REG_PLL_LDO_POW_ECBUSTX_src(data)                      ((0x00080000&(data))>>19)
#define ISO_CBUS_TX_PHY_CTRL3_get_REG_PLL_LDO_POW_ECBUSTX(data)                      ((0x00080000&(data))>>19)
#define ISO_CBUS_TX_PHY_CTRL3_REG_PLL_VCORSTB_ECBUSTX_shift                          (18)
#define ISO_CBUS_TX_PHY_CTRL3_REG_PLL_VCORSTB_ECBUSTX_mask                           (0x00040000)
#define ISO_CBUS_TX_PHY_CTRL3_REG_PLL_VCORSTB_ECBUSTX(data)                          (0x00040000&((data)<<18))
#define ISO_CBUS_TX_PHY_CTRL3_REG_PLL_VCORSTB_ECBUSTX_src(data)                      ((0x00040000&(data))>>18)
#define ISO_CBUS_TX_PHY_CTRL3_get_REG_PLL_VCORSTB_ECBUSTX(data)                      ((0x00040000&(data))>>18)
#define ISO_CBUS_TX_PHY_CTRL3_REG_PLL_WDRST_ECBUSTX_shift                            (17)
#define ISO_CBUS_TX_PHY_CTRL3_REG_PLL_WDRST_ECBUSTX_mask                             (0x00020000)
#define ISO_CBUS_TX_PHY_CTRL3_REG_PLL_WDRST_ECBUSTX(data)                            (0x00020000&((data)<<17))
#define ISO_CBUS_TX_PHY_CTRL3_REG_PLL_WDRST_ECBUSTX_src(data)                        ((0x00020000&(data))>>17)
#define ISO_CBUS_TX_PHY_CTRL3_get_REG_PLL_WDRST_ECBUSTX(data)                        ((0x00020000&(data))>>17)
#define ISO_CBUS_TX_PHY_CTRL3_REG_PLL_WDSET_ECBUSTX_shift                            (16)
#define ISO_CBUS_TX_PHY_CTRL3_REG_PLL_WDSET_ECBUSTX_mask                             (0x00010000)
#define ISO_CBUS_TX_PHY_CTRL3_REG_PLL_WDSET_ECBUSTX(data)                            (0x00010000&((data)<<16))
#define ISO_CBUS_TX_PHY_CTRL3_REG_PLL_WDSET_ECBUSTX_src(data)                        ((0x00010000&(data))>>16)
#define ISO_CBUS_TX_PHY_CTRL3_get_REG_PLL_WDSET_ECBUSTX(data)                        ((0x00010000&(data))>>16)
#define ISO_CBUS_TX_PHY_CTRL3_REG_PLL_M_ECBUSTX_shift                                (8)
#define ISO_CBUS_TX_PHY_CTRL3_REG_PLL_M_ECBUSTX_mask                                 (0x0000FF00)
#define ISO_CBUS_TX_PHY_CTRL3_REG_PLL_M_ECBUSTX(data)                                (0x0000FF00&((data)<<8))
#define ISO_CBUS_TX_PHY_CTRL3_REG_PLL_M_ECBUSTX_src(data)                            ((0x0000FF00&(data))>>8)
#define ISO_CBUS_TX_PHY_CTRL3_get_REG_PLL_M_ECBUSTX(data)                            ((0x0000FF00&(data))>>8)
#define ISO_CBUS_TX_PHY_CTRL3_REG_PLL_PHSEL_ECBUSTX_shift                            (4)
#define ISO_CBUS_TX_PHY_CTRL3_REG_PLL_PHSEL_ECBUSTX_mask                             (0x000000F0)
#define ISO_CBUS_TX_PHY_CTRL3_REG_PLL_PHSEL_ECBUSTX(data)                            (0x000000F0&((data)<<4))
#define ISO_CBUS_TX_PHY_CTRL3_REG_PLL_PHSEL_ECBUSTX_src(data)                        ((0x000000F0&(data))>>4)
#define ISO_CBUS_TX_PHY_CTRL3_get_REG_PLL_PHSEL_ECBUSTX(data)                        ((0x000000F0&(data))>>4)
#define ISO_CBUS_TX_PHY_CTRL3_REG_PLL_N_ECBUSTX_shift                                (1)
#define ISO_CBUS_TX_PHY_CTRL3_REG_PLL_N_ECBUSTX_mask                                 (0x0000000E)
#define ISO_CBUS_TX_PHY_CTRL3_REG_PLL_N_ECBUSTX(data)                                (0x0000000E&((data)<<1))
#define ISO_CBUS_TX_PHY_CTRL3_REG_PLL_N_ECBUSTX_src(data)                            ((0x0000000E&(data))>>1)
#define ISO_CBUS_TX_PHY_CTRL3_get_REG_PLL_N_ECBUSTX(data)                            ((0x0000000E&(data))>>1)
#define ISO_CBUS_TX_PHY_CTRL3_REG_PLL_LDO1V_POW_ECBUSTX_shift                        (0)
#define ISO_CBUS_TX_PHY_CTRL3_REG_PLL_LDO1V_POW_ECBUSTX_mask                         (0x00000001)
#define ISO_CBUS_TX_PHY_CTRL3_REG_PLL_LDO1V_POW_ECBUSTX(data)                        (0x00000001&((data)<<0))
#define ISO_CBUS_TX_PHY_CTRL3_REG_PLL_LDO1V_POW_ECBUSTX_src(data)                    ((0x00000001&(data))>>0)
#define ISO_CBUS_TX_PHY_CTRL3_get_REG_PLL_LDO1V_POW_ECBUSTX(data)                    ((0x00000001&(data))>>0)


#define ISO_CBUS_TX_PHY_CTRL4                                                        0x98037010
#define ISO_CBUS_TX_PHY_CTRL4_reg_addr                                               "0xD8037010"
#define ISO_CBUS_TX_PHY_CTRL4_reg                                                    0xD8037010
#define set_ISO_CBUS_TX_PHY_CTRL4_reg(data)   (*((volatile unsigned int*) ISO_CBUS_TX_PHY_CTRL4_reg)=data)
#define get_ISO_CBUS_TX_PHY_CTRL4_reg   (*((volatile unsigned int*) ISO_CBUS_TX_PHY_CTRL4_reg))
#define ISO_CBUS_TX_PHY_CTRL4_inst_adr                                               "0x0004"
#define ISO_CBUS_TX_PHY_CTRL4_inst                                                   0x0004
#define ISO_CBUS_TX_PHY_CTRL4_REG_AUTO_K_R50_ECBUSTX_shift                           (31)
#define ISO_CBUS_TX_PHY_CTRL4_REG_AUTO_K_R50_ECBUSTX_mask                            (0x80000000)
#define ISO_CBUS_TX_PHY_CTRL4_REG_AUTO_K_R50_ECBUSTX(data)                           (0x80000000&((data)<<31))
#define ISO_CBUS_TX_PHY_CTRL4_REG_AUTO_K_R50_ECBUSTX_src(data)                       ((0x80000000&(data))>>31)
#define ISO_CBUS_TX_PHY_CTRL4_get_REG_AUTO_K_R50_ECBUSTX(data)                       ((0x80000000&(data))>>31)
#define ISO_CBUS_TX_PHY_CTRL4_REG_DATAGEN_POW_ECBUSTX_shift                          (30)
#define ISO_CBUS_TX_PHY_CTRL4_REG_DATAGEN_POW_ECBUSTX_mask                           (0x40000000)
#define ISO_CBUS_TX_PHY_CTRL4_REG_DATAGEN_POW_ECBUSTX(data)                          (0x40000000&((data)<<30))
#define ISO_CBUS_TX_PHY_CTRL4_REG_DATAGEN_POW_ECBUSTX_src(data)                      ((0x40000000&(data))>>30)
#define ISO_CBUS_TX_PHY_CTRL4_get_REG_DATAGEN_POW_ECBUSTX(data)                      ((0x40000000&(data))>>30)
#define ISO_CBUS_TX_PHY_CTRL4_REG_DATA_EN_ECBUSTX_shift                              (29)
#define ISO_CBUS_TX_PHY_CTRL4_REG_DATA_EN_ECBUSTX_mask                               (0x20000000)
#define ISO_CBUS_TX_PHY_CTRL4_REG_DATA_EN_ECBUSTX(data)                              (0x20000000&((data)<<29))
#define ISO_CBUS_TX_PHY_CTRL4_REG_DATA_EN_ECBUSTX_src(data)                          ((0x20000000&(data))>>29)
#define ISO_CBUS_TX_PHY_CTRL4_get_REG_DATA_EN_ECBUSTX(data)                          ((0x20000000&(data))>>29)
#define ISO_CBUS_TX_PHY_CTRL4_REG_DATA_IN_SEL_ECBUSTX_shift                          (28)
#define ISO_CBUS_TX_PHY_CTRL4_REG_DATA_IN_SEL_ECBUSTX_mask                           (0x10000000)
#define ISO_CBUS_TX_PHY_CTRL4_REG_DATA_IN_SEL_ECBUSTX(data)                          (0x10000000&((data)<<28))
#define ISO_CBUS_TX_PHY_CTRL4_REG_DATA_IN_SEL_ECBUSTX_src(data)                      ((0x10000000&(data))>>28)
#define ISO_CBUS_TX_PHY_CTRL4_get_REG_DATA_IN_SEL_ECBUSTX(data)                      ((0x10000000&(data))>>28)
#define ISO_CBUS_TX_PHY_CTRL4_REG_DELAY_RSEL_ECBUSTX_shift                           (27)
#define ISO_CBUS_TX_PHY_CTRL4_REG_DELAY_RSEL_ECBUSTX_mask                            (0x08000000)
#define ISO_CBUS_TX_PHY_CTRL4_REG_DELAY_RSEL_ECBUSTX(data)                           (0x08000000&((data)<<27))
#define ISO_CBUS_TX_PHY_CTRL4_REG_DELAY_RSEL_ECBUSTX_src(data)                       ((0x08000000&(data))>>27)
#define ISO_CBUS_TX_PHY_CTRL4_get_REG_DELAY_RSEL_ECBUSTX(data)                       ((0x08000000&(data))>>27)
#define ISO_CBUS_TX_PHY_CTRL4_REG_RCAL_EN_ECBUSTX_shift                              (26)
#define ISO_CBUS_TX_PHY_CTRL4_REG_RCAL_EN_ECBUSTX_mask                               (0x04000000)
#define ISO_CBUS_TX_PHY_CTRL4_REG_RCAL_EN_ECBUSTX(data)                              (0x04000000&((data)<<26))
#define ISO_CBUS_TX_PHY_CTRL4_REG_RCAL_EN_ECBUSTX_src(data)                          ((0x04000000&(data))>>26)
#define ISO_CBUS_TX_PHY_CTRL4_get_REG_RCAL_EN_ECBUSTX(data)                          ((0x04000000&(data))>>26)
#define ISO_CBUS_TX_PHY_CTRL4_REG_BUF_RCAL_ECBUSTX_shift                             (22)
#define ISO_CBUS_TX_PHY_CTRL4_REG_BUF_RCAL_ECBUSTX_mask                              (0x03C00000)
#define ISO_CBUS_TX_PHY_CTRL4_REG_BUF_RCAL_ECBUSTX(data)                             (0x03C00000&((data)<<22))
#define ISO_CBUS_TX_PHY_CTRL4_REG_BUF_RCAL_ECBUSTX_src(data)                         ((0x03C00000&(data))>>22)
#define ISO_CBUS_TX_PHY_CTRL4_get_REG_BUF_RCAL_ECBUSTX(data)                         ((0x03C00000&(data))>>22)
#define ISO_CBUS_TX_PHY_CTRL4_REG_CKIN_BPS_ECBUSTX_shift                             (21)
#define ISO_CBUS_TX_PHY_CTRL4_REG_CKIN_BPS_ECBUSTX_mask                              (0x00200000)
#define ISO_CBUS_TX_PHY_CTRL4_REG_CKIN_BPS_ECBUSTX(data)                             (0x00200000&((data)<<21))
#define ISO_CBUS_TX_PHY_CTRL4_REG_CKIN_BPS_ECBUSTX_src(data)                         ((0x00200000&(data))>>21)
#define ISO_CBUS_TX_PHY_CTRL4_get_REG_CKIN_BPS_ECBUSTX(data)                         ((0x00200000&(data))>>21)
#define ISO_CBUS_TX_PHY_CTRL4_REG_CMP_VSEL_ECBUSTX_shift                             (19)
#define ISO_CBUS_TX_PHY_CTRL4_REG_CMP_VSEL_ECBUSTX_mask                              (0x00180000)
#define ISO_CBUS_TX_PHY_CTRL4_REG_CMP_VSEL_ECBUSTX(data)                             (0x00180000&((data)<<19))
#define ISO_CBUS_TX_PHY_CTRL4_REG_CMP_VSEL_ECBUSTX_src(data)                         ((0x00180000&(data))>>19)
#define ISO_CBUS_TX_PHY_CTRL4_get_REG_CMP_VSEL_ECBUSTX(data)                         ((0x00180000&(data))>>19)
#define ISO_CBUS_TX_PHY_CTRL4_REG_CKOUT_EDGE_SEL_ECBUSTX_shift                       (18)
#define ISO_CBUS_TX_PHY_CTRL4_REG_CKOUT_EDGE_SEL_ECBUSTX_mask                        (0x00040000)
#define ISO_CBUS_TX_PHY_CTRL4_REG_CKOUT_EDGE_SEL_ECBUSTX(data)                       (0x00040000&((data)<<18))
#define ISO_CBUS_TX_PHY_CTRL4_REG_CKOUT_EDGE_SEL_ECBUSTX_src(data)                   ((0x00040000&(data))>>18)
#define ISO_CBUS_TX_PHY_CTRL4_get_REG_CKOUT_EDGE_SEL_ECBUSTX(data)                   ((0x00040000&(data))>>18)
#define ISO_CBUS_TX_PHY_CTRL4_REG_BKWD_BYP_ECBUSTX_shift                             (17)
#define ISO_CBUS_TX_PHY_CTRL4_REG_BKWD_BYP_ECBUSTX_mask                              (0x00020000)
#define ISO_CBUS_TX_PHY_CTRL4_REG_BKWD_BYP_ECBUSTX(data)                             (0x00020000&((data)<<17))
#define ISO_CBUS_TX_PHY_CTRL4_REG_BKWD_BYP_ECBUSTX_src(data)                         ((0x00020000&(data))>>17)
#define ISO_CBUS_TX_PHY_CTRL4_get_REG_BKWD_BYP_ECBUSTX(data)                         ((0x00020000&(data))>>17)
#define ISO_CBUS_TX_PHY_CTRL4_REG_TEST_SEL_ECBUSTX_shift                             (15)
#define ISO_CBUS_TX_PHY_CTRL4_REG_TEST_SEL_ECBUSTX_mask                              (0x00018000)
#define ISO_CBUS_TX_PHY_CTRL4_REG_TEST_SEL_ECBUSTX(data)                             (0x00018000&((data)<<15))
#define ISO_CBUS_TX_PHY_CTRL4_REG_TEST_SEL_ECBUSTX_src(data)                         ((0x00018000&(data))>>15)
#define ISO_CBUS_TX_PHY_CTRL4_get_REG_TEST_SEL_ECBUSTX(data)                         ((0x00018000&(data))>>15)
#define ISO_CBUS_TX_PHY_CTRL4_REG_BUF_VREF_RSEL_ECBUSTX_shift                        (13)
#define ISO_CBUS_TX_PHY_CTRL4_REG_BUF_VREF_RSEL_ECBUSTX_mask                         (0x00006000)
#define ISO_CBUS_TX_PHY_CTRL4_REG_BUF_VREF_RSEL_ECBUSTX(data)                        (0x00006000&((data)<<13))
#define ISO_CBUS_TX_PHY_CTRL4_REG_BUF_VREF_RSEL_ECBUSTX_src(data)                    ((0x00006000&(data))>>13)
#define ISO_CBUS_TX_PHY_CTRL4_get_REG_BUF_VREF_RSEL_ECBUSTX(data)                    ((0x00006000&(data))>>13)
#define ISO_CBUS_TX_PHY_CTRL4_REG_PLL_RS_ECBUSTX_shift                               (10)
#define ISO_CBUS_TX_PHY_CTRL4_REG_PLL_RS_ECBUSTX_mask                                (0x00001C00)
#define ISO_CBUS_TX_PHY_CTRL4_REG_PLL_RS_ECBUSTX(data)                               (0x00001C00&((data)<<10))
#define ISO_CBUS_TX_PHY_CTRL4_REG_PLL_RS_ECBUSTX_src(data)                           ((0x00001C00&(data))>>10)
#define ISO_CBUS_TX_PHY_CTRL4_get_REG_PLL_RS_ECBUSTX(data)                           ((0x00001C00&(data))>>10)
#define ISO_CBUS_TX_PHY_CTRL4_REG_PLL_IP_ECBUSTX_shift                               (7)
#define ISO_CBUS_TX_PHY_CTRL4_REG_PLL_IP_ECBUSTX_mask                                (0x00000380)
#define ISO_CBUS_TX_PHY_CTRL4_REG_PLL_IP_ECBUSTX(data)                               (0x00000380&((data)<<7))
#define ISO_CBUS_TX_PHY_CTRL4_REG_PLL_IP_ECBUSTX_src(data)                           ((0x00000380&(data))>>7)
#define ISO_CBUS_TX_PHY_CTRL4_get_REG_PLL_IP_ECBUSTX(data)                           ((0x00000380&(data))>>7)


#define ISO_CBUS_TX_PHY_CTRL5                                                        0x98037014
#define ISO_CBUS_TX_PHY_CTRL5_reg_addr                                               "0xD8037014"
#define ISO_CBUS_TX_PHY_CTRL5_reg                                                    0xD8037014
#define set_ISO_CBUS_TX_PHY_CTRL5_reg(data)   (*((volatile unsigned int*) ISO_CBUS_TX_PHY_CTRL5_reg)=data)
#define get_ISO_CBUS_TX_PHY_CTRL5_reg   (*((volatile unsigned int*) ISO_CBUS_TX_PHY_CTRL5_reg))
#define ISO_CBUS_TX_PHY_CTRL5_inst_adr                                               "0x0005"
#define ISO_CBUS_TX_PHY_CTRL5_inst                                                   0x0005
#define ISO_CBUS_TX_PHY_CTRL5_CBUS_I_TX_shift                                        (31)
#define ISO_CBUS_TX_PHY_CTRL5_CBUS_I_TX_mask                                         (0x80000000)
#define ISO_CBUS_TX_PHY_CTRL5_CBUS_I_TX(data)                                        (0x80000000&((data)<<31))
#define ISO_CBUS_TX_PHY_CTRL5_CBUS_I_TX_src(data)                                    ((0x80000000&(data))>>31)
#define ISO_CBUS_TX_PHY_CTRL5_get_CBUS_I_TX(data)                                    ((0x80000000&(data))>>31)
#define ISO_CBUS_TX_PHY_CTRL5_CBUS_E_TX_shift                                        (30)
#define ISO_CBUS_TX_PHY_CTRL5_CBUS_E_TX_mask                                         (0x40000000)
#define ISO_CBUS_TX_PHY_CTRL5_CBUS_E_TX(data)                                        (0x40000000&((data)<<30))
#define ISO_CBUS_TX_PHY_CTRL5_CBUS_E_TX_src(data)                                    ((0x40000000&(data))>>30)
#define ISO_CBUS_TX_PHY_CTRL5_get_CBUS_E_TX(data)                                    ((0x40000000&(data))>>30)
#define ISO_CBUS_TX_PHY_CTRL5_CBUS_E2_TX_shift                                       (29)
#define ISO_CBUS_TX_PHY_CTRL5_CBUS_E2_TX_mask                                        (0x20000000)
#define ISO_CBUS_TX_PHY_CTRL5_CBUS_E2_TX(data)                                       (0x20000000&((data)<<29))
#define ISO_CBUS_TX_PHY_CTRL5_CBUS_E2_TX_src(data)                                   ((0x20000000&(data))>>29)
#define ISO_CBUS_TX_PHY_CTRL5_get_CBUS_E2_TX(data)                                   ((0x20000000&(data))>>29)
#define ISO_CBUS_TX_PHY_CTRL5_CBUS_PD_TX_shift                                       (28)
#define ISO_CBUS_TX_PHY_CTRL5_CBUS_PD_TX_mask                                        (0x10000000)
#define ISO_CBUS_TX_PHY_CTRL5_CBUS_PD_TX(data)                                       (0x10000000&((data)<<28))
#define ISO_CBUS_TX_PHY_CTRL5_CBUS_PD_TX_src(data)                                   ((0x10000000&(data))>>28)
#define ISO_CBUS_TX_PHY_CTRL5_get_CBUS_PD_TX(data)                                   ((0x10000000&(data))>>28)
#define ISO_CBUS_TX_PHY_CTRL5_CBUS_PU_TX_shift                                       (27)
#define ISO_CBUS_TX_PHY_CTRL5_CBUS_PU_TX_mask                                        (0x08000000)
#define ISO_CBUS_TX_PHY_CTRL5_CBUS_PU_TX(data)                                       (0x08000000&((data)<<27))
#define ISO_CBUS_TX_PHY_CTRL5_CBUS_PU_TX_src(data)                                   ((0x08000000&(data))>>27)
#define ISO_CBUS_TX_PHY_CTRL5_get_CBUS_PU_TX(data)                                   ((0x08000000&(data))>>27)
#define ISO_CBUS_TX_PHY_CTRL5_CBUS_SMT_TX_shift                                      (26)
#define ISO_CBUS_TX_PHY_CTRL5_CBUS_SMT_TX_mask                                       (0x04000000)
#define ISO_CBUS_TX_PHY_CTRL5_CBUS_SMT_TX(data)                                      (0x04000000&((data)<<26))
#define ISO_CBUS_TX_PHY_CTRL5_CBUS_SMT_TX_src(data)                                  ((0x04000000&(data))>>26)
#define ISO_CBUS_TX_PHY_CTRL5_get_CBUS_SMT_TX(data)                                  ((0x04000000&(data))>>26)
#define ISO_CBUS_TX_PHY_CTRL5_CBUS_SR_TX_shift                                       (25)
#define ISO_CBUS_TX_PHY_CTRL5_CBUS_SR_TX_mask                                        (0x02000000)
#define ISO_CBUS_TX_PHY_CTRL5_CBUS_SR_TX(data)                                       (0x02000000&((data)<<25))
#define ISO_CBUS_TX_PHY_CTRL5_CBUS_SR_TX_src(data)                                   ((0x02000000&(data))>>25)
#define ISO_CBUS_TX_PHY_CTRL5_get_CBUS_SR_TX(data)                                   ((0x02000000&(data))>>25)
#define ISO_CBUS_TX_PHY_CTRL5_CBUS_O_TX_shift                                        (24)
#define ISO_CBUS_TX_PHY_CTRL5_CBUS_O_TX_mask                                         (0x01000000)
#define ISO_CBUS_TX_PHY_CTRL5_CBUS_O_TX(data)                                        (0x01000000&((data)<<24))
#define ISO_CBUS_TX_PHY_CTRL5_CBUS_O_TX_src(data)                                    ((0x01000000&(data))>>24)
#define ISO_CBUS_TX_PHY_CTRL5_get_CBUS_O_TX(data)                                    ((0x01000000&(data))>>24)
#define ISO_CBUS_TX_PHY_CTRL5_REGO_PLL_WDO_ECBUSTX_shift                             (23)
#define ISO_CBUS_TX_PHY_CTRL5_REGO_PLL_WDO_ECBUSTX_mask                              (0x00800000)
#define ISO_CBUS_TX_PHY_CTRL5_REGO_PLL_WDO_ECBUSTX(data)                             (0x00800000&((data)<<23))
#define ISO_CBUS_TX_PHY_CTRL5_REGO_PLL_WDO_ECBUSTX_src(data)                         ((0x00800000&(data))>>23)
#define ISO_CBUS_TX_PHY_CTRL5_get_REGO_PLL_WDO_ECBUSTX(data)                         ((0x00800000&(data))>>23)
#define ISO_CBUS_TX_PHY_CTRL5_REGO_MHL_HPD_DET_TX_shift                              (22)
#define ISO_CBUS_TX_PHY_CTRL5_REGO_MHL_HPD_DET_TX_mask                               (0x00400000)
#define ISO_CBUS_TX_PHY_CTRL5_REGO_MHL_HPD_DET_TX(data)                              (0x00400000&((data)<<22))
#define ISO_CBUS_TX_PHY_CTRL5_REGO_MHL_HPD_DET_TX_src(data)                          ((0x00400000&(data))>>22)
#define ISO_CBUS_TX_PHY_CTRL5_get_REGO_MHL_HPD_DET_TX(data)                          ((0x00400000&(data))>>22)
#define ISO_CBUS_TX_PHY_CTRL5_REGO_5V_DETECT_shift                                   (21)
#define ISO_CBUS_TX_PHY_CTRL5_REGO_5V_DETECT_mask                                    (0x00200000)
#define ISO_CBUS_TX_PHY_CTRL5_REGO_5V_DETECT(data)                                   (0x00200000&((data)<<21))
#define ISO_CBUS_TX_PHY_CTRL5_REGO_5V_DETECT_src(data)                               ((0x00200000&(data))>>21)
#define ISO_CBUS_TX_PHY_CTRL5_get_REGO_5V_DETECT(data)                               ((0x00200000&(data))>>21)
#define ISO_CBUS_TX_PHY_CTRL5_TEST_OUT_TXRX_shift                                    (19)
#define ISO_CBUS_TX_PHY_CTRL5_TEST_OUT_TXRX_mask                                     (0x00180000)
#define ISO_CBUS_TX_PHY_CTRL5_TEST_OUT_TXRX(data)                                    (0x00180000&((data)<<19))
#define ISO_CBUS_TX_PHY_CTRL5_TEST_OUT_TXRX_src(data)                                ((0x00180000&(data))>>19)
#define ISO_CBUS_TX_PHY_CTRL5_get_TEST_OUT_TXRX(data)                                ((0x00180000&(data))>>19)
#define ISO_CBUS_TX_PHY_CTRL5_REGO_CAL_R50_shift                                     (0)
#define ISO_CBUS_TX_PHY_CTRL5_REGO_CAL_R50_mask                                      (0x0000000F)
#define ISO_CBUS_TX_PHY_CTRL5_REGO_CAL_R50(data)                                     (0x0000000F&((data)<<0))
#define ISO_CBUS_TX_PHY_CTRL5_REGO_CAL_R50_src(data)                                 ((0x0000000F&(data))>>0)
#define ISO_CBUS_TX_PHY_CTRL5_get_REGO_CAL_R50(data)                                 ((0x0000000F&(data))>>0)


#define ISO_CBUS_TX_PHY_CTRL6                                                        0x98037018
#define ISO_CBUS_TX_PHY_CTRL6_reg_addr                                               "0xD8037018"
#define ISO_CBUS_TX_PHY_CTRL6_reg                                                    0xD8037018
#define set_ISO_CBUS_TX_PHY_CTRL6_reg(data)   (*((volatile unsigned int*) ISO_CBUS_TX_PHY_CTRL6_reg)=data)
#define get_ISO_CBUS_TX_PHY_CTRL6_reg   (*((volatile unsigned int*) ISO_CBUS_TX_PHY_CTRL6_reg))
#define ISO_CBUS_TX_PHY_CTRL6_inst_adr                                               "0x0006"
#define ISO_CBUS_TX_PHY_CTRL6_inst                                                   0x0006
#define ISO_CBUS_TX_PHY_CTRL6_reg_threshold_shift                                    (27)
#define ISO_CBUS_TX_PHY_CTRL6_reg_threshold_mask                                     (0xF8000000)
#define ISO_CBUS_TX_PHY_CTRL6_reg_threshold(data)                                    (0xF8000000&((data)<<27))
#define ISO_CBUS_TX_PHY_CTRL6_reg_threshold_src(data)                                ((0xF8000000&(data))>>27)
#define ISO_CBUS_TX_PHY_CTRL6_get_reg_threshold(data)                                ((0xF8000000&(data))>>27)
#define ISO_CBUS_TX_PHY_CTRL6_reg_cal_ctrl_shift                                     (24)
#define ISO_CBUS_TX_PHY_CTRL6_reg_cal_ctrl_mask                                      (0x07000000)
#define ISO_CBUS_TX_PHY_CTRL6_reg_cal_ctrl(data)                                     (0x07000000&((data)<<24))
#define ISO_CBUS_TX_PHY_CTRL6_reg_cal_ctrl_src(data)                                 ((0x07000000&(data))>>24)
#define ISO_CBUS_TX_PHY_CTRL6_get_reg_cal_ctrl(data)                                 ((0x07000000&(data))>>24)
#define ISO_CBUS_TX_PHY_CTRL6_reg_threshold1_shift                                   (20)
#define ISO_CBUS_TX_PHY_CTRL6_reg_threshold1_mask                                    (0x00F00000)
#define ISO_CBUS_TX_PHY_CTRL6_reg_threshold1(data)                                   (0x00F00000&((data)<<20))
#define ISO_CBUS_TX_PHY_CTRL6_reg_threshold1_src(data)                               ((0x00F00000&(data))>>20)
#define ISO_CBUS_TX_PHY_CTRL6_get_reg_threshold1(data)                               ((0x00F00000&(data))>>20)
#define ISO_CBUS_TX_PHY_CTRL6_reg_cond_675_shift                                     (19)
#define ISO_CBUS_TX_PHY_CTRL6_reg_cond_675_mask                                      (0x00080000)
#define ISO_CBUS_TX_PHY_CTRL6_reg_cond_675(data)                                     (0x00080000&((data)<<19))
#define ISO_CBUS_TX_PHY_CTRL6_reg_cond_675_src(data)                                 ((0x00080000&(data))>>19)
#define ISO_CBUS_TX_PHY_CTRL6_get_reg_cond_675(data)                                 ((0x00080000&(data))>>19)
#define ISO_CBUS_TX_PHY_CTRL6_reg_cond_sel_shift                                     (17)
#define ISO_CBUS_TX_PHY_CTRL6_reg_cond_sel_mask                                      (0x00060000)
#define ISO_CBUS_TX_PHY_CTRL6_reg_cond_sel(data)                                     (0x00060000&((data)<<17))
#define ISO_CBUS_TX_PHY_CTRL6_reg_cond_sel_src(data)                                 ((0x00060000&(data))>>17)
#define ISO_CBUS_TX_PHY_CTRL6_get_reg_cond_sel(data)                                 ((0x00060000&(data))>>17)
#define ISO_CBUS_TX_PHY_CTRL6_reg_check_fail_shift                                   (16)
#define ISO_CBUS_TX_PHY_CTRL6_reg_check_fail_mask                                    (0x00010000)
#define ISO_CBUS_TX_PHY_CTRL6_reg_check_fail(data)                                   (0x00010000&((data)<<16))
#define ISO_CBUS_TX_PHY_CTRL6_reg_check_fail_src(data)                               ((0x00010000&(data))>>16)
#define ISO_CBUS_TX_PHY_CTRL6_get_reg_check_fail(data)                               ((0x00010000&(data))>>16)
#define ISO_CBUS_TX_PHY_CTRL6_reg_neg_out_shift                                      (15)
#define ISO_CBUS_TX_PHY_CTRL6_reg_neg_out_mask                                       (0x00008000)
#define ISO_CBUS_TX_PHY_CTRL6_reg_neg_out(data)                                      (0x00008000&((data)<<15))
#define ISO_CBUS_TX_PHY_CTRL6_reg_neg_out_src(data)                                  ((0x00008000&(data))>>15)
#define ISO_CBUS_TX_PHY_CTRL6_get_reg_neg_out(data)                                  ((0x00008000&(data))>>15)
#define ISO_CBUS_TX_PHY_CTRL6_reg_cond675_sel_shift                                  (13)
#define ISO_CBUS_TX_PHY_CTRL6_reg_cond675_sel_mask                                   (0x00006000)
#define ISO_CBUS_TX_PHY_CTRL6_reg_cond675_sel(data)                                  (0x00006000&((data)<<13))
#define ISO_CBUS_TX_PHY_CTRL6_reg_cond675_sel_src(data)                              ((0x00006000&(data))>>13)
#define ISO_CBUS_TX_PHY_CTRL6_get_reg_cond675_sel(data)                              ((0x00006000&(data))>>13)
#define ISO_CBUS_TX_PHY_CTRL6_reg_dbg_sel_shift                                      (12)
#define ISO_CBUS_TX_PHY_CTRL6_reg_dbg_sel_mask                                       (0x00001000)
#define ISO_CBUS_TX_PHY_CTRL6_reg_dbg_sel(data)                                      (0x00001000&((data)<<12))
#define ISO_CBUS_TX_PHY_CTRL6_reg_dbg_sel_src(data)                                  ((0x00001000&(data))>>12)
#define ISO_CBUS_TX_PHY_CTRL6_get_reg_dbg_sel(data)                                  ((0x00001000&(data))>>12)
#define ISO_CBUS_TX_PHY_CTRL6_reg_dphy_en_shift                                      (11)
#define ISO_CBUS_TX_PHY_CTRL6_reg_dphy_en_mask                                       (0x00000800)
#define ISO_CBUS_TX_PHY_CTRL6_reg_dphy_en(data)                                      (0x00000800&((data)<<11))
#define ISO_CBUS_TX_PHY_CTRL6_reg_dphy_en_src(data)                                  ((0x00000800&(data))>>11)
#define ISO_CBUS_TX_PHY_CTRL6_get_reg_dphy_en(data)                                  ((0x00000800&(data))>>11)
#define ISO_CBUS_TX_PHY_CTRL6_reg_cal_next_shift                                     (9)
#define ISO_CBUS_TX_PHY_CTRL6_reg_cal_next_mask                                      (0x00000600)
#define ISO_CBUS_TX_PHY_CTRL6_reg_cal_next(data)                                     (0x00000600&((data)<<9))
#define ISO_CBUS_TX_PHY_CTRL6_reg_cal_next_src(data)                                 ((0x00000600&(data))>>9)
#define ISO_CBUS_TX_PHY_CTRL6_get_reg_cal_next(data)                                 ((0x00000600&(data))>>9)
#define ISO_CBUS_TX_PHY_CTRL6_reg_dphy_rst_shift                                     (8)
#define ISO_CBUS_TX_PHY_CTRL6_reg_dphy_rst_mask                                      (0x00000100)
#define ISO_CBUS_TX_PHY_CTRL6_reg_dphy_rst(data)                                     (0x00000100&((data)<<8))
#define ISO_CBUS_TX_PHY_CTRL6_reg_dphy_rst_src(data)                                 ((0x00000100&(data))>>8)
#define ISO_CBUS_TX_PHY_CTRL6_get_reg_dphy_rst(data)                                 ((0x00000100&(data))>>8)
#define ISO_CBUS_TX_PHY_CTRL6_reg_read_data_shift                                    (4)
#define ISO_CBUS_TX_PHY_CTRL6_reg_read_data_mask                                     (0x000000F0)
#define ISO_CBUS_TX_PHY_CTRL6_reg_read_data(data)                                    (0x000000F0&((data)<<4))
#define ISO_CBUS_TX_PHY_CTRL6_reg_read_data_src(data)                                ((0x000000F0&(data))>>4)
#define ISO_CBUS_TX_PHY_CTRL6_get_reg_read_data(data)                                ((0x000000F0&(data))>>4)
#define ISO_CBUS_TX_PHY_CTRL6_reg_cal_data_sel_shift                                 (0)
#define ISO_CBUS_TX_PHY_CTRL6_reg_cal_data_sel_mask                                  (0x0000000F)
#define ISO_CBUS_TX_PHY_CTRL6_reg_cal_data_sel(data)                                 (0x0000000F&((data)<<0))
#define ISO_CBUS_TX_PHY_CTRL6_reg_cal_data_sel_src(data)                             ((0x0000000F&(data))>>0)
#define ISO_CBUS_TX_PHY_CTRL6_get_reg_cal_data_sel(data)                             ((0x0000000F&(data))>>0)


#define ISO_CBUS_TX_ISO_DBG0                                                         0x98037020
#define ISO_CBUS_TX_ISO_DBG0_reg_addr                                                "0xD8037020"
#define ISO_CBUS_TX_ISO_DBG0_reg                                                     0xD8037020
#define set_ISO_CBUS_TX_ISO_DBG0_reg(data)   (*((volatile unsigned int*) ISO_CBUS_TX_ISO_DBG0_reg)=data)
#define get_ISO_CBUS_TX_ISO_DBG0_reg   (*((volatile unsigned int*) ISO_CBUS_TX_ISO_DBG0_reg))
#define ISO_CBUS_TX_ISO_DBG0_inst_adr                                                "0x0008"
#define ISO_CBUS_TX_ISO_DBG0_inst                                                    0x0008
#define ISO_CBUS_TX_ISO_DBG0_iso_cbus_dbg_shift                                      (0)
#define ISO_CBUS_TX_ISO_DBG0_iso_cbus_dbg_mask                                       (0xFFFFFFFF)
#define ISO_CBUS_TX_ISO_DBG0_iso_cbus_dbg(data)                                      (0xFFFFFFFF&((data)<<0))
#define ISO_CBUS_TX_ISO_DBG0_iso_cbus_dbg_src(data)                                  ((0xFFFFFFFF&(data))>>0)
#define ISO_CBUS_TX_ISO_DBG0_get_iso_cbus_dbg(data)                                  ((0xFFFFFFFF&(data))>>0)


#define ISO_CBUS_TX_PHY_CTRL                                                         0x980370D0
#define ISO_CBUS_TX_PHY_CTRL_reg_addr                                                "0xD80370D0"
#define ISO_CBUS_TX_PHY_CTRL_reg                                                     0xD80370D0
#define set_ISO_CBUS_TX_PHY_CTRL_reg(data)   (*((volatile unsigned int*) ISO_CBUS_TX_PHY_CTRL_reg)=data)
#define get_ISO_CBUS_TX_PHY_CTRL_reg   (*((volatile unsigned int*) ISO_CBUS_TX_PHY_CTRL_reg))
#define ISO_CBUS_TX_PHY_CTRL_inst_adr                                                "0x0034"
#define ISO_CBUS_TX_PHY_CTRL_inst                                                    0x0034
#define ISO_CBUS_TX_PHY_CTRL_REG_MHL_BMOS_EN_TX_shift                                (31)
#define ISO_CBUS_TX_PHY_CTRL_REG_MHL_BMOS_EN_TX_mask                                 (0x80000000)
#define ISO_CBUS_TX_PHY_CTRL_REG_MHL_BMOS_EN_TX(data)                                (0x80000000&((data)<<31))
#define ISO_CBUS_TX_PHY_CTRL_REG_MHL_BMOS_EN_TX_src(data)                            ((0x80000000&(data))>>31)
#define ISO_CBUS_TX_PHY_CTRL_get_REG_MHL_BMOS_EN_TX(data)                            ((0x80000000&(data))>>31)
#define ISO_CBUS_TX_PHY_CTRL_REG_HDMI_HPD_EN_TX_shift                                (30)
#define ISO_CBUS_TX_PHY_CTRL_REG_HDMI_HPD_EN_TX_mask                                 (0x40000000)
#define ISO_CBUS_TX_PHY_CTRL_REG_HDMI_HPD_EN_TX(data)                                (0x40000000&((data)<<30))
#define ISO_CBUS_TX_PHY_CTRL_REG_HDMI_HPD_EN_TX_src(data)                            ((0x40000000&(data))>>30)
#define ISO_CBUS_TX_PHY_CTRL_get_REG_HDMI_HPD_EN_TX(data)                            ((0x40000000&(data))>>30)
#define ISO_CBUS_TX_PHY_CTRL_REG_MHL_R1K_DET_TX_shift                                (29)
#define ISO_CBUS_TX_PHY_CTRL_REG_MHL_R1K_DET_TX_mask                                 (0x20000000)
#define ISO_CBUS_TX_PHY_CTRL_REG_MHL_R1K_DET_TX(data)                                (0x20000000&((data)<<29))
#define ISO_CBUS_TX_PHY_CTRL_REG_MHL_R1K_DET_TX_src(data)                            ((0x20000000&(data))>>29)
#define ISO_CBUS_TX_PHY_CTRL_get_REG_MHL_R1K_DET_TX(data)                            ((0x20000000&(data))>>29)
#define ISO_CBUS_TX_PHY_CTRL_REG_R1K_VTH_SEL_TX_shift                                (28)
#define ISO_CBUS_TX_PHY_CTRL_REG_R1K_VTH_SEL_TX_mask                                 (0x10000000)
#define ISO_CBUS_TX_PHY_CTRL_REG_R1K_VTH_SEL_TX(data)                                (0x10000000&((data)<<28))
#define ISO_CBUS_TX_PHY_CTRL_REG_R1K_VTH_SEL_TX_src(data)                            ((0x10000000&(data))>>28)
#define ISO_CBUS_TX_PHY_CTRL_get_REG_R1K_VTH_SEL_TX(data)                            ((0x10000000&(data))>>28)
#define ISO_CBUS_TX_PHY_CTRL_REG_MHL_TST_EN_TX_shift                                 (27)
#define ISO_CBUS_TX_PHY_CTRL_REG_MHL_TST_EN_TX_mask                                  (0x08000000)
#define ISO_CBUS_TX_PHY_CTRL_REG_MHL_TST_EN_TX(data)                                 (0x08000000&((data)<<27))
#define ISO_CBUS_TX_PHY_CTRL_REG_MHL_TST_EN_TX_src(data)                             ((0x08000000&(data))>>27)
#define ISO_CBUS_TX_PHY_CTRL_get_REG_MHL_TST_EN_TX(data)                             ((0x08000000&(data))>>27)
#define ISO_CBUS_TX_PHY_CTRL_REG_MHL_VSEL_TX_shift                                   (24)
#define ISO_CBUS_TX_PHY_CTRL_REG_MHL_VSEL_TX_mask                                    (0x07000000)
#define ISO_CBUS_TX_PHY_CTRL_REG_MHL_VSEL_TX(data)                                   (0x07000000&((data)<<24))
#define ISO_CBUS_TX_PHY_CTRL_REG_MHL_VSEL_TX_src(data)                               ((0x07000000&(data))>>24)
#define ISO_CBUS_TX_PHY_CTRL_get_REG_MHL_VSEL_TX(data)                               ((0x07000000&(data))>>24)
#define ISO_CBUS_TX_PHY_CTRL_REG_MHL_R10K_TX_shift                                   (21)
#define ISO_CBUS_TX_PHY_CTRL_REG_MHL_R10K_TX_mask                                    (0x00E00000)
#define ISO_CBUS_TX_PHY_CTRL_REG_MHL_R10K_TX(data)                                   (0x00E00000&((data)<<21))
#define ISO_CBUS_TX_PHY_CTRL_REG_MHL_R10K_TX_src(data)                               ((0x00E00000&(data))>>21)
#define ISO_CBUS_TX_PHY_CTRL_get_REG_MHL_R10K_TX(data)                               ((0x00E00000&(data))>>21)
#define ISO_CBUS_TX_PHY_CTRL_REG_CBUS_STRC_TX_shift                                  (18)
#define ISO_CBUS_TX_PHY_CTRL_REG_CBUS_STRC_TX_mask                                   (0x001C0000)
#define ISO_CBUS_TX_PHY_CTRL_REG_CBUS_STRC_TX(data)                                  (0x001C0000&((data)<<18))
#define ISO_CBUS_TX_PHY_CTRL_REG_CBUS_STRC_TX_src(data)                              ((0x001C0000&(data))>>18)
#define ISO_CBUS_TX_PHY_CTRL_get_REG_CBUS_STRC_TX(data)                              ((0x001C0000&(data))>>18)
#define ISO_CBUS_TX_PHY_CTRL_REG_EN_BIAS_TXRX_shift                                  (17)
#define ISO_CBUS_TX_PHY_CTRL_REG_EN_BIAS_TXRX_mask                                   (0x00020000)
#define ISO_CBUS_TX_PHY_CTRL_REG_EN_BIAS_TXRX(data)                                  (0x00020000&((data)<<17))
#define ISO_CBUS_TX_PHY_CTRL_REG_EN_BIAS_TXRX_src(data)                              ((0x00020000&(data))>>17)
#define ISO_CBUS_TX_PHY_CTRL_get_REG_EN_BIAS_TXRX(data)                              ((0x00020000&(data))>>17)
#define ISO_CBUS_TX_PHY_CTRL_TST_SEL_H_TX_shift                                      (15)
#define ISO_CBUS_TX_PHY_CTRL_TST_SEL_H_TX_mask                                       (0x00018000)
#define ISO_CBUS_TX_PHY_CTRL_TST_SEL_H_TX(data)                                      (0x00018000&((data)<<15))
#define ISO_CBUS_TX_PHY_CTRL_TST_SEL_H_TX_src(data)                                  ((0x00018000&(data))>>15)
#define ISO_CBUS_TX_PHY_CTRL_get_TST_SEL_H_TX(data)                                  ((0x00018000&(data))>>15)
#define ISO_CBUS_TX_PHY_CTRL_hw_r1k_det_en_shift                                     (14)
#define ISO_CBUS_TX_PHY_CTRL_hw_r1k_det_en_mask                                      (0x00004000)
#define ISO_CBUS_TX_PHY_CTRL_hw_r1k_det_en(data)                                     (0x00004000&((data)<<14))
#define ISO_CBUS_TX_PHY_CTRL_hw_r1k_det_en_src(data)                                 ((0x00004000&(data))>>14)
#define ISO_CBUS_TX_PHY_CTRL_get_hw_r1k_det_en(data)                                 ((0x00004000&(data))>>14)
#define ISO_CBUS_TX_PHY_CTRL_cbus_fw_rst_shift                                       (9)
#define ISO_CBUS_TX_PHY_CTRL_cbus_fw_rst_mask                                        (0x00000200)
#define ISO_CBUS_TX_PHY_CTRL_cbus_fw_rst(data)                                       (0x00000200&((data)<<9))
#define ISO_CBUS_TX_PHY_CTRL_cbus_fw_rst_src(data)                                   ((0x00000200&(data))>>9)
#define ISO_CBUS_TX_PHY_CTRL_get_cbus_fw_rst(data)                                   ((0x00000200&(data))>>9)
#define ISO_CBUS_TX_PHY_CTRL_cbus_clk_bypass_shift                                   (8)
#define ISO_CBUS_TX_PHY_CTRL_cbus_clk_bypass_mask                                    (0x00000100)
#define ISO_CBUS_TX_PHY_CTRL_cbus_clk_bypass(data)                                   (0x00000100&((data)<<8))
#define ISO_CBUS_TX_PHY_CTRL_cbus_clk_bypass_src(data)                               ((0x00000100&(data))>>8)
#define ISO_CBUS_TX_PHY_CTRL_get_cbus_clk_bypass(data)                               ((0x00000100&(data))>>8)
#define ISO_CBUS_TX_PHY_CTRL_sel_clk_75m_shift                                       (4)
#define ISO_CBUS_TX_PHY_CTRL_sel_clk_75m_mask                                        (0x00000030)
#define ISO_CBUS_TX_PHY_CTRL_sel_clk_75m(data)                                       (0x00000030&((data)<<4))
#define ISO_CBUS_TX_PHY_CTRL_sel_clk_75m_src(data)                                   ((0x00000030&(data))>>4)
#define ISO_CBUS_TX_PHY_CTRL_get_sel_clk_75m(data)                                   ((0x00000030&(data))>>4)
#define ISO_CBUS_TX_PHY_CTRL_sys_clk_div_shift                                       (0)
#define ISO_CBUS_TX_PHY_CTRL_sys_clk_div_mask                                        (0x00000007)
#define ISO_CBUS_TX_PHY_CTRL_sys_clk_div(data)                                       (0x00000007&((data)<<0))
#define ISO_CBUS_TX_PHY_CTRL_sys_clk_div_src(data)                                   ((0x00000007&(data))>>0)
#define ISO_CBUS_TX_PHY_CTRL_get_sys_clk_div(data)                                   ((0x00000007&(data))>>0)


#define ISO_CBUS_TX_PHY_IRQ                                                          0x980370D4
#define ISO_CBUS_TX_PHY_IRQ_reg_addr                                                 "0xD80370D4"
#define ISO_CBUS_TX_PHY_IRQ_reg                                                      0xD80370D4
#define set_ISO_CBUS_TX_PHY_IRQ_reg(data)   (*((volatile unsigned int*) ISO_CBUS_TX_PHY_IRQ_reg)=data)
#define get_ISO_CBUS_TX_PHY_IRQ_reg   (*((volatile unsigned int*) ISO_CBUS_TX_PHY_IRQ_reg))
#define ISO_CBUS_TX_PHY_IRQ_inst_adr                                                 "0x0035"
#define ISO_CBUS_TX_PHY_IRQ_inst                                                     0x0035
#define ISO_CBUS_TX_PHY_IRQ_cbus_hpd_irq_shift                                       (6)
#define ISO_CBUS_TX_PHY_IRQ_cbus_hpd_irq_mask                                        (0x00000040)
#define ISO_CBUS_TX_PHY_IRQ_cbus_hpd_irq(data)                                       (0x00000040&((data)<<6))
#define ISO_CBUS_TX_PHY_IRQ_cbus_hpd_irq_src(data)                                   ((0x00000040&(data))>>6)
#define ISO_CBUS_TX_PHY_IRQ_get_cbus_hpd_irq(data)                                   ((0x00000040&(data))>>6)
#define ISO_CBUS_TX_PHY_IRQ_cbus_hpd_irq_en_shift                                    (5)
#define ISO_CBUS_TX_PHY_IRQ_cbus_hpd_irq_en_mask                                     (0x00000020)
#define ISO_CBUS_TX_PHY_IRQ_cbus_hpd_irq_en(data)                                    (0x00000020&((data)<<5))
#define ISO_CBUS_TX_PHY_IRQ_cbus_hpd_irq_en_src(data)                                ((0x00000020&(data))>>5)
#define ISO_CBUS_TX_PHY_IRQ_get_cbus_hpd_irq_en(data)                                ((0x00000020&(data))>>5)
#define ISO_CBUS_TX_PHY_IRQ_detect_5v_irq_shift                                      (4)
#define ISO_CBUS_TX_PHY_IRQ_detect_5v_irq_mask                                       (0x00000010)
#define ISO_CBUS_TX_PHY_IRQ_detect_5v_irq(data)                                      (0x00000010&((data)<<4))
#define ISO_CBUS_TX_PHY_IRQ_detect_5v_irq_src(data)                                  ((0x00000010&(data))>>4)
#define ISO_CBUS_TX_PHY_IRQ_get_detect_5v_irq(data)                                  ((0x00000010&(data))>>4)
#define ISO_CBUS_TX_PHY_IRQ_detect_5v_irq_en_shift                                   (3)
#define ISO_CBUS_TX_PHY_IRQ_detect_5v_irq_en_mask                                    (0x00000008)
#define ISO_CBUS_TX_PHY_IRQ_detect_5v_irq_en(data)                                   (0x00000008&((data)<<3))
#define ISO_CBUS_TX_PHY_IRQ_detect_5v_irq_en_src(data)                               ((0x00000008&(data))>>3)
#define ISO_CBUS_TX_PHY_IRQ_get_detect_5v_irq_en(data)                               ((0x00000008&(data))>>3)
#define ISO_CBUS_TX_PHY_IRQ_det_z1k_irq_shift                                        (2)
#define ISO_CBUS_TX_PHY_IRQ_det_z1k_irq_mask                                         (0x00000004)
#define ISO_CBUS_TX_PHY_IRQ_det_z1k_irq(data)                                        (0x00000004&((data)<<2))
#define ISO_CBUS_TX_PHY_IRQ_det_z1k_irq_src(data)                                    ((0x00000004&(data))>>2)
#define ISO_CBUS_TX_PHY_IRQ_get_det_z1k_irq(data)                                    ((0x00000004&(data))>>2)
#define ISO_CBUS_TX_PHY_IRQ_det_z1k_irq_en_shift                                     (1)
#define ISO_CBUS_TX_PHY_IRQ_det_z1k_irq_en_mask                                      (0x00000002)
#define ISO_CBUS_TX_PHY_IRQ_det_z1k_irq_en(data)                                     (0x00000002&((data)<<1))
#define ISO_CBUS_TX_PHY_IRQ_det_z1k_irq_en_src(data)                                 ((0x00000002&(data))>>1)
#define ISO_CBUS_TX_PHY_IRQ_get_det_z1k_irq_en(data)                                 ((0x00000002&(data))>>1)
#define ISO_CBUS_TX_PHY_IRQ_write_data_shift                                         (0)
#define ISO_CBUS_TX_PHY_IRQ_write_data_mask                                          (0x00000001)
#define ISO_CBUS_TX_PHY_IRQ_write_data(data)                                         (0x00000001&((data)<<0))
#define ISO_CBUS_TX_PHY_IRQ_write_data_src(data)                                     ((0x00000001&(data))>>0)
#define ISO_CBUS_TX_PHY_IRQ_get_write_data(data)                                     ((0x00000001&(data))>>0)


#define ISO_CBUS_TX_PHY_STATUS                                                       0x980370DC
#define ISO_CBUS_TX_PHY_STATUS_reg_addr                                              "0xD80370DC"
#define ISO_CBUS_TX_PHY_STATUS_reg                                                   0xD80370DC
#define set_ISO_CBUS_TX_PHY_STATUS_reg(data)   (*((volatile unsigned int*) ISO_CBUS_TX_PHY_STATUS_reg)=data)
#define get_ISO_CBUS_TX_PHY_STATUS_reg   (*((volatile unsigned int*) ISO_CBUS_TX_PHY_STATUS_reg))
#define ISO_CBUS_TX_PHY_STATUS_inst_adr                                              "0x0037"
#define ISO_CBUS_TX_PHY_STATUS_inst                                                  0x0037
#define ISO_CBUS_TX_PHY_STATUS_rego_mhl_r1k_det_tx_shift                             (31)
#define ISO_CBUS_TX_PHY_STATUS_rego_mhl_r1k_det_tx_mask                              (0x80000000)
#define ISO_CBUS_TX_PHY_STATUS_rego_mhl_r1k_det_tx(data)                             (0x80000000&((data)<<31))
#define ISO_CBUS_TX_PHY_STATUS_rego_mhl_r1k_det_tx_src(data)                         ((0x80000000&(data))>>31)
#define ISO_CBUS_TX_PHY_STATUS_get_rego_mhl_r1k_det_tx(data)                         ((0x80000000&(data))>>31)
#define ISO_CBUS_TX_PHY_STATUS_hdmi_hpd_out_tx_shift                                 (30)
#define ISO_CBUS_TX_PHY_STATUS_hdmi_hpd_out_tx_mask                                  (0x40000000)
#define ISO_CBUS_TX_PHY_STATUS_hdmi_hpd_out_tx(data)                                 (0x40000000&((data)<<30))
#define ISO_CBUS_TX_PHY_STATUS_hdmi_hpd_out_tx_src(data)                             ((0x40000000&(data))>>30)
#define ISO_CBUS_TX_PHY_STATUS_get_hdmi_hpd_out_tx(data)                             ((0x40000000&(data))>>30)
#define ISO_CBUS_TX_PHY_STATUS_hw_en_10k_shift                                       (29)
#define ISO_CBUS_TX_PHY_STATUS_hw_en_10k_mask                                        (0x20000000)
#define ISO_CBUS_TX_PHY_STATUS_hw_en_10k(data)                                       (0x20000000&((data)<<29))
#define ISO_CBUS_TX_PHY_STATUS_hw_en_10k_src(data)                                   ((0x20000000&(data))>>29)
#define ISO_CBUS_TX_PHY_STATUS_get_hw_en_10k(data)                                   ((0x20000000&(data))>>29)
#define ISO_CBUS_TX_PHY_STATUS_hw_en_5k_shift                                        (28)
#define ISO_CBUS_TX_PHY_STATUS_hw_en_5k_mask                                         (0x10000000)
#define ISO_CBUS_TX_PHY_STATUS_hw_en_5k(data)                                        (0x10000000&((data)<<28))
#define ISO_CBUS_TX_PHY_STATUS_hw_en_5k_src(data)                                    ((0x10000000&(data))>>28)
#define ISO_CBUS_TX_PHY_STATUS_get_hw_en_5k(data)                                    ((0x10000000&(data))>>28)
#define ISO_CBUS_TX_PHY_STATUS_det_r1k_st_shift                                      (26)
#define ISO_CBUS_TX_PHY_STATUS_det_r1k_st_mask                                       (0x0C000000)
#define ISO_CBUS_TX_PHY_STATUS_det_r1k_st(data)                                      (0x0C000000&((data)<<26))
#define ISO_CBUS_TX_PHY_STATUS_det_r1k_st_src(data)                                  ((0x0C000000&(data))>>26)
#define ISO_CBUS_TX_PHY_STATUS_get_det_r1k_st(data)                                  ((0x0C000000&(data))>>26)
#define ISO_CBUS_TX_PHY_STATUS_cbus_dbn_shift                                        (25)
#define ISO_CBUS_TX_PHY_STATUS_cbus_dbn_mask                                         (0x02000000)
#define ISO_CBUS_TX_PHY_STATUS_cbus_dbn(data)                                        (0x02000000&((data)<<25))
#define ISO_CBUS_TX_PHY_STATUS_cbus_dbn_src(data)                                    ((0x02000000&(data))>>25)
#define ISO_CBUS_TX_PHY_STATUS_get_cbus_dbn(data)                                    ((0x02000000&(data))>>25)
#define ISO_CBUS_TX_PHY_STATUS_hw_mhl_r10k_test_shift                                (24)
#define ISO_CBUS_TX_PHY_STATUS_hw_mhl_r10k_test_mask                                 (0x01000000)
#define ISO_CBUS_TX_PHY_STATUS_hw_mhl_r10k_test(data)                                (0x01000000&((data)<<24))
#define ISO_CBUS_TX_PHY_STATUS_hw_mhl_r10k_test_src(data)                            ((0x01000000&(data))>>24)
#define ISO_CBUS_TX_PHY_STATUS_get_hw_mhl_r10k_test(data)                            ((0x01000000&(data))>>24)
#define ISO_CBUS_TX_PHY_STATUS_hw_mhl_r1k_det_shift                                  (23)
#define ISO_CBUS_TX_PHY_STATUS_hw_mhl_r1k_det_mask                                   (0x00800000)
#define ISO_CBUS_TX_PHY_STATUS_hw_mhl_r1k_det(data)                                  (0x00800000&((data)<<23))
#define ISO_CBUS_TX_PHY_STATUS_hw_mhl_r1k_det_src(data)                              ((0x00800000&(data))>>23)
#define ISO_CBUS_TX_PHY_STATUS_get_hw_mhl_r1k_det(data)                              ((0x00800000&(data))>>23)
#define ISO_CBUS_TX_PHY_STATUS_hw_mhl_bmos_en_shift                                  (22)
#define ISO_CBUS_TX_PHY_STATUS_hw_mhl_bmos_en_mask                                   (0x00400000)
#define ISO_CBUS_TX_PHY_STATUS_hw_mhl_bmos_en(data)                                  (0x00400000&((data)<<22))
#define ISO_CBUS_TX_PHY_STATUS_hw_mhl_bmos_en_src(data)                              ((0x00400000&(data))>>22)
#define ISO_CBUS_TX_PHY_STATUS_get_hw_mhl_bmos_en(data)                              ((0x00400000&(data))>>22)
#define ISO_CBUS_TX_PHY_STATUS_hw_mhl_vtl_sel_shift                                  (21)
#define ISO_CBUS_TX_PHY_STATUS_hw_mhl_vtl_sel_mask                                   (0x00200000)
#define ISO_CBUS_TX_PHY_STATUS_hw_mhl_vtl_sel(data)                                  (0x00200000&((data)<<21))
#define ISO_CBUS_TX_PHY_STATUS_hw_mhl_vtl_sel_src(data)                              ((0x00200000&(data))>>21)
#define ISO_CBUS_TX_PHY_STATUS_get_hw_mhl_vtl_sel(data)                              ((0x00200000&(data))>>21)
#define ISO_CBUS_TX_PHY_STATUS_det_r1k_cnt_shift                                     (8)
#define ISO_CBUS_TX_PHY_STATUS_det_r1k_cnt_mask                                      (0x0000FF00)
#define ISO_CBUS_TX_PHY_STATUS_det_r1k_cnt(data)                                     (0x0000FF00&((data)<<8))
#define ISO_CBUS_TX_PHY_STATUS_det_r1k_cnt_src(data)                                 ((0x0000FF00&(data))>>8)
#define ISO_CBUS_TX_PHY_STATUS_get_det_r1k_cnt(data)                                 ((0x0000FF00&(data))>>8)
#define ISO_CBUS_TX_PHY_STATUS_fw_rst_r1k_st_shift                                   (3)
#define ISO_CBUS_TX_PHY_STATUS_fw_rst_r1k_st_mask                                    (0x00000008)
#define ISO_CBUS_TX_PHY_STATUS_fw_rst_r1k_st(data)                                   (0x00000008&((data)<<3))
#define ISO_CBUS_TX_PHY_STATUS_fw_rst_r1k_st_src(data)                               ((0x00000008&(data))>>3)
#define ISO_CBUS_TX_PHY_STATUS_get_fw_rst_r1k_st(data)                               ((0x00000008&(data))>>3)
#define ISO_CBUS_TX_PHY_STATUS_fw_r1k_det_en_shift                                   (1)
#define ISO_CBUS_TX_PHY_STATUS_fw_r1k_det_en_mask                                    (0x00000002)
#define ISO_CBUS_TX_PHY_STATUS_fw_r1k_det_en(data)                                   (0x00000002&((data)<<1))
#define ISO_CBUS_TX_PHY_STATUS_fw_r1k_det_en_src(data)                               ((0x00000002&(data))>>1)
#define ISO_CBUS_TX_PHY_STATUS_get_fw_r1k_det_en(data)                               ((0x00000002&(data))>>1)
#define ISO_CBUS_TX_PHY_STATUS_fw_r1k_det_shift                                      (0)
#define ISO_CBUS_TX_PHY_STATUS_fw_r1k_det_mask                                       (0x00000001)
#define ISO_CBUS_TX_PHY_STATUS_fw_r1k_det(data)                                      (0x00000001&((data)<<0))
#define ISO_CBUS_TX_PHY_STATUS_fw_r1k_det_src(data)                                  ((0x00000001&(data))>>0)
#define ISO_CBUS_TX_PHY_STATUS_get_fw_r1k_det(data)                                  ((0x00000001&(data))>>0)


#endif
