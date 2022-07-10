/**
* @file rbusDFE_HDMI_RX_PHYReg.h
* @spec kylin_hdmirx_DFE_PHY_arch_spec
* RBus systemc program.
*
* @author RS_MM2_SD
* @email jason9.ccc@realtek.com
* @date 2015/3/11
* @ingroup model_rbus
* @version { 1.0 }
**
*/

#ifndef _RBUS_DFE_HDMI_RX_PHY_REG_H_
#define _RBUS_DFE_HDMI_RX_PHY_REG_H_

#include "rbus/rbusTypes.h"



//  DFE_HDMI_RX_PHY Register Address



#define  DFE_HDMI_RX_PHY_BG_ADDR                            		(0x98034a00)
#define  DFE_HDMI_RX_PHY_MD_ADDR                            		(0x98034a04)
#define  DFE_HDMI_RX_PHY_LDO_ADDR                           		(0x98034a08)
#define  DFE_HDMI_RX_PHY_MHL_ADDR                           		(0x98034a0c)
#define  DFE_HDMI_RX_PHY_P0_ACDR1_ADDR                      		(0x98034a10)
#define  DFE_HDMI_RX_PHY_P0_ACDR2_ADDR                      		(0x98034a14)
#define  DFE_HDMI_RX_PHY_P0_B1_ADDR                         		(0x98034a18)
#define  DFE_HDMI_RX_PHY_P0_B2_ADDR                         		(0x98034a1c)
#define  DFE_HDMI_RX_PHY_P0_B3_ADDR                         		(0x98034a20)
#define  DFE_HDMI_RX_PHY_P0_B4_ADDR                         		(0x98034a24)
#define  DFE_HDMI_RX_PHY_P0_CK1_ADDR                        		(0x98034a28)
#define  DFE_HDMI_RX_PHY_P0_CK2_ADDR                        		(0x98034a2c)
#define  DFE_HDMI_RX_PHY_P0_CK3_ADDR                        		(0x98034a30)
#define  DFE_HDMI_RX_PHY_P0_CK4_ADDR                        		(0x98034a34)
#define  DFE_HDMI_RX_PHY_ENABLE_ADDR                        		(0x98034a38)
#define  DFE_HDMI_RX_PHY_P0_G1_ADDR                         		(0x98034a3c)
#define  DFE_HDMI_RX_PHY_P0_G2_ADDR                         		(0x98034a40)
#define  DFE_HDMI_RX_PHY_P0_G3_ADDR                         		(0x98034a44)
#define  DFE_HDMI_RX_PHY_P0_G4_ADDR                         		(0x98034a48)
#define  DFE_HDMI_RX_PHY_P0_R1_ADDR                         		(0x98034a4c)
#define  DFE_HDMI_RX_PHY_P0_R2_ADDR                         		(0x98034a50)
#define  DFE_HDMI_RX_PHY_P0_R3_ADDR                         		(0x98034a54)
#define  DFE_HDMI_RX_PHY_P0_R4_ADDR                         		(0x98034a58)
#define  DFE_HDMI_RX_PHY_P1_ACDR1_ADDR                      		(0x98034a5c)
#define  DFE_HDMI_RX_PHY_P1_ACDR2_ADDR                      		(0x98034a60)
#define  DFE_HDMI_RX_PHY_P1_B1_ADDR                         		(0x98034a64)
#define  DFE_HDMI_RX_PHY_P1_B2_ADDR                         		(0x98034a68)
#define  DFE_HDMI_RX_PHY_P1_B3_ADDR                         		(0x98034a6c)
#define  DFE_HDMI_RX_PHY_P1_B4_ADDR                         		(0x98034a70)
#define  DFE_HDMI_RX_PHY_P1_CK1_ADDR                        		(0x98034a74)
#define  DFE_HDMI_RX_PHY_P1_CK2_ADDR                        		(0x98034a78)
#define  DFE_HDMI_RX_PHY_P1_CK3_ADDR                        		(0x98034a7c)
#define  DFE_HDMI_RX_PHY_P1_CK4_ADDR                        		(0x98034a80)
#define  DFE_HDMI_RX_PHY_P1_G1_ADDR                         		(0x98034a84)
#define  DFE_HDMI_RX_PHY_P1_G2_ADDR                         		(0x98034a88)
#define  DFE_HDMI_RX_PHY_P1_G3_ADDR                         		(0x98034a8c)
#define  DFE_HDMI_RX_PHY_P1_G4_ADDR                         		(0x98034a90)
#define  DFE_HDMI_RX_PHY_P1_R1_ADDR                         		(0x98034a94)
#define  DFE_HDMI_RX_PHY_P1_R2_ADDR                         		(0x98034a98)
#define  DFE_HDMI_RX_PHY_P1_R3_ADDR                         		(0x98034a9c)
#define  DFE_HDMI_RX_PHY_P1_R4_ADDR                         		(0x98034aa0)
#define  DFE_HDMI_RX_PHY_P2_ACDR1_ADDR                      		(0x98034aa4)
#define  DFE_HDMI_RX_PHY_P2_ACDR2_ADDR                      		(0x98034aa8)
#define  DFE_HDMI_RX_PHY_P2_B1_ADDR                         		(0x98034aac)
#define  DFE_HDMI_RX_PHY_P2_B2_ADDR                         		(0x98034ab0)
#define  DFE_HDMI_RX_PHY_P2_B3_ADDR                         		(0x98034ab4)
#define  DFE_HDMI_RX_PHY_P2_B4_ADDR                         		(0x98034ab8)
#define  DFE_HDMI_RX_PHY_P2_CK1_ADDR                        		(0x98034abc)
#define  DFE_HDMI_RX_PHY_P2_CK2_ADDR                        		(0x98034ac0)
#define  DFE_HDMI_RX_PHY_P2_CK3_ADDR                        		(0x98034ac4)
#define  DFE_HDMI_RX_PHY_P2_CK4_ADDR                        		(0x98034ac8)
#define  DFE_HDMI_RX_PHY_P2_G1_ADDR                         		(0x98034acc)
#define  DFE_HDMI_RX_PHY_P2_G2_ADDR                         		(0x98034ad0)
#define  DFE_HDMI_RX_PHY_P2_G3_ADDR                         		(0x98034ad4)
#define  DFE_HDMI_RX_PHY_P2_G4_ADDR                         		(0x98034ad8)
#define  DFE_HDMI_RX_PHY_P2_R1_ADDR                         		(0x98034adc)
#define  DFE_HDMI_RX_PHY_P2_R2_ADDR                         		(0x98034ae0)
#define  DFE_HDMI_RX_PHY_P2_R3_ADDR                         		(0x98034ae4)
#define  DFE_HDMI_RX_PHY_P2_R4_ADDR                         		(0x98034ae8)
#define  DFE_HDMI_RX_PHY_TEST_ADDR                          		(0x98034aec)
#define  DFE_HDMI_RX_PHY_TOP_IN_ADDR                        		(0x98034af0)
#define  DFE_HDMI_RX_PHY_TOP_OUT_ADDR                       		(0x98034af4)
#define  DFE_HDMI_RX_PHY_Z0K_ADDR                           		(0x98034af8)
#define  DFE_HDMI_RX_PHY_Z0POW_ADDR                         		(0x98034afc)
#define  DFE_HDMI_RX_PHY_EYE1_ADDR                          		(0x98034b00)
#define  DFE_HDMI_RX_PHY_EYE2_ADDR                          		(0x98034b04)
#define  DFE_HDMI_RX_PHY_BYPASS_ADDR                        		(0x98034b08)
#define  DFE_HDMI_RX_PHY_RST_ADDR                           		(0x98034b0c)
#define  DFE_HDMI_RX_PHY_REGD0_ADDR                         		(0x98034b1c)
#define  DFE_HDMI_RX_PHY_REGD1_ADDR                         		(0x98034b20)
#define  DFE_HDMI_RX_PHY_REGD2_ADDR                         		(0x98034b24)
#define  DFE_HDMI_RX_PHY_REGD3_ADDR                         		(0x98034b28)
#define  DFE_HDMI_RX_PHY_REGD4_ADDR                         		(0x98034b2c)
#define  DFE_HDMI_RX_PHY_REGD5_ADDR                         		(0x98034b30)
#define  DFE_HDMI_RX_PHY_REGD6_ADDR                         		(0x98034b34)
#define  DFE_HDMI_RX_PHY_REGD7_ADDR                         		(0x98034b38)
#define  DFE_HDMI_RX_PHY_REGD8_ADDR                         		(0x98034b3c)
#define  DFE_HDMI_RX_PHY_REGD9_ADDR                         		(0x98034b40)
#define  DFE_HDMI_RX_PHY_REGD10_ADDR                        		(0x98034b44)
#define  DFE_HDMI_RX_PHY_REGD11_ADDR                        		(0x98034b48)
#define  DFE_HDMI_RX_PHY_REGD12_ADDR                        		(0x98034b4c)
#define  DFE_HDMI_RX_PHY_REGD13_ADDR                        		(0x98034b50)
#define  DFE_HDMI_RX_PHY_REGD14_ADDR                        		(0x98034b54)
#define  DFE_HDMI_RX_PHY_REGD15_ADDR                        		(0x98034b58)
#define  DFE_HDMI_RX_PHY_REGD16_ADDR                        		(0x98034b5c)
#define  DFE_HDMI_RX_PHY_REGD17_ADDR                        		(0x98034b60)
#define  DFE_HDMI_RX_PHY_REGD18_ADDR                        		(0x98034b64)
#define  DFE_HDMI_RX_PHY_REGD19_ADDR                        		(0x98034b68)
#define  DFE_HDMI_RX_PHY_REGD20_ADDR                        		(0x98034b6c)
#define  DFE_HDMI_RX_PHY_REGD21_ADDR                        		(0x98034b70)
#define  DFE_HDMI_RX_PHY_REGD22_ADDR                        		(0x98034b74)
#define  DFE_HDMI_RX_PHY_REGD23_ADDR                        		(0x98034b78)
#define  DFE_HDMI_RX_PHY_REGD24_ADDR                        		(0x98034b7c)
#define  DFE_HDMI_RX_PHY_REGD25_ADDR                        		(0x98034b80)
#define  DFE_HDMI_RX_PHY_REGD26_ADDR                        		(0x98034b84)
#define  DFE_HDMI_RX_PHY_REGD27_ADDR                        		(0x98034b88)
#define  DFE_HDMI_RX_PHY_REGD28_ADDR                        		(0x98034b8c)
#define  DFE_HDMI_RX_PHY_REGD29_ADDR                        		(0x98034b90)
#define  DFE_HDMI_RX_PHY_REGD30_ADDR                        		(0x98034b94)
#define  DFE_HDMI_RX_PHY_REGD31_ADDR                        		(0x98034b98)
#define  DFE_HDMI_RX_PHY_REGD32_ADDR                        		(0x98034b9c)
#define  DFE_HDMI_RX_PHY_REGD33_ADDR                        		(0x98034ba0)
#define  DFE_HDMI_RX_PHY_REGD34_ADDR                        		(0x98034ba4)
#define  DFE_HDMI_RX_PHY_REGD35_ADDR                        		(0x98034ba8)
#define  DFE_HDMI_RX_PHY_REGD36_ADDR                        		(0x98034bac)
#define  DFE_HDMI_RX_PHY_REGD37_ADDR                        		(0x98034bb0)
#define  DFE_HDMI_RX_PHY_REGD38_ADDR                        		(0x98034bb4)
#define  DFE_HDMI_RX_PHY_REGD39_ADDR                        		(0x98034bb8)
#define  DFE_HDMI_RX_PHY_REGD40_ADDR                        		(0x98034bbc)
#define  DFE_HDMI_RX_PHY_REGD41_ADDR                        		(0x98034bc0)
#define  DFE_HDMI_RX_PHY_REGD42_ADDR                        		(0x98034bc4)
#define  DFE_HDMI_RX_PHY_REGD43_ADDR                        		(0x98034bc8)
#define  DFE_HDMI_RX_PHY_REGD44_ADDR                        		(0x98034bcc)
#define  DFE_HDMI_RX_PHY_REGD45_ADDR                        		(0x98034bd0)
#define  DFE_HDMI_RX_PHY_REGD46_ADDR                        		(0x98034bd4)
#define  DFE_HDMI_RX_PHY_REGD47_ADDR                        		(0x98034bd8)
#define  DFE_HDMI_RX_PHY_REGD48_ADDR                        		(0x98034bdc)
#define  DFE_HDMI_RX_PHY_REGD49_ADDR                        		(0x98034be0)
#define  DFE_HDMI_RX_PHY_REGD50_ADDR                        		(0x98034be4)
#define  DFE_HDMI_RX_PHY_REGD51_ADDR                        		(0x98034be8)
#define  DFE_HDMI_RX_PHY_REGD52_ADDR                        		(0x98034bec)
#define  DFE_HDMI_RX_PHY_REGD53_ADDR                        		(0x98034bf0)
#define  DFE_HDMI_RX_PHY_REGD54_ADDR                        		(0x98034bf4)
#define  DFE_HDMI_RX_PHY_REGD55_ADDR                        		(0x98034bf8)
#define  DFE_HDMI_RX_PHY_REGD56_ADDR                        		(0x98034bfc)
#define  DFE_HDMI_RX_PHY_REGD57_ADDR                        		(0x98034c00)
#define  DFE_HDMI_RX_PHY_REGD58_ADDR                        		(0x98034c04)

#define  DFE_HDMI_RX_PHY_BG_VADDR                          		(0xd8034a00)
#define  DFE_HDMI_RX_PHY_MD_VADDR                          		(0xd8034a04)
#define  DFE_HDMI_RX_PHY_LDO_VADDR                         		(0xd8034a08)
#define  DFE_HDMI_RX_PHY_MHL_VADDR                         		(0xd8034a0c)
#define  DFE_HDMI_RX_PHY_P0_ACDR1_VADDR                    		(0xd8034a10)
#define  DFE_HDMI_RX_PHY_P0_ACDR2_VADDR                    		(0xd8034a14)
#define  DFE_HDMI_RX_PHY_P0_B1_VADDR                       		(0xd8034a18)
#define  DFE_HDMI_RX_PHY_P0_B2_VADDR                       		(0xd8034a1c)
#define  DFE_HDMI_RX_PHY_P0_B3_VADDR                       		(0xd8034a20)
#define  DFE_HDMI_RX_PHY_P0_B4_VADDR                       		(0xd8034a24)
#define  DFE_HDMI_RX_PHY_P0_CK1_VADDR                      		(0xd8034a28)
#define  DFE_HDMI_RX_PHY_P0_CK2_VADDR                      		(0xd8034a2c)
#define  DFE_HDMI_RX_PHY_P0_CK3_VADDR                      		(0xd8034a30)
#define  DFE_HDMI_RX_PHY_P0_CK4_VADDR                      		(0xd8034a34)
#define  DFE_HDMI_RX_PHY_ENABLE_VADDR                      		(0xd8034a38)
#define  DFE_HDMI_RX_PHY_P0_G1_VADDR                       		(0xd8034a3c)
#define  DFE_HDMI_RX_PHY_P0_G2_VADDR                       		(0xd8034a40)
#define  DFE_HDMI_RX_PHY_P0_G3_VADDR                       		(0xd8034a44)
#define  DFE_HDMI_RX_PHY_P0_G4_VADDR                       		(0xd8034a48)
#define  DFE_HDMI_RX_PHY_P0_R1_VADDR                       		(0xd8034a4c)
#define  DFE_HDMI_RX_PHY_P0_R2_VADDR                       		(0xd8034a50)
#define  DFE_HDMI_RX_PHY_P0_R3_VADDR                       		(0xd8034a54)
#define  DFE_HDMI_RX_PHY_P0_R4_VADDR                       		(0xd8034a58)
#define  DFE_HDMI_RX_PHY_P1_ACDR1_VADDR                    		(0xd8034a5c)
#define  DFE_HDMI_RX_PHY_P1_ACDR2_VADDR                    		(0xd8034a60)
#define  DFE_HDMI_RX_PHY_P1_B1_VADDR                       		(0xd8034a64)
#define  DFE_HDMI_RX_PHY_P1_B2_VADDR                       		(0xd8034a68)
#define  DFE_HDMI_RX_PHY_P1_B3_VADDR                       		(0xd8034a6c)
#define  DFE_HDMI_RX_PHY_P1_B4_VADDR                       		(0xd8034a70)
#define  DFE_HDMI_RX_PHY_P1_CK1_VADDR                      		(0xd8034a74)
#define  DFE_HDMI_RX_PHY_P1_CK2_VADDR                      		(0xd8034a78)
#define  DFE_HDMI_RX_PHY_P1_CK3_VADDR                      		(0xd8034a7c)
#define  DFE_HDMI_RX_PHY_P1_CK4_VADDR                      		(0xd8034a80)
#define  DFE_HDMI_RX_PHY_P1_G1_VADDR                       		(0xd8034a84)
#define  DFE_HDMI_RX_PHY_P1_G2_VADDR                       		(0xd8034a88)
#define  DFE_HDMI_RX_PHY_P1_G3_VADDR                       		(0xd8034a8c)
#define  DFE_HDMI_RX_PHY_P1_G4_VADDR                       		(0xd8034a90)
#define  DFE_HDMI_RX_PHY_P1_R1_VADDR                       		(0xd8034a94)
#define  DFE_HDMI_RX_PHY_P1_R2_VADDR                       		(0xd8034a98)
#define  DFE_HDMI_RX_PHY_P1_R3_VADDR                       		(0xd8034a9c)
#define  DFE_HDMI_RX_PHY_P1_R4_VADDR                       		(0xd8034aa0)
#define  DFE_HDMI_RX_PHY_P2_ACDR1_VADDR                    		(0xd8034aa4)
#define  DFE_HDMI_RX_PHY_P2_ACDR2_VADDR                    		(0xd8034aa8)
#define  DFE_HDMI_RX_PHY_P2_B1_VADDR                       		(0xd8034aac)
#define  DFE_HDMI_RX_PHY_P2_B2_VADDR                       		(0xd8034ab0)
#define  DFE_HDMI_RX_PHY_P2_B3_VADDR                       		(0xd8034ab4)
#define  DFE_HDMI_RX_PHY_P2_B4_VADDR                       		(0xd8034ab8)
#define  DFE_HDMI_RX_PHY_P2_CK1_VADDR                      		(0xd8034abc)
#define  DFE_HDMI_RX_PHY_P2_CK2_VADDR                      		(0xd8034ac0)
#define  DFE_HDMI_RX_PHY_P2_CK3_VADDR                      		(0xd8034ac4)
#define  DFE_HDMI_RX_PHY_P2_CK4_VADDR                      		(0xd8034ac8)
#define  DFE_HDMI_RX_PHY_P2_G1_VADDR                       		(0xd8034acc)
#define  DFE_HDMI_RX_PHY_P2_G2_VADDR                       		(0xd8034ad0)
#define  DFE_HDMI_RX_PHY_P2_G3_VADDR                       		(0xd8034ad4)
#define  DFE_HDMI_RX_PHY_P2_G4_VADDR                       		(0xd8034ad8)
#define  DFE_HDMI_RX_PHY_P2_R1_VADDR                       		(0xd8034adc)
#define  DFE_HDMI_RX_PHY_P2_R2_VADDR                       		(0xd8034ae0)
#define  DFE_HDMI_RX_PHY_P2_R3_VADDR                       		(0xd8034ae4)
#define  DFE_HDMI_RX_PHY_P2_R4_VADDR                       		(0xd8034ae8)
#define  DFE_HDMI_RX_PHY_TEST_VADDR                        		(0xd8034aec)
#define  DFE_HDMI_RX_PHY_TOP_IN_VADDR                      		(0xd8034af0)
#define  DFE_HDMI_RX_PHY_TOP_OUT_VADDR                     		(0xd8034af4)
#define  DFE_HDMI_RX_PHY_Z0K_VADDR                         		(0xd8034af8)
#define  DFE_HDMI_RX_PHY_Z0POW_VADDR                       		(0xd8034afc)
#define  DFE_HDMI_RX_PHY_EYE1_VADDR                        		(0xd8034b00)
#define  DFE_HDMI_RX_PHY_EYE2_VADDR                        		(0xd8034b04)
#define  DFE_HDMI_RX_PHY_BYPASS_VADDR                      		(0xd8034b08)
#define  DFE_HDMI_RX_PHY_RST_VADDR                         		(0xd8034b0c)
#define  DFE_HDMI_RX_PHY_REGD0_VADDR                       		(0xd8034b1c)
#define  DFE_HDMI_RX_PHY_REGD1_VADDR                       		(0xd8034b20)
#define  DFE_HDMI_RX_PHY_REGD2_VADDR                       		(0xd8034b24)
#define  DFE_HDMI_RX_PHY_REGD3_VADDR                       		(0xd8034b28)
#define  DFE_HDMI_RX_PHY_REGD4_VADDR                       		(0xd8034b2c)
#define  DFE_HDMI_RX_PHY_REGD5_VADDR                       		(0xd8034b30)
#define  DFE_HDMI_RX_PHY_REGD6_VADDR                       		(0xd8034b34)
#define  DFE_HDMI_RX_PHY_REGD7_VADDR                       		(0xd8034b38)
#define  DFE_HDMI_RX_PHY_REGD8_VADDR                       		(0xd8034b3c)
#define  DFE_HDMI_RX_PHY_REGD9_VADDR                       		(0xd8034b40)
#define  DFE_HDMI_RX_PHY_REGD10_VADDR                      		(0xd8034b44)
#define  DFE_HDMI_RX_PHY_REGD11_VADDR                      		(0xd8034b48)
#define  DFE_HDMI_RX_PHY_REGD12_VADDR                      		(0xd8034b4c)
#define  DFE_HDMI_RX_PHY_REGD13_VADDR                      		(0xd8034b50)
#define  DFE_HDMI_RX_PHY_REGD14_VADDR                      		(0xd8034b54)
#define  DFE_HDMI_RX_PHY_REGD15_VADDR                      		(0xd8034b58)
#define  DFE_HDMI_RX_PHY_REGD16_VADDR                      		(0xd8034b5c)
#define  DFE_HDMI_RX_PHY_REGD17_VADDR                      		(0xd8034b60)
#define  DFE_HDMI_RX_PHY_REGD18_VADDR                      		(0xd8034b64)
#define  DFE_HDMI_RX_PHY_REGD19_VADDR                      		(0xd8034b68)
#define  DFE_HDMI_RX_PHY_REGD20_VADDR                      		(0xd8034b6c)
#define  DFE_HDMI_RX_PHY_REGD21_VADDR                      		(0xd8034b70)
#define  DFE_HDMI_RX_PHY_REGD22_VADDR                      		(0xd8034b74)
#define  DFE_HDMI_RX_PHY_REGD23_VADDR                      		(0xd8034b78)
#define  DFE_HDMI_RX_PHY_REGD24_VADDR                      		(0xd8034b7c)
#define  DFE_HDMI_RX_PHY_REGD25_VADDR                      		(0xd8034b80)
#define  DFE_HDMI_RX_PHY_REGD26_VADDR                      		(0xd8034b84)
#define  DFE_HDMI_RX_PHY_REGD27_VADDR                      		(0xd8034b88)
#define  DFE_HDMI_RX_PHY_REGD28_VADDR                      		(0xd8034b8c)
#define  DFE_HDMI_RX_PHY_REGD29_VADDR                      		(0xd8034b90)
#define  DFE_HDMI_RX_PHY_REGD30_VADDR                      		(0xd8034b94)
#define  DFE_HDMI_RX_PHY_REGD31_VADDR                      		(0xd8034b98)
#define  DFE_HDMI_RX_PHY_REGD32_VADDR                      		(0xd8034b9c)
#define  DFE_HDMI_RX_PHY_REGD33_VADDR                      		(0xd8034ba0)
#define  DFE_HDMI_RX_PHY_REGD34_VADDR                      		(0xd8034ba4)
#define  DFE_HDMI_RX_PHY_REGD35_VADDR                      		(0xd8034ba8)
#define  DFE_HDMI_RX_PHY_REGD36_VADDR                      		(0xd8034bac)
#define  DFE_HDMI_RX_PHY_REGD37_VADDR                      		(0xd8034bb0)
#define  DFE_HDMI_RX_PHY_REGD38_VADDR                      		(0xd8034bb4)
#define  DFE_HDMI_RX_PHY_REGD39_VADDR                      		(0xd8034bb8)
#define  DFE_HDMI_RX_PHY_REGD40_VADDR                      		(0xd8034bbc)
#define  DFE_HDMI_RX_PHY_REGD41_VADDR                      		(0xd8034bc0)
#define  DFE_HDMI_RX_PHY_REGD42_VADDR                      		(0xd8034bc4)
#define  DFE_HDMI_RX_PHY_REGD43_VADDR                      		(0xd8034bc8)
#define  DFE_HDMI_RX_PHY_REGD44_VADDR                      		(0xd8034bcc)
#define  DFE_HDMI_RX_PHY_REGD45_VADDR                      		(0xd8034bd0)
#define  DFE_HDMI_RX_PHY_REGD46_VADDR                      		(0xd8034bd4)
#define  DFE_HDMI_RX_PHY_REGD47_VADDR                      		(0xd8034bd8)
#define  DFE_HDMI_RX_PHY_REGD48_VADDR                      		(0xd8034bdc)
#define  DFE_HDMI_RX_PHY_REGD49_VADDR                      		(0xd8034be0)
#define  DFE_HDMI_RX_PHY_REGD50_VADDR                      		(0xd8034be4)
#define  DFE_HDMI_RX_PHY_REGD51_VADDR                      		(0xd8034be8)
#define  DFE_HDMI_RX_PHY_REGD52_VADDR                      		(0xd8034bec)
#define  DFE_HDMI_RX_PHY_REGD53_VADDR                      		(0xd8034bf0)
#define  DFE_HDMI_RX_PHY_REGD54_VADDR                      		(0xd8034bf4)
#define  DFE_HDMI_RX_PHY_REGD55_VADDR                      		(0xd8034bf8)
#define  DFE_HDMI_RX_PHY_REGD56_VADDR                      		(0xd8034bfc)
#define  DFE_HDMI_RX_PHY_REGD57_VADDR                      		(0xd8034c00)
#define  DFE_HDMI_RX_PHY_REGD58_VADDR                      		(0xd8034c04)



#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======DFE_HDMI_RX_PHY register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:22;
        RBus_UInt32  reg_bg_rbgloop2:3;
        RBus_UInt32  reg_bg_rbg:3;
        RBus_UInt32  reg_bg_rbg2:2;
        RBus_UInt32  reg_bg_pow:1;
        RBus_UInt32  reg_bg_envbgup:1;
    };
}bg_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:27;
        RBus_UInt32  reg_ck_latch:1;
        RBus_UInt32  reg_ck_cmp:1;
        RBus_UInt32  reg_ck_ckdet:3;
    };
}md_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:23;
        RBus_UInt32  reg_p2_ldo_sel:2;
        RBus_UInt32  reg_p1_ldo_sel:2;
        RBus_UInt32  reg_p0_ldo_sel:2;
        RBus_UInt32  reg_p2_ldo_pow:1;
        RBus_UInt32  reg_p1_ldo_pow:1;
        RBus_UInt32  reg_p0_ldo_pow:1;
    };
}ldo_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:22;
        RBus_UInt32  reg_p2_mhl_hdmi_datasel:1;
        RBus_UInt32  reg_p2_mhl_hdmi_cksel:1;
        RBus_UInt32  reg_p2_mhl_pow:1;
        RBus_UInt32  reg_p1_mhl_hdmi_datasel:1;
        RBus_UInt32  reg_p1_mhl_hdmi_cksel:1;
        RBus_UInt32  reg_p1_mhl_pow:1;
        RBus_UInt32  reg_p0_mhl_hdmi_cksel:1;
        RBus_UInt32  reg_p0_mhl_hdmi_datasel:1;
        RBus_UInt32  reg_p0_mhl_pow:1;
        RBus_UInt32  reg_mhl_hdmisel:1;
    };
}mhl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_acdr_4:8;
        RBus_UInt32  reg_p0_acdr_3:8;
        RBus_UInt32  reg_p0_acdr_2:8;
        RBus_UInt32  reg_p0_acdr_1:8;
    };
}p0_acdr1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_acdr_8:8;
        RBus_UInt32  reg_p0_acdr_7:8;
        RBus_UInt32  reg_p0_acdr_6:8;
        RBus_UInt32  reg_p0_acdr_5:8;
    };
}p0_acdr2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_b_4:8;
        RBus_UInt32  reg_p0_b_3:8;
        RBus_UInt32  reg_p0_b_2:8;
        RBus_UInt32  reg_p0_b_1:8;
    };
}p0_b1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_b_8:8;
        RBus_UInt32  reg_p0_b_7:8;
        RBus_UInt32  reg_p0_b_6:8;
        RBus_UInt32  reg_p0_b_5:8;
    };
}p0_b2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_b_12:8;
        RBus_UInt32  reg_p0_b_11:8;
        RBus_UInt32  reg_p0_b_10:8;
        RBus_UInt32  reg_p0_b_9:8;
    };
}p0_b3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:17;
        RBus_UInt32  reg_p0_b_koff_sel:5;
        RBus_UInt32  reg_p0_b_koff_bound:1;
        RBus_UInt32  reg_p0_b_koffok:1;
        RBus_UInt32  reg_p0_b_13:8;
    };
}p0_b4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_ck_4:8;
        RBus_UInt32  reg_p0_ck_3:8;
        RBus_UInt32  reg_p0_ck_2:8;
        RBus_UInt32  reg_p0_ck_1:8;
    };
}p0_ck1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_ck_8:8;
        RBus_UInt32  reg_p0_ck_7:8;
        RBus_UInt32  reg_p0_ck_6:8;
        RBus_UInt32  reg_p0_ck_5:8;
    };
}p0_ck2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_ck_12:8;
        RBus_UInt32  reg_p0_ck_11:8;
        RBus_UInt32  reg_p0_ck_10:8;
        RBus_UInt32  reg_p0_ck_9:8;
    };
}p0_ck3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  reg_p0_ck_13:8;
    };
}p0_ck4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:11;
        RBus_UInt32  reg_p2_en_rx:3;
        RBus_UInt32  reg_p2_en_cmu:1;
        RBus_UInt32  reg_p2_en_cdr:3;
        RBus_UInt32  reg_p1_en_rx:3;
        RBus_UInt32  reg_p1_en_cmu:1;
        RBus_UInt32  reg_p1_en_cdr:3;
        RBus_UInt32  reg_p0_en_rx:3;
        RBus_UInt32  reg_p0_en_cmu:1;
        RBus_UInt32  reg_p0_en_cdr:3;
    };
}enable_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_g_4:8;
        RBus_UInt32  reg_p0_g_3:8;
        RBus_UInt32  reg_p0_g_2:8;
        RBus_UInt32  reg_p0_g_1:8;
    };
}p0_g1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_g_8:8;
        RBus_UInt32  reg_p0_g_7:8;
        RBus_UInt32  reg_p0_g_6:8;
        RBus_UInt32  reg_p0_g_5:8;
    };
}p0_g2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_g_12:8;
        RBus_UInt32  reg_p0_g_11:8;
        RBus_UInt32  reg_p0_g_10:8;
        RBus_UInt32  reg_p0_g_9:8;
    };
}p0_g3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:17;
        RBus_UInt32  reg_p0_g_koff_sel:5;
        RBus_UInt32  reg_p0_g_koff_bound:1;
        RBus_UInt32  reg_p0_g_koffok:1;
        RBus_UInt32  reg_p0_g_13:8;
    };
}p0_g4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_r_4:8;
        RBus_UInt32  reg_p0_r_3:8;
        RBus_UInt32  reg_p0_r_2:8;
        RBus_UInt32  reg_p0_r_1:8;
    };
}p0_r1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_r_8:8;
        RBus_UInt32  reg_p0_r_7:8;
        RBus_UInt32  reg_p0_r_6:8;
        RBus_UInt32  reg_p0_r_5:8;
    };
}p0_r2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_r_12:8;
        RBus_UInt32  reg_p0_r_11:8;
        RBus_UInt32  reg_p0_r_10:8;
        RBus_UInt32  reg_p0_r_9:8;
    };
}p0_r3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:17;
        RBus_UInt32  reg_p0_r_koff_sel:5;
        RBus_UInt32  reg_p0_r_koff_bound:1;
        RBus_UInt32  reg_p0_r_koffok:1;
        RBus_UInt32  reg_p0_r_13:8;
    };
}p0_r4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_acdr_4:8;
        RBus_UInt32  reg_p1_acdr_3:8;
        RBus_UInt32  reg_p1_acdr_2:8;
        RBus_UInt32  reg_p1_acdr_1:8;
    };
}p1_acdr1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_acdr_8:8;
        RBus_UInt32  reg_p1_acdr_7:8;
        RBus_UInt32  reg_p1_acdr_6:8;
        RBus_UInt32  reg_p1_acdr_5:8;
    };
}p1_acdr2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_b_4:8;
        RBus_UInt32  reg_p1_b_3:8;
        RBus_UInt32  reg_p1_b_2:8;
        RBus_UInt32  reg_p1_b_1:8;
    };
}p1_b1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_b_8:8;
        RBus_UInt32  reg_p1_b_7:8;
        RBus_UInt32  reg_p1_b_6:8;
        RBus_UInt32  reg_p1_b_5:8;
    };
}p1_b2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_b_12:8;
        RBus_UInt32  reg_p1_b_11:8;
        RBus_UInt32  reg_p1_b_10:8;
        RBus_UInt32  reg_p1_b_9:8;
    };
}p1_b3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:17;
        RBus_UInt32  reg_p1_b_koff_sel:5;
        RBus_UInt32  reg_p1_b_koff_bound:1;
        RBus_UInt32  reg_p1_b_koffok:1;
        RBus_UInt32  reg_p1_b_13:8;
    };
}p1_b4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_ck_4:8;
        RBus_UInt32  reg_p1_ck_3:8;
        RBus_UInt32  reg_p1_ck_2:8;
        RBus_UInt32  reg_p1_ck_1:8;
    };
}p1_ck1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_ck_8:8;
        RBus_UInt32  reg_p1_ck_7:8;
        RBus_UInt32  reg_p1_ck_6:8;
        RBus_UInt32  reg_p1_ck_5:8;
    };
}p1_ck2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_ck_12:8;
        RBus_UInt32  reg_p1_ck_11:8;
        RBus_UInt32  reg_p1_ck_10:8;
        RBus_UInt32  reg_p1_ck_9:8;
    };
}p1_ck3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  reg_p1_ck_13:8;
    };
}p1_ck4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_g_4:8;
        RBus_UInt32  reg_p1_g_3:8;
        RBus_UInt32  reg_p1_g_2:8;
        RBus_UInt32  reg_p1_g_1:8;
    };
}p1_g1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_g_8:8;
        RBus_UInt32  reg_p1_g_7:8;
        RBus_UInt32  reg_p1_g_6:8;
        RBus_UInt32  reg_p1_g_5:8;
    };
}p1_g2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_g_12:8;
        RBus_UInt32  reg_p1_g_11:8;
        RBus_UInt32  reg_p1_g_10:8;
        RBus_UInt32  reg_p1_g_9:8;
    };
}p1_g3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:17;
        RBus_UInt32  reg_p1_g_koff_sel:5;
        RBus_UInt32  reg_p1_g_koff_bound:1;
        RBus_UInt32  reg_p1_g_koffok:1;
        RBus_UInt32  reg_p1_g_13:8;
    };
}p1_g4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_r_4:8;
        RBus_UInt32  reg_p1_r_3:8;
        RBus_UInt32  reg_p1_r_2:8;
        RBus_UInt32  reg_p1_r_1:8;
    };
}p1_r1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_r_8:8;
        RBus_UInt32  reg_p1_r_7:8;
        RBus_UInt32  reg_p1_r_6:8;
        RBus_UInt32  reg_p1_r_5:8;
    };
}p1_r2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_r_12:8;
        RBus_UInt32  reg_p1_r_11:8;
        RBus_UInt32  reg_p1_r_10:8;
        RBus_UInt32  reg_p1_r_9:8;
    };
}p1_r3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:17;
        RBus_UInt32  reg_p1_r_koff_sel:5;
        RBus_UInt32  reg_p1_r_koff_bound:1;
        RBus_UInt32  reg_p1_r_koffok:1;
        RBus_UInt32  reg_p1_r_13:8;
    };
}p1_r4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p2_acdr_4:8;
        RBus_UInt32  reg_p2_acdr_3:8;
        RBus_UInt32  reg_p2_acdr_2:8;
        RBus_UInt32  reg_p2_acdr_1:8;
    };
}p2_acdr1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p2_acdr_8:8;
        RBus_UInt32  reg_p2_acdr_7:8;
        RBus_UInt32  reg_p2_acdr_6:8;
        RBus_UInt32  reg_p2_acdr_5:8;
    };
}p2_acdr2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p2_b_4:8;
        RBus_UInt32  reg_p2_b_3:8;
        RBus_UInt32  reg_p2_b_2:8;
        RBus_UInt32  reg_p2_b_1:8;
    };
}p2_b1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p2_b_8:8;
        RBus_UInt32  reg_p2_b_7:8;
        RBus_UInt32  reg_p2_b_6:8;
        RBus_UInt32  reg_p2_b_5:8;
    };
}p2_b2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p2_b_12:8;
        RBus_UInt32  reg_p2_b_11:8;
        RBus_UInt32  reg_p2_b_10:8;
        RBus_UInt32  reg_p2_b_9:8;
    };
}p2_b3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:17;
        RBus_UInt32  reg_p2_b_koff_sel:5;
        RBus_UInt32  reg_p2_b_koff_bound:1;
        RBus_UInt32  reg_p2_b_koffok:1;
        RBus_UInt32  reg_p2_b_13:8;
    };
}p2_b4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p2_ck_4:8;
        RBus_UInt32  reg_p2_ck_3:8;
        RBus_UInt32  reg_p2_ck_2:8;
        RBus_UInt32  reg_p2_ck_1:8;
    };
}p2_ck1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p2_ck_8:8;
        RBus_UInt32  reg_p2_ck_7:8;
        RBus_UInt32  reg_p2_ck_6:8;
        RBus_UInt32  reg_p2_ck_5:8;
    };
}p2_ck2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p2_ck_12:8;
        RBus_UInt32  reg_p2_ck_11:8;
        RBus_UInt32  reg_p2_ck_10:8;
        RBus_UInt32  reg_p2_ck_9:8;
    };
}p2_ck3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  reg_p2_ck_13:8;
    };
}p2_ck4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p2_g_4:8;
        RBus_UInt32  reg_p2_g_3:8;
        RBus_UInt32  reg_p2_g_2:8;
        RBus_UInt32  reg_p2_g_1:8;
    };
}p2_g1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p2_g_8:8;
        RBus_UInt32  reg_p2_g_7:8;
        RBus_UInt32  reg_p2_g_6:8;
        RBus_UInt32  reg_p2_g_5:8;
    };
}p2_g2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p2_g_12:8;
        RBus_UInt32  reg_p2_g_11:8;
        RBus_UInt32  reg_p2_g_10:8;
        RBus_UInt32  reg_p2_g_9:8;
    };
}p2_g3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:17;
        RBus_UInt32  reg_p2_g_koff_sel:5;
        RBus_UInt32  reg_p2_g_koff_bound:1;
        RBus_UInt32  reg_p2_g_koffok:1;
        RBus_UInt32  reg_p2_g_13:8;
    };
}p2_g4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p2_r_4:8;
        RBus_UInt32  reg_p2_r_3:8;
        RBus_UInt32  reg_p2_r_2:8;
        RBus_UInt32  reg_p2_r_1:8;
    };
}p2_r1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p2_r_8:8;
        RBus_UInt32  reg_p2_r_7:8;
        RBus_UInt32  reg_p2_r_6:8;
        RBus_UInt32  reg_p2_r_5:8;
    };
}p2_r2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p2_r_12:8;
        RBus_UInt32  reg_p2_r_11:8;
        RBus_UInt32  reg_p2_r_10:8;
        RBus_UInt32  reg_p2_r_9:8;
    };
}p2_r3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:17;
        RBus_UInt32  reg_p2_r_koff_sel:5;
        RBus_UInt32  reg_p2_r_koff_bound:1;
        RBus_UInt32  reg_p2_r_koffok:1;
        RBus_UInt32  reg_p2_r_13:8;
    };
}p2_r4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:27;
        RBus_UInt32  reg_tst_spad:1;
        RBus_UInt32  reg_stst:4;
    };
}test_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_top_in_4:8;
        RBus_UInt32  reg_top_in_3:8;
        RBus_UInt32  reg_top_in_2:8;
        RBus_UInt32  reg_top_in_1:8;
    };
}top_in_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_top_out_4:8;
        RBus_UInt32  reg_top_out_3:8;
        RBus_UInt32  reg_top_out_2:8;
        RBus_UInt32  reg_top_out_1:8;
    };
}top_out_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  reg_z0_z0pow:1;
        RBus_UInt32  reg_z0_stune:1;
        RBus_UInt32  reg_z0_res:5;
        RBus_UInt32  reg_z0_ok:1;
        RBus_UInt32  reg_z0_entst:1;
        RBus_UInt32  reg_z0_bound:1;
        RBus_UInt32  reg_z0_adjr_2:5;
        RBus_UInt32  reg_z0_adjr_1:5;
        RBus_UInt32  reg_z0_adjr_0:5;
        RBus_UInt32  reg_z0tst:4;
    };
}z0k_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:10;
        RBus_UInt32  reg_ck_pixel_hdmirpt_div2:1;
        RBus_UInt32  reg_z0_z300_sel:3;
        RBus_UInt32  reg_z0_z300pow:3;
        RBus_UInt32  reg_z0_z100_en:3;
        RBus_UInt32  reg_z0_z0pow_r:3;
        RBus_UInt32  reg_z0_z0pow_g:3;
        RBus_UInt32  reg_z0_z0pow_ck:3;
        RBus_UInt32  reg_z0_z0pow_b:3;
    };
}z0pow_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:22;
        RBus_UInt32  reg_eye_ref_ctrl:6;
        RBus_UInt32  reg_eye_pi_en:4;
    };
}eye1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_eye_pi_st:32;
    };
}eye2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:29;
        RBus_UInt32  p2_bypass_ok:1;
        RBus_UInt32  p1_bypass_ok:1;
        RBus_UInt32  p0_bypass_ok:1;
    };
}bypass_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  eye_monitor_rstn:1;
        RBus_UInt32  dfe_rstn_n:1;
        RBus_UInt32  reg_p2_acdr_rstb_fsm:1;
        RBus_UInt32  reg_p1_acdr_rstb_fsm:1;
        RBus_UInt32  reg_p0_acdr_rstb_fsm:1;
        RBus_UInt32  p2_ck_vcorstb:1;
        RBus_UInt32  p1_ck_vcorstb:1;
        RBus_UInt32  p0_ck_vcorstb:1;
        RBus_UInt32  p2_ck_pllrstb:1;
        RBus_UInt32  p1_ck_pllrstb:1;
        RBus_UInt32  p0_ck_pllrstb:1;
        RBus_UInt32  p2_r_demux_rstb:1;
        RBus_UInt32  p2_g_demux_rstb:1;
        RBus_UInt32  p2_b_demux_rstb:1;
        RBus_UInt32  p1_r_demux_rstb:1;
        RBus_UInt32  p1_g_demux_rstb:1;
        RBus_UInt32  p1_b_demux_rstb:1;
        RBus_UInt32  p0_r_demux_rstb:1;
        RBus_UInt32  p0_g_demux_rstb:1;
        RBus_UInt32  p0_b_demux_rstb:1;
    };
}rst_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  p0_r_dig_rst_n:1;
        RBus_UInt32  p0_g_dig_rst_n:1;
        RBus_UInt32  p0_b_dig_rst_n:1;
        RBus_UInt32  p0_r_cdr_rst_n:1;
        RBus_UInt32  p0_g_cdr_rst_n:1;
        RBus_UInt32  p0_b_cdr_rst_n:1;
        RBus_UInt32  reg_p0_cdr_ckinv_r:1;
        RBus_UInt32  reg_p0_cdr_ckinv_g:1;
        RBus_UInt32  reg_p0_cdr_ckinv_b:1;
        RBus_UInt32  reg_p0_shift_inv_r:1;
        RBus_UInt32  reg_p0_shift_inv_g:1;
        RBus_UInt32  reg_p0_shift_inv_b:1;
        RBus_UInt32  reg_p0_rate_sel:3;
        RBus_UInt32  reg_p0_kd:1;
        RBus_UInt32  reg_p0_kp:8;
        RBus_UInt32  reg_p0_ki:3;
        RBus_UInt32  reg_p0_bypass_sdm_int:1;
        RBus_UInt32  reg_p0_data_order:1;
        RBus_UInt32  reg_p0_infifo_cnt:3;
    };
}regd0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_int_init:14;
        RBus_UInt32  reg_p0_acc2_period:10;
        RBus_UInt32  reg_p0_squ_tri:1;
        RBus_UInt32  reg_p0_acc2_manual:1;
        RBus_UInt32  reg_p0_testout_sel:2;
        RBus_UInt32  reg_p0_ercnt_en:1;
        RBus_UInt32  reg_p0_edge_out:1;
        RBus_UInt32  reg_p0_pi_m_mode:1;
        RBus_UInt32  reg_p0_dyn_kp_en:1;
    };
}regd1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_en_m_value:4;
        RBus_UInt32  reg_p0_st_mode:1;
        RBus_UInt32  res1:4;
        RBus_UInt32  reg_p0_timer_lpf:5;
        RBus_UInt32  reg_p0_timer_eq:5;
        RBus_UInt32  reg_p0_timer_ber:5;
        RBus_UInt32  res2:8;
    };
}regd2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  p0_st_ro_r:5;
        RBus_UInt32  p0_en_ro_r:4;
        RBus_UInt32  res2:1;
        RBus_UInt32  p0_st_ro_g:5;
        RBus_UInt32  p0_en_ro_g:4;
        RBus_UInt32  res3:1;
        RBus_UInt32  p0_st_ro_b:5;
        RBus_UInt32  p0_en_ro_b:4;
    };
}regd3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  p0_er_count_r:10;
        RBus_UInt32  p0_er_count_g:10;
        RBus_UInt32  p0_er_count_b:10;
    };
}regd4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  p1_r_dig_rst_n:1;
        RBus_UInt32  p1_g_dig_rst_n:1;
        RBus_UInt32  p1_b_dig_rst_n:1;
        RBus_UInt32  p1_r_cdr_rst_n:1;
        RBus_UInt32  p1_g_cdr_rst_n:1;
        RBus_UInt32  p1_b_cdr_rst_n:1;
        RBus_UInt32  reg_p1_cdr_ckinv_r:1;
        RBus_UInt32  reg_p1_cdr_ckinv_g:1;
        RBus_UInt32  reg_p1_cdr_ckinv_b:1;
        RBus_UInt32  reg_p1_shift_inv_r:1;
        RBus_UInt32  reg_p1_shift_inv_g:1;
        RBus_UInt32  reg_p1_shift_inv_b:1;
        RBus_UInt32  reg_p1_rate_sel:3;
        RBus_UInt32  reg_p1_kd:1;
        RBus_UInt32  reg_p1_kp:8;
        RBus_UInt32  reg_p1_ki:3;
        RBus_UInt32  reg_p1_bypass_sdm_int:1;
        RBus_UInt32  reg_p1_data_order:1;
        RBus_UInt32  reg_p1_infifo_cnt:3;
    };
}regd5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_int_init:14;
        RBus_UInt32  reg_p1_acc2_period:10;
        RBus_UInt32  reg_p1_squ_tri:1;
        RBus_UInt32  reg_p1_acc2_manual:1;
        RBus_UInt32  reg_p1_testout_sel:2;
        RBus_UInt32  reg_p1_ercnt_en:1;
        RBus_UInt32  reg_p1_edge_out:1;
        RBus_UInt32  reg_p1_pi_m_mode:1;
        RBus_UInt32  reg_p1_dyn_kp_en:1;
    };
}regd6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_en_m_value:4;
        RBus_UInt32  reg_p1_st_mode:1;
        RBus_UInt32  res1:4;
        RBus_UInt32  reg_p1_timer_lpf:5;
        RBus_UInt32  reg_p1_timer_eq:5;
        RBus_UInt32  reg_p1_timer_ber:5;
        RBus_UInt32  res2:8;
    };
}regd7_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  p1_st_ro_r:5;
        RBus_UInt32  p1_en_ro_r:4;
        RBus_UInt32  res2:1;
        RBus_UInt32  p1_st_ro_g:5;
        RBus_UInt32  p1_en_ro_g:4;
        RBus_UInt32  res3:1;
        RBus_UInt32  p1_st_ro_b:5;
        RBus_UInt32  p1_en_ro_b:4;
    };
}regd8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  p1_er_count_r:10;
        RBus_UInt32  p1_er_count_g:10;
        RBus_UInt32  p1_er_count_b:10;
    };
}regd9_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  p2_r_dig_rst_n:1;
        RBus_UInt32  p2_g_dig_rst_n:1;
        RBus_UInt32  p2_b_dig_rst_n:1;
        RBus_UInt32  p2_r_cdr_rst_n:1;
        RBus_UInt32  p2_g_cdr_rst_n:1;
        RBus_UInt32  p2_b_cdr_rst_n:1;
        RBus_UInt32  reg_p2_cdr_ckinv_r:1;
        RBus_UInt32  reg_p2_cdr_ckinv_g:1;
        RBus_UInt32  reg_p2_cdr_ckinv_b:1;
        RBus_UInt32  reg_p2_shift_inv_r:1;
        RBus_UInt32  reg_p2_shift_inv_g:1;
        RBus_UInt32  reg_p2_shift_inv_b:1;
        RBus_UInt32  reg_p2_rate_sel:3;
        RBus_UInt32  reg_p2_kd:1;
        RBus_UInt32  reg_p2_kp:8;
        RBus_UInt32  reg_p2_ki:3;
        RBus_UInt32  reg_p2_bypass_sdm_int:1;
        RBus_UInt32  reg_p2_data_order:1;
        RBus_UInt32  reg_p2_infifo_cnt:3;
    };
}regd10_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p2_int_init:14;
        RBus_UInt32  reg_p2_acc2_period:10;
        RBus_UInt32  reg_p2_squ_tri:1;
        RBus_UInt32  reg_p2_acc2_manual:1;
        RBus_UInt32  reg_p2_testout_sel:2;
        RBus_UInt32  reg_p2_ercnt_en:1;
        RBus_UInt32  reg_p2_edge_out:1;
        RBus_UInt32  reg_p2_pi_m_mode:1;
        RBus_UInt32  reg_p2_dyn_kp_en:1;
    };
}regd11_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p2_en_m_value:4;
        RBus_UInt32  reg_p2_st_mode:1;
        RBus_UInt32  res1:4;
        RBus_UInt32  reg_p2_timer_lpf:5;
        RBus_UInt32  reg_p2_timer_eq:5;
        RBus_UInt32  reg_p2_timer_ber:5;
        RBus_UInt32  res2:8;
    };
}regd12_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  p2_st_ro_r:5;
        RBus_UInt32  p2_en_ro_r:4;
        RBus_UInt32  res2:1;
        RBus_UInt32  p2_st_ro_g:5;
        RBus_UInt32  p2_en_ro_g:4;
        RBus_UInt32  res3:1;
        RBus_UInt32  p2_st_ro_b:5;
        RBus_UInt32  p2_en_ro_b:4;
    };
}regd13_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  p2_er_count_r:10;
        RBus_UInt32  p2_er_count_g:10;
        RBus_UInt32  p2_er_count_b:10;
    };
}regd14_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_bypass_clk_rdy:1;
        RBus_UInt32  reg_p0_bypass_eqen_rdy:1;
        RBus_UInt32  reg_p0_bypass_data_rdy:1;
        RBus_UInt32  reg_p0_bypass_pi:1;
        RBus_UInt32  reg_p0_data_rdy_time:4;
        RBus_UInt32  reg_p0_en_clkout_manual:1;
        RBus_UInt32  reg_p0_en_eqen_manual:1;
        RBus_UInt32  reg_p0_en_data_manual:1;
        RBus_UInt32  reg_p0_eqen_rdy_time:4;
        RBus_UInt32  reg_p0_order:1;
        RBus_UInt32  reg_p0_pll_wd_base_time:3;
        RBus_UInt32  reg_p0_pll_wd_en:1;
        RBus_UInt32  reg_p0_pll_wd_rst_wid:2;
        RBus_UInt32  reg_p0_pll_wd_time_rdy:2;
        RBus_UInt32  reg_p0_acdr_l0_en:1;
        RBus_UInt32  reg_p0_bypass_eqen_rdy_l0:1;
        RBus_UInt32  reg_p0_bypass_data_rdy_l0:1;
        RBus_UInt32  reg_p0_en_eqen_manual_l0:1;
        RBus_UInt32  reg_p0_en_data_manual_l0:1;
        RBus_UInt32  p0_pll_wd_ckrdy_ro:1;
        RBus_UInt32  p0_pll_wd_rst_wc:1;
        RBus_UInt32  p0_wdog_rst_n:1;
    };
}regd15_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_wd_sdm_en:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  reg_p0_f_code:12;
        RBus_UInt32  res2:7;
        RBus_UInt32  reg_p0_n_code:9;
    };
}regd16_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_bypass_clk_rdy:1;
        RBus_UInt32  reg_p1_bypass_eqen_rdy:1;
        RBus_UInt32  reg_p1_bypass_data_rdy:1;
        RBus_UInt32  reg_p1_bypass_pi:1;
        RBus_UInt32  reg_p1_data_rdy_time:4;
        RBus_UInt32  reg_p1_en_clkout_manual:1;
        RBus_UInt32  reg_p1_en_eqen_manual:1;
        RBus_UInt32  reg_p1_en_data_manual:1;
        RBus_UInt32  reg_p1_eqen_rdy_time:4;
        RBus_UInt32  reg_p1_order:1;
        RBus_UInt32  reg_p1_pll_wd_base_time:3;
        RBus_UInt32  reg_p1_pll_wd_en:1;
        RBus_UInt32  reg_p1_pll_wd_rst_wid:2;
        RBus_UInt32  reg_p1_pll_wd_time_rdy:2;
        RBus_UInt32  reg_p1_acdr_l0_en:1;
        RBus_UInt32  reg_p1_bypass_eqen_rdy_l0:1;
        RBus_UInt32  reg_p1_bypass_data_rdy_l0:1;
        RBus_UInt32  reg_p1_en_eqen_manual_l0:1;
        RBus_UInt32  reg_p1_en_data_manual_l0:1;
        RBus_UInt32  p1_pll_wd_ckrdy_ro:1;
        RBus_UInt32  p1_pll_wd_rst_wc:1;
        RBus_UInt32  p1_wdog_rst_n:1;
    };
}regd17_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_wd_sdm_en:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  reg_p1_f_code:12;
        RBus_UInt32  res2:7;
        RBus_UInt32  reg_p1_n_code:9;
    };
}regd18_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p2_bypass_clk_rdy:1;
        RBus_UInt32  reg_p2_bypass_eqen_rdy:1;
        RBus_UInt32  reg_p2_bypass_data_rdy:1;
        RBus_UInt32  reg_p2_bypass_pi:1;
        RBus_UInt32  reg_p2_data_rdy_time:4;
        RBus_UInt32  reg_p2_en_clkout_manual:1;
        RBus_UInt32  reg_p2_en_eqen_manual:1;
        RBus_UInt32  reg_p2_en_data_manual:1;
        RBus_UInt32  reg_p2_eqen_rdy_time:4;
        RBus_UInt32  reg_p2_order:1;
        RBus_UInt32  reg_p2_pll_wd_base_time:3;
        RBus_UInt32  reg_p2_pll_wd_en:1;
        RBus_UInt32  reg_p2_pll_wd_rst_wid:2;
        RBus_UInt32  reg_p2_pll_wd_time_rdy:2;
        RBus_UInt32  reg_p2_acdr_l0_en:1;
        RBus_UInt32  reg_p2_bypass_eqen_rdy_l0:1;
        RBus_UInt32  reg_p2_bypass_data_rdy_l0:1;
        RBus_UInt32  reg_p2_en_eqen_manual_l0:1;
        RBus_UInt32  reg_p2_en_data_manual_l0:1;
        RBus_UInt32  p2_pll_wd_ckrdy_ro:1;
        RBus_UInt32  p2_pll_wd_rst_wc:1;
        RBus_UInt32  p2_wdog_rst_n:1;
    };
}regd19_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p2_wd_sdm_en:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  reg_p2_f_code:12;
        RBus_UInt32  res2:7;
        RBus_UInt32  reg_p2_n_code:9;
    };
}regd20_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_auto_mode:1;
        RBus_UInt32  reg_p0_adp_en_manual:1;
        RBus_UInt32  reg_p0_cp_en_manual:1;
        RBus_UInt32  reg_p0_adap_eq_off:1;
        RBus_UInt32  reg_p0_adp_time:5;
        RBus_UInt32  reg_p0_calib_time:3;
        RBus_UInt32  reg_p0_calib_manual:1;
        RBus_UInt32  reg_p0_calib_late:1;
        RBus_UInt32  reg_p0_vco_coarse:7;
        RBus_UInt32  reg_p0_divide_num:7;
        RBus_UInt32  reg_p0_init_time:3;
        RBus_UInt32  res1:1;
    };
}regd21_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  reg_p0_lock_up_limit:11;
        RBus_UInt32  res2:5;
        RBus_UInt32  reg_p0_lock_dn_limit:11;
    };
}regd22_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_cdr_cp:20;
        RBus_UInt32  reg_p0_cdr_r:6;
        RBus_UInt32  reg_p0_cdr_c:2;
        RBus_UInt32  reg_p0_vc_sel:2;
        RBus_UInt32  reg_p0_calib_reset_sel:1;
        RBus_UInt32  res1:1;
    };
}regd23_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_slope_lv_up:11;
        RBus_UInt32  reg_p0_slope_lv_dn:11;
        RBus_UInt32  reg_p0_cp_time:5;
        RBus_UInt32  reg_p0_timer_4:5;
    };
}regd24_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_slope_hv_up:11;
        RBus_UInt32  reg_p0_slope_hv_dn:11;
        RBus_UInt32  reg_p0_timer_5:1;
        RBus_UInt32  reg_p0_timer_6:5;
        RBus_UInt32  res1:4;
    };
}regd25_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_start_en_manual:1;
        RBus_UInt32  reg_p0_pfd_en_manual:1;
        RBus_UInt32  reg_p0_pfd_time:5;
        RBus_UInt32  reg_p0_pfd_bypass:1;
        RBus_UInt32  reg_p0_rxidle_bypass:1;
        RBus_UInt32  reg_p0_slope_manual:1;
        RBus_UInt32  reg_p0_slope_band:5;
        RBus_UInt32  reg_p0_old_mode:1;
        RBus_UInt32  res1:16;
    };
}regd26_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  p0_fld_st_reg:5;
        RBus_UInt32  p0_adp_en_fsm_reg:1;
        RBus_UInt32  p0_cp_en_fsm_reg:1;
        RBus_UInt32  p0_coarse_fsm_reg:7;
        RBus_UInt32  p0_pfd_en_fsm_reg:1;
        RBus_UInt32  p0_slope_lv_reg:5;
        RBus_UInt32  p0_slope_hv_reg:5;
        RBus_UInt32  p0_slope_final_reg:5;
        RBus_UInt32  res1:2;
    };
}regd27_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_auto_mode:1;
        RBus_UInt32  reg_p1_adp_en_manual:1;
        RBus_UInt32  reg_p1_cp_en_manual:1;
        RBus_UInt32  reg_p1_adap_eq_off:1;
        RBus_UInt32  reg_p1_adp_time:5;
        RBus_UInt32  reg_p1_calib_time:3;
        RBus_UInt32  reg_p1_calib_manual:1;
        RBus_UInt32  reg_p1_calib_late:1;
        RBus_UInt32  reg_p1_vco_coarse:7;
        RBus_UInt32  reg_p1_divide_num:7;
        RBus_UInt32  reg_p1_init_time:3;
        RBus_UInt32  res1:1;
    };
}regd28_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  reg_p1_lock_up_limit:11;
        RBus_UInt32  res2:5;
        RBus_UInt32  reg_p1_lock_dn_limit:11;
    };
}regd29_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_cdr_cp:20;
        RBus_UInt32  reg_p1_cdr_r:6;
        RBus_UInt32  reg_p1_cdr_c:2;
        RBus_UInt32  reg_p1_vc_sel:2;
        RBus_UInt32  reg_p1_calib_reset_sel:1;
        RBus_UInt32  res1:1;
    };
}regd30_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_slope_lv_up:11;
        RBus_UInt32  reg_p1_slope_lv_dn:11;
        RBus_UInt32  reg_p1_cp_time:5;
        RBus_UInt32  reg_p1_timer_4:5;
    };
}regd31_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_slope_hv_up:11;
        RBus_UInt32  reg_p1_slope_hv_dn:11;
        RBus_UInt32  reg_p1_timer_5:1;
        RBus_UInt32  reg_p1_timer_6:5;
        RBus_UInt32  res1:4;
    };
}regd32_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_start_en_manual:1;
        RBus_UInt32  reg_p1_pfd_en_manual:1;
        RBus_UInt32  reg_p1_pfd_time:5;
        RBus_UInt32  reg_p1_pfd_bypass:1;
        RBus_UInt32  reg_p1_rxidle_bypass:1;
        RBus_UInt32  reg_p1_slope_manual:1;
        RBus_UInt32  reg_p1_slope_band:5;
        RBus_UInt32  reg_p1_old_mode:1;
        RBus_UInt32  res1:16;
    };
}regd33_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  p1_fld_st_reg:5;
        RBus_UInt32  p1_adp_en_fsm_reg:1;
        RBus_UInt32  p1_cp_en_fsm_reg:1;
        RBus_UInt32  p1_coarse_fsm_reg:7;
        RBus_UInt32  p1_pfd_en_fsm_reg:1;
        RBus_UInt32  p1_slope_lv_reg:5;
        RBus_UInt32  p1_slope_hv_reg:5;
        RBus_UInt32  p1_slope_final_reg:5;
        RBus_UInt32  res1:2;
    };
}regd34_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p2_auto_mode:1;
        RBus_UInt32  reg_p2_adp_en_manual:1;
        RBus_UInt32  reg_p2_cp_en_manual:1;
        RBus_UInt32  reg_p2_adap_eq_off:1;
        RBus_UInt32  reg_p2_adp_time:5;
        RBus_UInt32  reg_p2_calib_time:3;
        RBus_UInt32  reg_p2_calib_manual:1;
        RBus_UInt32  reg_p2_calib_late:1;
        RBus_UInt32  reg_p2_vco_coarse:7;
        RBus_UInt32  reg_p2_divide_num:7;
        RBus_UInt32  reg_p2_init_time:3;
        RBus_UInt32  res1:1;
    };
}regd35_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  reg_p2_lock_up_limit:11;
        RBus_UInt32  res2:5;
        RBus_UInt32  reg_p2_lock_dn_limit:11;
    };
}regd36_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p2_cdr_cp:20;
        RBus_UInt32  reg_p2_cdr_r:6;
        RBus_UInt32  reg_p2_cdr_c:2;
        RBus_UInt32  reg_p2_vc_sel:2;
        RBus_UInt32  reg_p2_calib_reset_sel:1;
        RBus_UInt32  res1:1;
    };
}regd37_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p2_slope_lv_up:11;
        RBus_UInt32  reg_p2_slope_lv_dn:11;
        RBus_UInt32  reg_p2_cp_time:5;
        RBus_UInt32  reg_p2_timer_4:5;
    };
}regd38_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p2_slope_hv_up:11;
        RBus_UInt32  reg_p2_slope_hv_dn:11;
        RBus_UInt32  reg_p2_timer_5:1;
        RBus_UInt32  reg_p2_timer_6:5;
        RBus_UInt32  res1:4;
    };
}regd39_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p2_start_en_manual:1;
        RBus_UInt32  reg_p2_pfd_en_manual:1;
        RBus_UInt32  reg_p2_pfd_time:5;
        RBus_UInt32  reg_p2_pfd_bypass:1;
        RBus_UInt32  reg_p2_rxidle_bypass:1;
        RBus_UInt32  reg_p2_slope_manual:1;
        RBus_UInt32  reg_p2_slope_band:5;
        RBus_UInt32  reg_p2_old_mode:1;
        RBus_UInt32  res1:16;
    };
}regd40_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  p2_fld_st_reg:5;
        RBus_UInt32  p2_adp_en_fsm_reg:1;
        RBus_UInt32  p2_cp_en_fsm_reg:1;
        RBus_UInt32  p2_coarse_fsm_reg:7;
        RBus_UInt32  p2_pfd_en_fsm_reg:1;
        RBus_UInt32  p2_slope_lv_reg:5;
        RBus_UInt32  p2_slope_hv_reg:5;
        RBus_UInt32  p2_slope_final_reg:5;
        RBus_UInt32  res1:2;
    };
}regd41_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  p0_ck_md_rstb:1;
        RBus_UInt32  reg_p0_ck_md_threshold:6;
        RBus_UInt32  reg_p0_ck_md_debounce:7;
        RBus_UInt32  reg_p0_ck_md_sel:2;
        RBus_UInt32  reg_p0_ck_md_auto:1;
        RBus_UInt32  reg_p0_ck_md_adj:4;
        RBus_UInt32  reg_p0_ck_error_limit:5;
        RBus_UInt32  reg_p0_ck_md_reserved:4;
        RBus_UInt32  res1:2;
    };
}regd42_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  p0_ck_md_count:13;
        RBus_UInt32  p0_ck_rate:4;
        RBus_UInt32  p0_unstable_count:5;
        RBus_UInt32  p0_ck_md_ok:1;
        RBus_UInt32  p0_clock_unstable_flag:1;
        RBus_UInt32  res1:8;
    };
}regd43_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  p1_ck_md_rstb:1;
        RBus_UInt32  reg_p1_ck_md_threshold:6;
        RBus_UInt32  reg_p1_ck_md_debounce:7;
        RBus_UInt32  reg_p1_ck_md_sel:2;
        RBus_UInt32  reg_p1_ck_md_auto:1;
        RBus_UInt32  reg_p1_ck_md_adj:4;
        RBus_UInt32  reg_p1_ck_error_limit:5;
        RBus_UInt32  reg_p1_ck_md_reserved:4;
        RBus_UInt32  res1:2;
    };
}regd44_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  p1_ck_md_count:13;
        RBus_UInt32  p1_ck_rate:4;
        RBus_UInt32  p1_unstable_count:5;
        RBus_UInt32  p1_ck_md_ok:1;
        RBus_UInt32  p1_clock_unstable_flag:1;
        RBus_UInt32  res1:8;
    };
}regd45_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  p2_ck_md_rstb:1;
        RBus_UInt32  reg_p2_ck_md_threshold:6;
        RBus_UInt32  reg_p2_ck_md_debounce:7;
        RBus_UInt32  reg_p2_ck_md_sel:2;
        RBus_UInt32  reg_p2_ck_md_auto:1;
        RBus_UInt32  reg_p2_ck_md_adj:4;
        RBus_UInt32  reg_p2_ck_error_limit:5;
        RBus_UInt32  reg_p2_ck_md_reserved:4;
        RBus_UInt32  res1:2;
    };
}regd46_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  p2_ck_md_count:13;
        RBus_UInt32  p2_ck_rate:4;
        RBus_UInt32  p2_unstable_count:5;
        RBus_UInt32  p2_ck_md_ok:1;
        RBus_UInt32  p2_clock_unstable_flag:1;
        RBus_UInt32  res1:8;
    };
}regd47_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_dig_debug_sel:4;
        RBus_UInt32  reg_dig_reserved_0:8;
        RBus_UInt32  reg_dig_reserved_1:8;
        RBus_UInt32  reg_dig_reserved_2:8;
        RBus_UInt32  res1:4;
    };
}regd48_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_st_m_value:32;
    };
}regd49_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_st_m_value:32;
    };
}regd50_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p2_st_m_value:32;
    };
}regd51_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:10;
        RBus_UInt32  reg_eye_monitor_ck_sel:2;
        RBus_UInt32  res2:4;
        RBus_UInt32  eye_monitor_dout:16;
    };
}regd52_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_st_m_value_g:32;
    };
}regd53_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_st_m_value_g:32;
    };
}regd54_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p2_st_m_value_g:32;
    };
}regd55_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_st_m_value_b:32;
    };
}regd56_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_st_m_value_b:32;
    };
}regd57_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p2_st_m_value_b:32;
    };
}regd58_RBUS;

#else //apply LITTLE_ENDIAN

//======DFE_HDMI_RX_PHY register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_bg_envbgup:1;
        RBus_UInt32  reg_bg_pow:1;
        RBus_UInt32  reg_bg_rbg2:2;
        RBus_UInt32  reg_bg_rbg:3;
        RBus_UInt32  reg_bg_rbgloop2:3;
        RBus_UInt32  res1:22;
    };
}bg_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_ck_ckdet:3;
        RBus_UInt32  reg_ck_cmp:1;
        RBus_UInt32  reg_ck_latch:1;
        RBus_UInt32  res1:27;
    };
}md_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_ldo_pow:1;
        RBus_UInt32  reg_p1_ldo_pow:1;
        RBus_UInt32  reg_p2_ldo_pow:1;
        RBus_UInt32  reg_p0_ldo_sel:2;
        RBus_UInt32  reg_p1_ldo_sel:2;
        RBus_UInt32  reg_p2_ldo_sel:2;
        RBus_UInt32  res1:23;
    };
}ldo_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_mhl_hdmisel:1;
        RBus_UInt32  reg_p0_mhl_pow:1;
        RBus_UInt32  reg_p0_mhl_hdmi_datasel:1;
        RBus_UInt32  reg_p0_mhl_hdmi_cksel:1;
        RBus_UInt32  reg_p1_mhl_pow:1;
        RBus_UInt32  reg_p1_mhl_hdmi_cksel:1;
        RBus_UInt32  reg_p1_mhl_hdmi_datasel:1;
        RBus_UInt32  reg_p2_mhl_pow:1;
        RBus_UInt32  reg_p2_mhl_hdmi_cksel:1;
        RBus_UInt32  reg_p2_mhl_hdmi_datasel:1;
        RBus_UInt32  res1:22;
    };
}mhl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_acdr_1:8;
        RBus_UInt32  reg_p0_acdr_2:8;
        RBus_UInt32  reg_p0_acdr_3:8;
        RBus_UInt32  reg_p0_acdr_4:8;
    };
}p0_acdr1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_acdr_5:8;
        RBus_UInt32  reg_p0_acdr_6:8;
        RBus_UInt32  reg_p0_acdr_7:8;
        RBus_UInt32  reg_p0_acdr_8:8;
    };
}p0_acdr2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_b_1:8;
        RBus_UInt32  reg_p0_b_2:8;
        RBus_UInt32  reg_p0_b_3:8;
        RBus_UInt32  reg_p0_b_4:8;
    };
}p0_b1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_b_5:8;
        RBus_UInt32  reg_p0_b_6:8;
        RBus_UInt32  reg_p0_b_7:8;
        RBus_UInt32  reg_p0_b_8:8;
    };
}p0_b2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_b_9:8;
        RBus_UInt32  reg_p0_b_10:8;
        RBus_UInt32  reg_p0_b_11:8;
        RBus_UInt32  reg_p0_b_12:8;
    };
}p0_b3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_b_13:8;
        RBus_UInt32  reg_p0_b_koffok:1;
        RBus_UInt32  reg_p0_b_koff_bound:1;
        RBus_UInt32  reg_p0_b_koff_sel:5;
        RBus_UInt32  res1:17;
    };
}p0_b4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_ck_1:8;
        RBus_UInt32  reg_p0_ck_2:8;
        RBus_UInt32  reg_p0_ck_3:8;
        RBus_UInt32  reg_p0_ck_4:8;
    };
}p0_ck1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_ck_5:8;
        RBus_UInt32  reg_p0_ck_6:8;
        RBus_UInt32  reg_p0_ck_7:8;
        RBus_UInt32  reg_p0_ck_8:8;
    };
}p0_ck2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_ck_9:8;
        RBus_UInt32  reg_p0_ck_10:8;
        RBus_UInt32  reg_p0_ck_11:8;
        RBus_UInt32  reg_p0_ck_12:8;
    };
}p0_ck3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_ck_13:8;
        RBus_UInt32  res1:24;
    };
}p0_ck4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_en_cdr:3;
        RBus_UInt32  reg_p0_en_cmu:1;
        RBus_UInt32  reg_p0_en_rx:3;
        RBus_UInt32  reg_p1_en_cdr:3;
        RBus_UInt32  reg_p1_en_cmu:1;
        RBus_UInt32  reg_p1_en_rx:3;
        RBus_UInt32  reg_p2_en_cdr:3;
        RBus_UInt32  reg_p2_en_cmu:1;
        RBus_UInt32  reg_p2_en_rx:3;
        RBus_UInt32  res1:11;
    };
}enable_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_g_1:8;
        RBus_UInt32  reg_p0_g_2:8;
        RBus_UInt32  reg_p0_g_3:8;
        RBus_UInt32  reg_p0_g_4:8;
    };
}p0_g1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_g_5:8;
        RBus_UInt32  reg_p0_g_6:8;
        RBus_UInt32  reg_p0_g_7:8;
        RBus_UInt32  reg_p0_g_8:8;
    };
}p0_g2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_g_9:8;
        RBus_UInt32  reg_p0_g_10:8;
        RBus_UInt32  reg_p0_g_11:8;
        RBus_UInt32  reg_p0_g_12:8;
    };
}p0_g3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_g_13:8;
        RBus_UInt32  reg_p0_g_koffok:1;
        RBus_UInt32  reg_p0_g_koff_bound:1;
        RBus_UInt32  reg_p0_g_koff_sel:5;
        RBus_UInt32  res1:17;
    };
}p0_g4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_r_1:8;
        RBus_UInt32  reg_p0_r_2:8;
        RBus_UInt32  reg_p0_r_3:8;
        RBus_UInt32  reg_p0_r_4:8;
    };
}p0_r1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_r_5:8;
        RBus_UInt32  reg_p0_r_6:8;
        RBus_UInt32  reg_p0_r_7:8;
        RBus_UInt32  reg_p0_r_8:8;
    };
}p0_r2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_r_9:8;
        RBus_UInt32  reg_p0_r_10:8;
        RBus_UInt32  reg_p0_r_11:8;
        RBus_UInt32  reg_p0_r_12:8;
    };
}p0_r3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_r_13:8;
        RBus_UInt32  reg_p0_r_koffok:1;
        RBus_UInt32  reg_p0_r_koff_bound:1;
        RBus_UInt32  reg_p0_r_koff_sel:5;
        RBus_UInt32  res1:17;
    };
}p0_r4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_acdr_1:8;
        RBus_UInt32  reg_p1_acdr_2:8;
        RBus_UInt32  reg_p1_acdr_3:8;
        RBus_UInt32  reg_p1_acdr_4:8;
    };
}p1_acdr1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_acdr_5:8;
        RBus_UInt32  reg_p1_acdr_6:8;
        RBus_UInt32  reg_p1_acdr_7:8;
        RBus_UInt32  reg_p1_acdr_8:8;
    };
}p1_acdr2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_b_1:8;
        RBus_UInt32  reg_p1_b_2:8;
        RBus_UInt32  reg_p1_b_3:8;
        RBus_UInt32  reg_p1_b_4:8;
    };
}p1_b1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_b_5:8;
        RBus_UInt32  reg_p1_b_6:8;
        RBus_UInt32  reg_p1_b_7:8;
        RBus_UInt32  reg_p1_b_8:8;
    };
}p1_b2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_b_9:8;
        RBus_UInt32  reg_p1_b_10:8;
        RBus_UInt32  reg_p1_b_11:8;
        RBus_UInt32  reg_p1_b_12:8;
    };
}p1_b3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_b_13:8;
        RBus_UInt32  reg_p1_b_koffok:1;
        RBus_UInt32  reg_p1_b_koff_bound:1;
        RBus_UInt32  reg_p1_b_koff_sel:5;
        RBus_UInt32  res1:17;
    };
}p1_b4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_ck_1:8;
        RBus_UInt32  reg_p1_ck_2:8;
        RBus_UInt32  reg_p1_ck_3:8;
        RBus_UInt32  reg_p1_ck_4:8;
    };
}p1_ck1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_ck_5:8;
        RBus_UInt32  reg_p1_ck_6:8;
        RBus_UInt32  reg_p1_ck_7:8;
        RBus_UInt32  reg_p1_ck_8:8;
    };
}p1_ck2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_ck_9:8;
        RBus_UInt32  reg_p1_ck_10:8;
        RBus_UInt32  reg_p1_ck_11:8;
        RBus_UInt32  reg_p1_ck_12:8;
    };
}p1_ck3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_ck_13:8;
        RBus_UInt32  res1:24;
    };
}p1_ck4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_g_1:8;
        RBus_UInt32  reg_p1_g_2:8;
        RBus_UInt32  reg_p1_g_3:8;
        RBus_UInt32  reg_p1_g_4:8;
    };
}p1_g1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_g_5:8;
        RBus_UInt32  reg_p1_g_6:8;
        RBus_UInt32  reg_p1_g_7:8;
        RBus_UInt32  reg_p1_g_8:8;
    };
}p1_g2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_g_9:8;
        RBus_UInt32  reg_p1_g_10:8;
        RBus_UInt32  reg_p1_g_11:8;
        RBus_UInt32  reg_p1_g_12:8;
    };
}p1_g3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_g_13:8;
        RBus_UInt32  reg_p1_g_koffok:1;
        RBus_UInt32  reg_p1_g_koff_bound:1;
        RBus_UInt32  reg_p1_g_koff_sel:5;
        RBus_UInt32  res1:17;
    };
}p1_g4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_r_1:8;
        RBus_UInt32  reg_p1_r_2:8;
        RBus_UInt32  reg_p1_r_3:8;
        RBus_UInt32  reg_p1_r_4:8;
    };
}p1_r1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_r_5:8;
        RBus_UInt32  reg_p1_r_6:8;
        RBus_UInt32  reg_p1_r_7:8;
        RBus_UInt32  reg_p1_r_8:8;
    };
}p1_r2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_r_9:8;
        RBus_UInt32  reg_p1_r_10:8;
        RBus_UInt32  reg_p1_r_11:8;
        RBus_UInt32  reg_p1_r_12:8;
    };
}p1_r3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_r_13:8;
        RBus_UInt32  reg_p1_r_koffok:1;
        RBus_UInt32  reg_p1_r_koff_bound:1;
        RBus_UInt32  reg_p1_r_koff_sel:5;
        RBus_UInt32  res1:17;
    };
}p1_r4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p2_acdr_1:8;
        RBus_UInt32  reg_p2_acdr_2:8;
        RBus_UInt32  reg_p2_acdr_3:8;
        RBus_UInt32  reg_p2_acdr_4:8;
    };
}p2_acdr1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p2_acdr_5:8;
        RBus_UInt32  reg_p2_acdr_6:8;
        RBus_UInt32  reg_p2_acdr_7:8;
        RBus_UInt32  reg_p2_acdr_8:8;
    };
}p2_acdr2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p2_b_1:8;
        RBus_UInt32  reg_p2_b_2:8;
        RBus_UInt32  reg_p2_b_3:8;
        RBus_UInt32  reg_p2_b_4:8;
    };
}p2_b1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p2_b_5:8;
        RBus_UInt32  reg_p2_b_6:8;
        RBus_UInt32  reg_p2_b_7:8;
        RBus_UInt32  reg_p2_b_8:8;
    };
}p2_b2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p2_b_9:8;
        RBus_UInt32  reg_p2_b_10:8;
        RBus_UInt32  reg_p2_b_11:8;
        RBus_UInt32  reg_p2_b_12:8;
    };
}p2_b3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p2_b_13:8;
        RBus_UInt32  reg_p2_b_koffok:1;
        RBus_UInt32  reg_p2_b_koff_bound:1;
        RBus_UInt32  reg_p2_b_koff_sel:5;
        RBus_UInt32  res1:17;
    };
}p2_b4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p2_ck_1:8;
        RBus_UInt32  reg_p2_ck_2:8;
        RBus_UInt32  reg_p2_ck_3:8;
        RBus_UInt32  reg_p2_ck_4:8;
    };
}p2_ck1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p2_ck_5:8;
        RBus_UInt32  reg_p2_ck_6:8;
        RBus_UInt32  reg_p2_ck_7:8;
        RBus_UInt32  reg_p2_ck_8:8;
    };
}p2_ck2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p2_ck_9:8;
        RBus_UInt32  reg_p2_ck_10:8;
        RBus_UInt32  reg_p2_ck_11:8;
        RBus_UInt32  reg_p2_ck_12:8;
    };
}p2_ck3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p2_ck_13:8;
        RBus_UInt32  res1:24;
    };
}p2_ck4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p2_g_1:8;
        RBus_UInt32  reg_p2_g_2:8;
        RBus_UInt32  reg_p2_g_3:8;
        RBus_UInt32  reg_p2_g_4:8;
    };
}p2_g1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p2_g_5:8;
        RBus_UInt32  reg_p2_g_6:8;
        RBus_UInt32  reg_p2_g_7:8;
        RBus_UInt32  reg_p2_g_8:8;
    };
}p2_g2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p2_g_9:8;
        RBus_UInt32  reg_p2_g_10:8;
        RBus_UInt32  reg_p2_g_11:8;
        RBus_UInt32  reg_p2_g_12:8;
    };
}p2_g3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p2_g_13:8;
        RBus_UInt32  reg_p2_g_koffok:1;
        RBus_UInt32  reg_p2_g_koff_bound:1;
        RBus_UInt32  reg_p2_g_koff_sel:5;
        RBus_UInt32  res1:17;
    };
}p2_g4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p2_r_1:8;
        RBus_UInt32  reg_p2_r_2:8;
        RBus_UInt32  reg_p2_r_3:8;
        RBus_UInt32  reg_p2_r_4:8;
    };
}p2_r1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p2_r_5:8;
        RBus_UInt32  reg_p2_r_6:8;
        RBus_UInt32  reg_p2_r_7:8;
        RBus_UInt32  reg_p2_r_8:8;
    };
}p2_r2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p2_r_9:8;
        RBus_UInt32  reg_p2_r_10:8;
        RBus_UInt32  reg_p2_r_11:8;
        RBus_UInt32  reg_p2_r_12:8;
    };
}p2_r3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p2_r_13:8;
        RBus_UInt32  reg_p2_r_koffok:1;
        RBus_UInt32  reg_p2_r_koff_bound:1;
        RBus_UInt32  reg_p2_r_koff_sel:5;
        RBus_UInt32  res1:17;
    };
}p2_r4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_stst:4;
        RBus_UInt32  reg_tst_spad:1;
        RBus_UInt32  res1:27;
    };
}test_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_top_in_1:8;
        RBus_UInt32  reg_top_in_2:8;
        RBus_UInt32  reg_top_in_3:8;
        RBus_UInt32  reg_top_in_4:8;
    };
}top_in_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_top_out_1:8;
        RBus_UInt32  reg_top_out_2:8;
        RBus_UInt32  reg_top_out_3:8;
        RBus_UInt32  reg_top_out_4:8;
    };
}top_out_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_z0tst:4;
        RBus_UInt32  reg_z0_adjr_0:5;
        RBus_UInt32  reg_z0_adjr_1:5;
        RBus_UInt32  reg_z0_adjr_2:5;
        RBus_UInt32  reg_z0_bound:1;
        RBus_UInt32  reg_z0_entst:1;
        RBus_UInt32  reg_z0_ok:1;
        RBus_UInt32  reg_z0_res:5;
        RBus_UInt32  reg_z0_stune:1;
        RBus_UInt32  reg_z0_z0pow:1;
        RBus_UInt32  res1:3;
    };
}z0k_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_z0_z0pow_b:3;
        RBus_UInt32  reg_z0_z0pow_ck:3;
        RBus_UInt32  reg_z0_z0pow_g:3;
        RBus_UInt32  reg_z0_z0pow_r:3;
        RBus_UInt32  reg_z0_z100_en:3;
        RBus_UInt32  reg_z0_z300pow:3;
        RBus_UInt32  reg_z0_z300_sel:3;
        RBus_UInt32  reg_ck_pixel_hdmirpt_div2:1;
        RBus_UInt32  res1:10;
    };
}z0pow_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_eye_pi_en:4;
        RBus_UInt32  reg_eye_ref_ctrl:6;
        RBus_UInt32  res1:22;
    };
}eye1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_eye_pi_st:32;
    };
}eye2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  p0_bypass_ok:1;
        RBus_UInt32  p1_bypass_ok:1;
        RBus_UInt32  p2_bypass_ok:1;
        RBus_UInt32  res1:29;
    };
}bypass_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  p0_b_demux_rstb:1;
        RBus_UInt32  p0_g_demux_rstb:1;
        RBus_UInt32  p0_r_demux_rstb:1;
        RBus_UInt32  p1_b_demux_rstb:1;
        RBus_UInt32  p1_g_demux_rstb:1;
        RBus_UInt32  p1_r_demux_rstb:1;
        RBus_UInt32  p2_b_demux_rstb:1;
        RBus_UInt32  p2_g_demux_rstb:1;
        RBus_UInt32  p2_r_demux_rstb:1;
        RBus_UInt32  p0_ck_pllrstb:1;
        RBus_UInt32  p1_ck_pllrstb:1;
        RBus_UInt32  p2_ck_pllrstb:1;
        RBus_UInt32  p0_ck_vcorstb:1;
        RBus_UInt32  p1_ck_vcorstb:1;
        RBus_UInt32  p2_ck_vcorstb:1;
        RBus_UInt32  reg_p0_acdr_rstb_fsm:1;
        RBus_UInt32  reg_p1_acdr_rstb_fsm:1;
        RBus_UInt32  reg_p2_acdr_rstb_fsm:1;
        RBus_UInt32  dfe_rstn_n:1;
        RBus_UInt32  eye_monitor_rstn:1;
        RBus_UInt32  res1:12;
    };
}rst_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_infifo_cnt:3;
        RBus_UInt32  reg_p0_data_order:1;
        RBus_UInt32  reg_p0_bypass_sdm_int:1;
        RBus_UInt32  reg_p0_ki:3;
        RBus_UInt32  reg_p0_kp:8;
        RBus_UInt32  reg_p0_kd:1;
        RBus_UInt32  reg_p0_rate_sel:3;
        RBus_UInt32  reg_p0_shift_inv_b:1;
        RBus_UInt32  reg_p0_shift_inv_g:1;
        RBus_UInt32  reg_p0_shift_inv_r:1;
        RBus_UInt32  reg_p0_cdr_ckinv_b:1;
        RBus_UInt32  reg_p0_cdr_ckinv_g:1;
        RBus_UInt32  reg_p0_cdr_ckinv_r:1;
        RBus_UInt32  p0_b_cdr_rst_n:1;
        RBus_UInt32  p0_g_cdr_rst_n:1;
        RBus_UInt32  p0_r_cdr_rst_n:1;
        RBus_UInt32  p0_b_dig_rst_n:1;
        RBus_UInt32  p0_g_dig_rst_n:1;
        RBus_UInt32  p0_r_dig_rst_n:1;
    };
}regd0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_dyn_kp_en:1;
        RBus_UInt32  reg_p0_pi_m_mode:1;
        RBus_UInt32  reg_p0_edge_out:1;
        RBus_UInt32  reg_p0_ercnt_en:1;
        RBus_UInt32  reg_p0_testout_sel:2;
        RBus_UInt32  reg_p0_acc2_manual:1;
        RBus_UInt32  reg_p0_squ_tri:1;
        RBus_UInt32  reg_p0_acc2_period:10;
        RBus_UInt32  reg_p0_int_init:14;
    };
}regd1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res2:8;
        RBus_UInt32  reg_p0_timer_ber:5;
        RBus_UInt32  reg_p0_timer_eq:5;
        RBus_UInt32  reg_p0_timer_lpf:5;
        RBus_UInt32  res1:4;
        RBus_UInt32  reg_p0_st_mode:1;
        RBus_UInt32  reg_p0_en_m_value:4;
    };
}regd2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  p0_en_ro_b:4;
        RBus_UInt32  p0_st_ro_b:5;
        RBus_UInt32  res3:1;
        RBus_UInt32  p0_en_ro_g:4;
        RBus_UInt32  p0_st_ro_g:5;
        RBus_UInt32  res2:1;
        RBus_UInt32  p0_en_ro_r:4;
        RBus_UInt32  p0_st_ro_r:5;
        RBus_UInt32  res1:3;
    };
}regd3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  p0_er_count_b:10;
        RBus_UInt32  p0_er_count_g:10;
        RBus_UInt32  p0_er_count_r:10;
        RBus_UInt32  res1:2;
    };
}regd4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_infifo_cnt:3;
        RBus_UInt32  reg_p1_data_order:1;
        RBus_UInt32  reg_p1_bypass_sdm_int:1;
        RBus_UInt32  reg_p1_ki:3;
        RBus_UInt32  reg_p1_kp:8;
        RBus_UInt32  reg_p1_kd:1;
        RBus_UInt32  reg_p1_rate_sel:3;
        RBus_UInt32  reg_p1_shift_inv_b:1;
        RBus_UInt32  reg_p1_shift_inv_g:1;
        RBus_UInt32  reg_p1_shift_inv_r:1;
        RBus_UInt32  reg_p1_cdr_ckinv_b:1;
        RBus_UInt32  reg_p1_cdr_ckinv_g:1;
        RBus_UInt32  reg_p1_cdr_ckinv_r:1;
        RBus_UInt32  p1_b_cdr_rst_n:1;
        RBus_UInt32  p1_g_cdr_rst_n:1;
        RBus_UInt32  p1_r_cdr_rst_n:1;
        RBus_UInt32  p1_b_dig_rst_n:1;
        RBus_UInt32  p1_g_dig_rst_n:1;
        RBus_UInt32  p1_r_dig_rst_n:1;
    };
}regd5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_dyn_kp_en:1;
        RBus_UInt32  reg_p1_pi_m_mode:1;
        RBus_UInt32  reg_p1_edge_out:1;
        RBus_UInt32  reg_p1_ercnt_en:1;
        RBus_UInt32  reg_p1_testout_sel:2;
        RBus_UInt32  reg_p1_acc2_manual:1;
        RBus_UInt32  reg_p1_squ_tri:1;
        RBus_UInt32  reg_p1_acc2_period:10;
        RBus_UInt32  reg_p1_int_init:14;
    };
}regd6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res2:8;
        RBus_UInt32  reg_p1_timer_ber:5;
        RBus_UInt32  reg_p1_timer_eq:5;
        RBus_UInt32  reg_p1_timer_lpf:5;
        RBus_UInt32  res1:4;
        RBus_UInt32  reg_p1_st_mode:1;
        RBus_UInt32  reg_p1_en_m_value:4;
    };
}regd7_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  p1_en_ro_b:4;
        RBus_UInt32  p1_st_ro_b:5;
        RBus_UInt32  res3:1;
        RBus_UInt32  p1_en_ro_g:4;
        RBus_UInt32  p1_st_ro_g:5;
        RBus_UInt32  res2:1;
        RBus_UInt32  p1_en_ro_r:4;
        RBus_UInt32  p1_st_ro_r:5;
        RBus_UInt32  res1:3;
    };
}regd8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  p1_er_count_b:10;
        RBus_UInt32  p1_er_count_g:10;
        RBus_UInt32  p1_er_count_r:10;
        RBus_UInt32  res1:2;
    };
}regd9_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p2_infifo_cnt:3;
        RBus_UInt32  reg_p2_data_order:1;
        RBus_UInt32  reg_p2_bypass_sdm_int:1;
        RBus_UInt32  reg_p2_ki:3;
        RBus_UInt32  reg_p2_kp:8;
        RBus_UInt32  reg_p2_kd:1;
        RBus_UInt32  reg_p2_rate_sel:3;
        RBus_UInt32  reg_p2_shift_inv_b:1;
        RBus_UInt32  reg_p2_shift_inv_g:1;
        RBus_UInt32  reg_p2_shift_inv_r:1;
        RBus_UInt32  reg_p2_cdr_ckinv_b:1;
        RBus_UInt32  reg_p2_cdr_ckinv_g:1;
        RBus_UInt32  reg_p2_cdr_ckinv_r:1;
        RBus_UInt32  p2_b_cdr_rst_n:1;
        RBus_UInt32  p2_g_cdr_rst_n:1;
        RBus_UInt32  p2_r_cdr_rst_n:1;
        RBus_UInt32  p2_b_dig_rst_n:1;
        RBus_UInt32  p2_g_dig_rst_n:1;
        RBus_UInt32  p2_r_dig_rst_n:1;
    };
}regd10_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p2_dyn_kp_en:1;
        RBus_UInt32  reg_p2_pi_m_mode:1;
        RBus_UInt32  reg_p2_edge_out:1;
        RBus_UInt32  reg_p2_ercnt_en:1;
        RBus_UInt32  reg_p2_testout_sel:2;
        RBus_UInt32  reg_p2_acc2_manual:1;
        RBus_UInt32  reg_p2_squ_tri:1;
        RBus_UInt32  reg_p2_acc2_period:10;
        RBus_UInt32  reg_p2_int_init:14;
    };
}regd11_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res2:8;
        RBus_UInt32  reg_p2_timer_ber:5;
        RBus_UInt32  reg_p2_timer_eq:5;
        RBus_UInt32  reg_p2_timer_lpf:5;
        RBus_UInt32  res1:4;
        RBus_UInt32  reg_p2_st_mode:1;
        RBus_UInt32  reg_p2_en_m_value:4;
    };
}regd12_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  p2_en_ro_b:4;
        RBus_UInt32  p2_st_ro_b:5;
        RBus_UInt32  res3:1;
        RBus_UInt32  p2_en_ro_g:4;
        RBus_UInt32  p2_st_ro_g:5;
        RBus_UInt32  res2:1;
        RBus_UInt32  p2_en_ro_r:4;
        RBus_UInt32  p2_st_ro_r:5;
        RBus_UInt32  res1:3;
    };
}regd13_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  p2_er_count_b:10;
        RBus_UInt32  p2_er_count_g:10;
        RBus_UInt32  p2_er_count_r:10;
        RBus_UInt32  res1:2;
    };
}regd14_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  p0_wdog_rst_n:1;
        RBus_UInt32  p0_pll_wd_rst_wc:1;
        RBus_UInt32  p0_pll_wd_ckrdy_ro:1;
        RBus_UInt32  reg_p0_en_data_manual_l0:1;
        RBus_UInt32  reg_p0_en_eqen_manual_l0:1;
        RBus_UInt32  reg_p0_bypass_data_rdy_l0:1;
        RBus_UInt32  reg_p0_bypass_eqen_rdy_l0:1;
        RBus_UInt32  reg_p0_acdr_l0_en:1;
        RBus_UInt32  reg_p0_pll_wd_time_rdy:2;
        RBus_UInt32  reg_p0_pll_wd_rst_wid:2;
        RBus_UInt32  reg_p0_pll_wd_en:1;
        RBus_UInt32  reg_p0_pll_wd_base_time:3;
        RBus_UInt32  reg_p0_order:1;
        RBus_UInt32  reg_p0_eqen_rdy_time:4;
        RBus_UInt32  reg_p0_en_data_manual:1;
        RBus_UInt32  reg_p0_en_eqen_manual:1;
        RBus_UInt32  reg_p0_en_clkout_manual:1;
        RBus_UInt32  reg_p0_data_rdy_time:4;
        RBus_UInt32  reg_p0_bypass_pi:1;
        RBus_UInt32  reg_p0_bypass_data_rdy:1;
        RBus_UInt32  reg_p0_bypass_eqen_rdy:1;
        RBus_UInt32  reg_p0_bypass_clk_rdy:1;
    };
}regd15_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_n_code:9;
        RBus_UInt32  res2:7;
        RBus_UInt32  reg_p0_f_code:12;
        RBus_UInt32  res1:3;
        RBus_UInt32  reg_p0_wd_sdm_en:1;
    };
}regd16_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  p1_wdog_rst_n:1;
        RBus_UInt32  p1_pll_wd_rst_wc:1;
        RBus_UInt32  p1_pll_wd_ckrdy_ro:1;
        RBus_UInt32  reg_p1_en_data_manual_l0:1;
        RBus_UInt32  reg_p1_en_eqen_manual_l0:1;
        RBus_UInt32  reg_p1_bypass_data_rdy_l0:1;
        RBus_UInt32  reg_p1_bypass_eqen_rdy_l0:1;
        RBus_UInt32  reg_p1_acdr_l0_en:1;
        RBus_UInt32  reg_p1_pll_wd_time_rdy:2;
        RBus_UInt32  reg_p1_pll_wd_rst_wid:2;
        RBus_UInt32  reg_p1_pll_wd_en:1;
        RBus_UInt32  reg_p1_pll_wd_base_time:3;
        RBus_UInt32  reg_p1_order:1;
        RBus_UInt32  reg_p1_eqen_rdy_time:4;
        RBus_UInt32  reg_p1_en_data_manual:1;
        RBus_UInt32  reg_p1_en_eqen_manual:1;
        RBus_UInt32  reg_p1_en_clkout_manual:1;
        RBus_UInt32  reg_p1_data_rdy_time:4;
        RBus_UInt32  reg_p1_bypass_pi:1;
        RBus_UInt32  reg_p1_bypass_data_rdy:1;
        RBus_UInt32  reg_p1_bypass_eqen_rdy:1;
        RBus_UInt32  reg_p1_bypass_clk_rdy:1;
    };
}regd17_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_n_code:9;
        RBus_UInt32  res2:7;
        RBus_UInt32  reg_p1_f_code:12;
        RBus_UInt32  res1:3;
        RBus_UInt32  reg_p1_wd_sdm_en:1;
    };
}regd18_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  p2_wdog_rst_n:1;
        RBus_UInt32  p2_pll_wd_rst_wc:1;
        RBus_UInt32  p2_pll_wd_ckrdy_ro:1;
        RBus_UInt32  reg_p2_en_data_manual_l0:1;
        RBus_UInt32  reg_p2_en_eqen_manual_l0:1;
        RBus_UInt32  reg_p2_bypass_data_rdy_l0:1;
        RBus_UInt32  reg_p2_bypass_eqen_rdy_l0:1;
        RBus_UInt32  reg_p2_acdr_l0_en:1;
        RBus_UInt32  reg_p2_pll_wd_time_rdy:2;
        RBus_UInt32  reg_p2_pll_wd_rst_wid:2;
        RBus_UInt32  reg_p2_pll_wd_en:1;
        RBus_UInt32  reg_p2_pll_wd_base_time:3;
        RBus_UInt32  reg_p2_order:1;
        RBus_UInt32  reg_p2_eqen_rdy_time:4;
        RBus_UInt32  reg_p2_en_data_manual:1;
        RBus_UInt32  reg_p2_en_eqen_manual:1;
        RBus_UInt32  reg_p2_en_clkout_manual:1;
        RBus_UInt32  reg_p2_data_rdy_time:4;
        RBus_UInt32  reg_p2_bypass_pi:1;
        RBus_UInt32  reg_p2_bypass_data_rdy:1;
        RBus_UInt32  reg_p2_bypass_eqen_rdy:1;
        RBus_UInt32  reg_p2_bypass_clk_rdy:1;
    };
}regd19_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p2_n_code:9;
        RBus_UInt32  res2:7;
        RBus_UInt32  reg_p2_f_code:12;
        RBus_UInt32  res1:3;
        RBus_UInt32  reg_p2_wd_sdm_en:1;
    };
}regd20_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  reg_p0_init_time:3;
        RBus_UInt32  reg_p0_divide_num:7;
        RBus_UInt32  reg_p0_vco_coarse:7;
        RBus_UInt32  reg_p0_calib_late:1;
        RBus_UInt32  reg_p0_calib_manual:1;
        RBus_UInt32  reg_p0_calib_time:3;
        RBus_UInt32  reg_p0_adp_time:5;
        RBus_UInt32  reg_p0_adap_eq_off:1;
        RBus_UInt32  reg_p0_cp_en_manual:1;
        RBus_UInt32  reg_p0_adp_en_manual:1;
        RBus_UInt32  reg_p0_auto_mode:1;
    };
}regd21_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_lock_dn_limit:11;
        RBus_UInt32  res2:5;
        RBus_UInt32  reg_p0_lock_up_limit:11;
        RBus_UInt32  res1:5;
    };
}regd22_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  reg_p0_calib_reset_sel:1;
        RBus_UInt32  reg_p0_vc_sel:2;
        RBus_UInt32  reg_p0_cdr_c:2;
        RBus_UInt32  reg_p0_cdr_r:6;
        RBus_UInt32  reg_p0_cdr_cp:20;
    };
}regd23_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_timer_4:5;
        RBus_UInt32  reg_p0_cp_time:5;
        RBus_UInt32  reg_p0_slope_lv_dn:11;
        RBus_UInt32  reg_p0_slope_lv_up:11;
    };
}regd24_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  reg_p0_timer_6:5;
        RBus_UInt32  reg_p0_timer_5:1;
        RBus_UInt32  reg_p0_slope_hv_dn:11;
        RBus_UInt32  reg_p0_slope_hv_up:11;
    };
}regd25_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  reg_p0_old_mode:1;
        RBus_UInt32  reg_p0_slope_band:5;
        RBus_UInt32  reg_p0_slope_manual:1;
        RBus_UInt32  reg_p0_rxidle_bypass:1;
        RBus_UInt32  reg_p0_pfd_bypass:1;
        RBus_UInt32  reg_p0_pfd_time:5;
        RBus_UInt32  reg_p0_pfd_en_manual:1;
        RBus_UInt32  reg_p0_start_en_manual:1;
    };
}regd26_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  p0_slope_final_reg:5;
        RBus_UInt32  p0_slope_hv_reg:5;
        RBus_UInt32  p0_slope_lv_reg:5;
        RBus_UInt32  p0_pfd_en_fsm_reg:1;
        RBus_UInt32  p0_coarse_fsm_reg:7;
        RBus_UInt32  p0_cp_en_fsm_reg:1;
        RBus_UInt32  p0_adp_en_fsm_reg:1;
        RBus_UInt32  p0_fld_st_reg:5;
    };
}regd27_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  reg_p1_init_time:3;
        RBus_UInt32  reg_p1_divide_num:7;
        RBus_UInt32  reg_p1_vco_coarse:7;
        RBus_UInt32  reg_p1_calib_late:1;
        RBus_UInt32  reg_p1_calib_manual:1;
        RBus_UInt32  reg_p1_calib_time:3;
        RBus_UInt32  reg_p1_adp_time:5;
        RBus_UInt32  reg_p1_adap_eq_off:1;
        RBus_UInt32  reg_p1_cp_en_manual:1;
        RBus_UInt32  reg_p1_adp_en_manual:1;
        RBus_UInt32  reg_p1_auto_mode:1;
    };
}regd28_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_lock_dn_limit:11;
        RBus_UInt32  res2:5;
        RBus_UInt32  reg_p1_lock_up_limit:11;
        RBus_UInt32  res1:5;
    };
}regd29_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  reg_p1_calib_reset_sel:1;
        RBus_UInt32  reg_p1_vc_sel:2;
        RBus_UInt32  reg_p1_cdr_c:2;
        RBus_UInt32  reg_p1_cdr_r:6;
        RBus_UInt32  reg_p1_cdr_cp:20;
    };
}regd30_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_timer_4:5;
        RBus_UInt32  reg_p1_cp_time:5;
        RBus_UInt32  reg_p1_slope_lv_dn:11;
        RBus_UInt32  reg_p1_slope_lv_up:11;
    };
}regd31_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  reg_p1_timer_6:5;
        RBus_UInt32  reg_p1_timer_5:1;
        RBus_UInt32  reg_p1_slope_hv_dn:11;
        RBus_UInt32  reg_p1_slope_hv_up:11;
    };
}regd32_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  reg_p1_old_mode:1;
        RBus_UInt32  reg_p1_slope_band:5;
        RBus_UInt32  reg_p1_slope_manual:1;
        RBus_UInt32  reg_p1_rxidle_bypass:1;
        RBus_UInt32  reg_p1_pfd_bypass:1;
        RBus_UInt32  reg_p1_pfd_time:5;
        RBus_UInt32  reg_p1_pfd_en_manual:1;
        RBus_UInt32  reg_p1_start_en_manual:1;
    };
}regd33_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  p1_slope_final_reg:5;
        RBus_UInt32  p1_slope_hv_reg:5;
        RBus_UInt32  p1_slope_lv_reg:5;
        RBus_UInt32  p1_pfd_en_fsm_reg:1;
        RBus_UInt32  p1_coarse_fsm_reg:7;
        RBus_UInt32  p1_cp_en_fsm_reg:1;
        RBus_UInt32  p1_adp_en_fsm_reg:1;
        RBus_UInt32  p1_fld_st_reg:5;
    };
}regd34_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  reg_p2_init_time:3;
        RBus_UInt32  reg_p2_divide_num:7;
        RBus_UInt32  reg_p2_vco_coarse:7;
        RBus_UInt32  reg_p2_calib_late:1;
        RBus_UInt32  reg_p2_calib_manual:1;
        RBus_UInt32  reg_p2_calib_time:3;
        RBus_UInt32  reg_p2_adp_time:5;
        RBus_UInt32  reg_p2_adap_eq_off:1;
        RBus_UInt32  reg_p2_cp_en_manual:1;
        RBus_UInt32  reg_p2_adp_en_manual:1;
        RBus_UInt32  reg_p2_auto_mode:1;
    };
}regd35_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p2_lock_dn_limit:11;
        RBus_UInt32  res2:5;
        RBus_UInt32  reg_p2_lock_up_limit:11;
        RBus_UInt32  res1:5;
    };
}regd36_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  reg_p2_calib_reset_sel:1;
        RBus_UInt32  reg_p2_vc_sel:2;
        RBus_UInt32  reg_p2_cdr_c:2;
        RBus_UInt32  reg_p2_cdr_r:6;
        RBus_UInt32  reg_p2_cdr_cp:20;
    };
}regd37_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p2_timer_4:5;
        RBus_UInt32  reg_p2_cp_time:5;
        RBus_UInt32  reg_p2_slope_lv_dn:11;
        RBus_UInt32  reg_p2_slope_lv_up:11;
    };
}regd38_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  reg_p2_timer_6:5;
        RBus_UInt32  reg_p2_timer_5:1;
        RBus_UInt32  reg_p2_slope_hv_dn:11;
        RBus_UInt32  reg_p2_slope_hv_up:11;
    };
}regd39_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  reg_p2_old_mode:1;
        RBus_UInt32  reg_p2_slope_band:5;
        RBus_UInt32  reg_p2_slope_manual:1;
        RBus_UInt32  reg_p2_rxidle_bypass:1;
        RBus_UInt32  reg_p2_pfd_bypass:1;
        RBus_UInt32  reg_p2_pfd_time:5;
        RBus_UInt32  reg_p2_pfd_en_manual:1;
        RBus_UInt32  reg_p2_start_en_manual:1;
    };
}regd40_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  p2_slope_final_reg:5;
        RBus_UInt32  p2_slope_hv_reg:5;
        RBus_UInt32  p2_slope_lv_reg:5;
        RBus_UInt32  p2_pfd_en_fsm_reg:1;
        RBus_UInt32  p2_coarse_fsm_reg:7;
        RBus_UInt32  p2_cp_en_fsm_reg:1;
        RBus_UInt32  p2_adp_en_fsm_reg:1;
        RBus_UInt32  p2_fld_st_reg:5;
    };
}regd41_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  reg_p0_ck_md_reserved:4;
        RBus_UInt32  reg_p0_ck_error_limit:5;
        RBus_UInt32  reg_p0_ck_md_adj:4;
        RBus_UInt32  reg_p0_ck_md_auto:1;
        RBus_UInt32  reg_p0_ck_md_sel:2;
        RBus_UInt32  reg_p0_ck_md_debounce:7;
        RBus_UInt32  reg_p0_ck_md_threshold:6;
        RBus_UInt32  p0_ck_md_rstb:1;
    };
}regd42_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  p0_clock_unstable_flag:1;
        RBus_UInt32  p0_ck_md_ok:1;
        RBus_UInt32  p0_unstable_count:5;
        RBus_UInt32  p0_ck_rate:4;
        RBus_UInt32  p0_ck_md_count:13;
    };
}regd43_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  reg_p1_ck_md_reserved:4;
        RBus_UInt32  reg_p1_ck_error_limit:5;
        RBus_UInt32  reg_p1_ck_md_adj:4;
        RBus_UInt32  reg_p1_ck_md_auto:1;
        RBus_UInt32  reg_p1_ck_md_sel:2;
        RBus_UInt32  reg_p1_ck_md_debounce:7;
        RBus_UInt32  reg_p1_ck_md_threshold:6;
        RBus_UInt32  p1_ck_md_rstb:1;
    };
}regd44_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  p1_clock_unstable_flag:1;
        RBus_UInt32  p1_ck_md_ok:1;
        RBus_UInt32  p1_unstable_count:5;
        RBus_UInt32  p1_ck_rate:4;
        RBus_UInt32  p1_ck_md_count:13;
    };
}regd45_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  reg_p2_ck_md_reserved:4;
        RBus_UInt32  reg_p2_ck_error_limit:5;
        RBus_UInt32  reg_p2_ck_md_adj:4;
        RBus_UInt32  reg_p2_ck_md_auto:1;
        RBus_UInt32  reg_p2_ck_md_sel:2;
        RBus_UInt32  reg_p2_ck_md_debounce:7;
        RBus_UInt32  reg_p2_ck_md_threshold:6;
        RBus_UInt32  p2_ck_md_rstb:1;
    };
}regd46_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  p2_clock_unstable_flag:1;
        RBus_UInt32  p2_ck_md_ok:1;
        RBus_UInt32  p2_unstable_count:5;
        RBus_UInt32  p2_ck_rate:4;
        RBus_UInt32  p2_ck_md_count:13;
    };
}regd47_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  reg_dig_reserved_2:8;
        RBus_UInt32  reg_dig_reserved_1:8;
        RBus_UInt32  reg_dig_reserved_0:8;
        RBus_UInt32  reg_dig_debug_sel:4;
    };
}regd48_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_st_m_value:32;
    };
}regd49_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_st_m_value:32;
    };
}regd50_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p2_st_m_value:32;
    };
}regd51_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  eye_monitor_dout:16;
        RBus_UInt32  res2:4;
        RBus_UInt32  reg_eye_monitor_ck_sel:2;
        RBus_UInt32  res1:10;
    };
}regd52_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_st_m_value_g:32;
    };
}regd53_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_st_m_value_g:32;
    };
}regd54_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p2_st_m_value_g:32;
    };
}regd55_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_st_m_value_b:32;
    };
}regd56_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_st_m_value_b:32;
    };
}regd57_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p2_st_m_value_b:32;
    };
}regd58_RBUS;




#endif 


#endif //_RBUS_DFE_HDMI_RX_PHY_REG_H_
