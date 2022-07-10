/**
* @file rbusHDMIReg.h
* @spec Kylin_hdmirx_MAC_arch_spec
* RBus systemc program.
*
* @author RS_MM2_SD
* @email jason9.ccc@realtek.com
* @date 2015/3/11
* @ingroup model_rbus
* @version { 1.0 }
**
*/

#ifndef _RBUS_HDMI_REG_H_
#define _RBUS_HDMI_REG_H_

#include "TV_IP/rbusTypes.h"



//  HDMI Register Address



#define  HDMI_TMDS_MSR0_ADDR                                		(0x98034000)
#define  HDMI_TMDS_MSR1_ADDR                                		(0x98034004)
#define  HDMI_TMDS_CRCC_ADDR                                		(0x98034008)
#define  HDMI_TMDS_CRCO0_ADDR                               		(0x9803400c)
#define  HDMI_TMDS_CRCO1_ADDR                               		(0x98034010)
#define  HDMI_TMDS_CTRL_ADDR                                		(0x98034014)
#define  HDMI_TMDS_OUTCTL_ADDR                              		(0x98034018)
#define  HDMI_TMDS_PWDCTL_ADDR                              		(0x9803401c)
#define  HDMI_TMDS_Z0CC_ADDR                                		(0x98034020)
#define  HDMI_TMDS_CPS_ADDR                                 		(0x98034024)
#define  HDMI_TMDS_UDC_ADDR                                 		(0x98034028)
#define  HDMI_TMDS_ERRC_ADDR                                		(0x9803402c)
#define  HDMI_TMDS_OUT_CTRL_ADDR                            		(0x98034030)
#define  HDMI_TMDS_ROUT_ADDR                                		(0x98034034)
#define  HDMI_TMDS_GOUT_ADDR                                		(0x98034038)
#define  HDMI_TMDS_BOUT_ADDR                                		(0x9803403c)
#define  HDMI_TMDS_DPC0_ADDR                                		(0x98034040)
#define  HDMI_TMDS_DPC1_ADDR                                		(0x98034044)
#define  HDMI_TMDS_DPC_SET0_ADDR                            		(0x98034048)
#define  HDMI_TMDS_DPC_SET1_ADDR                            		(0x9803404c)
#define  HDMI_TMDS_DPC_SET2_ADDR                            		(0x98034050)
#define  HDMI_TMDS_DPC_SET3_ADDR                            		(0x98034054)
#define  HDMI_TMDS_DET_CTL_ADDR                             		(0x98034058)
#define  HDMI_TMDS_DET_STS_ADDR                             		(0x9803405c)
#define  HDMI_VIDEO_BIT_ERR_DET_ADDR                        		(0x98034060)
#define  HDMI_VIDEO_BIT_ERR_STATUS_B_ADDR                   		(0x98034064)
#define  HDMI_VIDEO_BIT_ERR_STATUS_G_ADDR                   		(0x98034068)
#define  HDMI_VIDEO_BIT_ERR_STATUS_R_ADDR                   		(0x9803406c)
#define  HDMI_TERC4_ERR_DET_ADDR                            		(0x98034070)
#define  HDMI_TERC4_ERR_STATUS_B_ADDR                       		(0x98034074)
#define  HDMI_TERC4_ERR_STATUS_G_ADDR                       		(0x98034078)
#define  HDMI_TERC4_ERR_STATUS_R_ADDR                       		(0x9803407c)
#define  HDMI_HDMI_SR_ADDR                                  		(0x98034080)
#define  HDMI_HDMI_GPVS_ADDR                                		(0x98034084)
#define  HDMI_HDMI_PSAP_ADDR                                		(0x98034088)
#define  HDMI_HDMI_PSDP_ADDR                                		(0x9803408c)
#define  HDMI_HDMI_SCR_ADDR                                 		(0x98034090)
#define  HDMI_HDMI_BCHCR_ADDR                               		(0x98034094)
#define  HDMI_HDMI_AVMCR_ADDR                               		(0x98034098)
#define  HDMI_HDMI_WDCR0_ADDR                               		(0x9803409c)
#define  HDMI_HDMI_DBCR_ADDR                                		(0x980340a0)
#define  HDMI_HDMI_AWDSR_ADDR                               		(0x980340a4)
#define  HDMI_HDMI_VWDSR_ADDR                               		(0x980340a8)
#define  HDMI_HDMI_PAMICR_ADDR                              		(0x980340ac)
#define  HDMI_HDMI_PTRSV1_ADDR                              		(0x980340b0)
#define  HDMI_HDMI_PVGCR0_ADDR                              		(0x980340b4)
#define  HDMI_HDMI_PVSR0_ADDR                               		(0x980340b8)
#define  HDMI_HDMI_VCR_ADDR                                 		(0x980340bc)
#define  HDMI_HDMI_ACRCR_ADDR                               		(0x980340c0)
#define  HDMI_HDMI_ACRSR0_ADDR                              		(0x980340c4)
#define  HDMI_HDMI_ACRSR1_ADDR                              		(0x980340c8)
#define  HDMI_HDMI_ACS0_ADDR                                		(0x980340cc)
#define  HDMI_HDMI_ACS1_ADDR                                		(0x980340d0)
#define  HDMI_HDMI_INTCR_ADDR                               		(0x980340d4)
#define  HDMI_HDMI_ALCR_ADDR                                		(0x980340d8)
#define  HDMI_HDMI_AOCR_ADDR                                		(0x980340dc)
#define  HDMI_HDMI_BCSR_ADDR                                		(0x980340e0)
#define  HDMI_HDMI_ASR0_ADDR                                		(0x980340e4)
#define  HDMI_HDMI_ASR1_ADDR                                		(0x980340e8)
#define  HDMI_HDMI_VIDEO_FORMAT_ADDR                        		(0x980340ec)
#define  HDMI_HDMI_3D_FORMAT_ADDR                           		(0x980340f0)
#define  HDMI_HDMI_FVSI_ADDR                                		(0x980340f4)
#define  HDMI_CH_CR_ADDR                                    		(0x980340f8)
#define  HDMI_CH_SR_ADDR                                    		(0x980340fc)
#define  HDMI_AUDIO_SAMPLE_RATE_CHANGE_IRQ_ADDR             		(0x98034100)
#define  HDMI_HIGH_BIT_RATE_AUDIO_PACKET_ADDR               		(0x98034104)
#define  HDMI_HDMI_AFCR_ADDR                                		(0x98034108)
#define  HDMI_HDMI_AFSR_ADDR                                		(0x9803410c)
#define  HDMI_HDMI_MAGCR0_ADDR                              		(0x98034110)
#define  HDMI_HDMI_MAG_M_FINAL_ADDR                         		(0x98034114)
#define  HDMI_ZCD_CTRL_ADDR                                 		(0x98034118)
#define  HDMI_AUDIO_FREQDET_ADDR                            		(0x9803411c)
#define  HDMI_RANGE0_1_ADDR                                 		(0x98034120)
#define  HDMI_RANGE2_3_ADDR                                 		(0x98034124)
#define  HDMI_RANGE4_5_ADDR                                 		(0x98034128)
#define  HDMI_PRESET_S_CODE0_ADDR                           		(0x9803412c)
#define  HDMI_PRESET_S_CODE1_ADDR                           		(0x98034130)
#define  HDMI_PRBS_R_CTRL_ADDR                              		(0x98034134)
#define  HDMI_PRBS_G_CTRL_ADDR                              		(0x98034138)
#define  HDMI_PRBS_B_CTRL_ADDR                              		(0x9803413c)
#define  HDMI_HDMI_LEADING_GB_CMP_CTRL_ADDR                 		(0x98034140)
#define  HDMI_HDMI_LEADING_GB_CMP_TIMES_ADDR                		(0x98034144)
#define  HDMI_HDMI_LEADING_GB_CMP_CNT_ADDR                  		(0x98034148)
#define  HDMI_AUDIO_CTS_UP_BOUND_ADDR                       		(0x9803414c)
#define  HDMI_AUDIO_CTS_LOW_BOUND_ADDR                      		(0x98034150)
#define  HDMI_AUDIO_N_UP_BOUND_ADDR                         		(0x98034154)
#define  HDMI_AUDIO_N_LOW_BOUND_ADDR                        		(0x98034158)
#define  HDMI_MHL_HDMI_MAC_CTRL_ADDR                        		(0x9803415c)
#define  HDMI_MHL_3D_FORMAT_ADDR                            		(0x98034160)
#define  HDMI_MHL_3P0_FORMAT0_ADDR                          		(0x98034164)
#define  HDMI_MHL_3P0_FORMAT1_ADDR                          		(0x98034168)
#define  HDMI_LIGHT_SLEEP_ADDR                              		(0x98034170)
#define  HDMI_READ_MARGIN2_ADDR                             		(0x98034174)
#define  HDMI_READ_MARGIN_ENABLE_ADDR                       		(0x98034178)
#define  HDMI_READ_MARGIN_ADDR                              		(0x9803417c)
#define  HDMI_BIST_MODE_ADDR                                		(0x98034180)
#define  HDMI_BIST_DONE_ADDR                                		(0x98034184)
#define  HDMI_BIST_FAIL_ADDR                                		(0x98034188)
#define  HDMI_DRF_MODE_ADDR                                 		(0x9803418c)
#define  HDMI_DRF_RESUME_ADDR                               		(0x98034190)
#define  HDMI_DRF_DONE_ADDR                                 		(0x98034194)
#define  HDMI_DRF_PAUSE_ADDR                                		(0x98034198)
#define  HDMI_DRF_FAIL_ADDR                                 		(0x9803419c)
#define  HDMI_PHY_FIFO_CR_ADDR                              		(0x980341a0)
#define  HDMI_PHY_FIFO_SR0_ADDR                             		(0x980341a4)
#define  HDMI_PHY_FIFO_SR1_ADDR                             		(0x980341a8)
#define  HDMI_HDMI_CTS_FIFO_CTL_ADDR                        		(0x980341ac)
#define  HDMI_CBUS_CLK_CTL_ADDR                             		(0x980341b0)
#define  HDMI_HDMI_2P0_CR_ADDR                              		(0x980341b4)
#define  HDMI_SCR_CR_ADDR                                   		(0x980341b8)
#define  HDMI_CERCR_ADDR                                    		(0x980341bc)
#define  HDMI_CERSR0_ADDR                                   		(0x980341c0)
#define  HDMI_CERSR1_ADDR                                   		(0x980341c4)
#define  HDMI_CERSR2_ADDR                                   		(0x980341c8)
#define  HDMI_CERSR3_ADDR                                   		(0x980341cc)
#define  HDMI_CERSR4_ADDR                                   		(0x980341d0)
#define  HDMI_YUV420_CR_ADDR                                		(0x980341d4)
#define  HDMI_SCDC_CR_ADDR                                  		(0x980341d8)
#define  HDMI_SCDC_PCR_ADDR                                 		(0x980341dc)
#define  HDMI_SCDC_AP_ADDR                                  		(0x980341e0)
#define  HDMI_SCDC_DP_ADDR                                  		(0x980341e4)
#define  HDMI_CLKDETCR_ADDR                                 		(0x980341e8)
#define  HDMI_CLKDETSR_ADDR                                 		(0x980341ec)
#define  HDMI_GDI_TMDSCLK_SETTING_00_ADDR                   		(0x980341f0)
#define  HDMI_GDI_TMDSCLK_SETTING_01_ADDR                   		(0x980341f4)
#define  HDMI_GDI_TMDSCLK_SETTING_02_ADDR                   		(0x980341f8)
#define  HDMI_HDCP_BIST_ADDR                                		(0x98034200)
#define  HDMI_HDCP_CR_ADDR                                  		(0x98034204)
#define  HDMI_HDCP_DKAP_ADDR                                		(0x98034208)
#define  HDMI_HDCP_PCR_ADDR                                 		(0x9803420c)
#define  HDMI_HDCP_FLAG1_ADDR                               		(0x98034210)
#define  HDMI_HDCP_FLAG2_ADDR                               		(0x98034214)
#define  HDMI_HDCP_AP_ADDR                                  		(0x98034218)
#define  HDMI_HDCP_DP_ADDR                                  		(0x9803421c)
#define  HDMI_HDCP_2P2_CR_ADDR                              		(0x98034220)
#define  HDMI_HDCP_2P2_KS0_ADDR                             		(0x98034224)
#define  HDMI_HDCP_2P2_KS1_ADDR                             		(0x98034228)
#define  HDMI_HDCP_2P2_KS2_ADDR                             		(0x9803422c)
#define  HDMI_HDCP_2P2_KS3_ADDR                             		(0x98034230)
#define  HDMI_HDCP_2P2_LC0_ADDR                             		(0x98034234)
#define  HDMI_HDCP_2P2_LC1_ADDR                             		(0x98034238)
#define  HDMI_HDCP_2P2_LC2_ADDR                             		(0x9803423c)
#define  HDMI_HDCP_2P2_LC3_ADDR                             		(0x98034240)
#define  HDMI_HDCP_2P2_RIV0_ADDR                            		(0x98034244)
#define  HDMI_HDCP_2P2_RIV1_ADDR                            		(0x98034248)
#define  HDMI_HDCP_2P2_SR0_ADDR                             		(0x9803424c)
#define  HDMI_HDCP_2P2_SR1_ADDR                             		(0x98034250)
#define  HDMI_HDCP_MSAP_ADDR                                		(0x98034254)
#define  HDMI_HDCP_MSDP_ADDR                                		(0x98034258)
#define  HDMI_HDMI_CMCR_ADDR                                		(0x98034300)
#define  HDMI_HDMI_MCAPR_ADDR                               		(0x98034304)
#define  HDMI_HDMI_SCAPR_ADDR                               		(0x98034308)
#define  HDMI_HDMI_DCAPR0_ADDR                              		(0x9803430c)
#define  HDMI_HDMI_PSCR_ADDR                                		(0x98034310)
#define  HDMI_HDMI_AFDD_ADDR                                		(0x9803431c)
#define  HDMI_HDMI_FTR_ADDR                                 		(0x98034320)
#define  HDMI_HDMI_FBR_ADDR                                 		(0x98034324)
#define  HDMI_HDMI_ICPSNCR0_ADDR                            		(0x98034328)
#define  HDMI_HDMI_PCPSNCR0_ADDR                            		(0x9803432c)
#define  HDMI_HDMI_ICTPSR0_ADDR                             		(0x98034330)
#define  HDMI_HDMI_PCTPSR0_ADDR                             		(0x98034334)
#define  HDMI_HDMI_ICBPSR0_ADDR                             		(0x98034338)
#define  HDMI_HDMI_PCBPSR0_ADDR                             		(0x9803433c)
#define  HDMI_HDMI_NTX1024TR0_ADDR                          		(0x98034340)
#define  HDMI_HDMI_STBPR_ADDR                               		(0x98034344)
#define  HDMI_HDMI_NCPER_ADDR                               		(0x98034348)
#define  HDMI_HDMI_PETR_ADDR                                		(0x9803434c)
#define  HDMI_HDMI_AAPNR_ADDR                               		(0x98034350)
#define  HDMI_HDMI_APDMCR_ADDR                              		(0x98034354)
#define  HDMI_HDMI_APTMCR0_ADDR                             		(0x98034358)
#define  HDMI_HDMI_APTMCR1_ADDR                             		(0x9803435c)
#define  HDMI_HDMI_NPECR_ADDR                               		(0x98034360)
#define  HDMI_HDMI_NROR_ADDR                                		(0x98034364)
#define  HDMI_HDMI_NTX1024TR0_THRESHOLD_ADDR                		(0x98034368)
#define  HDMI_HDMI_APLLCR0_ADDR                             		(0x98034380)
#define  HDMI_HDMI_APLLCR1_ADDR                             		(0x98034384)
#define  HDMI_HDMI_APLLCR2_ADDR                             		(0x98034388)
#define  HDMI_HDMI_APLLCR3_ADDR                             		(0x9803438c)
#define  HDMI_HDMI_APLL_TESTM_ADDR                          		(0x98034390)
#define  HDMI_HDMI_VPLLCR0_ADDR                             		(0x98034400)
#define  HDMI_HDMI_VPLLCR1_ADDR                             		(0x98034404)
#define  HDMI_HDMI_VPLLCR2_ADDR                             		(0x98034408)
#define  HDMI_MN_SCLKG_CTRL_ADDR                            		(0x98034410)
#define  HDMI_MN_SCLKG_DIVS_ADDR                            		(0x98034414)
#define  HDMI_MDD_CR_ADDR                                   		(0x98034500)
#define  HDMI_MDD_SR_ADDR                                   		(0x98034504)

#define  HDMI_TMDS_MSR0_VADDR                              		(0xd8034000)
#define  HDMI_TMDS_MSR1_VADDR                              		(0xd8034004)
#define  HDMI_TMDS_CRCC_VADDR                              		(0xd8034008)
#define  HDMI_TMDS_CRCO0_VADDR                             		(0xd803400c)
#define  HDMI_TMDS_CRCO1_VADDR                             		(0xd8034010)
#define  HDMI_TMDS_CTRL_VADDR                              		(0xd8034014)
#define  HDMI_TMDS_OUTCTL_VADDR                            		(0xd8034018)
#define  HDMI_TMDS_PWDCTL_VADDR                            		(0xd803401c)
#define  HDMI_TMDS_Z0CC_VADDR                              		(0xd8034020)
#define  HDMI_TMDS_CPS_VADDR                               		(0xd8034024)
#define  HDMI_TMDS_UDC_VADDR                               		(0xd8034028)
#define  HDMI_TMDS_ERRC_VADDR                              		(0xd803402c)
#define  HDMI_TMDS_OUT_CTRL_VADDR                          		(0xd8034030)
#define  HDMI_TMDS_ROUT_VADDR                              		(0xd8034034)
#define  HDMI_TMDS_GOUT_VADDR                              		(0xd8034038)
#define  HDMI_TMDS_BOUT_VADDR                              		(0xd803403c)
#define  HDMI_TMDS_DPC0_VADDR                              		(0xd8034040)
#define  HDMI_TMDS_DPC1_VADDR                              		(0xd8034044)
#define  HDMI_TMDS_DPC_SET0_VADDR                          		(0xd8034048)
#define  HDMI_TMDS_DPC_SET1_VADDR                          		(0xd803404c)
#define  HDMI_TMDS_DPC_SET2_VADDR                          		(0xd8034050)
#define  HDMI_TMDS_DPC_SET3_VADDR                          		(0xd8034054)
#define  HDMI_TMDS_DET_CTL_VADDR                           		(0xd8034058)
#define  HDMI_TMDS_DET_STS_VADDR                           		(0xd803405c)
#define  HDMI_VIDEO_BIT_ERR_DET_VADDR                      		(0xd8034060)
#define  HDMI_VIDEO_BIT_ERR_STATUS_B_VADDR                 		(0xd8034064)
#define  HDMI_VIDEO_BIT_ERR_STATUS_G_VADDR                 		(0xd8034068)
#define  HDMI_VIDEO_BIT_ERR_STATUS_R_VADDR                 		(0xd803406c)
#define  HDMI_TERC4_ERR_DET_VADDR                          		(0xd8034070)
#define  HDMI_TERC4_ERR_STATUS_B_VADDR                     		(0xd8034074)
#define  HDMI_TERC4_ERR_STATUS_G_VADDR                     		(0xd8034078)
#define  HDMI_TERC4_ERR_STATUS_R_VADDR                     		(0xd803407c)
#define  HDMI_HDMI_SR_VADDR                                		(0xd8034080)
#define  HDMI_HDMI_GPVS_VADDR                              		(0xd8034084)
#define  HDMI_HDMI_PSAP_VADDR                              		(0xd8034088)
#define  HDMI_HDMI_PSDP_VADDR                              		(0xd803408c)
#define  HDMI_HDMI_SCR_VADDR                               		(0xd8034090)
#define  HDMI_HDMI_BCHCR_VADDR                             		(0xd8034094)
#define  HDMI_HDMI_AVMCR_VADDR                             		(0xd8034098)
#define  HDMI_HDMI_WDCR0_VADDR                             		(0xd803409c)
#define  HDMI_HDMI_DBCR_VADDR                              		(0xd80340a0)
#define  HDMI_HDMI_AWDSR_VADDR                             		(0xd80340a4)
#define  HDMI_HDMI_VWDSR_VADDR                             		(0xd80340a8)
#define  HDMI_HDMI_PAMICR_VADDR                            		(0xd80340ac)
#define  HDMI_HDMI_PTRSV1_VADDR                            		(0xd80340b0)
#define  HDMI_HDMI_PVGCR0_VADDR                            		(0xd80340b4)
#define  HDMI_HDMI_PVSR0_VADDR                             		(0xd80340b8)
#define  HDMI_HDMI_VCR_VADDR                               		(0xd80340bc)
#define  HDMI_HDMI_ACRCR_VADDR                             		(0xd80340c0)
#define  HDMI_HDMI_ACRSR0_VADDR                            		(0xd80340c4)
#define  HDMI_HDMI_ACRSR1_VADDR                            		(0xd80340c8)
#define  HDMI_HDMI_ACS0_VADDR                              		(0xd80340cc)
#define  HDMI_HDMI_ACS1_VADDR                              		(0xd80340d0)
#define  HDMI_HDMI_INTCR_VADDR                             		(0xd80340d4)
#define  HDMI_HDMI_ALCR_VADDR                              		(0xd80340d8)
#define  HDMI_HDMI_AOCR_VADDR                              		(0xd80340dc)
#define  HDMI_HDMI_BCSR_VADDR                              		(0xd80340e0)
#define  HDMI_HDMI_ASR0_VADDR                              		(0xd80340e4)
#define  HDMI_HDMI_ASR1_VADDR                              		(0xd80340e8)
#define  HDMI_HDMI_VIDEO_FORMAT_VADDR                      		(0xd80340ec)
#define  HDMI_HDMI_3D_FORMAT_VADDR                         		(0xd80340f0)
#define  HDMI_HDMI_FVSI_VADDR                              		(0xd80340f4)
#define  HDMI_CH_CR_VADDR                                  		(0xd80340f8)
#define  HDMI_CH_SR_VADDR                                  		(0xd80340fc)
#define  HDMI_AUDIO_SAMPLE_RATE_CHANGE_IRQ_VADDR           		(0xd8034100)
#define  HDMI_HIGH_BIT_RATE_AUDIO_PACKET_VADDR             		(0xd8034104)
#define  HDMI_HDMI_AFCR_VADDR                              		(0xd8034108)
#define  HDMI_HDMI_AFSR_VADDR                              		(0xd803410c)
#define  HDMI_HDMI_MAGCR0_VADDR                            		(0xd8034110)
#define  HDMI_HDMI_MAG_M_FINAL_VADDR                       		(0xd8034114)
#define  HDMI_ZCD_CTRL_VADDR                               		(0xd8034118)
#define  HDMI_AUDIO_FREQDET_VADDR                          		(0xd803411c)
#define  HDMI_RANGE0_1_VADDR                               		(0xd8034120)
#define  HDMI_RANGE2_3_VADDR                               		(0xd8034124)
#define  HDMI_RANGE4_5_VADDR                               		(0xd8034128)
#define  HDMI_PRESET_S_CODE0_VADDR                         		(0xd803412c)
#define  HDMI_PRESET_S_CODE1_VADDR                         		(0xd8034130)
#define  HDMI_PRBS_R_CTRL_VADDR                            		(0xd8034134)
#define  HDMI_PRBS_G_CTRL_VADDR                            		(0xd8034138)
#define  HDMI_PRBS_B_CTRL_VADDR                            		(0xd803413c)
#define  HDMI_HDMI_LEADING_GB_CMP_CTRL_VADDR               		(0xd8034140)
#define  HDMI_HDMI_LEADING_GB_CMP_TIMES_VADDR              		(0xd8034144)
#define  HDMI_HDMI_LEADING_GB_CMP_CNT_VADDR                		(0xd8034148)
#define  HDMI_AUDIO_CTS_UP_BOUND_VADDR                     		(0xd803414c)
#define  HDMI_AUDIO_CTS_LOW_BOUND_VADDR                    		(0xd8034150)
#define  HDMI_AUDIO_N_UP_BOUND_VADDR                       		(0xd8034154)
#define  HDMI_AUDIO_N_LOW_BOUND_VADDR                      		(0xd8034158)
#define  HDMI_MHL_HDMI_MAC_CTRL_VADDR                      		(0xd803415c)
#define  HDMI_MHL_3D_FORMAT_VADDR                          		(0xd8034160)
#define  HDMI_MHL_3P0_FORMAT0_VADDR                        		(0xd8034164)
#define  HDMI_MHL_3P0_FORMAT1_VADDR                        		(0xd8034168)
#define  HDMI_LIGHT_SLEEP_VADDR                            		(0xd8034170)
#define  HDMI_READ_MARGIN2_VADDR                           		(0xd8034174)
#define  HDMI_READ_MARGIN_ENABLE_VADDR                     		(0xd8034178)
#define  HDMI_READ_MARGIN_VADDR                            		(0xd803417c)
#define  HDMI_BIST_MODE_VADDR                              		(0xd8034180)
#define  HDMI_BIST_DONE_VADDR                              		(0xd8034184)
#define  HDMI_BIST_FAIL_VADDR                              		(0xd8034188)
#define  HDMI_DRF_MODE_VADDR                               		(0xd803418c)
#define  HDMI_DRF_RESUME_VADDR                             		(0xd8034190)
#define  HDMI_DRF_DONE_VADDR                               		(0xd8034194)
#define  HDMI_DRF_PAUSE_VADDR                              		(0xd8034198)
#define  HDMI_DRF_FAIL_VADDR                               		(0xd803419c)
#define  HDMI_PHY_FIFO_CR_VADDR                            		(0xd80341a0)
#define  HDMI_PHY_FIFO_SR0_VADDR                           		(0xd80341a4)
#define  HDMI_PHY_FIFO_SR1_VADDR                           		(0xd80341a8)
#define  HDMI_HDMI_CTS_FIFO_CTL_VADDR                      		(0xd80341ac)
#define  HDMI_CBUS_CLK_CTL_VADDR                           		(0xd80341b0)
#define  HDMI_HDMI_2P0_CR_VADDR                            		(0xd80341b4)
#define  HDMI_SCR_CR_VADDR                                 		(0xd80341b8)
#define  HDMI_CERCR_VADDR                                  		(0xd80341bc)
#define  HDMI_CERSR0_VADDR                                 		(0xd80341c0)
#define  HDMI_CERSR1_VADDR                                 		(0xd80341c4)
#define  HDMI_CERSR2_VADDR                                 		(0xd80341c8)
#define  HDMI_CERSR3_VADDR                                 		(0xd80341cc)
#define  HDMI_CERSR4_VADDR                                 		(0xd80341d0)
#define  HDMI_YUV420_CR_VADDR                              		(0xd80341d4)
#define  HDMI_SCDC_CR_VADDR                                		(0xd80341d8)
#define  HDMI_SCDC_PCR_VADDR                               		(0xd80341dc)
#define  HDMI_SCDC_AP_VADDR                                		(0xd80341e0)
#define  HDMI_SCDC_DP_VADDR                                		(0xd80341e4)
#define  HDMI_CLKDETCR_VADDR                               		(0xd80341e8)
#define  HDMI_CLKDETSR_VADDR                               		(0xd80341ec)
#define  HDMI_GDI_TMDSCLK_SETTING_00_VADDR                 		(0xd80341f0)
#define  HDMI_GDI_TMDSCLK_SETTING_01_VADDR                 		(0xd80341f4)
#define  HDMI_GDI_TMDSCLK_SETTING_02_VADDR                 		(0xd80341f8)
#define  HDMI_HDCP_BIST_VADDR                              		(0xd8034200)
#define  HDMI_HDCP_CR_VADDR                                		(0xd8034204)
#define  HDMI_HDCP_DKAP_VADDR                              		(0xd8034208)
#define  HDMI_HDCP_PCR_VADDR                               		(0xd803420c)
#define  HDMI_HDCP_FLAG1_VADDR                             		(0xd8034210)
#define  HDMI_HDCP_FLAG2_VADDR                             		(0xd8034214)
#define  HDMI_HDCP_AP_VADDR                                		(0xd8034218)
#define  HDMI_HDCP_DP_VADDR                                		(0xd803421c)
#define  HDMI_HDCP_2P2_CR_VADDR                            		(0xd8034220)
#define  HDMI_HDCP_2P2_KS0_VADDR                           		(0xd8034224)
#define  HDMI_HDCP_2P2_KS1_VADDR                           		(0xd8034228)
#define  HDMI_HDCP_2P2_KS2_VADDR                           		(0xd803422c)
#define  HDMI_HDCP_2P2_KS3_VADDR                           		(0xd8034230)
#define  HDMI_HDCP_2P2_LC0_VADDR                           		(0xd8034234)
#define  HDMI_HDCP_2P2_LC1_VADDR                           		(0xd8034238)
#define  HDMI_HDCP_2P2_LC2_VADDR                           		(0xd803423c)
#define  HDMI_HDCP_2P2_LC3_VADDR                           		(0xd8034240)
#define  HDMI_HDCP_2P2_RIV0_VADDR                          		(0xd8034244)
#define  HDMI_HDCP_2P2_RIV1_VADDR                          		(0xd8034248)
#define  HDMI_HDCP_2P2_SR0_VADDR                           		(0xd803424c)
#define  HDMI_HDCP_2P2_SR1_VADDR                           		(0xd8034250)
#define  HDMI_HDCP_MSAP_VADDR                              		(0xd8034254)
#define  HDMI_HDCP_MSDP_VADDR                              		(0xd8034258)
#define  HDMI_HDMI_CMCR_VADDR                              		(0xd8034300)
#define  HDMI_HDMI_MCAPR_VADDR                             		(0xd8034304)
#define  HDMI_HDMI_SCAPR_VADDR                             		(0xd8034308)
#define  HDMI_HDMI_DCAPR0_VADDR                            		(0xd803430c)
#define  HDMI_HDMI_PSCR_VADDR                              		(0xd8034310)
#define  HDMI_HDMI_AFDD_VADDR                              		(0xd803431c)
#define  HDMI_HDMI_FTR_VADDR                               		(0xd8034320)
#define  HDMI_HDMI_FBR_VADDR                               		(0xd8034324)
#define  HDMI_HDMI_ICPSNCR0_VADDR                          		(0xd8034328)
#define  HDMI_HDMI_PCPSNCR0_VADDR                          		(0xd803432c)
#define  HDMI_HDMI_ICTPSR0_VADDR                           		(0xd8034330)
#define  HDMI_HDMI_PCTPSR0_VADDR                           		(0xd8034334)
#define  HDMI_HDMI_ICBPSR0_VADDR                           		(0xd8034338)
#define  HDMI_HDMI_PCBPSR0_VADDR                           		(0xd803433c)
#define  HDMI_HDMI_NTX1024TR0_VADDR                        		(0xd8034340)
#define  HDMI_HDMI_STBPR_VADDR                             		(0xd8034344)
#define  HDMI_HDMI_NCPER_VADDR                             		(0xd8034348)
#define  HDMI_HDMI_PETR_VADDR                              		(0xd803434c)
#define  HDMI_HDMI_AAPNR_VADDR                             		(0xd8034350)
#define  HDMI_HDMI_APDMCR_VADDR                            		(0xd8034354)
#define  HDMI_HDMI_APTMCR0_VADDR                           		(0xd8034358)
#define  HDMI_HDMI_APTMCR1_VADDR                           		(0xd803435c)
#define  HDMI_HDMI_NPECR_VADDR                             		(0xd8034360)
#define  HDMI_HDMI_NROR_VADDR                              		(0xd8034364)
#define  HDMI_HDMI_NTX1024TR0_THRESHOLD_VADDR              		(0xd8034368)
#define  HDMI_HDMI_APLLCR0_VADDR                           		(0xd8034380)
#define  HDMI_HDMI_APLLCR1_VADDR                           		(0xd8034384)
#define  HDMI_HDMI_APLLCR2_VADDR                           		(0xd8034388)
#define  HDMI_HDMI_APLLCR3_VADDR                           		(0xd803438c)
#define  HDMI_HDMI_APLL_TESTM_VADDR                        		(0xd8034390)
#define  HDMI_HDMI_VPLLCR0_VADDR                           		(0xd8034400)
#define  HDMI_HDMI_VPLLCR1_VADDR                           		(0xd8034404)
#define  HDMI_HDMI_VPLLCR2_VADDR                           		(0xd8034408)
#define  HDMI_MN_SCLKG_CTRL_VADDR                          		(0xd8034410)
#define  HDMI_MN_SCLKG_DIVS_VADDR                          		(0xd8034414)
#define  HDMI_MDD_CR_VADDR                                 		(0xd8034500)
#define  HDMI_MDD_SR_VADDR                                 		(0xd8034504)



#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======HDMI register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  tmm:1;
        RBus_UInt32  mt:3;
        RBus_UInt32  ncp:4;
    };
}tmds_msr0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:19;
        RBus_UInt32  tms:1;
        RBus_UInt32  mrs:2;
        RBus_UInt32  ms:2;
        RBus_UInt32  ctc:1;
        RBus_UInt32  vmr:7;
    };
}tmds_msr1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  crc_r_en:1;
        RBus_UInt32  crc_g_en:1;
        RBus_UInt32  crc_b_en:1;
        RBus_UInt32  crc_done:1;
        RBus_UInt32  crc_nonstable:1;
        RBus_UInt32  crcts:2;
        RBus_UInt32  crcc:1;
    };
}tmds_crcc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  crcob2_3:8;
        RBus_UInt32  crcob2_2:8;
        RBus_UInt32  crcob2_1:8;
    };
}tmds_crco0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  crcob2_6:8;
        RBus_UInt32  crcob2_5:8;
        RBus_UInt32  crcob2_4:8;
    };
}tmds_crco1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  bcd:1;
        RBus_UInt32  gcd:1;
        RBus_UInt32  rcd:1;
        RBus_UInt32  ho:1;
        RBus_UInt32  yo:1;
        RBus_UInt32  dummy98034014_2_0:3;
    };
}tmds_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:18;
        RBus_UInt32  trcoe_r:1;
        RBus_UInt32  tgcoe_r:1;
        RBus_UInt32  tbcoe_r:1;
        RBus_UInt32  ocke_r:1;
        RBus_UInt32  aoe:1;
        RBus_UInt32  trcoe:1;
        RBus_UInt32  tgcoe:1;
        RBus_UInt32  tbcoe:1;
        RBus_UInt32  ocke:1;
        RBus_UInt32  ockie:1;
        RBus_UInt32  dummy98034018_3:1;
        RBus_UInt32  dummy98034018_2:1;
        RBus_UInt32  dummy98034018_1:1;
        RBus_UInt32  dummy98034018_0:1;
    };
}tmds_outctl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ecc_r:1;
        RBus_UInt32  erip_r:1;
        RBus_UInt32  egip_r:1;
        RBus_UInt32  ebip_r:1;
        RBus_UInt32  dummy9803401c_27_10:18;
        RBus_UInt32  video_preamble_off_en:1;
        RBus_UInt32  hs_width_sel:1;
        RBus_UInt32  deo:1;
        RBus_UInt32  brcw:1;
        RBus_UInt32  pnsw:1;
        RBus_UInt32  iccaf:1;
        RBus_UInt32  ecc:1;
        RBus_UInt32  erip:1;
        RBus_UInt32  egip:1;
        RBus_UInt32  ebip:1;
    };
}tmds_pwdctl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  hde:1;
    };
}tmds_z0cc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:22;
        RBus_UInt32  pll_div2_en:1;
        RBus_UInt32  no_clk_in:1;
        RBus_UInt32  clkv_meas_sel:2;
        RBus_UInt32  de_inv_disable:1;
        RBus_UInt32  de_err_pulse_en:1;
        RBus_UInt32  clr_infoframe_dvi:1;
        RBus_UInt32  auto_dvi2hdmi:1;
        RBus_UInt32  dummy98034024_1_0:2;
    };
}tmds_cps_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:22;
        RBus_UInt32  debug_sel:6;
        RBus_UInt32  dummy98034028_3:1;
        RBus_UInt32  cptest:1;
        RBus_UInt32  hmtm:2;
    };
}tmds_udc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:29;
        RBus_UInt32  nl:3;
    };
}tmds_errc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  tmds_bypass:1;
        RBus_UInt32  dummy98034030_6_0:7;
    };
}tmds_out_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  tmds_rout_h:8;
        RBus_UInt32  tmds_rout_l:8;
    };
}tmds_rout_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  tmds_gout_h:8;
        RBus_UInt32  tmds_gout_l:8;
    };
}tmds_gout_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  tmds_bout_h:8;
        RBus_UInt32  tmds_bout_l:8;
    };
}tmds_bout_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:22;
        RBus_UInt32  dpc_pp_valid:1;
        RBus_UInt32  dpc_default_ph:1;
        RBus_UInt32  dpc_pp:4;
        RBus_UInt32  dpc_cd:4;
    };
}tmds_dpc0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:13;
        RBus_UInt32  dpc_cd_chg_flag:1;
        RBus_UInt32  dpc_cd_chg_wd_en:1;
        RBus_UInt32  dpc_cd_chg_int_en:1;
        RBus_UInt32  dummy98034044_15_11:5;
        RBus_UInt32  dpc_auto:1;
        RBus_UInt32  dpc_pp_valid_fw:1;
        RBus_UInt32  dpc_default_ph_fw:1;
        RBus_UInt32  dpc_pp_fw:4;
        RBus_UInt32  dpc_cd_fw:4;
    };
}tmds_dpc1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:23;
        RBus_UInt32  dpc_bypass_dis:1;
        RBus_UInt32  dpc_en:1;
        RBus_UInt32  phase_errcnt_in:3;
        RBus_UInt32  phase_clrcnt_in:3;
        RBus_UInt32  phase_clr_sel:1;
    };
}tmds_dpc_set0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  set_full_noti:4;
        RBus_UInt32  set_empty_noti:4;
    };
}tmds_dpc_set1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  fifo_errcnt_in:3;
        RBus_UInt32  clr_phase_flag:1;
        RBus_UInt32  clr_fifo_flag:1;
        RBus_UInt32  dpc_phase_ok:1;
        RBus_UInt32  dpc_phase_err_flag:1;
        RBus_UInt32  dpc_fifo_err_flag:1;
    };
}tmds_dpc_set2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  dpc_fifo_over_flag:1;
        RBus_UInt32  dpc_fifo_under_flag:1;
        RBus_UInt32  dpc_fifo_over_xflag:1;
        RBus_UInt32  dpc_fifo_under_xflag:1;
        RBus_UInt32  res2:4;
    };
}tmds_dpc_set3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  de_sel:1;
        RBus_UInt32  tran_err_thrd:4;
        RBus_UInt32  neg_de_err_thrd:4;
        RBus_UInt32  pos_de_err_thrd:4;
        RBus_UInt32  dummy98034058_15:1;
        RBus_UInt32  neg_de_lowbd:7;
        RBus_UInt32  dummy98034058_7_6:2;
        RBus_UInt32  pos_de_lowbd:6;
    };
}tmds_det_ctl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:23;
        RBus_UInt32  red_tran_err_flag:1;
        RBus_UInt32  grn_tran_err_flag:1;
        RBus_UInt32  blu_tran_err_flag:1;
        RBus_UInt32  red_pos_de_err_flag:1;
        RBus_UInt32  grn_pos_de_err_flag:1;
        RBus_UInt32  blu_pos_de_err_flag:1;
        RBus_UInt32  red_neg_de_err_flag:1;
        RBus_UInt32  grn_neg_de_err_flag:1;
        RBus_UInt32  blu_neg_de_err_flag:1;
    };
}tmds_det_sts_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  thd:16;
        RBus_UInt32  res1:3;
        RBus_UInt32  disparity_reset_mode:1;
        RBus_UInt32  irq_en:1;
        RBus_UInt32  reset:1;
        RBus_UInt32  period:6;
        RBus_UInt32  ch_sel:2;
        RBus_UInt32  mode:1;
        RBus_UInt32  en:1;
    };
}video_bit_err_det_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ad_max_b:6;
        RBus_UInt32  ad_min_b:6;
        RBus_UInt32  no_dis_reset_b:1;
        RBus_UInt32  bit_err_thd_b:1;
        RBus_UInt32  bit_err_b:1;
        RBus_UInt32  bit_err_cnt_of_b:1;
        RBus_UInt32  bit_err_cnt_b:16;
    };
}video_bit_err_status_b_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ad_max_g:6;
        RBus_UInt32  ad_min_g:6;
        RBus_UInt32  no_dis_reset_g:1;
        RBus_UInt32  bit_err_thd_g:1;
        RBus_UInt32  bit_err_g:1;
        RBus_UInt32  bit_err_cnt_of_g:1;
        RBus_UInt32  bit_err_cnt_g:16;
    };
}video_bit_err_status_g_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ad_max_r:6;
        RBus_UInt32  ad_min_r:6;
        RBus_UInt32  no_dis_reset_r:1;
        RBus_UInt32  bit_err_thd_r:1;
        RBus_UInt32  bit_err_r:1;
        RBus_UInt32  bit_err_cnt_of_r:1;
        RBus_UInt32  bit_err_cnt_r:16;
    };
}video_bit_err_status_r_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  terc4_thd:16;
    };
}terc4_err_det_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:13;
        RBus_UInt32  terc4_err_thd_b:1;
        RBus_UInt32  terc4_err_b:1;
        RBus_UInt32  terc4_err_cnt_of_b:1;
        RBus_UInt32  terc4_err_cnt_b:16;
    };
}terc4_err_status_b_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:13;
        RBus_UInt32  terc4_err_thd_g:1;
        RBus_UInt32  terc4_err_g:1;
        RBus_UInt32  terc4_err_cnt_of_g:1;
        RBus_UInt32  terc4_err_cnt_g:16;
    };
}terc4_err_status_g_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:13;
        RBus_UInt32  terc4_err_thd_r:1;
        RBus_UInt32  terc4_err_r:1;
        RBus_UInt32  terc4_err_cnt_of_r:1;
        RBus_UInt32  terc4_err_cnt_r:16;
    };
}terc4_err_status_r_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  avmute_bg:1;
        RBus_UInt32  avmute:1;
        RBus_UInt32  vic:1;
        RBus_UInt32  spdiftype:1;
        RBus_UInt32  pllsts:1;
        RBus_UInt32  afifoof:1;
        RBus_UInt32  afifouf:1;
        RBus_UInt32  mode:1;
    };
}hdmi_sr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:17;
        RBus_UInt32  fvsps:1;
        RBus_UInt32  gmps_v:1;
        RBus_UInt32  vsps_v:1;
        RBus_UInt32  gmps:1;
        RBus_UInt32  vsps:1;
        RBus_UInt32  nps:1;
        RBus_UInt32  dummy98034084_8:1;
        RBus_UInt32  dummy98034084_7:1;
        RBus_UInt32  pis_6:1;
        RBus_UInt32  pis_5:1;
        RBus_UInt32  pvs_4:1;
        RBus_UInt32  pvs_3:1;
        RBus_UInt32  pvs_2:1;
        RBus_UInt32  pvs_1:1;
        RBus_UInt32  pvs_0:1;
    };
}hdmi_gpvs_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:23;
        RBus_UInt32  apss:9;
    };
}hdmi_psap_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  dpss:8;
    };
}hdmi_psdp_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  nval:8;
        RBus_UInt32  res2:1;
        RBus_UInt32  no_vs_det_en:1;
        RBus_UInt32  dvi_reset_ds_cm_en:1;
        RBus_UInt32  packet_ignore:1;
        RBus_UInt32  mode:1;
        RBus_UInt32  msmode:1;
        RBus_UInt32  cabs:1;
        RBus_UInt32  fcddip:1;
    };
}hdmi_scr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  res2:2;
        RBus_UInt32  spcss:1;
        RBus_UInt32  enrwe:1;
        RBus_UInt32  bche:1;
        RBus_UInt32  bches:1;
        RBus_UInt32  bches2:1;
        RBus_UInt32  pe:1;
    };
}hdmi_bchcr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:21;
        RBus_UInt32  wd_ptg_en:1;
        RBus_UInt32  wd_vclk_en:1;
        RBus_UInt32  avmute_flag:1;
        RBus_UInt32  avmute_win_en:1;
        RBus_UInt32  aoc:1;
        RBus_UInt32  aomc:1;
        RBus_UInt32  awd:1;
        RBus_UInt32  ve:1;
        RBus_UInt32  ampic:1;
        RBus_UInt32  vdpic:1;
        RBus_UInt32  nfpss:1;
    };
}hdmi_avmcr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  wdm:1;
        RBus_UInt32  wds:1;
        RBus_UInt32  awdch:1;
        RBus_UInt32  vwdch:1;
        RBus_UInt32  vwdap:1;
        RBus_UInt32  vwdlf:1;
        RBus_UInt32  vwdafo:1;
        RBus_UInt32  vwdafu:1;
        RBus_UInt32  yv:4;
        RBus_UInt32  awdck:1;
        RBus_UInt32  awdlf:1;
        RBus_UInt32  ch_st_sel:1;
        RBus_UInt32  vwdact:1;
        RBus_UInt32  xv:4;
        RBus_UInt32  asmfe:1;
        RBus_UInt32  load_d:1;
        RBus_UInt32  bt_track_en:1;
        RBus_UInt32  awdct:1;
        RBus_UInt32  awdap:1;
        RBus_UInt32  awdfo:1;
        RBus_UInt32  awdfu:1;
        RBus_UInt32  ct:1;
    };
}hdmi_wdcr0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:28;
        RBus_UInt32  aldbfv:1;
        RBus_UInt32  aldbfo:1;
        RBus_UInt32  aldbfu:1;
        RBus_UInt32  aldbpn:1;
    };
}hdmi_dbcr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:25;
        RBus_UInt32  awdpvsb:7;
    };
}hdmi_awdsr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:25;
        RBus_UInt32  vwdpvsb:7;
    };
}hdmi_vwdsr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:25;
        RBus_UInt32  icpvsb:7;
    };
}hdmi_pamicr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy980340b0_31_24:8;
        RBus_UInt32  dummy980340b0_23_16:8;
        RBus_UInt32  pt2:8;
        RBus_UInt32  pt1:8;
    };
}hdmi_ptrsv1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pvsef:32;
    };
}hdmi_pvgcr0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pvs:32;
    };
}hdmi_pvsr0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  cbus_ddc_chsel:1;
        RBus_UInt32  hdmi_field:1;
        RBus_UInt32  int_pro_chg_flag:1;
        RBus_UInt32  int_pro_chg_wd_en:1;
        RBus_UInt32  int_pro_chg_int_en:1;
        RBus_UInt32  hdcp_ddc_chsel:2;
        RBus_UInt32  iclk_sel:2;
        RBus_UInt32  csc_r:2;
        RBus_UInt32  hdirq:1;
        RBus_UInt32  csam:1;
        RBus_UInt32  csc:2;
        RBus_UInt32  field_decide_sel:1;
        RBus_UInt32  prdsam:1;
        RBus_UInt32  dsc_r:4;
        RBus_UInt32  eoi:1;
        RBus_UInt32  eot:1;
        RBus_UInt32  se:1;
        RBus_UInt32  rs:1;
        RBus_UInt32  dsc:4;
    };
}hdmi_vcr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:30;
        RBus_UInt32  pucnr:1;
        RBus_UInt32  pucsr:1;
    };
}hdmi_acrcr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  cts:20;
    };
}hdmi_acrsr0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  n:20;
    };
}hdmi_acrsr1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  cs:16;
    };
}hdmi_acs0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  cs:24;
    };
}hdmi_acs1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  pending:1;
        RBus_UInt32  avmute:1;
        RBus_UInt32  fifod:1;
        RBus_UInt32  act:1;
        RBus_UInt32  apll:1;
        RBus_UInt32  afifoo:1;
        RBus_UInt32  afifou:1;
        RBus_UInt32  vc:1;
    };
}hdmi_intcr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  lo1:2;
        RBus_UInt32  lo2:2;
        RBus_UInt32  lo3:2;
        RBus_UInt32  lo4:2;
    };
}hdmi_alcr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:23;
        RBus_UInt32  i2s_clk_en_dvi:1;
        RBus_UInt32  spdifo1:1;
        RBus_UInt32  spdifo2:1;
        RBus_UInt32  spdifo3:1;
        RBus_UInt32  spdifo4:1;
        RBus_UInt32  i2so1:1;
        RBus_UInt32  i2so2:1;
        RBus_UInt32  i2so3:1;
        RBus_UInt32  i2so4:1;
    };
}hdmi_aocr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:26;
        RBus_UInt32  nvlgb:1;
        RBus_UInt32  nalgb:1;
        RBus_UInt32  natgb:1;
        RBus_UInt32  ngb:1;
        RBus_UInt32  pe:1;
        RBus_UInt32  gcp:1;
    };
}hdmi_bcsr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:29;
        RBus_UInt32  fsre:1;
        RBus_UInt32  fsif:1;
        RBus_UInt32  fscs:1;
    };
}hdmi_asr0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:25;
        RBus_UInt32  fbif:3;
        RBus_UInt32  fbcs:4;
    };
}hdmi_asr1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:21;
        RBus_UInt32  hvf:3;
        RBus_UInt32  hdmi_vic:8;
    };
}hdmi_video_format_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  hdmi_3d_ext_data:4;
        RBus_UInt32  hdmi_3d_metadata_type:3;
        RBus_UInt32  res2:1;
        RBus_UInt32  hdmi_3d_structure:4;
        RBus_UInt32  hdmi_3d_meta_present:1;
        RBus_UInt32  res3:3;
    };
}hdmi_3d_format_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:17;
        RBus_UInt32  info_3d_preferred2dview:2;
        RBus_UInt32  info_3d_viewdependency:2;
        RBus_UInt32  info_3d_dualview:1;
        RBus_UInt32  info_3d_additionalinfo_present:1;
        RBus_UInt32  info_3d_f_ext_data:4;
        RBus_UInt32  info_3d_f_structure:4;
        RBus_UInt32  info_3d_valid:1;
    };
}hdmi_fvsi_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:7;
        RBus_UInt32  r_ch_afifo_en:1;
        RBus_UInt32  g_ch_afifo_en:1;
        RBus_UInt32  b_ch_afifo_en:1;
        RBus_UInt32  ch_sync_sel:2;
        RBus_UInt32  dummy980340f8_19_17:3;
        RBus_UInt32  rden_thr:5;
        RBus_UInt32  dummy980340f8_11_9:3;
        RBus_UInt32  udwater_thr:5;
        RBus_UInt32  dummy980340f8_3_2:2;
        RBus_UInt32  flush:1;
        RBus_UInt32  ch_afifo_irq_en:1;
    };
}ch_cr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  rgb_de_align_flag:1;
        RBus_UInt32  r_rwclk_det_timeout_flag:1;
        RBus_UInt32  r_wrclk_det_timeout_flag:1;
        RBus_UInt32  g_rwclk_det_timeout_flag:1;
        RBus_UInt32  g_wrclk_det_timeout_flag:1;
        RBus_UInt32  b_rwclk_det_timeout_flag:1;
        RBus_UInt32  b_wrclk_det_timeout_flag:1;
        RBus_UInt32  r_rudflow_flag:1;
        RBus_UInt32  r_wovflow_flag:1;
        RBus_UInt32  r_rflush_flag:1;
        RBus_UInt32  r_rw_water_lv:5;
        RBus_UInt32  g_rudflow_flag:1;
        RBus_UInt32  g_wovflow_flag:1;
        RBus_UInt32  g_rflush_flag:1;
        RBus_UInt32  g_rw_water_lv:5;
        RBus_UInt32  b_rudflow_flag:1;
        RBus_UInt32  b_wovflow_flag:1;
        RBus_UInt32  b_rflush_flag:1;
        RBus_UInt32  b_rw_water_lv:5;
    };
}ch_sr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:28;
        RBus_UInt32  en_ncts_chg_irq:1;
        RBus_UInt32  ncts_chg_irq:1;
        RBus_UInt32  en_ch_status_chg_irq:1;
        RBus_UInt32  ch_status_chg_irq:1;
    };
}audio_sample_rate_change_irq_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:29;
        RBus_UInt32  hbr_audio_mode_manual:1;
        RBus_UInt32  hbr_audio_mode_fw:1;
        RBus_UInt32  hbr_audio_mode:1;
    };
}high_bit_rate_audio_packet_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy98034108_31_14:18;
        RBus_UInt32  gain_bypass_en:1;
        RBus_UInt32  afifof:1;
        RBus_UInt32  afifoe:1;
        RBus_UInt32  afifowe_r:1;
        RBus_UInt32  afifore_r:2;
        RBus_UInt32  tst_i2s_sw:1;
        RBus_UInt32  aoem:1;
        RBus_UInt32  aoc:1;
        RBus_UInt32  audio_test_enable:1;
        RBus_UInt32  mgc:1;
        RBus_UInt32  afifowe:1;
        RBus_UInt32  afifore:2;
    };
}hdmi_afcr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  audio_bist_clksel:1;
    };
}hdmi_afsr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  agi:3;
        RBus_UInt32  agd:5;
        RBus_UInt32  mg:8;
    };
}hdmi_magcr0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  ldp_time:10;
        RBus_UInt32  ldp_time_mode:1;
        RBus_UInt32  fg_r:8;
        RBus_UInt32  fg_l:8;
        RBus_UInt32  auto_dly_mod:1;
        RBus_UInt32  fg_en:1;
        RBus_UInt32  ffg_l:1;
        RBus_UInt32  ffg_r:1;
    };
}hdmi_mag_m_final_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  zcd_ch7_done:1;
        RBus_UInt32  zcd_ch6_done:1;
        RBus_UInt32  zcd_ch5_done:1;
        RBus_UInt32  zcd_ch4_done:1;
        RBus_UInt32  zcd_ch3_done:1;
        RBus_UInt32  zcd_ch2_done:1;
        RBus_UInt32  zcd_ch1_done:1;
        RBus_UInt32  zcd_ch0_done:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  zcd_timeout:7;
        RBus_UInt32  zcd_en:1;
        RBus_UInt32  zcd_sep_8ch:1;
        RBus_UInt32  zcd_sep_st:1;
        RBus_UInt32  dummy98034118_4_0:5;
    };
}zcd_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  xtal_div:8;
        RBus_UInt32  afreq_meas_result:12;
        RBus_UInt32  afreq_meas_range:3;
        RBus_UInt32  popup_afreq_meas_result:1;
        RBus_UInt32  audio_freq_detect:1;
        RBus_UInt32  auto_load_scode:1;
        RBus_UInt32  awd_by_freqchange:1;
        RBus_UInt32  awd_by_noaudio:1;
        RBus_UInt32  irq_by_freqchange:1;
        RBus_UInt32  irq_by_noaudio:1;
        RBus_UInt32  freqchange:1;
        RBus_UInt32  noaudio:1;
    };
}audio_freqdet_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  range0_th:12;
        RBus_UInt32  range1_th:12;
    };
}range0_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  range2_th:12;
        RBus_UInt32  range3_th:12;
    };
}range2_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  range4_th:12;
        RBus_UInt32  range5_th:12;
    };
}range4_5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pre_set_s1_code3:1;
        RBus_UInt32  pre_set_s_code3:7;
        RBus_UInt32  pre_set_s1_code2:1;
        RBus_UInt32  pre_set_s_code2:7;
        RBus_UInt32  pre_set_s1_code1:1;
        RBus_UInt32  pre_set_s_code1:7;
        RBus_UInt32  pre_set_s1_code0:1;
        RBus_UInt32  pre_set_s_code0:7;
    };
}preset_s_code0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  dp_abuf_wr_mod_en:1;
        RBus_UInt32  auto_stop_trk_en:1;
        RBus_UInt32  trk_mod_en:1;
        RBus_UInt32  afsm_mod_en:1;
        RBus_UInt32  res2:4;
        RBus_UInt32  pre_set_sm_code0:1;
        RBus_UInt32  pre_set_sm_code1:1;
        RBus_UInt32  pre_set_sm_code2:1;
        RBus_UInt32  pre_set_sm_code3:1;
        RBus_UInt32  pre_set_sm_code4:1;
        RBus_UInt32  res3:3;
        RBus_UInt32  pre_set_s1_code4:1;
        RBus_UInt32  pre_set_s_code4:7;
    };
}preset_s_code1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  prbs23_rxen:1;
        RBus_UInt32  prbs_rxbist_err_cnt:8;
        RBus_UInt32  prbs_err_cnt:4;
        RBus_UInt32  res2:2;
        RBus_UInt32  prbs_bit_err:10;
        RBus_UInt32  prbs_lock:1;
        RBus_UInt32  prbs_err_cnt_clr:1;
        RBus_UInt32  prbs_reverse:1;
        RBus_UInt32  prbs7_rxen:1;
    };
}prbs_r_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  prbs23_rxen:1;
        RBus_UInt32  prbs_rxbist_err_cnt:8;
        RBus_UInt32  prbs_err_cnt:4;
        RBus_UInt32  res2:2;
        RBus_UInt32  prbs_bit_err:10;
        RBus_UInt32  prbs_lock:1;
        RBus_UInt32  prbs_err_cnt_clr:1;
        RBus_UInt32  prbs_reverse:1;
        RBus_UInt32  prbs7_rxen:1;
    };
}prbs_g_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  prbs23_rxen:1;
        RBus_UInt32  prbs_rxbist_err_cnt:8;
        RBus_UInt32  prbs_err_cnt:4;
        RBus_UInt32  res2:2;
        RBus_UInt32  prbs_bit_err:10;
        RBus_UInt32  prbs_lock:1;
        RBus_UInt32  prbs_err_cnt_clr:1;
        RBus_UInt32  prbs_reverse:1;
        RBus_UInt32  prbs7_rxen:1;
    };
}prbs_b_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  cmp_err_flag:1;
        RBus_UInt32  cmp_err_wd_en:1;
        RBus_UInt32  cmp_err_int_en:1;
        RBus_UInt32  preamble:4;
        RBus_UInt32  res2:6;
        RBus_UInt32  cmp_value:10;
        RBus_UInt32  res3:3;
        RBus_UInt32  dvi_mode_sel:1;
        RBus_UInt32  channel_sel:2;
        RBus_UInt32  lgb_cal_conti:1;
        RBus_UInt32  lgb_cal_en:1;
    };
}hdmi_leading_gb_cmp_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cmp_err_cnt:16;
        RBus_UInt32  cmp_times:16;
    };
}hdmi_leading_gb_cmp_times_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  preamble_cmp_cnt:16;
        RBus_UInt32  preamble_cmp_cnt_by_frame:16;
    };
}hdmi_leading_gb_cmp_cnt_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cts_over_flag:1;
        RBus_UInt32  res1:10;
        RBus_UInt32  cts_clip_en:1;
        RBus_UInt32  cts_up_bound:20;
    };
}audio_cts_up_bound_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cts_under_flag:1;
        RBus_UInt32  res1:11;
        RBus_UInt32  cts_low_bound:20;
    };
}audio_cts_low_bound_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  n_over_flag:1;
        RBus_UInt32  res1:10;
        RBus_UInt32  n_clip_en:1;
        RBus_UInt32  n_up_bound:20;
    };
}audio_n_up_bound_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  n_under_flag:1;
        RBus_UInt32  res1:11;
        RBus_UInt32  n_low_bound:20;
    };
}audio_n_low_bound_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  hporch_offset:10;
        RBus_UInt32  dummy9803415c_15_14:2;
        RBus_UInt32  en_packet_retiming_vsrst:1;
        RBus_UInt32  pp_mode_output:1;
        RBus_UInt32  res2:3;
        RBus_UInt32  packet_mhl_en:1;
        RBus_UInt32  xor_pixel_sel:3;
        RBus_UInt32  cal_pixel_sel:1;
        RBus_UInt32  res3:3;
        RBus_UInt32  ch_dec_pp_mode_en:1;
    };
}mhl_hdmi_mac_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  mhl_3d_fmt:4;
        RBus_UInt32  mhl_vid:2;
        RBus_UInt32  oui:24;
    };
}mhl_3d_format_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:13;
        RBus_UInt32  mhl_hev_fmt:2;
        RBus_UInt32  sep_aud:1;
        RBus_UInt32  mhl_hev_fmt_type:16;
    };
}mhl_3p0_format0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  acrfs_div:3;
        RBus_UInt32  av_delay_dir:1;
        RBus_UInt32  av_delay_sync:20;
    };
}mhl_3p0_format1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:23;
        RBus_UInt32  yuv420_ls3:1;
        RBus_UInt32  yuv420_ls2:1;
        RBus_UInt32  yuv420_ls1:1;
        RBus_UInt32  yuv420_ls0:1;
        RBus_UInt32  hdcp_2p2_ls1:1;
        RBus_UInt32  hdcp_2p2_ls0:1;
        RBus_UInt32  hdcp_ksvfifo_ls:1;
        RBus_UInt32  hdcp_ls:1;
        RBus_UInt32  audio_ls:1;
    };
}light_sleep_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  yuv420_rm3:4;
        RBus_UInt32  yuv420_rm2:4;
        RBus_UInt32  yuv420_rm1:4;
        RBus_UInt32  yuv420_rm0:4;
    };
}read_margin2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:23;
        RBus_UInt32  yuv420_rme3:1;
        RBus_UInt32  yuv420_rme2:1;
        RBus_UInt32  yuv420_rme1:1;
        RBus_UInt32  yuv420_rme0:1;
        RBus_UInt32  hdcp_2p2_rme1:1;
        RBus_UInt32  hdcp_2p2_rme0:1;
        RBus_UInt32  hdcp_ksvfifo_rme:1;
        RBus_UInt32  hdcp_rme:1;
        RBus_UInt32  audio_rme:1;
    };
}read_margin_enable_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  hdcp_2p2_rm1:4;
        RBus_UInt32  hdcp_2p2_rm0:4;
        RBus_UInt32  hdcp_ksvfifo_rm:4;
        RBus_UInt32  hdcp_rm:4;
        RBus_UInt32  audio_rm:4;
    };
}read_margin_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:27;
        RBus_UInt32  yuv420_bist_en:1;
        RBus_UInt32  hdcp_2p2_bist_en:1;
        RBus_UInt32  hdcp_ksvfifo_bist_en:1;
        RBus_UInt32  hdcp_bist_en:1;
        RBus_UInt32  audio_bist_en:1;
    };
}bist_mode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:27;
        RBus_UInt32  yuv420_bist_done:1;
        RBus_UInt32  hdcp_2p2_bist_done:1;
        RBus_UInt32  hdcp_ksvfifo_bist_done:1;
        RBus_UInt32  hdcp_bist_done:1;
        RBus_UInt32  audio_bist_done:1;
    };
}bist_done_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:27;
        RBus_UInt32  yuv420_bist_fail:1;
        RBus_UInt32  hdcp_2p2_bist_fail:1;
        RBus_UInt32  hdcp_ksvfifo_bist_fail:1;
        RBus_UInt32  hdcp_bist_fail:1;
        RBus_UInt32  audio_bist_fail:1;
    };
}bist_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:27;
        RBus_UInt32  yuv420_drf_mode:1;
        RBus_UInt32  hdcp_2p2_drf_mode:1;
        RBus_UInt32  hdcp_ksvfifo_drf_mode:1;
        RBus_UInt32  hdcp_drf_mode:1;
        RBus_UInt32  audio_drf_mode:1;
    };
}drf_mode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:27;
        RBus_UInt32  yuv420_drf_resume:1;
        RBus_UInt32  hdcp_2p2_drf_resume:1;
        RBus_UInt32  hdcp_ksvfifo_drf_resume:1;
        RBus_UInt32  hdcp_drf_resume:1;
        RBus_UInt32  audio_drf_resume:1;
    };
}drf_resume_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:27;
        RBus_UInt32  yuv420_drf_done:1;
        RBus_UInt32  hdcp_2p2_drf_done:1;
        RBus_UInt32  hdcp_ksvfifo_drf_done:1;
        RBus_UInt32  hdcp_drf_done:1;
        RBus_UInt32  audio_drf_done:1;
    };
}drf_done_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:27;
        RBus_UInt32  yuv420_drf_pause:1;
        RBus_UInt32  hdcp_2p2_drf_pause:1;
        RBus_UInt32  hdcp_ksvfifo_drf_pause:1;
        RBus_UInt32  hdcp_drf_pause:1;
        RBus_UInt32  audio_drf_pause:1;
    };
}drf_pause_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:27;
        RBus_UInt32  yuv420_drf_fail:1;
        RBus_UInt32  hdcp_2p2_drf_fail:1;
        RBus_UInt32  hdcp_ksvfifo_drf_fail:1;
        RBus_UInt32  hdcp_drf_fail:1;
        RBus_UInt32  audio_drf_fail:1;
    };
}drf_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  port2_rclk_inv:1;
        RBus_UInt32  port2_gclk_inv:1;
        RBus_UInt32  port2_bclk_inv:1;
        RBus_UInt32  port1_rclk_inv:1;
        RBus_UInt32  port1_gclk_inv:1;
        RBus_UInt32  port1_bclk_inv:1;
        RBus_UInt32  port0_rclk_inv:1;
        RBus_UInt32  port0_gclk_inv:1;
        RBus_UInt32  port0_bclk_inv:1;
        RBus_UInt32  port_sel:2;
        RBus_UInt32  port2_r_flush:1;
        RBus_UInt32  port2_r_afifo_en:1;
        RBus_UInt32  port2_g_flush:1;
        RBus_UInt32  port2_g_afifo_en:1;
        RBus_UInt32  port2_b_flush:1;
        RBus_UInt32  port2_b_afifo_en:1;
        RBus_UInt32  dummy980341a0_13:1;
        RBus_UInt32  port1_r_flush:1;
        RBus_UInt32  port1_r_afifo_en:1;
        RBus_UInt32  port1_g_flush:1;
        RBus_UInt32  port1_g_afifo_en:1;
        RBus_UInt32  port1_b_flush:1;
        RBus_UInt32  port1_b_afifo_en:1;
        RBus_UInt32  dummy980341a0_6:1;
        RBus_UInt32  port0_r_flush:1;
        RBus_UInt32  port0_r_afifo_en:1;
        RBus_UInt32  port0_g_flush:1;
        RBus_UInt32  port0_g_afifo_en:1;
        RBus_UInt32  port0_b_flush:1;
        RBus_UInt32  port0_b_afifo_en:1;
    };
}phy_fifo_cr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  port1_r_wrclk_det_timeout_flag:1;
        RBus_UInt32  port1_r_rwclk_det_timeout_flag:1;
        RBus_UInt32  port1_r_wovflow_flag:1;
        RBus_UInt32  port1_r_rudflow_flag:1;
        RBus_UInt32  port1_r_rflush_flag:1;
        RBus_UInt32  port1_g_wrclk_det_timeout_flag:1;
        RBus_UInt32  port1_g_rwclk_det_timeout_flag:1;
        RBus_UInt32  port1_g_wovflow_flag:1;
        RBus_UInt32  port1_g_rudflow_flag:1;
        RBus_UInt32  port1_g_rflush_flag:1;
        RBus_UInt32  port1_b_wrclk_det_timeout_flag:1;
        RBus_UInt32  port1_b_rwclk_det_timeout_flag:1;
        RBus_UInt32  port1_b_wovflow_flag:1;
        RBus_UInt32  port1_b_rudflow_flag:1;
        RBus_UInt32  port1_b_rflush_flag:1;
        RBus_UInt32  port0_r_wrclk_det_timeout_flag:1;
        RBus_UInt32  port0_r_rwclk_det_timeout_flag:1;
        RBus_UInt32  port0_r_wovflow_flag:1;
        RBus_UInt32  port0_r_rudflow_flag:1;
        RBus_UInt32  port0_r_rflush_flag:1;
        RBus_UInt32  port0_g_wrclk_det_timeout_flag:1;
        RBus_UInt32  port0_g_rwclk_det_timeout_flag:1;
        RBus_UInt32  port0_g_wovflow_flag:1;
        RBus_UInt32  port0_g_rudflow_flag:1;
        RBus_UInt32  port0_g_rflush_flag:1;
        RBus_UInt32  port0_b_wrclk_det_timeout_flag:1;
        RBus_UInt32  port0_b_rwclk_det_timeout_flag:1;
        RBus_UInt32  port0_b_wovflow_flag:1;
        RBus_UInt32  port0_b_rudflow_flag:1;
        RBus_UInt32  port0_b_rflush_flag:1;
    };
}phy_fifo_sr0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:17;
        RBus_UInt32  port2_r_wrclk_det_timeout_flag:1;
        RBus_UInt32  port2_r_rwclk_det_timeout_flag:1;
        RBus_UInt32  port2_r_wovflow_flag:1;
        RBus_UInt32  port2_r_rudflow_flag:1;
        RBus_UInt32  port2_r_rflush_flag:1;
        RBus_UInt32  port2_g_wrclk_det_timeout_flag:1;
        RBus_UInt32  port2_g_rwclk_det_timeout_flag:1;
        RBus_UInt32  port2_g_wovflow_flag:1;
        RBus_UInt32  port2_g_rudflow_flag:1;
        RBus_UInt32  port2_g_rflush_flag:1;
        RBus_UInt32  port2_b_wrclk_det_timeout_flag:1;
        RBus_UInt32  port2_b_rwclk_det_timeout_flag:1;
        RBus_UInt32  port2_b_wovflow_flag:1;
        RBus_UInt32  port2_b_rudflow_flag:1;
        RBus_UInt32  port2_b_rflush_flag:1;
    };
}phy_fifo_sr1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:14;
        RBus_UInt32  force_ctsfifo_rstn_phy_dbgout_r:1;
        RBus_UInt32  en_ctsfifo_bypass_phy_dbgout_r:1;
        RBus_UInt32  force_ctsfifo_rstn_phy_dbgout_g:1;
        RBus_UInt32  en_ctsfifo_bypass_phy_dbgout_g:1;
        RBus_UInt32  force_ctsfifo_rstn_phy_dbgout_b:1;
        RBus_UInt32  en_ctsfifo_bypass_phy_dbgout_b:1;
        RBus_UInt32  dummy980341ac_11:1;
        RBus_UInt32  debug_select:1;
        RBus_UInt32  hdmi_2x_out_sel:2;
        RBus_UInt32  hdmi_test_sel:4;
        RBus_UInt32  hdmi_out_sel:1;
        RBus_UInt32  force_ctsfifo_rstn_hdmi:1;
        RBus_UInt32  en_ctsfifo_vsrst_hdmi:1;
        RBus_UInt32  en_ctsfifo_bypass_hdmi:1;
    };
}hdmi_cts_fifo_ctl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:25;
        RBus_UInt32  dummy980341b0_6_4:3;
        RBus_UInt32  res2:2;
        RBus_UInt32  dummy980341b0_1:1;
        RBus_UInt32  dummy980341b0_0:1;
    };
}cbus_clk_ctl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:23;
        RBus_UInt32  gating_en:1;
        RBus_UInt32  ctr_char_num:7;
        RBus_UInt32  hdmi_2p0_en:1;
    };
}hdmi_2p0_cr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:14;
        RBus_UInt32  char_lock:1;
        RBus_UInt32  uscr_fall_bound_err_r:1;
        RBus_UInt32  uscr_fall_bound_err_g:1;
        RBus_UInt32  uscr_fall_bound_err_b:1;
        RBus_UInt32  uscr_per_glitch_r:1;
        RBus_UInt32  uscr_per_glitch_g:1;
        RBus_UInt32  uscr_per_glitch_b:1;
        RBus_UInt32  uscr_char_flag_r:1;
        RBus_UInt32  uscr_char_flag_g:1;
        RBus_UInt32  uscr_char_flag_b:1;
        RBus_UInt32  uscr_num:4;
        RBus_UInt32  dummy980341b8_3_2:2;
        RBus_UInt32  scr_en_fw:1;
        RBus_UInt32  scr_auto:1;
    };
}scr_cr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  ch_locked_reset:1;
        RBus_UInt32  ch2_over_max_err_num:1;
        RBus_UInt32  ch1_over_max_err_num:1;
        RBus_UInt32  ch0_over_max_err_num:1;
        RBus_UInt32  max_err_num:10;
        RBus_UInt32  valid_reset:1;
        RBus_UInt32  reset_err_det:1;
        RBus_UInt32  keep_err_det:1;
        RBus_UInt32  refer_implem:1;
        RBus_UInt32  reset:1;
        RBus_UInt32  period:6;
        RBus_UInt32  dummy980341bc_3_2:2;
        RBus_UInt32  mode:1;
        RBus_UInt32  en:1;
    };
}cercr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  err_cnt1_video:15;
        RBus_UInt32  res2:1;
        RBus_UInt32  err_cnt0_video:15;
    };
}cersr0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  err_cnt0_pkt:15;
        RBus_UInt32  res2:1;
        RBus_UInt32  err_cnt2_video:15;
    };
}cersr1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  err_cnt2_pkt:15;
        RBus_UInt32  res2:1;
        RBus_UInt32  err_cnt1_pkt:15;
    };
}cersr2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  err_cnt1_ctr:15;
        RBus_UInt32  res2:1;
        RBus_UInt32  err_cnt0_ctr:15;
    };
}cersr3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:17;
        RBus_UInt32  err_cnt2_ctr:15;
    };
}cersr4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:29;
        RBus_UInt32  fifo_over_flag:1;
        RBus_UInt32  fifo_under_flag:1;
        RBus_UInt32  en:1;
    };
}yuv420_cr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:26;
        RBus_UInt32  scdc_reset:1;
        RBus_UInt32  dummy980341d8_4_2:3;
        RBus_UInt32  maddf:1;
        RBus_UInt32  scdc_en:1;
    };
}scdc_cr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  timeout_flag:1;
        RBus_UInt32  timeout_sel:2;
        RBus_UInt32  status_flag:1;
        RBus_UInt32  config_flag:1;
        RBus_UInt32  scrambler_status_flag:1;
        RBus_UInt32  tmds_config_flag:1;
        RBus_UInt32  i2c_scl_dly_sel:4;
        RBus_UInt32  i2c_sda_dly_sel:4;
        RBus_UInt32  i2c_free_num:7;
        RBus_UInt32  rr_retry_sel:2;
        RBus_UInt32  dbnc_level_sel:1;
        RBus_UInt32  dummy980341dc_6_1:6;
        RBus_UInt32  apai:1;
    };
}scdc_pcr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  ap1:8;
    };
}scdc_ap_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  dp1:8;
    };
}scdc_dp_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  clock_det_en:1;
    };
}clkdetcr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:26;
        RBus_UInt32  en_tmds_chg_irq:1;
        RBus_UInt32  tmds_chg_irq:1;
        RBus_UInt32  dummy980341ec_3_2:2;
        RBus_UInt32  clk_not_in_target_irq_en:1;
        RBus_UInt32  clk_not_in_target:1;
    };
}clkdetsr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  dclk_cnt_start:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  dclk_cnt_end:12;
    };
}gdi_tmdsclk_setting_00_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  target_for_maximum_clk_counter:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  target_for_minimum_clk_counter:12;
    };
}gdi_tmdsclk_setting_01_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:20;
        RBus_UInt32  clk_counter_err_threshold:4;
        RBus_UInt32  clk_counter_debounce:8;
    };
}gdi_tmdsclk_setting_02_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:32;
    };
}hdcp_bist_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  namfe:1;
        RBus_UInt32  rpt:1;
        RBus_UInt32  ivsp:1;
        RBus_UInt32  invvs:1;
        RBus_UInt32  ivspm:1;
        RBus_UInt32  maddf:1;
        RBus_UInt32  dkapde:1;
        RBus_UInt32  hdcp_en:1;
    };
}hdcp_cr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  dkap:8;
    };
}hdcp_dkap_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  iic_st:3;
        RBus_UInt32  i2c_scl_dly_sel:4;
        RBus_UInt32  i2c_sda_dly_sel:4;
        RBus_UInt32  res2:2;
        RBus_UInt32  tune_up_down:1;
        RBus_UInt32  tune_range:7;
        RBus_UInt32  ddcdbnc:1;
        RBus_UInt32  km_clk_sel_eco:1;
        RBus_UInt32  dbnc_level_sel:1;
        RBus_UInt32  km_clk_sel:1;
        RBus_UInt32  hdcp_vs_sel:1;
        RBus_UInt32  enc_tog:1;
        RBus_UInt32  avmute_dis:1;
        RBus_UInt32  dummy9803420c_2:1;
        RBus_UInt32  apai_type:1;
        RBus_UInt32  apai:1;
    };
}hdcp_pcr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:27;
        RBus_UInt32  wr_aksv_flag:1;
        RBus_UInt32  rd_ri_flag:1;
        RBus_UInt32  rd_bksv_flag:1;
        RBus_UInt32  dummy98034210_1_0:2;
    };
}hdcp_flag1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:27;
        RBus_UInt32  irq_aksv_en:1;
        RBus_UInt32  irq_ri_en:1;
        RBus_UInt32  irq_bksv_en:1;
        RBus_UInt32  dummy98034214_1_0:2;
    };
}hdcp_flag2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:13;
        RBus_UInt32  ksvfifo_status:1;
        RBus_UInt32  dp_ksvfifo_ptr:10;
        RBus_UInt32  ap1:8;
    };
}hdcp_ap_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  dp1:8;
    };
}hdcp_dp_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy98034220_31_27:5;
        RBus_UInt32  fn_auto_inc:1;
        RBus_UInt32  apply_cp_fn:1;
        RBus_UInt32  ks_encoded:1;
        RBus_UInt32  switch_state:12;
        RBus_UInt32  rpt_thr_unauth:1;
        RBus_UInt32  fw_mode_riv:1;
        RBus_UInt32  apply_state:1;
        RBus_UInt32  mspai:1;
        RBus_UInt32  new_auth_device:1;
        RBus_UInt32  verify_id_pass:1;
        RBus_UInt32  verify_id_done:1;
        RBus_UInt32  assemble_id_fail:1;
        RBus_UInt32  downstream_done:1;
        RBus_UInt32  ks_done:1;
        RBus_UInt32  switch_unauth:1;
        RBus_UInt32  hdcp_2p2_en:1;
    };
}hdcp_2p2_cr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ks:32;
    };
}hdcp_2p2_ks0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ks:32;
    };
}hdcp_2p2_ks1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ks:32;
    };
}hdcp_2p2_ks2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ks:32;
    };
}hdcp_2p2_ks3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lc:32;
    };
}hdcp_2p2_lc0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lc:32;
    };
}hdcp_2p2_lc1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lc:32;
    };
}hdcp_2p2_lc2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lc:32;
    };
}hdcp_2p2_lc3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  riv:32;
    };
}hdcp_2p2_riv0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  riv:32;
    };
}hdcp_2p2_riv1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  frame_number:8;
        RBus_UInt32  irq_fn_compare_fail:1;
        RBus_UInt32  irq_crc_fail:1;
        RBus_UInt32  irq_no_cp_packet:1;
        RBus_UInt32  irq_msg_overwrite:1;
        RBus_UInt32  irq_unauth_chg:1;
        RBus_UInt32  irq_state_chg:1;
        RBus_UInt32  irq_rd_msg_done:1;
        RBus_UInt32  irq_wr_msg_done:1;
        RBus_UInt32  irq_rd_msg_start:1;
        RBus_UInt32  irq_wr_msg_start:1;
        RBus_UInt32  state:12;
    };
}hdcp_2p2_sr0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:20;
        RBus_UInt32  crc_fail_wd_en:1;
        RBus_UInt32  no_cp_packet_wd_en:1;
        RBus_UInt32  irq_fn_compare_fail_en:1;
        RBus_UInt32  irq_crc_fail_en:1;
        RBus_UInt32  irq_no_cp_packet_en:1;
        RBus_UInt32  irq_msg_overwrite_en:1;
        RBus_UInt32  irq_unauth_chg_en:1;
        RBus_UInt32  irq_state_chg_en:1;
        RBus_UInt32  irq_rd_msg_done_en:1;
        RBus_UInt32  irq_wr_msg_done_en:1;
        RBus_UInt32  irq_rd_msg_start_en:1;
        RBus_UInt32  irq_wr_msg_start_en:1;
    };
}hdcp_2p2_sr1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:22;
        RBus_UInt32  ap1:10;
    };
}hdcp_msap_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  dp1:8;
    };
}hdcp_msdp_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  icmux:1;
        RBus_UInt32  ocs:2;
        RBus_UInt32  dbdcb:1;
        RBus_UInt32  dummy98034300_3_0:4;
    };
}hdmi_cmcr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  dummy98034304_7_0:8;
    };
}hdmi_mcapr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:14;
        RBus_UInt32  s1_code_msb_r:1;
        RBus_UInt32  slc_r:1;
        RBus_UInt32  sc_r:7;
        RBus_UInt32  s1_code_msb:1;
        RBus_UInt32  slc:1;
        RBus_UInt32  sc:7;
    };
}hdmi_scapr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  dcaprh:8;
        RBus_UInt32  dcaprl:8;
    };
}hdmi_dcapr0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  fdint:3;
        RBus_UInt32  etcn:1;
        RBus_UInt32  etfd:1;
        RBus_UInt32  etfbc:1;
        RBus_UInt32  pecs:2;
    };
}hdmi_pscr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mfddf:8;
        RBus_UInt32  mfddr:8;
        RBus_UInt32  fddf:8;
        RBus_UInt32  fddr:8;
    };
}hdmi_afdd_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  tl2der:2;
        RBus_UInt32  tl2def:2;
        RBus_UInt32  tt:4;
    };
}hdmi_ftr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  tfd:5;
        RBus_UInt32  bad:3;
    };
}hdmi_fbr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  ich:8;
        RBus_UInt32  icl:8;
    };
}hdmi_icpsncr0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  pch:8;
        RBus_UInt32  pcl:8;
    };
}hdmi_pcpsncr0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  icth:8;
        RBus_UInt32  ictl:8;
    };
}hdmi_ictpsr0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  pcth:8;
        RBus_UInt32  pctl:8;
    };
}hdmi_pctpsr0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  icbh:8;
        RBus_UInt32  icbl:8;
    };
}hdmi_icbpsr0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  pcbh:8;
        RBus_UInt32  pcbl:8;
    };
}hdmi_pcbpsr0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:19;
        RBus_UInt32  rm:1;
        RBus_UInt32  nt:12;
    };
}hdmi_ntx1024tr0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  ftb:8;
    };
}hdmi_stbpr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  ncper:8;
    };
}hdmi_ncper_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  petr:8;
    };
}hdmi_petr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  cmvtc:1;
        RBus_UInt32  cmvbc:1;
        RBus_UInt32  ssdmou:1;
        RBus_UInt32  tef:1;
        RBus_UInt32  w1c5:1;
        RBus_UInt32  pem:1;
        RBus_UInt32  esdm:1;
        RBus_UInt32  dummy98034350_0:1;
    };
}hdmi_aapnr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  dummy98034354_7:1;
        RBus_UInt32  dummy98034354_6:1;
        RBus_UInt32  edm:1;
        RBus_UInt32  pst:1;
        RBus_UInt32  psc:4;
    };
}hdmi_apdmcr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  fps:4;
        RBus_UInt32  sps:4;
    };
}hdmi_aptmcr0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:25;
        RBus_UInt32  plltm:1;
        RBus_UInt32  fpsd:1;
        RBus_UInt32  spsd:1;
        RBus_UInt32  nfpss:4;
    };
}hdmi_aptmcr1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ncts_disable_pe_check_en:1;
        RBus_UInt32  ncts_re_enable_off_en:1;
        RBus_UInt32  ncts_disable_pe_check_status:1;
        RBus_UInt32  ncts_disable_pe_check_irq_en:1;
        RBus_UInt32  dummy98034360_27_20:8;
        RBus_UInt32  ncts_disable_pe_check_cnt:20;
    };
}hdmi_npecr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ncts_re_enable_off_start:16;
        RBus_UInt32  ncts_re_enable_off_end:16;
    };
}hdmi_nror_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  over_threshold:1;
        RBus_UInt32  under_threshold:1;
        RBus_UInt32  wd_by_tmds_clk:1;
        RBus_UInt32  irq_by_tmds_clk:1;
        RBus_UInt32  nt_up_threshold:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  nt_low_threshold:12;
    };
}hdmi_ntx1024tr0_threshold_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dpll_reg:2;
        RBus_UInt32  dpll_m:8;
        RBus_UInt32  res1:1;
        RBus_UInt32  dpll_reser:4;
        RBus_UInt32  dpll_bpsin:1;
        RBus_UInt32  dpll_o:2;
        RBus_UInt32  res2:5;
        RBus_UInt32  dpll_n:3;
        RBus_UInt32  dpll_rs:3;
        RBus_UInt32  dpll_ip:3;
    };
}hdmi_apllcr0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:9;
        RBus_UInt32  dpll_cp:2;
        RBus_UInt32  dpll_seltst:2;
        RBus_UInt32  dpll_cs:2;
        RBus_UInt32  res2:2;
        RBus_UInt32  res3:1;
        RBus_UInt32  res4:1;
        RBus_UInt32  res5:1;
        RBus_UInt32  res6:1;
        RBus_UInt32  res7:1;
        RBus_UInt32  dpll_reserve:1;
        RBus_UInt32  dpll_bpspsw:1;
        RBus_UInt32  dpll_wdo:1;
        RBus_UInt32  dpll_wdrst:1;
        RBus_UInt32  dpll_wdset:1;
        RBus_UInt32  dummy98034384_4:1;
        RBus_UInt32  dpll_stoppsw:1;
        RBus_UInt32  dpll_freeze:1;
        RBus_UInt32  dpll_vcorstb:1;
        RBus_UInt32  dpll_pow:1;
    };
}hdmi_apllcr1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:27;
        RBus_UInt32  res2:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  res4:2;
        RBus_UInt32  dpll_reloadm:1;
    };
}hdmi_apllcr2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  sum_c_samp:16;
    };
}hdmi_apllcr3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  dpll_m_test:8;
        RBus_UInt32  res2:20;
        RBus_UInt32  dpll_m_db:1;
        RBus_UInt32  dpll_m_sel:1;
    };
}hdmi_apll_testm_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dpll_reg:2;
        RBus_UInt32  dpll_m:8;
        RBus_UInt32  res1:1;
        RBus_UInt32  dpll_reser:4;
        RBus_UInt32  dpll_bpsin:1;
        RBus_UInt32  dpll_o:2;
        RBus_UInt32  res2:5;
        RBus_UInt32  dpll_n:3;
        RBus_UInt32  dpll_rs:3;
        RBus_UInt32  dpll_ip:3;
    };
}hdmi_vpllcr0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:9;
        RBus_UInt32  dpll_cp:2;
        RBus_UInt32  dpll_seltst:2;
        RBus_UInt32  dpll_cs:2;
        RBus_UInt32  res2:2;
        RBus_UInt32  res3:1;
        RBus_UInt32  res4:1;
        RBus_UInt32  dpll_ldo_pow:1;
        RBus_UInt32  dpll_ldo_sel:2;
        RBus_UInt32  dpll_reserve:1;
        RBus_UInt32  dpll_bpspsw:1;
        RBus_UInt32  dpll_wdo:1;
        RBus_UInt32  dpll_wdrst:1;
        RBus_UInt32  dpll_wdset:1;
        RBus_UInt32  dummy98034404_4:1;
        RBus_UInt32  dpll_stoppsw:1;
        RBus_UInt32  dpll_freeze:1;
        RBus_UInt32  dpll_vcorstb:1;
        RBus_UInt32  dpll_pow:1;
    };
}hdmi_vpllcr1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:27;
        RBus_UInt32  res2:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  res4:2;
        RBus_UInt32  dpll_reloadm:1;
    };
}hdmi_vpllcr2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  sclkg_pll_in_sel:1;
        RBus_UInt32  sclkg_oclk_sel:2;
        RBus_UInt32  sclkg_dbuf:1;
        RBus_UInt32  dummy98034410_3_0:4;
    };
}mn_sclkg_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  sclkg_pll_div2_en:1;
        RBus_UInt32  sclkg_pll_divs:7;
    };
}mn_sclkg_divs_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:15;
        RBus_UInt32  dummy98034500_16_8:9;
        RBus_UInt32  dummy98034500_7_5:3;
        RBus_UInt32  det_con:1;
        RBus_UInt32  irq_det_chg_en:1;
        RBus_UInt32  dummy98034500_2_1:2;
        RBus_UInt32  en:1;
    };
}mdd_cr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:30;
        RBus_UInt32  det_result_chg:1;
        RBus_UInt32  det_result:1;
    };
}mdd_sr_RBUS;

#else //apply LITTLE_ENDIAN

//======HDMI register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ncp:4;
        RBus_UInt32  mt:3;
        RBus_UInt32  tmm:1;
        RBus_UInt32  res1:24;
    };
}tmds_msr0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vmr:7;
        RBus_UInt32  ctc:1;
        RBus_UInt32  ms:2;
        RBus_UInt32  mrs:2;
        RBus_UInt32  tms:1;
        RBus_UInt32  res1:19;
    };
}tmds_msr1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  crcc:1;
        RBus_UInt32  crcts:2;
        RBus_UInt32  crc_nonstable:1;
        RBus_UInt32  crc_done:1;
        RBus_UInt32  crc_b_en:1;
        RBus_UInt32  crc_g_en:1;
        RBus_UInt32  crc_r_en:1;
        RBus_UInt32  res1:24;
    };
}tmds_crcc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  crcob2_1:8;
        RBus_UInt32  crcob2_2:8;
        RBus_UInt32  crcob2_3:8;
        RBus_UInt32  res1:8;
    };
}tmds_crco0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  crcob2_4:8;
        RBus_UInt32  crcob2_5:8;
        RBus_UInt32  crcob2_6:8;
        RBus_UInt32  res1:8;
    };
}tmds_crco1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy98034014_2_0:3;
        RBus_UInt32  yo:1;
        RBus_UInt32  ho:1;
        RBus_UInt32  rcd:1;
        RBus_UInt32  gcd:1;
        RBus_UInt32  bcd:1;
        RBus_UInt32  res1:24;
    };
}tmds_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy98034018_0:1;
        RBus_UInt32  dummy98034018_1:1;
        RBus_UInt32  dummy98034018_2:1;
        RBus_UInt32  dummy98034018_3:1;
        RBus_UInt32  ockie:1;
        RBus_UInt32  ocke:1;
        RBus_UInt32  tbcoe:1;
        RBus_UInt32  tgcoe:1;
        RBus_UInt32  trcoe:1;
        RBus_UInt32  aoe:1;
        RBus_UInt32  ocke_r:1;
        RBus_UInt32  tbcoe_r:1;
        RBus_UInt32  tgcoe_r:1;
        RBus_UInt32  trcoe_r:1;
        RBus_UInt32  res1:18;
    };
}tmds_outctl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ebip:1;
        RBus_UInt32  egip:1;
        RBus_UInt32  erip:1;
        RBus_UInt32  ecc:1;
        RBus_UInt32  iccaf:1;
        RBus_UInt32  pnsw:1;
        RBus_UInt32  brcw:1;
        RBus_UInt32  deo:1;
        RBus_UInt32  hs_width_sel:1;
        RBus_UInt32  video_preamble_off_en:1;
        RBus_UInt32  dummy9803401c_27_10:18;
        RBus_UInt32  ebip_r:1;
        RBus_UInt32  egip_r:1;
        RBus_UInt32  erip_r:1;
        RBus_UInt32  ecc_r:1;
    };
}tmds_pwdctl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hde:1;
        RBus_UInt32  res1:31;
    };
}tmds_z0cc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy98034024_1_0:2;
        RBus_UInt32  auto_dvi2hdmi:1;
        RBus_UInt32  clr_infoframe_dvi:1;
        RBus_UInt32  de_err_pulse_en:1;
        RBus_UInt32  de_inv_disable:1;
        RBus_UInt32  clkv_meas_sel:2;
        RBus_UInt32  no_clk_in:1;
        RBus_UInt32  pll_div2_en:1;
        RBus_UInt32  res1:22;
    };
}tmds_cps_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hmtm:2;
        RBus_UInt32  cptest:1;
        RBus_UInt32  dummy98034028_3:1;
        RBus_UInt32  debug_sel:6;
        RBus_UInt32  res1:22;
    };
}tmds_udc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  nl:3;
        RBus_UInt32  res1:29;
    };
}tmds_errc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy98034030_6_0:7;
        RBus_UInt32  tmds_bypass:1;
        RBus_UInt32  res1:24;
    };
}tmds_out_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tmds_rout_l:8;
        RBus_UInt32  tmds_rout_h:8;
        RBus_UInt32  res1:16;
    };
}tmds_rout_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tmds_gout_l:8;
        RBus_UInt32  tmds_gout_h:8;
        RBus_UInt32  res1:16;
    };
}tmds_gout_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tmds_bout_l:8;
        RBus_UInt32  tmds_bout_h:8;
        RBus_UInt32  res1:16;
    };
}tmds_bout_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dpc_cd:4;
        RBus_UInt32  dpc_pp:4;
        RBus_UInt32  dpc_default_ph:1;
        RBus_UInt32  dpc_pp_valid:1;
        RBus_UInt32  res1:22;
    };
}tmds_dpc0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dpc_cd_fw:4;
        RBus_UInt32  dpc_pp_fw:4;
        RBus_UInt32  dpc_default_ph_fw:1;
        RBus_UInt32  dpc_pp_valid_fw:1;
        RBus_UInt32  dpc_auto:1;
        RBus_UInt32  dummy98034044_15_11:5;
        RBus_UInt32  dpc_cd_chg_int_en:1;
        RBus_UInt32  dpc_cd_chg_wd_en:1;
        RBus_UInt32  dpc_cd_chg_flag:1;
        RBus_UInt32  res1:13;
    };
}tmds_dpc1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  phase_clr_sel:1;
        RBus_UInt32  phase_clrcnt_in:3;
        RBus_UInt32  phase_errcnt_in:3;
        RBus_UInt32  dpc_en:1;
        RBus_UInt32  dpc_bypass_dis:1;
        RBus_UInt32  res1:23;
    };
}tmds_dpc_set0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  set_empty_noti:4;
        RBus_UInt32  set_full_noti:4;
        RBus_UInt32  res1:24;
    };
}tmds_dpc_set1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dpc_fifo_err_flag:1;
        RBus_UInt32  dpc_phase_err_flag:1;
        RBus_UInt32  dpc_phase_ok:1;
        RBus_UInt32  clr_fifo_flag:1;
        RBus_UInt32  clr_phase_flag:1;
        RBus_UInt32  fifo_errcnt_in:3;
        RBus_UInt32  res1:24;
    };
}tmds_dpc_set2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res2:4;
        RBus_UInt32  dpc_fifo_under_xflag:1;
        RBus_UInt32  dpc_fifo_over_xflag:1;
        RBus_UInt32  dpc_fifo_under_flag:1;
        RBus_UInt32  dpc_fifo_over_flag:1;
        RBus_UInt32  res1:24;
    };
}tmds_dpc_set3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pos_de_lowbd:6;
        RBus_UInt32  dummy98034058_7_6:2;
        RBus_UInt32  neg_de_lowbd:7;
        RBus_UInt32  dummy98034058_15:1;
        RBus_UInt32  pos_de_err_thrd:4;
        RBus_UInt32  neg_de_err_thrd:4;
        RBus_UInt32  tran_err_thrd:4;
        RBus_UInt32  de_sel:1;
        RBus_UInt32  res1:3;
    };
}tmds_det_ctl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  blu_neg_de_err_flag:1;
        RBus_UInt32  grn_neg_de_err_flag:1;
        RBus_UInt32  red_neg_de_err_flag:1;
        RBus_UInt32  blu_pos_de_err_flag:1;
        RBus_UInt32  grn_pos_de_err_flag:1;
        RBus_UInt32  red_pos_de_err_flag:1;
        RBus_UInt32  blu_tran_err_flag:1;
        RBus_UInt32  grn_tran_err_flag:1;
        RBus_UInt32  red_tran_err_flag:1;
        RBus_UInt32  res1:23;
    };
}tmds_det_sts_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  en:1;
        RBus_UInt32  mode:1;
        RBus_UInt32  ch_sel:2;
        RBus_UInt32  period:6;
        RBus_UInt32  reset:1;
        RBus_UInt32  irq_en:1;
        RBus_UInt32  disparity_reset_mode:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  thd:16;
    };
}video_bit_err_det_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bit_err_cnt_b:16;
        RBus_UInt32  bit_err_cnt_of_b:1;
        RBus_UInt32  bit_err_b:1;
        RBus_UInt32  bit_err_thd_b:1;
        RBus_UInt32  no_dis_reset_b:1;
        RBus_UInt32  ad_min_b:6;
        RBus_UInt32  ad_max_b:6;
    };
}video_bit_err_status_b_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bit_err_cnt_g:16;
        RBus_UInt32  bit_err_cnt_of_g:1;
        RBus_UInt32  bit_err_g:1;
        RBus_UInt32  bit_err_thd_g:1;
        RBus_UInt32  no_dis_reset_g:1;
        RBus_UInt32  ad_min_g:6;
        RBus_UInt32  ad_max_g:6;
    };
}video_bit_err_status_g_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bit_err_cnt_r:16;
        RBus_UInt32  bit_err_cnt_of_r:1;
        RBus_UInt32  bit_err_r:1;
        RBus_UInt32  bit_err_thd_r:1;
        RBus_UInt32  no_dis_reset_r:1;
        RBus_UInt32  ad_min_r:6;
        RBus_UInt32  ad_max_r:6;
    };
}video_bit_err_status_r_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  terc4_thd:16;
        RBus_UInt32  res1:16;
    };
}terc4_err_det_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  terc4_err_cnt_b:16;
        RBus_UInt32  terc4_err_cnt_of_b:1;
        RBus_UInt32  terc4_err_b:1;
        RBus_UInt32  terc4_err_thd_b:1;
        RBus_UInt32  res1:13;
    };
}terc4_err_status_b_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  terc4_err_cnt_g:16;
        RBus_UInt32  terc4_err_cnt_of_g:1;
        RBus_UInt32  terc4_err_g:1;
        RBus_UInt32  terc4_err_thd_g:1;
        RBus_UInt32  res1:13;
    };
}terc4_err_status_g_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  terc4_err_cnt_r:16;
        RBus_UInt32  terc4_err_cnt_of_r:1;
        RBus_UInt32  terc4_err_r:1;
        RBus_UInt32  terc4_err_thd_r:1;
        RBus_UInt32  res1:13;
    };
}terc4_err_status_r_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mode:1;
        RBus_UInt32  afifouf:1;
        RBus_UInt32  afifoof:1;
        RBus_UInt32  pllsts:1;
        RBus_UInt32  spdiftype:1;
        RBus_UInt32  vic:1;
        RBus_UInt32  avmute:1;
        RBus_UInt32  avmute_bg:1;
        RBus_UInt32  res1:24;
    };
}hdmi_sr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pvs_0:1;
        RBus_UInt32  pvs_1:1;
        RBus_UInt32  pvs_2:1;
        RBus_UInt32  pvs_3:1;
        RBus_UInt32  pvs_4:1;
        RBus_UInt32  pis_5:1;
        RBus_UInt32  pis_6:1;
        RBus_UInt32  dummy98034084_7:1;
        RBus_UInt32  dummy98034084_8:1;
        RBus_UInt32  nps:1;
        RBus_UInt32  vsps:1;
        RBus_UInt32  gmps:1;
        RBus_UInt32  vsps_v:1;
        RBus_UInt32  gmps_v:1;
        RBus_UInt32  fvsps:1;
        RBus_UInt32  res1:17;
    };
}hdmi_gpvs_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  apss:9;
        RBus_UInt32  res1:23;
    };
}hdmi_psap_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dpss:8;
        RBus_UInt32  res1:24;
    };
}hdmi_psdp_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fcddip:1;
        RBus_UInt32  cabs:1;
        RBus_UInt32  msmode:1;
        RBus_UInt32  mode:1;
        RBus_UInt32  packet_ignore:1;
        RBus_UInt32  dvi_reset_ds_cm_en:1;
        RBus_UInt32  no_vs_det_en:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  nval:8;
        RBus_UInt32  res1:16;
    };
}hdmi_scr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pe:1;
        RBus_UInt32  bches2:1;
        RBus_UInt32  bches:1;
        RBus_UInt32  bche:1;
        RBus_UInt32  enrwe:1;
        RBus_UInt32  spcss:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  res1:24;
    };
}hdmi_bchcr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  nfpss:1;
        RBus_UInt32  vdpic:1;
        RBus_UInt32  ampic:1;
        RBus_UInt32  ve:1;
        RBus_UInt32  awd:1;
        RBus_UInt32  aomc:1;
        RBus_UInt32  aoc:1;
        RBus_UInt32  avmute_win_en:1;
        RBus_UInt32  avmute_flag:1;
        RBus_UInt32  wd_vclk_en:1;
        RBus_UInt32  wd_ptg_en:1;
        RBus_UInt32  res1:21;
    };
}hdmi_avmcr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ct:1;
        RBus_UInt32  awdfu:1;
        RBus_UInt32  awdfo:1;
        RBus_UInt32  awdap:1;
        RBus_UInt32  awdct:1;
        RBus_UInt32  bt_track_en:1;
        RBus_UInt32  load_d:1;
        RBus_UInt32  asmfe:1;
        RBus_UInt32  xv:4;
        RBus_UInt32  vwdact:1;
        RBus_UInt32  ch_st_sel:1;
        RBus_UInt32  awdlf:1;
        RBus_UInt32  awdck:1;
        RBus_UInt32  yv:4;
        RBus_UInt32  vwdafu:1;
        RBus_UInt32  vwdafo:1;
        RBus_UInt32  vwdlf:1;
        RBus_UInt32  vwdap:1;
        RBus_UInt32  vwdch:1;
        RBus_UInt32  awdch:1;
        RBus_UInt32  wds:1;
        RBus_UInt32  wdm:1;
        RBus_UInt32  res1:4;
    };
}hdmi_wdcr0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  aldbpn:1;
        RBus_UInt32  aldbfu:1;
        RBus_UInt32  aldbfo:1;
        RBus_UInt32  aldbfv:1;
        RBus_UInt32  res1:28;
    };
}hdmi_dbcr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  awdpvsb:7;
        RBus_UInt32  res1:25;
    };
}hdmi_awdsr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vwdpvsb:7;
        RBus_UInt32  res1:25;
    };
}hdmi_vwdsr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  icpvsb:7;
        RBus_UInt32  res1:25;
    };
}hdmi_pamicr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pt1:8;
        RBus_UInt32  pt2:8;
        RBus_UInt32  dummy980340b0_23_16:8;
        RBus_UInt32  dummy980340b0_31_24:8;
    };
}hdmi_ptrsv1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pvsef:32;
    };
}hdmi_pvgcr0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pvs:32;
    };
}hdmi_pvsr0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dsc:4;
        RBus_UInt32  rs:1;
        RBus_UInt32  se:1;
        RBus_UInt32  eot:1;
        RBus_UInt32  eoi:1;
        RBus_UInt32  dsc_r:4;
        RBus_UInt32  prdsam:1;
        RBus_UInt32  field_decide_sel:1;
        RBus_UInt32  csc:2;
        RBus_UInt32  csam:1;
        RBus_UInt32  hdirq:1;
        RBus_UInt32  csc_r:2;
        RBus_UInt32  iclk_sel:2;
        RBus_UInt32  hdcp_ddc_chsel:2;
        RBus_UInt32  int_pro_chg_int_en:1;
        RBus_UInt32  int_pro_chg_wd_en:1;
        RBus_UInt32  int_pro_chg_flag:1;
        RBus_UInt32  hdmi_field:1;
        RBus_UInt32  cbus_ddc_chsel:1;
        RBus_UInt32  res1:3;
    };
}hdmi_vcr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pucsr:1;
        RBus_UInt32  pucnr:1;
        RBus_UInt32  res1:30;
    };
}hdmi_acrcr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cts:20;
        RBus_UInt32  res1:12;
    };
}hdmi_acrsr0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  n:20;
        RBus_UInt32  res1:12;
    };
}hdmi_acrsr1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cs:16;
        RBus_UInt32  res1:16;
    };
}hdmi_acs0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cs:24;
        RBus_UInt32  res1:8;
    };
}hdmi_acs1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vc:1;
        RBus_UInt32  afifou:1;
        RBus_UInt32  afifoo:1;
        RBus_UInt32  apll:1;
        RBus_UInt32  act:1;
        RBus_UInt32  fifod:1;
        RBus_UInt32  avmute:1;
        RBus_UInt32  pending:1;
        RBus_UInt32  res1:24;
    };
}hdmi_intcr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lo4:2;
        RBus_UInt32  lo3:2;
        RBus_UInt32  lo2:2;
        RBus_UInt32  lo1:2;
        RBus_UInt32  res1:24;
    };
}hdmi_alcr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  i2so4:1;
        RBus_UInt32  i2so3:1;
        RBus_UInt32  i2so2:1;
        RBus_UInt32  i2so1:1;
        RBus_UInt32  spdifo4:1;
        RBus_UInt32  spdifo3:1;
        RBus_UInt32  spdifo2:1;
        RBus_UInt32  spdifo1:1;
        RBus_UInt32  i2s_clk_en_dvi:1;
        RBus_UInt32  res1:23;
    };
}hdmi_aocr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gcp:1;
        RBus_UInt32  pe:1;
        RBus_UInt32  ngb:1;
        RBus_UInt32  natgb:1;
        RBus_UInt32  nalgb:1;
        RBus_UInt32  nvlgb:1;
        RBus_UInt32  res1:26;
    };
}hdmi_bcsr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fscs:1;
        RBus_UInt32  fsif:1;
        RBus_UInt32  fsre:1;
        RBus_UInt32  res1:29;
    };
}hdmi_asr0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fbcs:4;
        RBus_UInt32  fbif:3;
        RBus_UInt32  res1:25;
    };
}hdmi_asr1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hdmi_vic:8;
        RBus_UInt32  hvf:3;
        RBus_UInt32  res1:21;
    };
}hdmi_video_format_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res3:3;
        RBus_UInt32  hdmi_3d_meta_present:1;
        RBus_UInt32  hdmi_3d_structure:4;
        RBus_UInt32  res2:1;
        RBus_UInt32  hdmi_3d_metadata_type:3;
        RBus_UInt32  hdmi_3d_ext_data:4;
        RBus_UInt32  res1:16;
    };
}hdmi_3d_format_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  info_3d_valid:1;
        RBus_UInt32  info_3d_f_structure:4;
        RBus_UInt32  info_3d_f_ext_data:4;
        RBus_UInt32  info_3d_additionalinfo_present:1;
        RBus_UInt32  info_3d_dualview:1;
        RBus_UInt32  info_3d_viewdependency:2;
        RBus_UInt32  info_3d_preferred2dview:2;
        RBus_UInt32  res1:17;
    };
}hdmi_fvsi_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ch_afifo_irq_en:1;
        RBus_UInt32  flush:1;
        RBus_UInt32  dummy980340f8_3_2:2;
        RBus_UInt32  udwater_thr:5;
        RBus_UInt32  dummy980340f8_11_9:3;
        RBus_UInt32  rden_thr:5;
        RBus_UInt32  dummy980340f8_19_17:3;
        RBus_UInt32  ch_sync_sel:2;
        RBus_UInt32  b_ch_afifo_en:1;
        RBus_UInt32  g_ch_afifo_en:1;
        RBus_UInt32  r_ch_afifo_en:1;
        RBus_UInt32  res1:7;
    };
}ch_cr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  b_rw_water_lv:5;
        RBus_UInt32  b_rflush_flag:1;
        RBus_UInt32  b_wovflow_flag:1;
        RBus_UInt32  b_rudflow_flag:1;
        RBus_UInt32  g_rw_water_lv:5;
        RBus_UInt32  g_rflush_flag:1;
        RBus_UInt32  g_wovflow_flag:1;
        RBus_UInt32  g_rudflow_flag:1;
        RBus_UInt32  r_rw_water_lv:5;
        RBus_UInt32  r_rflush_flag:1;
        RBus_UInt32  r_wovflow_flag:1;
        RBus_UInt32  r_rudflow_flag:1;
        RBus_UInt32  b_wrclk_det_timeout_flag:1;
        RBus_UInt32  b_rwclk_det_timeout_flag:1;
        RBus_UInt32  g_wrclk_det_timeout_flag:1;
        RBus_UInt32  g_rwclk_det_timeout_flag:1;
        RBus_UInt32  r_wrclk_det_timeout_flag:1;
        RBus_UInt32  r_rwclk_det_timeout_flag:1;
        RBus_UInt32  rgb_de_align_flag:1;
        RBus_UInt32  res1:1;
    };
}ch_sr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ch_status_chg_irq:1;
        RBus_UInt32  en_ch_status_chg_irq:1;
        RBus_UInt32  ncts_chg_irq:1;
        RBus_UInt32  en_ncts_chg_irq:1;
        RBus_UInt32  res1:28;
    };
}audio_sample_rate_change_irq_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hbr_audio_mode:1;
        RBus_UInt32  hbr_audio_mode_fw:1;
        RBus_UInt32  hbr_audio_mode_manual:1;
        RBus_UInt32  res1:29;
    };
}high_bit_rate_audio_packet_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  afifore:2;
        RBus_UInt32  afifowe:1;
        RBus_UInt32  mgc:1;
        RBus_UInt32  audio_test_enable:1;
        RBus_UInt32  aoc:1;
        RBus_UInt32  aoem:1;
        RBus_UInt32  tst_i2s_sw:1;
        RBus_UInt32  afifore_r:2;
        RBus_UInt32  afifowe_r:1;
        RBus_UInt32  afifoe:1;
        RBus_UInt32  afifof:1;
        RBus_UInt32  gain_bypass_en:1;
        RBus_UInt32  dummy98034108_31_14:18;
    };
}hdmi_afcr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  audio_bist_clksel:1;
        RBus_UInt32  res1:31;
    };
}hdmi_afsr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mg:8;
        RBus_UInt32  agd:5;
        RBus_UInt32  agi:3;
        RBus_UInt32  res1:16;
    };
}hdmi_magcr0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ffg_r:1;
        RBus_UInt32  ffg_l:1;
        RBus_UInt32  fg_en:1;
        RBus_UInt32  auto_dly_mod:1;
        RBus_UInt32  fg_l:8;
        RBus_UInt32  fg_r:8;
        RBus_UInt32  ldp_time_mode:1;
        RBus_UInt32  ldp_time:10;
        RBus_UInt32  res1:1;
    };
}hdmi_mag_m_final_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy98034118_4_0:5;
        RBus_UInt32  zcd_sep_st:1;
        RBus_UInt32  zcd_sep_8ch:1;
        RBus_UInt32  zcd_en:1;
        RBus_UInt32  zcd_timeout:7;
        RBus_UInt32  res2:1;
        RBus_UInt32  zcd_ch0_done:1;
        RBus_UInt32  zcd_ch1_done:1;
        RBus_UInt32  zcd_ch2_done:1;
        RBus_UInt32  zcd_ch3_done:1;
        RBus_UInt32  zcd_ch4_done:1;
        RBus_UInt32  zcd_ch5_done:1;
        RBus_UInt32  zcd_ch6_done:1;
        RBus_UInt32  zcd_ch7_done:1;
        RBus_UInt32  res1:8;
    };
}zcd_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  noaudio:1;
        RBus_UInt32  freqchange:1;
        RBus_UInt32  irq_by_noaudio:1;
        RBus_UInt32  irq_by_freqchange:1;
        RBus_UInt32  awd_by_noaudio:1;
        RBus_UInt32  awd_by_freqchange:1;
        RBus_UInt32  auto_load_scode:1;
        RBus_UInt32  audio_freq_detect:1;
        RBus_UInt32  popup_afreq_meas_result:1;
        RBus_UInt32  afreq_meas_range:3;
        RBus_UInt32  afreq_meas_result:12;
        RBus_UInt32  xtal_div:8;
    };
}audio_freqdet_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  range1_th:12;
        RBus_UInt32  range0_th:12;
        RBus_UInt32  res1:8;
    };
}range0_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  range3_th:12;
        RBus_UInt32  range2_th:12;
        RBus_UInt32  res1:8;
    };
}range2_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  range5_th:12;
        RBus_UInt32  range4_th:12;
        RBus_UInt32  res1:8;
    };
}range4_5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pre_set_s_code0:7;
        RBus_UInt32  pre_set_s1_code0:1;
        RBus_UInt32  pre_set_s_code1:7;
        RBus_UInt32  pre_set_s1_code1:1;
        RBus_UInt32  pre_set_s_code2:7;
        RBus_UInt32  pre_set_s1_code2:1;
        RBus_UInt32  pre_set_s_code3:7;
        RBus_UInt32  pre_set_s1_code3:1;
    };
}preset_s_code0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pre_set_s_code4:7;
        RBus_UInt32  pre_set_s1_code4:1;
        RBus_UInt32  res3:3;
        RBus_UInt32  pre_set_sm_code4:1;
        RBus_UInt32  pre_set_sm_code3:1;
        RBus_UInt32  pre_set_sm_code2:1;
        RBus_UInt32  pre_set_sm_code1:1;
        RBus_UInt32  pre_set_sm_code0:1;
        RBus_UInt32  res2:4;
        RBus_UInt32  afsm_mod_en:1;
        RBus_UInt32  trk_mod_en:1;
        RBus_UInt32  auto_stop_trk_en:1;
        RBus_UInt32  dp_abuf_wr_mod_en:1;
        RBus_UInt32  res1:8;
    };
}preset_s_code1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  prbs7_rxen:1;
        RBus_UInt32  prbs_reverse:1;
        RBus_UInt32  prbs_err_cnt_clr:1;
        RBus_UInt32  prbs_lock:1;
        RBus_UInt32  prbs_bit_err:10;
        RBus_UInt32  res2:2;
        RBus_UInt32  prbs_err_cnt:4;
        RBus_UInt32  prbs_rxbist_err_cnt:8;
        RBus_UInt32  prbs23_rxen:1;
        RBus_UInt32  res1:3;
    };
}prbs_r_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  prbs7_rxen:1;
        RBus_UInt32  prbs_reverse:1;
        RBus_UInt32  prbs_err_cnt_clr:1;
        RBus_UInt32  prbs_lock:1;
        RBus_UInt32  prbs_bit_err:10;
        RBus_UInt32  res2:2;
        RBus_UInt32  prbs_err_cnt:4;
        RBus_UInt32  prbs_rxbist_err_cnt:8;
        RBus_UInt32  prbs23_rxen:1;
        RBus_UInt32  res1:3;
    };
}prbs_g_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  prbs7_rxen:1;
        RBus_UInt32  prbs_reverse:1;
        RBus_UInt32  prbs_err_cnt_clr:1;
        RBus_UInt32  prbs_lock:1;
        RBus_UInt32  prbs_bit_err:10;
        RBus_UInt32  res2:2;
        RBus_UInt32  prbs_err_cnt:4;
        RBus_UInt32  prbs_rxbist_err_cnt:8;
        RBus_UInt32  prbs23_rxen:1;
        RBus_UInt32  res1:3;
    };
}prbs_b_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lgb_cal_en:1;
        RBus_UInt32  lgb_cal_conti:1;
        RBus_UInt32  channel_sel:2;
        RBus_UInt32  dvi_mode_sel:1;
        RBus_UInt32  res3:3;
        RBus_UInt32  cmp_value:10;
        RBus_UInt32  res2:6;
        RBus_UInt32  preamble:4;
        RBus_UInt32  cmp_err_int_en:1;
        RBus_UInt32  cmp_err_wd_en:1;
        RBus_UInt32  cmp_err_flag:1;
        RBus_UInt32  res1:1;
    };
}hdmi_leading_gb_cmp_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cmp_times:16;
        RBus_UInt32  cmp_err_cnt:16;
    };
}hdmi_leading_gb_cmp_times_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  preamble_cmp_cnt_by_frame:16;
        RBus_UInt32  preamble_cmp_cnt:16;
    };
}hdmi_leading_gb_cmp_cnt_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cts_up_bound:20;
        RBus_UInt32  cts_clip_en:1;
        RBus_UInt32  res1:10;
        RBus_UInt32  cts_over_flag:1;
    };
}audio_cts_up_bound_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cts_low_bound:20;
        RBus_UInt32  res1:11;
        RBus_UInt32  cts_under_flag:1;
    };
}audio_cts_low_bound_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  n_up_bound:20;
        RBus_UInt32  n_clip_en:1;
        RBus_UInt32  res1:10;
        RBus_UInt32  n_over_flag:1;
    };
}audio_n_up_bound_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  n_low_bound:20;
        RBus_UInt32  res1:11;
        RBus_UInt32  n_under_flag:1;
    };
}audio_n_low_bound_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ch_dec_pp_mode_en:1;
        RBus_UInt32  res3:3;
        RBus_UInt32  cal_pixel_sel:1;
        RBus_UInt32  xor_pixel_sel:3;
        RBus_UInt32  packet_mhl_en:1;
        RBus_UInt32  res2:3;
        RBus_UInt32  pp_mode_output:1;
        RBus_UInt32  en_packet_retiming_vsrst:1;
        RBus_UInt32  dummy9803415c_15_14:2;
        RBus_UInt32  hporch_offset:10;
        RBus_UInt32  res1:6;
    };
}mhl_hdmi_mac_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  oui:24;
        RBus_UInt32  mhl_vid:2;
        RBus_UInt32  mhl_3d_fmt:4;
        RBus_UInt32  res1:2;
    };
}mhl_3d_format_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mhl_hev_fmt_type:16;
        RBus_UInt32  sep_aud:1;
        RBus_UInt32  mhl_hev_fmt:2;
        RBus_UInt32  res1:13;
    };
}mhl_3p0_format0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  av_delay_sync:20;
        RBus_UInt32  av_delay_dir:1;
        RBus_UInt32  acrfs_div:3;
        RBus_UInt32  res1:8;
    };
}mhl_3p0_format1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  audio_ls:1;
        RBus_UInt32  hdcp_ls:1;
        RBus_UInt32  hdcp_ksvfifo_ls:1;
        RBus_UInt32  hdcp_2p2_ls0:1;
        RBus_UInt32  hdcp_2p2_ls1:1;
        RBus_UInt32  yuv420_ls0:1;
        RBus_UInt32  yuv420_ls1:1;
        RBus_UInt32  yuv420_ls2:1;
        RBus_UInt32  yuv420_ls3:1;
        RBus_UInt32  res1:23;
    };
}light_sleep_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  yuv420_rm0:4;
        RBus_UInt32  yuv420_rm1:4;
        RBus_UInt32  yuv420_rm2:4;
        RBus_UInt32  yuv420_rm3:4;
        RBus_UInt32  res1:16;
    };
}read_margin2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  audio_rme:1;
        RBus_UInt32  hdcp_rme:1;
        RBus_UInt32  hdcp_ksvfifo_rme:1;
        RBus_UInt32  hdcp_2p2_rme0:1;
        RBus_UInt32  hdcp_2p2_rme1:1;
        RBus_UInt32  yuv420_rme0:1;
        RBus_UInt32  yuv420_rme1:1;
        RBus_UInt32  yuv420_rme2:1;
        RBus_UInt32  yuv420_rme3:1;
        RBus_UInt32  res1:23;
    };
}read_margin_enable_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  audio_rm:4;
        RBus_UInt32  hdcp_rm:4;
        RBus_UInt32  hdcp_ksvfifo_rm:4;
        RBus_UInt32  hdcp_2p2_rm0:4;
        RBus_UInt32  hdcp_2p2_rm1:4;
        RBus_UInt32  res1:12;
    };
}read_margin_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  audio_bist_en:1;
        RBus_UInt32  hdcp_bist_en:1;
        RBus_UInt32  hdcp_ksvfifo_bist_en:1;
        RBus_UInt32  hdcp_2p2_bist_en:1;
        RBus_UInt32  yuv420_bist_en:1;
        RBus_UInt32  res1:27;
    };
}bist_mode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  audio_bist_done:1;
        RBus_UInt32  hdcp_bist_done:1;
        RBus_UInt32  hdcp_ksvfifo_bist_done:1;
        RBus_UInt32  hdcp_2p2_bist_done:1;
        RBus_UInt32  yuv420_bist_done:1;
        RBus_UInt32  res1:27;
    };
}bist_done_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  audio_bist_fail:1;
        RBus_UInt32  hdcp_bist_fail:1;
        RBus_UInt32  hdcp_ksvfifo_bist_fail:1;
        RBus_UInt32  hdcp_2p2_bist_fail:1;
        RBus_UInt32  yuv420_bist_fail:1;
        RBus_UInt32  res1:27;
    };
}bist_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  audio_drf_mode:1;
        RBus_UInt32  hdcp_drf_mode:1;
        RBus_UInt32  hdcp_ksvfifo_drf_mode:1;
        RBus_UInt32  hdcp_2p2_drf_mode:1;
        RBus_UInt32  yuv420_drf_mode:1;
        RBus_UInt32  res1:27;
    };
}drf_mode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  audio_drf_resume:1;
        RBus_UInt32  hdcp_drf_resume:1;
        RBus_UInt32  hdcp_ksvfifo_drf_resume:1;
        RBus_UInt32  hdcp_2p2_drf_resume:1;
        RBus_UInt32  yuv420_drf_resume:1;
        RBus_UInt32  res1:27;
    };
}drf_resume_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  audio_drf_done:1;
        RBus_UInt32  hdcp_drf_done:1;
        RBus_UInt32  hdcp_ksvfifo_drf_done:1;
        RBus_UInt32  hdcp_2p2_drf_done:1;
        RBus_UInt32  yuv420_drf_done:1;
        RBus_UInt32  res1:27;
    };
}drf_done_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  audio_drf_pause:1;
        RBus_UInt32  hdcp_drf_pause:1;
        RBus_UInt32  hdcp_ksvfifo_drf_pause:1;
        RBus_UInt32  hdcp_2p2_drf_pause:1;
        RBus_UInt32  yuv420_drf_pause:1;
        RBus_UInt32  res1:27;
    };
}drf_pause_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  audio_drf_fail:1;
        RBus_UInt32  hdcp_drf_fail:1;
        RBus_UInt32  hdcp_ksvfifo_drf_fail:1;
        RBus_UInt32  hdcp_2p2_drf_fail:1;
        RBus_UInt32  yuv420_drf_fail:1;
        RBus_UInt32  res1:27;
    };
}drf_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  port0_b_afifo_en:1;
        RBus_UInt32  port0_b_flush:1;
        RBus_UInt32  port0_g_afifo_en:1;
        RBus_UInt32  port0_g_flush:1;
        RBus_UInt32  port0_r_afifo_en:1;
        RBus_UInt32  port0_r_flush:1;
        RBus_UInt32  dummy980341a0_6:1;
        RBus_UInt32  port1_b_afifo_en:1;
        RBus_UInt32  port1_b_flush:1;
        RBus_UInt32  port1_g_afifo_en:1;
        RBus_UInt32  port1_g_flush:1;
        RBus_UInt32  port1_r_afifo_en:1;
        RBus_UInt32  port1_r_flush:1;
        RBus_UInt32  dummy980341a0_13:1;
        RBus_UInt32  port2_b_afifo_en:1;
        RBus_UInt32  port2_b_flush:1;
        RBus_UInt32  port2_g_afifo_en:1;
        RBus_UInt32  port2_g_flush:1;
        RBus_UInt32  port2_r_afifo_en:1;
        RBus_UInt32  port2_r_flush:1;
        RBus_UInt32  port_sel:2;
        RBus_UInt32  port0_bclk_inv:1;
        RBus_UInt32  port0_gclk_inv:1;
        RBus_UInt32  port0_rclk_inv:1;
        RBus_UInt32  port1_bclk_inv:1;
        RBus_UInt32  port1_gclk_inv:1;
        RBus_UInt32  port1_rclk_inv:1;
        RBus_UInt32  port2_bclk_inv:1;
        RBus_UInt32  port2_gclk_inv:1;
        RBus_UInt32  port2_rclk_inv:1;
        RBus_UInt32  res1:1;
    };
}phy_fifo_cr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  port0_b_rflush_flag:1;
        RBus_UInt32  port0_b_rudflow_flag:1;
        RBus_UInt32  port0_b_wovflow_flag:1;
        RBus_UInt32  port0_b_rwclk_det_timeout_flag:1;
        RBus_UInt32  port0_b_wrclk_det_timeout_flag:1;
        RBus_UInt32  port0_g_rflush_flag:1;
        RBus_UInt32  port0_g_rudflow_flag:1;
        RBus_UInt32  port0_g_wovflow_flag:1;
        RBus_UInt32  port0_g_rwclk_det_timeout_flag:1;
        RBus_UInt32  port0_g_wrclk_det_timeout_flag:1;
        RBus_UInt32  port0_r_rflush_flag:1;
        RBus_UInt32  port0_r_rudflow_flag:1;
        RBus_UInt32  port0_r_wovflow_flag:1;
        RBus_UInt32  port0_r_rwclk_det_timeout_flag:1;
        RBus_UInt32  port0_r_wrclk_det_timeout_flag:1;
        RBus_UInt32  port1_b_rflush_flag:1;
        RBus_UInt32  port1_b_rudflow_flag:1;
        RBus_UInt32  port1_b_wovflow_flag:1;
        RBus_UInt32  port1_b_rwclk_det_timeout_flag:1;
        RBus_UInt32  port1_b_wrclk_det_timeout_flag:1;
        RBus_UInt32  port1_g_rflush_flag:1;
        RBus_UInt32  port1_g_rudflow_flag:1;
        RBus_UInt32  port1_g_wovflow_flag:1;
        RBus_UInt32  port1_g_rwclk_det_timeout_flag:1;
        RBus_UInt32  port1_g_wrclk_det_timeout_flag:1;
        RBus_UInt32  port1_r_rflush_flag:1;
        RBus_UInt32  port1_r_rudflow_flag:1;
        RBus_UInt32  port1_r_wovflow_flag:1;
        RBus_UInt32  port1_r_rwclk_det_timeout_flag:1;
        RBus_UInt32  port1_r_wrclk_det_timeout_flag:1;
        RBus_UInt32  res1:2;
    };
}phy_fifo_sr0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  port2_b_rflush_flag:1;
        RBus_UInt32  port2_b_rudflow_flag:1;
        RBus_UInt32  port2_b_wovflow_flag:1;
        RBus_UInt32  port2_b_rwclk_det_timeout_flag:1;
        RBus_UInt32  port2_b_wrclk_det_timeout_flag:1;
        RBus_UInt32  port2_g_rflush_flag:1;
        RBus_UInt32  port2_g_rudflow_flag:1;
        RBus_UInt32  port2_g_wovflow_flag:1;
        RBus_UInt32  port2_g_rwclk_det_timeout_flag:1;
        RBus_UInt32  port2_g_wrclk_det_timeout_flag:1;
        RBus_UInt32  port2_r_rflush_flag:1;
        RBus_UInt32  port2_r_rudflow_flag:1;
        RBus_UInt32  port2_r_wovflow_flag:1;
        RBus_UInt32  port2_r_rwclk_det_timeout_flag:1;
        RBus_UInt32  port2_r_wrclk_det_timeout_flag:1;
        RBus_UInt32  res1:17;
    };
}phy_fifo_sr1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  en_ctsfifo_bypass_hdmi:1;
        RBus_UInt32  en_ctsfifo_vsrst_hdmi:1;
        RBus_UInt32  force_ctsfifo_rstn_hdmi:1;
        RBus_UInt32  hdmi_out_sel:1;
        RBus_UInt32  hdmi_test_sel:4;
        RBus_UInt32  hdmi_2x_out_sel:2;
        RBus_UInt32  debug_select:1;
        RBus_UInt32  dummy980341ac_11:1;
        RBus_UInt32  en_ctsfifo_bypass_phy_dbgout_b:1;
        RBus_UInt32  force_ctsfifo_rstn_phy_dbgout_b:1;
        RBus_UInt32  en_ctsfifo_bypass_phy_dbgout_g:1;
        RBus_UInt32  force_ctsfifo_rstn_phy_dbgout_g:1;
        RBus_UInt32  en_ctsfifo_bypass_phy_dbgout_r:1;
        RBus_UInt32  force_ctsfifo_rstn_phy_dbgout_r:1;
        RBus_UInt32  res1:14;
    };
}hdmi_cts_fifo_ctl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy980341b0_0:1;
        RBus_UInt32  dummy980341b0_1:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  dummy980341b0_6_4:3;
        RBus_UInt32  res1:25;
    };
}cbus_clk_ctl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hdmi_2p0_en:1;
        RBus_UInt32  ctr_char_num:7;
        RBus_UInt32  gating_en:1;
        RBus_UInt32  res1:23;
    };
}hdmi_2p0_cr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  scr_auto:1;
        RBus_UInt32  scr_en_fw:1;
        RBus_UInt32  dummy980341b8_3_2:2;
        RBus_UInt32  uscr_num:4;
        RBus_UInt32  uscr_char_flag_b:1;
        RBus_UInt32  uscr_char_flag_g:1;
        RBus_UInt32  uscr_char_flag_r:1;
        RBus_UInt32  uscr_per_glitch_b:1;
        RBus_UInt32  uscr_per_glitch_g:1;
        RBus_UInt32  uscr_per_glitch_r:1;
        RBus_UInt32  uscr_fall_bound_err_b:1;
        RBus_UInt32  uscr_fall_bound_err_g:1;
        RBus_UInt32  uscr_fall_bound_err_r:1;
        RBus_UInt32  char_lock:1;
        RBus_UInt32  res1:14;
    };
}scr_cr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  en:1;
        RBus_UInt32  mode:1;
        RBus_UInt32  dummy980341bc_3_2:2;
        RBus_UInt32  period:6;
        RBus_UInt32  reset:1;
        RBus_UInt32  refer_implem:1;
        RBus_UInt32  keep_err_det:1;
        RBus_UInt32  reset_err_det:1;
        RBus_UInt32  valid_reset:1;
        RBus_UInt32  max_err_num:10;
        RBus_UInt32  ch0_over_max_err_num:1;
        RBus_UInt32  ch1_over_max_err_num:1;
        RBus_UInt32  ch2_over_max_err_num:1;
        RBus_UInt32  ch_locked_reset:1;
        RBus_UInt32  res1:3;
    };
}cercr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  err_cnt0_video:15;
        RBus_UInt32  res2:1;
        RBus_UInt32  err_cnt1_video:15;
        RBus_UInt32  res1:1;
    };
}cersr0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  err_cnt2_video:15;
        RBus_UInt32  res2:1;
        RBus_UInt32  err_cnt0_pkt:15;
        RBus_UInt32  res1:1;
    };
}cersr1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  err_cnt1_pkt:15;
        RBus_UInt32  res2:1;
        RBus_UInt32  err_cnt2_pkt:15;
        RBus_UInt32  res1:1;
    };
}cersr2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  err_cnt0_ctr:15;
        RBus_UInt32  res2:1;
        RBus_UInt32  err_cnt1_ctr:15;
        RBus_UInt32  res1:1;
    };
}cersr3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  err_cnt2_ctr:15;
        RBus_UInt32  res1:17;
    };
}cersr4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  en:1;
        RBus_UInt32  fifo_under_flag:1;
        RBus_UInt32  fifo_over_flag:1;
        RBus_UInt32  res1:29;
    };
}yuv420_cr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  scdc_en:1;
        RBus_UInt32  maddf:1;
        RBus_UInt32  dummy980341d8_4_2:3;
        RBus_UInt32  scdc_reset:1;
        RBus_UInt32  res1:26;
    };
}scdc_cr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  apai:1;
        RBus_UInt32  dummy980341dc_6_1:6;
        RBus_UInt32  dbnc_level_sel:1;
        RBus_UInt32  rr_retry_sel:2;
        RBus_UInt32  i2c_free_num:7;
        RBus_UInt32  i2c_sda_dly_sel:4;
        RBus_UInt32  i2c_scl_dly_sel:4;
        RBus_UInt32  tmds_config_flag:1;
        RBus_UInt32  scrambler_status_flag:1;
        RBus_UInt32  config_flag:1;
        RBus_UInt32  status_flag:1;
        RBus_UInt32  timeout_sel:2;
        RBus_UInt32  timeout_flag:1;
    };
}scdc_pcr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ap1:8;
        RBus_UInt32  res1:24;
    };
}scdc_ap_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dp1:8;
        RBus_UInt32  res1:24;
    };
}scdc_dp_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  clock_det_en:1;
        RBus_UInt32  res1:31;
    };
}clkdetcr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  clk_not_in_target:1;
        RBus_UInt32  clk_not_in_target_irq_en:1;
        RBus_UInt32  dummy980341ec_3_2:2;
        RBus_UInt32  tmds_chg_irq:1;
        RBus_UInt32  en_tmds_chg_irq:1;
        RBus_UInt32  res1:26;
    };
}clkdetsr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dclk_cnt_end:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  dclk_cnt_start:12;
        RBus_UInt32  res1:4;
    };
}gdi_tmdsclk_setting_00_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  target_for_minimum_clk_counter:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  target_for_maximum_clk_counter:12;
        RBus_UInt32  res1:4;
    };
}gdi_tmdsclk_setting_01_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  clk_counter_debounce:8;
        RBus_UInt32  clk_counter_err_threshold:4;
        RBus_UInt32  res1:20;
    };
}gdi_tmdsclk_setting_02_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:32;
    };
}hdcp_bist_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hdcp_en:1;
        RBus_UInt32  dkapde:1;
        RBus_UInt32  maddf:1;
        RBus_UInt32  ivspm:1;
        RBus_UInt32  invvs:1;
        RBus_UInt32  ivsp:1;
        RBus_UInt32  rpt:1;
        RBus_UInt32  namfe:1;
        RBus_UInt32  res1:24;
    };
}hdcp_cr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dkap:8;
        RBus_UInt32  res1:24;
    };
}hdcp_dkap_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  apai:1;
        RBus_UInt32  apai_type:1;
        RBus_UInt32  dummy9803420c_2:1;
        RBus_UInt32  avmute_dis:1;
        RBus_UInt32  enc_tog:1;
        RBus_UInt32  hdcp_vs_sel:1;
        RBus_UInt32  km_clk_sel:1;
        RBus_UInt32  dbnc_level_sel:1;
        RBus_UInt32  km_clk_sel_eco:1;
        RBus_UInt32  ddcdbnc:1;
        RBus_UInt32  tune_range:7;
        RBus_UInt32  tune_up_down:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  i2c_sda_dly_sel:4;
        RBus_UInt32  i2c_scl_dly_sel:4;
        RBus_UInt32  iic_st:3;
        RBus_UInt32  res1:1;
    };
}hdcp_pcr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy98034210_1_0:2;
        RBus_UInt32  rd_bksv_flag:1;
        RBus_UInt32  rd_ri_flag:1;
        RBus_UInt32  wr_aksv_flag:1;
        RBus_UInt32  res1:27;
    };
}hdcp_flag1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy98034214_1_0:2;
        RBus_UInt32  irq_bksv_en:1;
        RBus_UInt32  irq_ri_en:1;
        RBus_UInt32  irq_aksv_en:1;
        RBus_UInt32  res1:27;
    };
}hdcp_flag2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ap1:8;
        RBus_UInt32  dp_ksvfifo_ptr:10;
        RBus_UInt32  ksvfifo_status:1;
        RBus_UInt32  res1:13;
    };
}hdcp_ap_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dp1:8;
        RBus_UInt32  res1:24;
    };
}hdcp_dp_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hdcp_2p2_en:1;
        RBus_UInt32  switch_unauth:1;
        RBus_UInt32  ks_done:1;
        RBus_UInt32  downstream_done:1;
        RBus_UInt32  assemble_id_fail:1;
        RBus_UInt32  verify_id_done:1;
        RBus_UInt32  verify_id_pass:1;
        RBus_UInt32  new_auth_device:1;
        RBus_UInt32  mspai:1;
        RBus_UInt32  apply_state:1;
        RBus_UInt32  fw_mode_riv:1;
        RBus_UInt32  rpt_thr_unauth:1;
        RBus_UInt32  switch_state:12;
        RBus_UInt32  ks_encoded:1;
        RBus_UInt32  apply_cp_fn:1;
        RBus_UInt32  fn_auto_inc:1;
        RBus_UInt32  dummy98034220_31_27:5;
    };
}hdcp_2p2_cr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ks:32;
    };
}hdcp_2p2_ks0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ks:32;
    };
}hdcp_2p2_ks1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ks:32;
    };
}hdcp_2p2_ks2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ks:32;
    };
}hdcp_2p2_ks3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lc:32;
    };
}hdcp_2p2_lc0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lc:32;
    };
}hdcp_2p2_lc1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lc:32;
    };
}hdcp_2p2_lc2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lc:32;
    };
}hdcp_2p2_lc3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  riv:32;
    };
}hdcp_2p2_riv0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  riv:32;
    };
}hdcp_2p2_riv1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  state:12;
        RBus_UInt32  irq_wr_msg_start:1;
        RBus_UInt32  irq_rd_msg_start:1;
        RBus_UInt32  irq_wr_msg_done:1;
        RBus_UInt32  irq_rd_msg_done:1;
        RBus_UInt32  irq_state_chg:1;
        RBus_UInt32  irq_unauth_chg:1;
        RBus_UInt32  irq_msg_overwrite:1;
        RBus_UInt32  irq_no_cp_packet:1;
        RBus_UInt32  irq_crc_fail:1;
        RBus_UInt32  irq_fn_compare_fail:1;
        RBus_UInt32  frame_number:8;
        RBus_UInt32  res1:2;
    };
}hdcp_2p2_sr0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  irq_wr_msg_start_en:1;
        RBus_UInt32  irq_rd_msg_start_en:1;
        RBus_UInt32  irq_wr_msg_done_en:1;
        RBus_UInt32  irq_rd_msg_done_en:1;
        RBus_UInt32  irq_state_chg_en:1;
        RBus_UInt32  irq_unauth_chg_en:1;
        RBus_UInt32  irq_msg_overwrite_en:1;
        RBus_UInt32  irq_no_cp_packet_en:1;
        RBus_UInt32  irq_crc_fail_en:1;
        RBus_UInt32  irq_fn_compare_fail_en:1;
        RBus_UInt32  no_cp_packet_wd_en:1;
        RBus_UInt32  crc_fail_wd_en:1;
        RBus_UInt32  res1:20;
    };
}hdcp_2p2_sr1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ap1:10;
        RBus_UInt32  res1:22;
    };
}hdcp_msap_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dp1:8;
        RBus_UInt32  res1:24;
    };
}hdcp_msdp_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy98034300_3_0:4;
        RBus_UInt32  dbdcb:1;
        RBus_UInt32  ocs:2;
        RBus_UInt32  icmux:1;
        RBus_UInt32  res1:24;
    };
}hdmi_cmcr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy98034304_7_0:8;
        RBus_UInt32  res1:24;
    };
}hdmi_mcapr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sc:7;
        RBus_UInt32  slc:1;
        RBus_UInt32  s1_code_msb:1;
        RBus_UInt32  sc_r:7;
        RBus_UInt32  slc_r:1;
        RBus_UInt32  s1_code_msb_r:1;
        RBus_UInt32  res1:14;
    };
}hdmi_scapr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dcaprl:8;
        RBus_UInt32  dcaprh:8;
        RBus_UInt32  res1:16;
    };
}hdmi_dcapr0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pecs:2;
        RBus_UInt32  etfbc:1;
        RBus_UInt32  etfd:1;
        RBus_UInt32  etcn:1;
        RBus_UInt32  fdint:3;
        RBus_UInt32  res1:24;
    };
}hdmi_pscr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fddr:8;
        RBus_UInt32  fddf:8;
        RBus_UInt32  mfddr:8;
        RBus_UInt32  mfddf:8;
    };
}hdmi_afdd_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tt:4;
        RBus_UInt32  tl2def:2;
        RBus_UInt32  tl2der:2;
        RBus_UInt32  res1:24;
    };
}hdmi_ftr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bad:3;
        RBus_UInt32  tfd:5;
        RBus_UInt32  res1:24;
    };
}hdmi_fbr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  icl:8;
        RBus_UInt32  ich:8;
        RBus_UInt32  res1:16;
    };
}hdmi_icpsncr0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pcl:8;
        RBus_UInt32  pch:8;
        RBus_UInt32  res1:16;
    };
}hdmi_pcpsncr0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ictl:8;
        RBus_UInt32  icth:8;
        RBus_UInt32  res1:16;
    };
}hdmi_ictpsr0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pctl:8;
        RBus_UInt32  pcth:8;
        RBus_UInt32  res1:16;
    };
}hdmi_pctpsr0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  icbl:8;
        RBus_UInt32  icbh:8;
        RBus_UInt32  res1:16;
    };
}hdmi_icbpsr0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pcbl:8;
        RBus_UInt32  pcbh:8;
        RBus_UInt32  res1:16;
    };
}hdmi_pcbpsr0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  nt:12;
        RBus_UInt32  rm:1;
        RBus_UInt32  res1:19;
    };
}hdmi_ntx1024tr0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ftb:8;
        RBus_UInt32  res1:24;
    };
}hdmi_stbpr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ncper:8;
        RBus_UInt32  res1:24;
    };
}hdmi_ncper_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  petr:8;
        RBus_UInt32  res1:24;
    };
}hdmi_petr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy98034350_0:1;
        RBus_UInt32  esdm:1;
        RBus_UInt32  pem:1;
        RBus_UInt32  w1c5:1;
        RBus_UInt32  tef:1;
        RBus_UInt32  ssdmou:1;
        RBus_UInt32  cmvbc:1;
        RBus_UInt32  cmvtc:1;
        RBus_UInt32  res1:24;
    };
}hdmi_aapnr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  psc:4;
        RBus_UInt32  pst:1;
        RBus_UInt32  edm:1;
        RBus_UInt32  dummy98034354_6:1;
        RBus_UInt32  dummy98034354_7:1;
        RBus_UInt32  res1:24;
    };
}hdmi_apdmcr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sps:4;
        RBus_UInt32  fps:4;
        RBus_UInt32  res1:24;
    };
}hdmi_aptmcr0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  nfpss:4;
        RBus_UInt32  spsd:1;
        RBus_UInt32  fpsd:1;
        RBus_UInt32  plltm:1;
        RBus_UInt32  res1:25;
    };
}hdmi_aptmcr1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ncts_disable_pe_check_cnt:20;
        RBus_UInt32  dummy98034360_27_20:8;
        RBus_UInt32  ncts_disable_pe_check_irq_en:1;
        RBus_UInt32  ncts_disable_pe_check_status:1;
        RBus_UInt32  ncts_re_enable_off_en:1;
        RBus_UInt32  ncts_disable_pe_check_en:1;
    };
}hdmi_npecr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ncts_re_enable_off_end:16;
        RBus_UInt32  ncts_re_enable_off_start:16;
    };
}hdmi_nror_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  nt_low_threshold:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  nt_up_threshold:12;
        RBus_UInt32  irq_by_tmds_clk:1;
        RBus_UInt32  wd_by_tmds_clk:1;
        RBus_UInt32  under_threshold:1;
        RBus_UInt32  over_threshold:1;
    };
}hdmi_ntx1024tr0_threshold_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dpll_ip:3;
        RBus_UInt32  dpll_rs:3;
        RBus_UInt32  dpll_n:3;
        RBus_UInt32  res2:5;
        RBus_UInt32  dpll_o:2;
        RBus_UInt32  dpll_bpsin:1;
        RBus_UInt32  dpll_reser:4;
        RBus_UInt32  res1:1;
        RBus_UInt32  dpll_m:8;
        RBus_UInt32  dpll_reg:2;
    };
}hdmi_apllcr0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dpll_pow:1;
        RBus_UInt32  dpll_vcorstb:1;
        RBus_UInt32  dpll_freeze:1;
        RBus_UInt32  dpll_stoppsw:1;
        RBus_UInt32  dummy98034384_4:1;
        RBus_UInt32  dpll_wdset:1;
        RBus_UInt32  dpll_wdrst:1;
        RBus_UInt32  dpll_wdo:1;
        RBus_UInt32  dpll_bpspsw:1;
        RBus_UInt32  dpll_reserve:1;
        RBus_UInt32  res7:1;
        RBus_UInt32  res6:1;
        RBus_UInt32  res5:1;
        RBus_UInt32  res4:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  dpll_cs:2;
        RBus_UInt32  dpll_seltst:2;
        RBus_UInt32  dpll_cp:2;
        RBus_UInt32  res1:9;
    };
}hdmi_apllcr1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dpll_reloadm:1;
        RBus_UInt32  res4:2;
        RBus_UInt32  res3:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  res1:27;
    };
}hdmi_apllcr2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sum_c_samp:16;
        RBus_UInt32  res1:16;
    };
}hdmi_apllcr3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dpll_m_sel:1;
        RBus_UInt32  dpll_m_db:1;
        RBus_UInt32  res2:20;
        RBus_UInt32  dpll_m_test:8;
        RBus_UInt32  res1:2;
    };
}hdmi_apll_testm_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dpll_ip:3;
        RBus_UInt32  dpll_rs:3;
        RBus_UInt32  dpll_n:3;
        RBus_UInt32  res2:5;
        RBus_UInt32  dpll_o:2;
        RBus_UInt32  dpll_bpsin:1;
        RBus_UInt32  dpll_reser:4;
        RBus_UInt32  res1:1;
        RBus_UInt32  dpll_m:8;
        RBus_UInt32  dpll_reg:2;
    };
}hdmi_vpllcr0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dpll_pow:1;
        RBus_UInt32  dpll_vcorstb:1;
        RBus_UInt32  dpll_freeze:1;
        RBus_UInt32  dpll_stoppsw:1;
        RBus_UInt32  dummy98034404_4:1;
        RBus_UInt32  dpll_wdset:1;
        RBus_UInt32  dpll_wdrst:1;
        RBus_UInt32  dpll_wdo:1;
        RBus_UInt32  dpll_bpspsw:1;
        RBus_UInt32  dpll_reserve:1;
        RBus_UInt32  dpll_ldo_sel:2;
        RBus_UInt32  dpll_ldo_pow:1;
        RBus_UInt32  res4:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  dpll_cs:2;
        RBus_UInt32  dpll_seltst:2;
        RBus_UInt32  dpll_cp:2;
        RBus_UInt32  res1:9;
    };
}hdmi_vpllcr1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dpll_reloadm:1;
        RBus_UInt32  res4:2;
        RBus_UInt32  res3:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  res1:27;
    };
}hdmi_vpllcr2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy98034410_3_0:4;
        RBus_UInt32  sclkg_dbuf:1;
        RBus_UInt32  sclkg_oclk_sel:2;
        RBus_UInt32  sclkg_pll_in_sel:1;
        RBus_UInt32  res1:24;
    };
}mn_sclkg_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sclkg_pll_divs:7;
        RBus_UInt32  sclkg_pll_div2_en:1;
        RBus_UInt32  res1:24;
    };
}mn_sclkg_divs_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  en:1;
        RBus_UInt32  dummy98034500_2_1:2;
        RBus_UInt32  irq_det_chg_en:1;
        RBus_UInt32  det_con:1;
        RBus_UInt32  dummy98034500_7_5:3;
        RBus_UInt32  dummy98034500_16_8:9;
        RBus_UInt32  res1:15;
    };
}mdd_cr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  det_result:1;
        RBus_UInt32  det_result_chg:1;
        RBus_UInt32  res1:30;
    };
}mdd_sr_RBUS;




#endif 


#endif //_RBUS_HDMI_REG_H_
