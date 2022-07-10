/**
* @file rbusCBUSReg.h
* @spec Kylin_hdmirx_MHL_CBUS_arch_spec
* RBus systemc program.
*
* @author RS_MM2_SD
* @email jason9.ccc@realtek.com
* @date 2015/4/14
* @ingroup model_rbus
* @version { 1.0 }
**
*/

#ifndef _RBUS_CBUS_REG_H_
#define _RBUS_CBUS_REG_H_

#include "TV_IP/rbusTypes.h"



//  CBUS Register Address



#define  CBUS_MSC_REG_00_ADDR                               		(0x98035000)
#define  CBUS_MSC_REG_01_ADDR                               		(0x98035004)
#define  CBUS_MSC_REG_02_ADDR                               		(0x98035008)
#define  CBUS_MSC_REG_03_ADDR                               		(0x9803500c)
#define  CBUS_MSC_REG_04_ADDR                               		(0x98035010)
#define  CBUS_MSC_REG_05_ADDR                               		(0x98035014)
#define  CBUS_MSC_REG_06_ADDR                               		(0x98035018)
#define  CBUS_MSC_REG_07_ADDR                               		(0x9803501c)
#define  CBUS_MSC_REG_08_ADDR                               		(0x98035020)
#define  CBUS_MSC_REG_09_ADDR                               		(0x98035024)
#define  CBUS_MSC_REG_0A_ADDR                               		(0x98035028)
#define  CBUS_MSC_REG_0B_ADDR                               		(0x9803502c)
#define  CBUS_MSC_REG_0C_ADDR                               		(0x98035030)
#define  CBUS_MSC_REG_0D_ADDR                               		(0x98035034)
#define  CBUS_MSC_REG_0E_ADDR                               		(0x98035038)
#define  CBUS_MSC_REG_0F_ADDR                               		(0x9803503c)
#define  CBUS_MSC_REG_20_ADDR                               		(0x98035080)
#define  CBUS_MSC_REG_21_ADDR                               		(0x98035084)
#define  CBUS_MSC_REG_22_ADDR                               		(0x98035088)
#define  CBUS_MSC_REG_23_ADDR                               		(0x9803508c)
#define  CBUS_MSC_REG_24_ADDR                               		(0x98035090)
#define  CBUS_MSC_REG_25_ADDR                               		(0x98035094)
#define  CBUS_MSC_REG_26_ADDR                               		(0x98035098)
#define  CBUS_MSC_REG_27_ADDR                               		(0x9803509c)
#define  CBUS_MSC_REG_30_ADDR                               		(0x980350c0)
#define  CBUS_MSC_REG_31_ADDR                               		(0x980350c4)
#define  CBUS_MSC_REG_32_ADDR                               		(0x980350c8)
#define  CBUS_MSC_REG_33_ADDR                               		(0x980350cc)
#define  CBUS_MSC_REG_34_ADDR                               		(0x980350d0)
#define  CBUS_MSC_REG_35_ADDR                               		(0x980350d4)
#define  CBUS_MSC_REG_36_ADDR                               		(0x980350d8)
#define  CBUS_MSC_REG_37_ADDR                               		(0x980350dc)
#define  CBUS_MSC_REG_40_ADDR                               		(0x98035100)
#define  CBUS_MSC_REG_41_ADDR                               		(0x98035104)
#define  CBUS_MSC_REG_42_ADDR                               		(0x98035108)
#define  CBUS_MSC_REG_43_ADDR                               		(0x9803510c)
#define  CBUS_MSC_REG_44_ADDR                               		(0x98035110)
#define  CBUS_MSC_REG_45_ADDR                               		(0x98035114)
#define  CBUS_MSC_REG_46_ADDR                               		(0x98035118)
#define  CBUS_MSC_REG_47_ADDR                               		(0x9803511c)
#define  CBUS_MSC_REG_48_ADDR                               		(0x98035120)
#define  CBUS_MSC_REG_49_ADDR                               		(0x98035124)
#define  CBUS_MSC_REG_4A_ADDR                               		(0x98035128)
#define  CBUS_MSC_REG_4B_ADDR                               		(0x9803512c)
#define  CBUS_MSC_REG_4C_ADDR                               		(0x98035130)
#define  CBUS_MSC_REG_4D_ADDR                               		(0x98035134)
#define  CBUS_MSC_REG_4E_ADDR                               		(0x98035138)
#define  CBUS_MSC_REG_4F_ADDR                               		(0x9803513c)
#define  CBUS_MSC_REG_50_ADDR                               		(0x98035140)
#define  CBUS_MSC_REG_51_ADDR                               		(0x98035144)
#define  CBUS_MSC_REG_52_ADDR                               		(0x98035148)
#define  CBUS_MSC_REG_53_ADDR                               		(0x9803514c)
#define  CBUS_MSC_REG_54_ADDR                               		(0x98035150)
#define  CBUS_MSC_REG_55_ADDR                               		(0x98035154)
#define  CBUS_MSC_REG_56_ADDR                               		(0x98035158)
#define  CBUS_MSC_REG_57_ADDR                               		(0x9803515c)
#define  CBUS_MSC_REG_58_ADDR                               		(0x98035160)
#define  CBUS_MSC_REG_59_ADDR                               		(0x98035164)
#define  CBUS_MSC_REG_5A_ADDR                               		(0x98035168)
#define  CBUS_MSC_REG_5B_ADDR                               		(0x9803516c)
#define  CBUS_MSC_REG_5C_ADDR                               		(0x98035170)
#define  CBUS_MSC_REG_5D_ADDR                               		(0x98035174)
#define  CBUS_MSC_REG_5E_ADDR                               		(0x98035178)
#define  CBUS_MSC_REG_5F_ADDR                               		(0x9803517c)
#define  CBUS_MSC_REG_80_ADDR                               		(0x98035180)
#define  CBUS_MSC_REG_81_ADDR                               		(0x98035184)
#define  CBUS_MSC_REG_82_ADDR                               		(0x98035188)
#define  CBUS_MSC_REG_83_ADDR                               		(0x9803518c)
#define  CBUS_MSC_REG_84_ADDR                               		(0x98035190)
#define  CBUS_MSC_REG_85_ADDR                               		(0x98035194)
#define  CBUS_MSC_REG_86_ADDR                               		(0x98035198)
#define  CBUS_MSC_REG_87_ADDR                               		(0x9803519c)
#define  CBUS_MSC_REG_88_ADDR                               		(0x980351a0)
#define  CBUS_MSC_REG_89_ADDR                               		(0x980351a4)
#define  CBUS_MSC_REG_8A_ADDR                               		(0x980351a8)
#define  CBUS_MSC_REG_8B_ADDR                               		(0x980351ac)
#define  CBUS_MSC_REG_8C_ADDR                               		(0x980351b0)
#define  CBUS_MSC_REG_8D_ADDR                               		(0x980351b4)
#define  CBUS_MSC_REG_8E_ADDR                               		(0x980351b8)
#define  CBUS_MSC_REG_8F_ADDR                               		(0x980351bc)
#define  CBUS_MSC_REG_90_ADDR                               		(0x980351c0)
#define  CBUS_MSC_REG_91_ADDR                               		(0x980351c4)
#define  CBUS_MSC_REG_92_ADDR                               		(0x980351c8)
#define  CBUS_MSC_REG_93_ADDR                               		(0x980351cc)
#define  CBUS_MSC_REG_94_ADDR                               		(0x980351d0)
#define  CBUS_MSC_REG_95_ADDR                               		(0x980351d4)
#define  CBUS_MSC_REG_96_ADDR                               		(0x980351d8)
#define  CBUS_MSC_REG_97_ADDR                               		(0x980351dc)
#define  CBUS_MSC_REG_98_ADDR                               		(0x980351e0)
#define  CBUS_MSC_REG_99_ADDR                               		(0x980351e4)
#define  CBUS_MSC_REG_9A_ADDR                               		(0x980351e8)
#define  CBUS_MSC_REG_9B_ADDR                               		(0x980351ec)
#define  CBUS_MSC_REG_9C_ADDR                               		(0x980351f0)
#define  CBUS_MSC_REG_9D_ADDR                               		(0x980351f4)
#define  CBUS_MSC_REG_9E_ADDR                               		(0x980351f8)
#define  CBUS_MSC_REG_9F_ADDR                               		(0x980351fc)
#define  CBUS_MSC_REG_A0_ADDR                               		(0x98035340)
#define  CBUS_MSC_REG_A1_ADDR                               		(0x98035344)
#define  CBUS_MSC_REG_A2_ADDR                               		(0x98035348)
#define  CBUS_MSC_REG_A3_ADDR                               		(0x9803534c)
#define  CBUS_MSC_REG_A4_ADDR                               		(0x98035350)
#define  CBUS_MSC_REG_A5_ADDR                               		(0x98035354)
#define  CBUS_MSC_REG_A6_ADDR                               		(0x98035358)
#define  CBUS_MSC_REG_A7_ADDR                               		(0x9803535c)
#define  CBUS_MSC_REG_A8_ADDR                               		(0x98035360)
#define  CBUS_MSC_REG_A9_ADDR                               		(0x98035364)
#define  CBUS_MSC_REG_AA_ADDR                               		(0x98035368)
#define  CBUS_MSC_REG_AB_ADDR                               		(0x9803536c)
#define  CBUS_MSC_REG_AC_ADDR                               		(0x98035370)
#define  CBUS_MSC_REG_AD_ADDR                               		(0x98035374)
#define  CBUS_MSC_REG_AE_ADDR                               		(0x98035378)
#define  CBUS_MSC_REG_AF_ADDR                               		(0x9803537c)
#define  CBUS_CBUS_LINK_00_ADDR                             		(0x98035200)
#define  CBUS_CBUS_LINK_01_ADDR                             		(0x98035204)
#define  CBUS_CBUS_LINK_02_ADDR                             		(0x98035208)
#define  CBUS_CBUS_LINK_03_ADDR                             		(0x9803520c)
#define  CBUS_CBUS_LINK_04_ADDR                             		(0x98035210)
#define  CBUS_CBUS_LINK_05_ADDR                             		(0x98035214)
#define  CBUS_CBUS_LINK_06_ADDR                             		(0x98035218)
#define  CBUS_CBUS_LINK_07_ADDR                             		(0x9803521c)
#define  CBUS_CBUS_LINK_08_ADDR                             		(0x98035220)
#define  CBUS_CBUS_LINK_09_ADDR                             		(0x98035224)
#define  CBUS_CBUS_LINK_0A_ADDR                             		(0x98035228)
#define  CBUS_CBUS_LINK_0B_ADDR                             		(0x9803522c)
#define  CBUS_CBUS_LINK_0C_ADDR                             		(0x98035230)
#define  CBUS_CBUS_LINK_0D_ADDR                             		(0x98035234)
#define  CBUS_CBUS_LINK_0E_ADDR                             		(0x98035238)
#define  CBUS_CBUS_LINK_0F_ADDR                             		(0x9803523c)
#define  CBUS_CBUS_LINK_10_ADDR                             		(0x98035240)
#define  CBUS_CBUS_LINK_11_ADDR                             		(0x98035244)
#define  CBUS_CBUS_LINK_12_ADDR                             		(0x98035248)
#define  CBUS_CBUS_LINK_13_ADDR                             		(0x9803524c)
#define  CBUS_CBUS_LINK_14_ADDR                             		(0x98035250)
#define  CBUS_CBUS_MSC_00_ADDR                              		(0x98035260)
#define  CBUS_CBUS_MSC_01_ADDR                              		(0x98035264)
#define  CBUS_CBUS_MSC_02_ADDR                              		(0x98035268)
#define  CBUS_CBUS_MSC_03_ADDR                              		(0x9803526c)
#define  CBUS_CBUS_MSC_04_ADDR                              		(0x98035270)
#define  CBUS_CBUS_MSC_05_ADDR                              		(0x98035274)
#define  CBUS_CBUS_MSC_06_ADDR                              		(0x98035278)
#define  CBUS_CBUS_MSC_07_ADDR                              		(0x9803527c)
#define  CBUS_CBUS_MSC_08_ADDR                              		(0x98035280)
#define  CBUS_CBUS_MSC_09_ADDR                              		(0x98035284)
#define  CBUS_CBUS_MSC_0A_ADDR                              		(0x98035288)
#define  CBUS_CBUS_MSC_0B_ADDR                              		(0x9803528c)
#define  CBUS_CBUS_MSC_0C_ADDR                              		(0x98035290)
#define  CBUS_CBUS_MSC_0D_ADDR                              		(0x98035294)
#define  CBUS_CBUS_MSC_0E_ADDR                              		(0x98035298)
#define  CBUS_CBUS_MSC_0F_ADDR                              		(0x9803529c)
#define  CBUS_CBUS_MSC_10_ADDR                              		(0x980352a0)
#define  CBUS_CBUS_MSC_11_ADDR                              		(0x980352a4)
#define  CBUS_CBUS_MSC_12_ADDR                              		(0x980352a8)
#define  CBUS_CBUS_MSC_13_ADDR                              		(0x980352ac)
#define  CBUS_CBUS_MSC_14_ADDR                              		(0x980352b0)
#define  CBUS_CBUS_MSC_15_ADDR                              		(0x980352b4)
#define  CBUS_CBUS_MSC_16_ADDR                              		(0x980352b8)
#define  CBUS_CBUS_MSC_17_ADDR                              		(0x980352bc)
#define  CBUS_CBUS_MSC_18_ADDR                              		(0x980352c0)
#define  CBUS_CBUS_MSC_19_ADDR                              		(0x980352c4)
#define  CBUS_CBUS_MSC_1A_ADDR                              		(0x980352c8)
#define  CBUS_CBUS_MSC_1B_ADDR                              		(0x980352cc)
#define  CBUS_CBUS_MSC_1C_ADDR                              		(0x980352d0)
#define  CBUS_CBUS_MSC_1D_ADDR                              		(0x980352d4)
#define  CBUS_CBUS_MSC_1E_ADDR                              		(0x980352d8)
#define  CBUS_CBUS_MSC_1F_ADDR                              		(0x980352dc)
#define  CBUS_CBUS_MSC_20_ADDR                              		(0x980352e0)
#define  CBUS_CBUS_MSC_21_ADDR                              		(0x980352e4)
#define  CBUS_CBUS_MSC_22_ADDR                              		(0x980352e8)
#define  CBUS_FW0_REQ_00_ADDR                               		(0x98035300)
#define  CBUS_FW0_REQ_01_ADDR                               		(0x98035304)
#define  CBUS_FW0_REQ_02_ADDR                               		(0x98035308)
#define  CBUS_FW0_REQ_03_ADDR                               		(0x9803530c)
#define  CBUS_FW0_REQ_04_ADDR                               		(0x98035310)
#define  CBUS_FW0_REQ_05_ADDR                               		(0x98035314)
#define  CBUS_FW0_REQ_06_ADDR                               		(0x98035318)
#define  CBUS_FW0_REQ_07_ADDR                               		(0x9803531c)
#define  CBUS_FW0_REQ_08_ADDR                               		(0x98035320)
#define  CBUS_CBUS_DDC_00_ADDR                              		(0x980353c0)
#define  CBUS_CBUS_DDC_01_ADDR                              		(0x980353c4)
#define  CBUS_CBUS_DDC_02_ADDR                              		(0x980353c8)
#define  CBUS_CBUS_DDC_03_ADDR                              		(0x980353cc)
#define  CBUS_CBUS_DDC_04_ADDR                              		(0x980353d0)
#define  CBUS_CBUS_DDC_05_ADDR                              		(0x980353d4)
#define  CBUS_CBUS_DDC_06_ADDR                              		(0x980353d8)
#define  CBUS_CBUS_WDOG_ADDR                                		(0x980353e0)
#define  CBUS_CBUS_INT_INDEX_ADDR                           		(0x980353e4)
#define  CBUS_CBUS_TEST_ADDR                                		(0x980353e8)
#define  CBUS_CBUS_DUMMY0_ADDR                              		(0x980353ec)
#define  CBUS_CBUS_IRQ_ADDR                                 		(0x980353f0)
#define  CBUS_OCBUS_CTRL_00_ADDR                            		(0x98035400)
#define  CBUS_OCBUS_CTRL_01_ADDR                            		(0x98035404)
#define  CBUS_OCBUS_CTRL_10_ADDR                            		(0x98035408)
#define  CBUS_OCBUS_CTRL_11_ADDR                            		(0x9803540c)
#define  CBUS_OCBUS_CTRL_12_ADDR                            		(0x98035410)
#define  CBUS_OCBUS_CTRL_13_ADDR                            		(0x98035414)
#define  CBUS_OCBUS_CTRL_14_ADDR                            		(0x98035418)
#define  CBUS_OCBUS_CTRL_15_ADDR                            		(0x9803541c)
#define  CBUS_OCBUS_CTRL_16_ADDR                            		(0x98035420)
#define  CBUS_OCBUS_CTRL_17_ADDR                            		(0x98035424)
#define  CBUS_OCBUS_CTRL_18_ADDR                            		(0x98035428)
#define  CBUS_OCBUS_CTRL_19_ADDR                            		(0x9803542c)
#define  CBUS_OCBUS_CTRL_1A_ADDR                            		(0x98035430)
#define  CBUS_OCBUS_CTRL_1B_ADDR                            		(0x98035434)
#define  CBUS_OCBUS_CTRL_1C_ADDR                            		(0x98035438)
#define  CBUS_OCBUS_CTRL_1D_ADDR                            		(0x9803543c)
#define  CBUS_OCBUS_CTRL_1E_ADDR                            		(0x98035440)
#define  CBUS_OCBUS_CTRL_1F_ADDR                            		(0x98035444)
#define  CBUS_OCBUS_CTRL_20_ADDR                            		(0x98035448)
#define  CBUS_OCBUS_CTRL_21_ADDR                            		(0x9803544c)
#define  CBUS_OCBUS_CTRL_22_ADDR                            		(0x98035450)
#define  CBUS_OCBUS_CTRL_23_ADDR                            		(0x98035454)
#define  CBUS_OCBUS_CTRL_24_ADDR                            		(0x98035458)
#define  CBUS_OCBUS_CTRL_25_ADDR                            		(0x9803545c)

#define  CBUS_MSC_REG_00_VADDR                             		(0xd8035000)
#define  CBUS_MSC_REG_01_VADDR                             		(0xd8035004)
#define  CBUS_MSC_REG_02_VADDR                             		(0xd8035008)
#define  CBUS_MSC_REG_03_VADDR                             		(0xd803500c)
#define  CBUS_MSC_REG_04_VADDR                             		(0xd8035010)
#define  CBUS_MSC_REG_05_VADDR                             		(0xd8035014)
#define  CBUS_MSC_REG_06_VADDR                             		(0xd8035018)
#define  CBUS_MSC_REG_07_VADDR                             		(0xd803501c)
#define  CBUS_MSC_REG_08_VADDR                             		(0xd8035020)
#define  CBUS_MSC_REG_09_VADDR                             		(0xd8035024)
#define  CBUS_MSC_REG_0A_VADDR                             		(0xd8035028)
#define  CBUS_MSC_REG_0B_VADDR                             		(0xd803502c)
#define  CBUS_MSC_REG_0C_VADDR                             		(0xd8035030)
#define  CBUS_MSC_REG_0D_VADDR                             		(0xd8035034)
#define  CBUS_MSC_REG_0E_VADDR                             		(0xd8035038)
#define  CBUS_MSC_REG_0F_VADDR                             		(0xd803503c)
#define  CBUS_MSC_REG_20_VADDR                             		(0xd8035080)
#define  CBUS_MSC_REG_21_VADDR                             		(0xd8035084)
#define  CBUS_MSC_REG_22_VADDR                             		(0xd8035088)
#define  CBUS_MSC_REG_23_VADDR                             		(0xd803508c)
#define  CBUS_MSC_REG_24_VADDR                             		(0xd8035090)
#define  CBUS_MSC_REG_25_VADDR                             		(0xd8035094)
#define  CBUS_MSC_REG_26_VADDR                             		(0xd8035098)
#define  CBUS_MSC_REG_27_VADDR                             		(0xd803509c)
#define  CBUS_MSC_REG_30_VADDR                             		(0xd80350c0)
#define  CBUS_MSC_REG_31_VADDR                             		(0xd80350c4)
#define  CBUS_MSC_REG_32_VADDR                             		(0xd80350c8)
#define  CBUS_MSC_REG_33_VADDR                             		(0xd80350cc)
#define  CBUS_MSC_REG_34_VADDR                             		(0xd80350d0)
#define  CBUS_MSC_REG_35_VADDR                             		(0xd80350d4)
#define  CBUS_MSC_REG_36_VADDR                             		(0xd80350d8)
#define  CBUS_MSC_REG_37_VADDR                             		(0xd80350dc)
#define  CBUS_MSC_REG_40_VADDR                             		(0xd8035100)
#define  CBUS_MSC_REG_41_VADDR                             		(0xd8035104)
#define  CBUS_MSC_REG_42_VADDR                             		(0xd8035108)
#define  CBUS_MSC_REG_43_VADDR                             		(0xd803510c)
#define  CBUS_MSC_REG_44_VADDR                             		(0xd8035110)
#define  CBUS_MSC_REG_45_VADDR                             		(0xd8035114)
#define  CBUS_MSC_REG_46_VADDR                             		(0xd8035118)
#define  CBUS_MSC_REG_47_VADDR                             		(0xd803511c)
#define  CBUS_MSC_REG_48_VADDR                             		(0xd8035120)
#define  CBUS_MSC_REG_49_VADDR                             		(0xd8035124)
#define  CBUS_MSC_REG_4A_VADDR                             		(0xd8035128)
#define  CBUS_MSC_REG_4B_VADDR                             		(0xd803512c)
#define  CBUS_MSC_REG_4C_VADDR                             		(0xd8035130)
#define  CBUS_MSC_REG_4D_VADDR                             		(0xd8035134)
#define  CBUS_MSC_REG_4E_VADDR                             		(0xd8035138)
#define  CBUS_MSC_REG_4F_VADDR                             		(0xd803513c)
#define  CBUS_MSC_REG_50_VADDR                             		(0xd8035140)
#define  CBUS_MSC_REG_51_VADDR                             		(0xd8035144)
#define  CBUS_MSC_REG_52_VADDR                             		(0xd8035148)
#define  CBUS_MSC_REG_53_VADDR                             		(0xd803514c)
#define  CBUS_MSC_REG_54_VADDR                             		(0xd8035150)
#define  CBUS_MSC_REG_55_VADDR                             		(0xd8035154)
#define  CBUS_MSC_REG_56_VADDR                             		(0xd8035158)
#define  CBUS_MSC_REG_57_VADDR                             		(0xd803515c)
#define  CBUS_MSC_REG_58_VADDR                             		(0xd8035160)
#define  CBUS_MSC_REG_59_VADDR                             		(0xd8035164)
#define  CBUS_MSC_REG_5A_VADDR                             		(0xd8035168)
#define  CBUS_MSC_REG_5B_VADDR                             		(0xd803516c)
#define  CBUS_MSC_REG_5C_VADDR                             		(0xd8035170)
#define  CBUS_MSC_REG_5D_VADDR                             		(0xd8035174)
#define  CBUS_MSC_REG_5E_VADDR                             		(0xd8035178)
#define  CBUS_MSC_REG_5F_VADDR                             		(0xd803517c)
#define  CBUS_MSC_REG_80_VADDR                             		(0xd8035180)
#define  CBUS_MSC_REG_81_VADDR                             		(0xd8035184)
#define  CBUS_MSC_REG_82_VADDR                             		(0xd8035188)
#define  CBUS_MSC_REG_83_VADDR                             		(0xd803518c)
#define  CBUS_MSC_REG_84_VADDR                             		(0xd8035190)
#define  CBUS_MSC_REG_85_VADDR                             		(0xd8035194)
#define  CBUS_MSC_REG_86_VADDR                             		(0xd8035198)
#define  CBUS_MSC_REG_87_VADDR                             		(0xd803519c)
#define  CBUS_MSC_REG_88_VADDR                             		(0xd80351a0)
#define  CBUS_MSC_REG_89_VADDR                             		(0xd80351a4)
#define  CBUS_MSC_REG_8A_VADDR                             		(0xd80351a8)
#define  CBUS_MSC_REG_8B_VADDR                             		(0xd80351ac)
#define  CBUS_MSC_REG_8C_VADDR                             		(0xd80351b0)
#define  CBUS_MSC_REG_8D_VADDR                             		(0xd80351b4)
#define  CBUS_MSC_REG_8E_VADDR                             		(0xd80351b8)
#define  CBUS_MSC_REG_8F_VADDR                             		(0xd80351bc)
#define  CBUS_MSC_REG_90_VADDR                             		(0xd80351c0)
#define  CBUS_MSC_REG_91_VADDR                             		(0xd80351c4)
#define  CBUS_MSC_REG_92_VADDR                             		(0xd80351c8)
#define  CBUS_MSC_REG_93_VADDR                             		(0xd80351cc)
#define  CBUS_MSC_REG_94_VADDR                             		(0xd80351d0)
#define  CBUS_MSC_REG_95_VADDR                             		(0xd80351d4)
#define  CBUS_MSC_REG_96_VADDR                             		(0xd80351d8)
#define  CBUS_MSC_REG_97_VADDR                             		(0xd80351dc)
#define  CBUS_MSC_REG_98_VADDR                             		(0xd80351e0)
#define  CBUS_MSC_REG_99_VADDR                             		(0xd80351e4)
#define  CBUS_MSC_REG_9A_VADDR                             		(0xd80351e8)
#define  CBUS_MSC_REG_9B_VADDR                             		(0xd80351ec)
#define  CBUS_MSC_REG_9C_VADDR                             		(0xd80351f0)
#define  CBUS_MSC_REG_9D_VADDR                             		(0xd80351f4)
#define  CBUS_MSC_REG_9E_VADDR                             		(0xd80351f8)
#define  CBUS_MSC_REG_9F_VADDR                             		(0xd80351fc)
#define  CBUS_MSC_REG_A0_VADDR                             		(0xd8035340)
#define  CBUS_MSC_REG_A1_VADDR                             		(0xd8035344)
#define  CBUS_MSC_REG_A2_VADDR                             		(0xd8035348)
#define  CBUS_MSC_REG_A3_VADDR                             		(0xd803534c)
#define  CBUS_MSC_REG_A4_VADDR                             		(0xd8035350)
#define  CBUS_MSC_REG_A5_VADDR                             		(0xd8035354)
#define  CBUS_MSC_REG_A6_VADDR                             		(0xd8035358)
#define  CBUS_MSC_REG_A7_VADDR                             		(0xd803535c)
#define  CBUS_MSC_REG_A8_VADDR                             		(0xd8035360)
#define  CBUS_MSC_REG_A9_VADDR                             		(0xd8035364)
#define  CBUS_MSC_REG_AA_VADDR                             		(0xd8035368)
#define  CBUS_MSC_REG_AB_VADDR                             		(0xd803536c)
#define  CBUS_MSC_REG_AC_VADDR                             		(0xd8035370)
#define  CBUS_MSC_REG_AD_VADDR                             		(0xd8035374)
#define  CBUS_MSC_REG_AE_VADDR                             		(0xd8035378)
#define  CBUS_MSC_REG_AF_VADDR                             		(0xd803537c)
#define  CBUS_CBUS_LINK_00_VADDR                           		(0xd8035200)
#define  CBUS_CBUS_LINK_01_VADDR                           		(0xd8035204)
#define  CBUS_CBUS_LINK_02_VADDR                           		(0xd8035208)
#define  CBUS_CBUS_LINK_03_VADDR                           		(0xd803520c)
#define  CBUS_CBUS_LINK_04_VADDR                           		(0xd8035210)
#define  CBUS_CBUS_LINK_05_VADDR                           		(0xd8035214)
#define  CBUS_CBUS_LINK_06_VADDR                           		(0xd8035218)
#define  CBUS_CBUS_LINK_07_VADDR                           		(0xd803521c)
#define  CBUS_CBUS_LINK_08_VADDR                           		(0xd8035220)
#define  CBUS_CBUS_LINK_09_VADDR                           		(0xd8035224)
#define  CBUS_CBUS_LINK_0A_VADDR                           		(0xd8035228)
#define  CBUS_CBUS_LINK_0B_VADDR                           		(0xd803522c)
#define  CBUS_CBUS_LINK_0C_VADDR                           		(0xd8035230)
#define  CBUS_CBUS_LINK_0D_VADDR                           		(0xd8035234)
#define  CBUS_CBUS_LINK_0E_VADDR                           		(0xd8035238)
#define  CBUS_CBUS_LINK_0F_VADDR                           		(0xd803523c)
#define  CBUS_CBUS_LINK_10_VADDR                           		(0xd8035240)
#define  CBUS_CBUS_LINK_11_VADDR                           		(0xd8035244)
#define  CBUS_CBUS_LINK_12_VADDR                           		(0xd8035248)
#define  CBUS_CBUS_LINK_13_VADDR                           		(0xd803524c)
#define  CBUS_CBUS_LINK_14_VADDR                           		(0xd8035250)
#define  CBUS_CBUS_MSC_00_VADDR                            		(0xd8035260)
#define  CBUS_CBUS_MSC_01_VADDR                            		(0xd8035264)
#define  CBUS_CBUS_MSC_02_VADDR                            		(0xd8035268)
#define  CBUS_CBUS_MSC_03_VADDR                            		(0xd803526c)
#define  CBUS_CBUS_MSC_04_VADDR                            		(0xd8035270)
#define  CBUS_CBUS_MSC_05_VADDR                            		(0xd8035274)
#define  CBUS_CBUS_MSC_06_VADDR                            		(0xd8035278)
#define  CBUS_CBUS_MSC_07_VADDR                            		(0xd803527c)
#define  CBUS_CBUS_MSC_08_VADDR                            		(0xd8035280)
#define  CBUS_CBUS_MSC_09_VADDR                            		(0xd8035284)
#define  CBUS_CBUS_MSC_0A_VADDR                            		(0xd8035288)
#define  CBUS_CBUS_MSC_0B_VADDR                            		(0xd803528c)
#define  CBUS_CBUS_MSC_0C_VADDR                            		(0xd8035290)
#define  CBUS_CBUS_MSC_0D_VADDR                            		(0xd8035294)
#define  CBUS_CBUS_MSC_0E_VADDR                            		(0xd8035298)
#define  CBUS_CBUS_MSC_0F_VADDR                            		(0xd803529c)
#define  CBUS_CBUS_MSC_10_VADDR                            		(0xd80352a0)
#define  CBUS_CBUS_MSC_11_VADDR                            		(0xd80352a4)
#define  CBUS_CBUS_MSC_12_VADDR                            		(0xd80352a8)
#define  CBUS_CBUS_MSC_13_VADDR                            		(0xd80352ac)
#define  CBUS_CBUS_MSC_14_VADDR                            		(0xd80352b0)
#define  CBUS_CBUS_MSC_15_VADDR                            		(0xd80352b4)
#define  CBUS_CBUS_MSC_16_VADDR                            		(0xd80352b8)
#define  CBUS_CBUS_MSC_17_VADDR                            		(0xd80352bc)
#define  CBUS_CBUS_MSC_18_VADDR                            		(0xd80352c0)
#define  CBUS_CBUS_MSC_19_VADDR                            		(0xd80352c4)
#define  CBUS_CBUS_MSC_1A_VADDR                            		(0xd80352c8)
#define  CBUS_CBUS_MSC_1B_VADDR                            		(0xd80352cc)
#define  CBUS_CBUS_MSC_1C_VADDR                            		(0xd80352d0)
#define  CBUS_CBUS_MSC_1D_VADDR                            		(0xd80352d4)
#define  CBUS_CBUS_MSC_1E_VADDR                            		(0xd80352d8)
#define  CBUS_CBUS_MSC_1F_VADDR                            		(0xd80352dc)
#define  CBUS_CBUS_MSC_20_VADDR                            		(0xd80352e0)
#define  CBUS_CBUS_MSC_21_VADDR                            		(0xd80352e4)
#define  CBUS_CBUS_MSC_22_VADDR                            		(0xd80352e8)
#define  CBUS_FW0_REQ_00_VADDR                             		(0xd8035300)
#define  CBUS_FW0_REQ_01_VADDR                             		(0xd8035304)
#define  CBUS_FW0_REQ_02_VADDR                             		(0xd8035308)
#define  CBUS_FW0_REQ_03_VADDR                             		(0xd803530c)
#define  CBUS_FW0_REQ_04_VADDR                             		(0xd8035310)
#define  CBUS_FW0_REQ_05_VADDR                             		(0xd8035314)
#define  CBUS_FW0_REQ_06_VADDR                             		(0xd8035318)
#define  CBUS_FW0_REQ_07_VADDR                             		(0xd803531c)
#define  CBUS_FW0_REQ_08_VADDR                             		(0xd8035320)
#define  CBUS_CBUS_DDC_00_VADDR                            		(0xd80353c0)
#define  CBUS_CBUS_DDC_01_VADDR                            		(0xd80353c4)
#define  CBUS_CBUS_DDC_02_VADDR                            		(0xd80353c8)
#define  CBUS_CBUS_DDC_03_VADDR                            		(0xd80353cc)
#define  CBUS_CBUS_DDC_04_VADDR                            		(0xd80353d0)
#define  CBUS_CBUS_DDC_05_VADDR                            		(0xd80353d4)
#define  CBUS_CBUS_DDC_06_VADDR                            		(0xd80353d8)
#define  CBUS_CBUS_WDOG_VADDR                              		(0xd80353e0)
#define  CBUS_CBUS_INT_INDEX_VADDR                         		(0xd80353e4)
#define  CBUS_CBUS_TEST_VADDR                              		(0xd80353e8)
#define  CBUS_CBUS_DUMMY0_VADDR                            		(0xd80353ec)
#define  CBUS_CBUS_IRQ_VADDR                               		(0xd80353f0)
#define  CBUS_OCBUS_CTRL_00_VADDR                          		(0xd8035400)
#define  CBUS_OCBUS_CTRL_01_VADDR                          		(0xd8035404)
#define  CBUS_OCBUS_CTRL_10_VADDR                          		(0xd8035408)
#define  CBUS_OCBUS_CTRL_11_VADDR                          		(0xd803540c)
#define  CBUS_OCBUS_CTRL_12_VADDR                          		(0xd8035410)
#define  CBUS_OCBUS_CTRL_13_VADDR                          		(0xd8035414)
#define  CBUS_OCBUS_CTRL_14_VADDR                          		(0xd8035418)
#define  CBUS_OCBUS_CTRL_15_VADDR                          		(0xd803541c)
#define  CBUS_OCBUS_CTRL_16_VADDR                          		(0xd8035420)
#define  CBUS_OCBUS_CTRL_17_VADDR                          		(0xd8035424)
#define  CBUS_OCBUS_CTRL_18_VADDR                          		(0xd8035428)
#define  CBUS_OCBUS_CTRL_19_VADDR                          		(0xd803542c)
#define  CBUS_OCBUS_CTRL_1A_VADDR                          		(0xd8035430)
#define  CBUS_OCBUS_CTRL_1B_VADDR                          		(0xd8035434)
#define  CBUS_OCBUS_CTRL_1C_VADDR                          		(0xd8035438)
#define  CBUS_OCBUS_CTRL_1D_VADDR                          		(0xd803543c)
#define  CBUS_OCBUS_CTRL_1E_VADDR                          		(0xd8035440)
#define  CBUS_OCBUS_CTRL_1F_VADDR                          		(0xd8035444)
#define  CBUS_OCBUS_CTRL_20_VADDR                          		(0xd8035448)
#define  CBUS_OCBUS_CTRL_21_VADDR                          		(0xd803544c)
#define  CBUS_OCBUS_CTRL_22_VADDR                          		(0xd8035450)
#define  CBUS_OCBUS_CTRL_23_VADDR                          		(0xd8035454)
#define  CBUS_OCBUS_CTRL_24_VADDR                          		(0xd8035458)
#define  CBUS_OCBUS_CTRL_25_VADDR                          		(0xd803545c)



#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======CBUS register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  dev_state:8;
    };
}msc_reg_00_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  mhl_ver:8;
    };
}msc_reg_01_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  dev_cat:1;
        RBus_UInt32  plim:2;
        RBus_UInt32  pow:1;
        RBus_UInt32  dev_type:4;
    };
}msc_reg_02_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  adop_id_h:8;
    };
}msc_reg_03_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  adop_id_l:8;
    };
}msc_reg_04_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  vid_link_md:2;
        RBus_UInt32  supp_vga:1;
        RBus_UInt32  supp_islands:1;
        RBus_UInt32  supp_ppixel:1;
        RBus_UInt32  supp_yuv422:1;
        RBus_UInt32  supp_yuv444:1;
        RBus_UInt32  supp_rgb444:1;
    };
}msc_reg_05_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  aud_link_md:5;
        RBus_UInt32  aud_hbr:1;
        RBus_UInt32  aud_8ch:1;
        RBus_UInt32  aud_2ch:1;
    };
}msc_reg_06_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  supp_vt:1;
        RBus_UInt32  video_type:3;
        RBus_UInt32  vt_game:1;
        RBus_UInt32  vt_cinema:1;
        RBus_UInt32  vt_photo:1;
        RBus_UInt32  vt_graphics:1;
    };
}msc_reg_07_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  ld_gui:1;
        RBus_UInt32  ld_speaker:1;
        RBus_UInt32  ld_record:1;
        RBus_UInt32  ld_tuner:1;
        RBus_UInt32  ld_media:1;
        RBus_UInt32  ld_audio:1;
        RBus_UInt32  ld_video:1;
        RBus_UInt32  ld_display:1;
    };
}msc_reg_08_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  bandwid:8;
    };
}msc_reg_09_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  feature_flag:1;
        RBus_UInt32  rbp_support:1;
        RBus_UInt32  xvycc_support:1;
        RBus_UInt32  ucp_recv_supp:1;
        RBus_UInt32  ucp_send_supp:1;
        RBus_UInt32  sp_supp:1;
        RBus_UInt32  rap_supp:1;
        RBus_UInt32  rcp_supp:1;
    };
}msc_reg_0a_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  device_id_h:8;
    };
}msc_reg_0b_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  device_id_l:8;
    };
}msc_reg_0c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  scr_size:8;
    };
}msc_reg_0d_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  stat_size:4;
        RBus_UInt32  int_size:4;
    };
}msc_reg_0e_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  cap_0f:8;
    };
}msc_reg_0f_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  rchg_int_7:1;
        RBus_UInt32  feat_complete:1;
        RBus_UInt32  feat_req:1;
        RBus_UInt32  cbus_3d_req:1;
        RBus_UInt32  grt_wrt:1;
        RBus_UInt32  req_wrt:1;
        RBus_UInt32  dscr_chg:1;
        RBus_UInt32  dcap_chg:1;
    };
}msc_reg_20_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  dchg_int_7:1;
        RBus_UInt32  dchg_int_6:1;
        RBus_UInt32  dchg_int_5:1;
        RBus_UInt32  dchg_int_4:1;
        RBus_UInt32  dchg_int_3:1;
        RBus_UInt32  dchg_int_2:1;
        RBus_UInt32  edid_chg:1;
        RBus_UInt32  dchg_int_0:1;
    };
}msc_reg_21_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  chg22_7:1;
        RBus_UInt32  chg22_6:1;
        RBus_UInt32  chg22_5:1;
        RBus_UInt32  chg22_4:1;
        RBus_UInt32  chg22_3:1;
        RBus_UInt32  chg22_2:1;
        RBus_UInt32  chg22_1:1;
        RBus_UInt32  chg22_0:1;
    };
}msc_reg_22_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  chg23_7:1;
        RBus_UInt32  chg23_6:1;
        RBus_UInt32  chg23_5:1;
        RBus_UInt32  chg23_4:1;
        RBus_UInt32  chg23_3:1;
        RBus_UInt32  chg23_2:1;
        RBus_UInt32  chg23_1:1;
        RBus_UInt32  chg23_0:1;
    };
}msc_reg_23_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  chg24_7:1;
        RBus_UInt32  chg24_6:1;
        RBus_UInt32  chg24_5:1;
        RBus_UInt32  chg24_4:1;
        RBus_UInt32  chg24_3:1;
        RBus_UInt32  chg24_2:1;
        RBus_UInt32  chg24_1:1;
        RBus_UInt32  chg24_0:1;
    };
}msc_reg_24_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  chg25_7:1;
        RBus_UInt32  chg25_6:1;
        RBus_UInt32  chg25_5:1;
        RBus_UInt32  chg25_4:1;
        RBus_UInt32  chg25_3:1;
        RBus_UInt32  chg25_2:1;
        RBus_UInt32  chg25_1:1;
        RBus_UInt32  chg25_0:1;
    };
}msc_reg_25_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  chg26_7:1;
        RBus_UInt32  chg26_6:1;
        RBus_UInt32  chg26_5:1;
        RBus_UInt32  chg26_4:1;
        RBus_UInt32  chg26_3:1;
        RBus_UInt32  chg26_2:1;
        RBus_UInt32  chg26_1:1;
        RBus_UInt32  chg26_0:1;
    };
}msc_reg_26_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  chg27_7:1;
        RBus_UInt32  chg27_6:1;
        RBus_UInt32  chg27_5:1;
        RBus_UInt32  chg27_4:1;
        RBus_UInt32  chg27_3:1;
        RBus_UInt32  chg27_2:1;
        RBus_UInt32  chg27_1:1;
        RBus_UInt32  chg27_0:1;
    };
}msc_reg_27_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  conn_rdy:2;
        RBus_UInt32  plim_stat:3;
        RBus_UInt32  pow_stat:1;
        RBus_UInt32  xdevcap_supp:1;
        RBus_UInt32  dcap_rdy:1;
    };
}msc_reg_30_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  link_mode:3;
        RBus_UInt32  muted:1;
        RBus_UInt32  path_en:1;
        RBus_UInt32  clk_mode:3;
    };
}msc_reg_31_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  mhl_version_stat:8;
    };
}msc_reg_32_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  stat_33:8;
    };
}msc_reg_33_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  stat_34:8;
    };
}msc_reg_34_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  stat_35:8;
    };
}msc_reg_35_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  stat_36:8;
    };
}msc_reg_36_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  stat_37:8;
    };
}msc_reg_37_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  scratch_40:8;
    };
}msc_reg_40_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  scratch_41:8;
    };
}msc_reg_41_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  scratch_42:8;
    };
}msc_reg_42_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  scratch_43:8;
    };
}msc_reg_43_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  scratch_44:8;
    };
}msc_reg_44_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  scratch_45:8;
    };
}msc_reg_45_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  scratch_46:8;
    };
}msc_reg_46_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  scratch_47:8;
    };
}msc_reg_47_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  scratch_48:8;
    };
}msc_reg_48_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  scratch_49:8;
    };
}msc_reg_49_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  scratch_4a:8;
    };
}msc_reg_4a_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  scratch_4b:8;
    };
}msc_reg_4b_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  scratch_4c:8;
    };
}msc_reg_4c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  scratch_4d:8;
    };
}msc_reg_4d_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  scratch_4e:8;
    };
}msc_reg_4e_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  scratch_4f:8;
    };
}msc_reg_4f_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  scratch_50:8;
    };
}msc_reg_50_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  scratch_51:8;
    };
}msc_reg_51_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  scratch_52:8;
    };
}msc_reg_52_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  scratch_53:8;
    };
}msc_reg_53_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  scratch_54:8;
    };
}msc_reg_54_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  scratch_55:8;
    };
}msc_reg_55_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  scratch_56:8;
    };
}msc_reg_56_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  scratch_57:8;
    };
}msc_reg_57_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  scratch_58:8;
    };
}msc_reg_58_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  scratch_59:8;
    };
}msc_reg_59_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  scratch_5a:8;
    };
}msc_reg_5a_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  scratch_5b:8;
    };
}msc_reg_5b_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  scratch_5c:8;
    };
}msc_reg_5c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  scratch_5d:8;
    };
}msc_reg_5d_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  scratch_5e:8;
    };
}msc_reg_5e_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  scratch_5f:8;
    };
}msc_reg_5f_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  ecbus_spd_76:2;
        RBus_UInt32  ecbus_d_8b:1;
        RBus_UInt32  ecbus_d_150:1;
        RBus_UInt32  ecbus_spd_3:1;
        RBus_UInt32  ecbus_s_12b:1;
        RBus_UInt32  ecbus_s_8b:1;
        RBus_UInt32  ecbus_s_075:1;
    };
}msc_reg_80_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  tmds_spd:5;
        RBus_UInt32  tmds_600:1;
        RBus_UInt32  tmds_300:1;
        RBus_UInt32  tmds_150:1;
    };
}msc_reg_81_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  ecbus_dev_roles:3;
        RBus_UInt32  hid_dev:1;
        RBus_UInt32  hid_host:1;
        RBus_UInt32  dev_charger:1;
        RBus_UInt32  dev_device:1;
        RBus_UInt32  dev_host:1;
    };
}msc_reg_82_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  log_dev_mapx:7;
        RBus_UInt32  ld_phone:1;
    };
}msc_reg_83_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  xcap_84:8;
    };
}msc_reg_84_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  xcap_85:8;
    };
}msc_reg_85_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  xcap_86:8;
    };
}msc_reg_86_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  xcap_87:8;
    };
}msc_reg_87_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  xcap_88:8;
    };
}msc_reg_88_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  xcap_89:8;
    };
}msc_reg_89_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  xcap_8a:8;
    };
}msc_reg_8a_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  xcap_8b:8;
    };
}msc_reg_8b_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  xcap_8c:8;
    };
}msc_reg_8c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  xcap_8d:8;
    };
}msc_reg_8d_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  xcap_8e:8;
    };
}msc_reg_8e_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  xcap_8f:8;
    };
}msc_reg_8f_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  cur_ecbus_md:4;
        RBus_UInt32  ecbus_md:2;
        RBus_UInt32  slot_md:2;
    };
}msc_reg_90_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  av_link_md:6;
        RBus_UInt32  link_st:2;
    };
}msc_reg_91_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  av_link_ctrl:5;
        RBus_UInt32  link_rate:3;
    };
}msc_reg_92_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  sink_st_3:2;
        RBus_UInt32  sink_st_2:2;
        RBus_UInt32  sink_st_1:2;
        RBus_UInt32  sink_st_0:2;
    };
}msc_reg_93_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  xstat_94:8;
    };
}msc_reg_94_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  xstat_95:8;
    };
}msc_reg_95_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  xstat_96:8;
    };
}msc_reg_96_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  xstat_97:8;
    };
}msc_reg_97_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  xstat_98:8;
    };
}msc_reg_98_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  xstat_99:8;
    };
}msc_reg_99_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  xstat_9a:8;
    };
}msc_reg_9a_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  xstat_9b:8;
    };
}msc_reg_9b_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  xstat_9c:8;
    };
}msc_reg_9c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  xstat_9d:8;
    };
}msc_reg_9d_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  xstat_9e:8;
    };
}msc_reg_9e_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  xstat_9f:8;
    };
}msc_reg_9f_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  xstat_a0:8;
    };
}msc_reg_a0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  xstat_a1:8;
    };
}msc_reg_a1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  xstat_a2:8;
    };
}msc_reg_a2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  xstat_a3:8;
    };
}msc_reg_a3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  xstat_a4:8;
    };
}msc_reg_a4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  xstat_a5:8;
    };
}msc_reg_a5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  xstat_a6:8;
    };
}msc_reg_a6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  xstat_a7:8;
    };
}msc_reg_a7_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  xstat_a8:8;
    };
}msc_reg_a8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  xstat_a9:8;
    };
}msc_reg_a9_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  xstat_aa:8;
    };
}msc_reg_aa_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  xstat_ab:8;
    };
}msc_reg_ab_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  xstat_ac:8;
    };
}msc_reg_ac_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  xstat_ad:8;
    };
}msc_reg_ad_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  xstat_ae:8;
    };
}msc_reg_ae_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  xstat_af:8;
    };
}msc_reg_af_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:14;
        RBus_UInt32  sync0_hb_8_0:9;
        RBus_UInt32  sync0_lb_8_0:9;
    };
}cbus_link_00_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  sync1_hb_7_0:8;
        RBus_UInt32  sync1_lb_7_0:8;
    };
}cbus_link_01_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  sync_bit_time:8;
    };
}cbus_link_02_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:23;
        RBus_UInt32  abs_thres_en:1;
        RBus_UInt32  abs_threshold:8;
    };
}cbus_link_03_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  parity_time:8;
    };
}cbus_link_04_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  parity_fail:1;
        RBus_UInt32  parity_irq_en:1;
        RBus_UInt32  ctrl_16_resv:1;
        RBus_UInt32  parity_limit:5;
    };
}cbus_link_05_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:25;
        RBus_UInt32  ack_fall:7;
    };
}cbus_link_06_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:25;
        RBus_UInt32  ack_0:7;
    };
}cbus_link_07_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  tx_bit_time:8;
    };
}cbus_link_08_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:23;
        RBus_UInt32  tx_ack_div2:1;
        RBus_UInt32  chk_win_up:3;
        RBus_UInt32  chk_win_lo:2;
        RBus_UInt32  fast_reply_en:1;
        RBus_UInt32  ctrl_1b_resv:2;
    };
}cbus_link_09_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  res2:1;
        RBus_UInt32  tx_ack_fal:7;
    };
}cbus_link_0a_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:25;
        RBus_UInt32  tx_ack_low_hb:7;
    };
}cbus_link_0b_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:25;
        RBus_UInt32  tx_ack_low_lb:7;
    };
}cbus_link_0c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  retry_lv:3;
        RBus_UInt32  retry_flag:1;
        RBus_UInt32  ctrl_1f_resv:4;
    };
}cbus_link_0d_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  drv_str:2;
        RBus_UInt32  drv_hi_cbus:6;
    };
}cbus_link_0e_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:26;
        RBus_UInt32  wait:4;
        RBus_UInt32  req_opp_int:2;
    };
}cbus_link_0f_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  req_opp_flt:8;
    };
}cbus_link_10_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  req_cont:8;
    };
}cbus_link_11_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  req_hold:4;
        RBus_UInt32  resp_hold:4;
    };
}cbus_link_12_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  glob_time:2;
        RBus_UInt32  link_time:5;
        RBus_UInt32  link_err:1;
    };
}cbus_link_13_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  chk_point:6;
        RBus_UInt32  chk_err:1;
        RBus_UInt32  avoid_conf:1;
    };
}cbus_link_14_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:26;
        RBus_UInt32  mcumsc_en:1;
        RBus_UInt32  msc_wait_arb:1;
        RBus_UInt32  ctrl_28_resv:4;
    };
}cbus_msc_00_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  na_msc_cmd:8;
    };
}cbus_msc_01_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  na_msc_offset:8;
    };
}cbus_msc_02_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  rx_fifo_full:1;
        RBus_UInt32  rx_fifo_empty:1;
        RBus_UInt32  rx_fifo_clr:1;
        RBus_UInt32  na_rx_len:5;
    };
}cbus_msc_03_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  rx_fifo_data:8;
    };
}cbus_msc_04_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  fwdef_cmd_rev:8;
    };
}cbus_msc_05_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  ucp_irq:1;
        RBus_UInt32  ucpk_irq:1;
        RBus_UInt32  ucpe_irq:1;
        RBus_UInt32  dcap_rdy_chg:1;
        RBus_UInt32  muted_chg:1;
        RBus_UInt32  path_en_chg:1;
        RBus_UInt32  clk_mode_chg:1;
        RBus_UInt32  msge_irq:1;
        RBus_UInt32  rcp_irq:1;
        RBus_UInt32  rcpk_irq:1;
        RBus_UInt32  rcpe_irq:1;
        RBus_UInt32  rap_irq:1;
        RBus_UInt32  rapk_irq:1;
        RBus_UInt32  msg_sub_irq:1;
        RBus_UInt32  wr_stat_irq:1;
        RBus_UInt32  rd_devcap_irq:1;
        RBus_UInt32  get_stat_irq:1;
        RBus_UInt32  get_id_irq:1;
        RBus_UInt32  get_msg_irq:1;
        RBus_UInt32  sc1_err_irq:1;
        RBus_UInt32  ddc_err_irq:1;
        RBus_UInt32  msc_err_irq:1;
        RBus_UInt32  wr_burst_irq:1;
        RBus_UInt32  sc3_err_irq:1;
        RBus_UInt32  fwdef_cmd_irq:1;
        RBus_UInt32  allmsc_cmd_irq:1;
        RBus_UInt32  abort_res_irq:1;
        RBus_UInt32  abort_req_irq:1;
        RBus_UInt32  ddc_abort_irq:1;
    };
}cbus_msc_06_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  ucp_irq_en:1;
        RBus_UInt32  ucpk_irq_en:1;
        RBus_UInt32  ucpe_irq_en:1;
        RBus_UInt32  dcap_rdy_irq_en:1;
        RBus_UInt32  muted_chg_irq_en:1;
        RBus_UInt32  path_en_irq_en:1;
        RBus_UInt32  clk_mode_irq_en:1;
        RBus_UInt32  msge_irq_en:1;
        RBus_UInt32  rcp_irq_en:1;
        RBus_UInt32  rcpk_irq_en:1;
        RBus_UInt32  rcpe_irq_en:1;
        RBus_UInt32  rap_irq_en:1;
        RBus_UInt32  rapk_irq_en:1;
        RBus_UInt32  msg_sub_irq_en:1;
        RBus_UInt32  wr_stat_irq_en:1;
        RBus_UInt32  rd_devcap_irq_en:1;
        RBus_UInt32  get_stat_irq_en:1;
        RBus_UInt32  get_id_irq_en:1;
        RBus_UInt32  get_msg_irq_en:1;
        RBus_UInt32  sc1_err_irq_en:1;
        RBus_UInt32  ddc_err_irq_en:1;
        RBus_UInt32  msc_err_irq_en:1;
        RBus_UInt32  wr_burst_irq_en:1;
        RBus_UInt32  sc3_err_irq_en:1;
        RBus_UInt32  fwdef_cmd_irq_en:1;
        RBus_UInt32  allmsc_cmd_irq_en:1;
        RBus_UInt32  abort_res_irq_en:1;
        RBus_UInt32  abort_req_irq_en:1;
        RBus_UInt32  ddc_abort_irq_en:1;
    };
}cbus_msc_07_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rchg_irq_en:3;
        RBus_UInt32  cbus_3d_req_irq_en:1;
        RBus_UInt32  grt_irq_en:1;
        RBus_UInt32  req_irq_en:1;
        RBus_UInt32  dscr_irq_en:1;
        RBus_UInt32  dcap_irq_en:1;
        RBus_UInt32  dchg_bit7_irq_en:1;
        RBus_UInt32  dchg_bit6_irq_en:1;
        RBus_UInt32  dchg_bit5_irq_en:1;
        RBus_UInt32  dchg_bit4_irq_en:1;
        RBus_UInt32  dchg_bit3_irq_en:1;
        RBus_UInt32  dchg_bit2_irq_en:1;
        RBus_UInt32  edid_irq_en:1;
        RBus_UInt32  dchg_bit0_irq_en:1;
        RBus_UInt32  chg22_irq_en:8;
        RBus_UInt32  chg23_irq_en:8;
    };
}cbus_msc_08_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  chg24_irq_en:8;
        RBus_UInt32  chg25_irq_en:8;
        RBus_UInt32  chg26_irq_en:8;
        RBus_UInt32  chg27_irq_en:8;
    };
}cbus_msc_09_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  msc_err_code:8;
    };
}cbus_msc_0a_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:22;
        RBus_UInt32  rcp_reply_abort:1;
        RBus_UInt32  rcp_reply_nack:1;
        RBus_UInt32  vendor_id:8;
    };
}cbus_msc_0b_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  msg_cmd:8;
    };
}cbus_msc_0c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  msg_dat:8;
    };
}cbus_msc_0d_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  msge_rcv:8;
    };
}cbus_msc_0e_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  rcp_rcv:8;
    };
}cbus_msc_0f_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  rcpk_rcv:8;
    };
}cbus_msc_10_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  rcpe_rcv:8;
    };
}cbus_msc_11_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  rap_rcv:8;
    };
}cbus_msc_12_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  rapk_rcv:8;
    };
}cbus_msc_13_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:26;
        RBus_UInt32  burst_timeout:1;
        RBus_UInt32  wb_id_chk:1;
        RBus_UInt32  burst_wait:4;
    };
}cbus_msc_14_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  adop_idh_rcv:8;
        RBus_UInt32  adop_idl_rcv:8;
    };
}cbus_msc_15_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  auto_handshake:1;
        RBus_UInt32  insert_id:1;
        RBus_UInt32  wb_byte_num0:6;
        RBus_UInt32  wb_byte_num1:6;
        RBus_UInt32  adop_txid_h:8;
        RBus_UInt32  adop_txid_l:8;
    };
}cbus_msc_16_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:29;
        RBus_UInt32  que_fsm_clr:1;
        RBus_UInt32  sch_fsm_clr:1;
        RBus_UInt32  spi_fsm_clr:1;
    };
}cbus_msc_17_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:20;
        RBus_UInt32  que_fsm:4;
        RBus_UInt32  sch_fsm:4;
        RBus_UInt32  spi_fsm:4;
    };
}cbus_msc_18_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  cap_offset:8;
    };
}cbus_msc_19_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  int_offset:8;
    };
}cbus_msc_1a_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  sta_offset:8;
    };
}cbus_msc_1b_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  scr_offset:8;
    };
}cbus_msc_1c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:30;
        RBus_UInt32  ddc_err_force:1;
        RBus_UInt32  msc_err_force:1;
    };
}cbus_msc_1d_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  ddc_err_fw:8;
    };
}cbus_msc_1e_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  msc_err_fw:8;
    };
}cbus_msc_1f_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  ucp_rcv:8;
    };
}cbus_msc_20_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  ucpk_rcv:8;
    };
}cbus_msc_21_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  ucpe_rcv:8;
    };
}cbus_msc_22_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:23;
        RBus_UInt32  fw0_req:1;
        RBus_UInt32  fw0_fifo_clr:1;
        RBus_UInt32  fw0_fifo_full:1;
        RBus_UInt32  fw0_fifo_empty:1;
        RBus_UInt32  fw0_tx_case:3;
        RBus_UInt32  fw0_head:2;
    };
}fw0_req_00_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  fw0_cmd1:8;
    };
}fw0_req_01_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  fw0_cmd2:8;
    };
}fw0_req_02_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  fw0_offset:8;
    };
}fw0_req_03_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  fw0_data:8;
    };
}fw0_req_04_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:22;
        RBus_UInt32  fw0_rty_ovr:1;
        RBus_UInt32  fw0_fin:1;
        RBus_UInt32  fw0_cmd_event:1;
        RBus_UInt32  fw0_data_event:1;
        RBus_UInt32  fw0_rcv_err:1;
        RBus_UInt32  fw0_fin_irq_en:1;
        RBus_UInt32  fw0_cmd_irq_en:1;
        RBus_UInt32  fw0_data_irq_en:1;
        RBus_UInt32  fw0_wait_case:2;
    };
}fw0_req_05_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  fw0_cmd_rcv:8;
    };
}fw0_req_06_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  fw0_data_rcv:8;
    };
}fw0_req_07_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:18;
        RBus_UInt32  fw0_rd_en:1;
        RBus_UInt32  fw0_fifo_len:5;
        RBus_UInt32  fw0_rdata:8;
    };
}fw0_req_08_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  ddc_err_code:8;
    };
}cbus_ddc_00_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  iic_ck_tgt:8;
    };
}cbus_ddc_01_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  mcuddc_en:1;
        RBus_UInt32  ddc_prior_dis:1;
        RBus_UInt32  ddc_cmd_event:1;
        RBus_UInt32  ddc_data_event:1;
        RBus_UInt32  ddc_cmd_irq_en:1;
        RBus_UInt32  ddc_data_irq_en:1;
        RBus_UInt32  ddc_req_ctrl:1;
        RBus_UInt32  ddc_req:1;
    };
}cbus_ddc_02_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  ddc_rcv_cmd:8;
    };
}cbus_ddc_03_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  ddc_rcv_data:8;
    };
}cbus_ddc_04_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  ddc_data_fw:8;
    };
}cbus_ddc_05_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:28;
        RBus_UInt32  ddc_eof_irq:1;
        RBus_UInt32  ddc_eof_irq_en:1;
        RBus_UInt32  ddcrd_rst_en:1;
        RBus_UInt32  ddcrd_new_md:1;
    };
}cbus_ddc_06_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:26;
        RBus_UInt32  clk_mod_vwd:1;
        RBus_UInt32  clk_mod_awd:1;
        RBus_UInt32  mute_en_vwd:1;
        RBus_UInt32  mute_en_awd:1;
        RBus_UInt32  path_en_off_vwd:1;
        RBus_UInt32  path_en_off_awd:1;
    };
}cbus_wdog_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:26;
        RBus_UInt32  arbiter_irq:1;
        RBus_UInt32  ddc_irq:1;
        RBus_UInt32  msc_ch_irq:1;
        RBus_UInt32  msc_int_irq:1;
        RBus_UInt32  msc_stat_irq:1;
        RBus_UInt32  ctrl_01_resv:1;
    };
}cbus_int_index_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  cbus_test_md:2;
        RBus_UInt32  fw_out:1;
        RBus_UInt32  dbg_sel:3;
        RBus_UInt32  res2:2;
    };
}cbus_test_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cbus_dummy0_29_16:14;
        RBus_UInt32  ddc_idle_no_tx_abort_gated:1;
        RBus_UInt32  msc_clientt0_que_gated:1;
        RBus_UInt32  cbus_dummy0_15_0:16;
    };
}cbus_dummy0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:11;
        RBus_UInt32  cbus_core_irq_en:1;
        RBus_UInt32  cbus1_irq_en:1;
        RBus_UInt32  ecbus_dmac_irq_en:1;
        RBus_UInt32  dummy980353f0_17_16:2;
        RBus_UInt32  res2:11;
        RBus_UInt32  cbus_core_irq:1;
        RBus_UInt32  cbus1_irq:1;
        RBus_UInt32  ecbus_dmac_irq:1;
        RBus_UInt32  res3:2;
    };
}cbus_irq_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  cbus3_en:1;
        RBus_UInt32  cbus1_en:1;
        RBus_UInt32  dummy98035400_5_0:6;
    };
}ocbus_ctrl_00_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  cbus1_retry_num:4;
        RBus_UInt32  invalid_chk:1;
        RBus_UInt32  cbus1_retry_irq_en:1;
        RBus_UInt32  cbus1_retry_limit:1;
        RBus_UInt32  cbus1_coll:1;
    };
}ocbus_ctrl_01_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  res2:6;
        RBus_UInt32  wr_xstat_irq:1;
        RBus_UInt32  rd_xdevcap_irq:1;
    };
}ocbus_ctrl_10_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  res2:6;
        RBus_UInt32  wr_xstat_irq_en:1;
        RBus_UInt32  rd_xdevcap_irq_en:1;
    };
}ocbus_ctrl_11_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  rbp_irq:1;
        RBus_UInt32  rbpk_irq:1;
        RBus_UInt32  rbpe_irq:1;
        RBus_UInt32  ucp_irq:1;
        RBus_UInt32  ucpk_irq:1;
        RBus_UInt32  ucpe_irq:1;
        RBus_UInt32  rusb_irq:1;
        RBus_UInt32  rusbk_irq:1;
    };
}ocbus_ctrl_12_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  rhid_irq:1;
        RBus_UInt32  rhidk_irq:1;
        RBus_UInt32  att_irq:1;
        RBus_UInt32  attk_irq:1;
        RBus_UInt32  btrig_irq:1;
        RBus_UInt32  breq_irq:1;
        RBus_UInt32  brdy_irq:1;
        RBus_UInt32  bstop_irq:1;
    };
}ocbus_ctrl_13_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  rbp_irq_en:1;
        RBus_UInt32  rbpk_irq_en:1;
        RBus_UInt32  rbpe_irq_en:1;
        RBus_UInt32  ucp_irq_en:1;
        RBus_UInt32  ucpk_irq_en:1;
        RBus_UInt32  ucpe_irq_en:1;
        RBus_UInt32  rusb_irq_en:1;
        RBus_UInt32  rusbk_irq_en:1;
    };
}ocbus_ctrl_14_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  rhid_irq_en:1;
        RBus_UInt32  rhidk_irq_en:1;
        RBus_UInt32  att_irq_en:1;
        RBus_UInt32  attk_irq_en:1;
        RBus_UInt32  btrig_irq_en:1;
        RBus_UInt32  breq_irq_en:1;
        RBus_UInt32  brdy_irq_en:1;
        RBus_UInt32  bstop_irq_en:1;
    };
}ocbus_ctrl_15_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  rbp_rcv:8;
    };
}ocbus_ctrl_16_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  rbpk_rcv:8;
    };
}ocbus_ctrl_17_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  rbpe_rcv:8;
    };
}ocbus_ctrl_18_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  ucp_rcv:8;
    };
}ocbus_ctrl_19_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  ucpk_rcv:8;
    };
}ocbus_ctrl_1a_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  ucpe_rcv:8;
    };
}ocbus_ctrl_1b_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  rusb_rcv:8;
    };
}ocbus_ctrl_1c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  rusbk_rcv:8;
    };
}ocbus_ctrl_1d_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  rhid_rcv:8;
    };
}ocbus_ctrl_1e_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  rhidk_rcv:8;
    };
}ocbus_ctrl_1f_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  att_rcv:8;
    };
}ocbus_ctrl_20_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  attk_rcv:8;
    };
}ocbus_ctrl_21_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  btrig_rcv:8;
    };
}ocbus_ctrl_22_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  breq_rcv:8;
    };
}ocbus_ctrl_23_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  brdy_rcv:8;
    };
}ocbus_ctrl_24_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  bstop_rcv:8;
    };
}ocbus_ctrl_25_RBUS;

#else //apply LITTLE_ENDIAN

//======CBUS register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dev_state:8;
        RBus_UInt32  res1:24;
    };
}msc_reg_00_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mhl_ver:8;
        RBus_UInt32  res1:24;
    };
}msc_reg_01_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dev_type:4;
        RBus_UInt32  pow:1;
        RBus_UInt32  plim:2;
        RBus_UInt32  dev_cat:1;
        RBus_UInt32  res1:24;
    };
}msc_reg_02_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  adop_id_h:8;
        RBus_UInt32  res1:24;
    };
}msc_reg_03_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  adop_id_l:8;
        RBus_UInt32  res1:24;
    };
}msc_reg_04_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  supp_rgb444:1;
        RBus_UInt32  supp_yuv444:1;
        RBus_UInt32  supp_yuv422:1;
        RBus_UInt32  supp_ppixel:1;
        RBus_UInt32  supp_islands:1;
        RBus_UInt32  supp_vga:1;
        RBus_UInt32  vid_link_md:2;
        RBus_UInt32  res1:24;
    };
}msc_reg_05_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  aud_2ch:1;
        RBus_UInt32  aud_8ch:1;
        RBus_UInt32  aud_hbr:1;
        RBus_UInt32  aud_link_md:5;
        RBus_UInt32  res1:24;
    };
}msc_reg_06_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vt_graphics:1;
        RBus_UInt32  vt_photo:1;
        RBus_UInt32  vt_cinema:1;
        RBus_UInt32  vt_game:1;
        RBus_UInt32  video_type:3;
        RBus_UInt32  supp_vt:1;
        RBus_UInt32  res1:24;
    };
}msc_reg_07_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ld_display:1;
        RBus_UInt32  ld_video:1;
        RBus_UInt32  ld_audio:1;
        RBus_UInt32  ld_media:1;
        RBus_UInt32  ld_tuner:1;
        RBus_UInt32  ld_record:1;
        RBus_UInt32  ld_speaker:1;
        RBus_UInt32  ld_gui:1;
        RBus_UInt32  res1:24;
    };
}msc_reg_08_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bandwid:8;
        RBus_UInt32  res1:24;
    };
}msc_reg_09_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rcp_supp:1;
        RBus_UInt32  rap_supp:1;
        RBus_UInt32  sp_supp:1;
        RBus_UInt32  ucp_send_supp:1;
        RBus_UInt32  ucp_recv_supp:1;
        RBus_UInt32  xvycc_support:1;
        RBus_UInt32  rbp_support:1;
        RBus_UInt32  feature_flag:1;
        RBus_UInt32  res1:24;
    };
}msc_reg_0a_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  device_id_h:8;
        RBus_UInt32  res1:24;
    };
}msc_reg_0b_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  device_id_l:8;
        RBus_UInt32  res1:24;
    };
}msc_reg_0c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  scr_size:8;
        RBus_UInt32  res1:24;
    };
}msc_reg_0d_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  int_size:4;
        RBus_UInt32  stat_size:4;
        RBus_UInt32  res1:24;
    };
}msc_reg_0e_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cap_0f:8;
        RBus_UInt32  res1:24;
    };
}msc_reg_0f_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dcap_chg:1;
        RBus_UInt32  dscr_chg:1;
        RBus_UInt32  req_wrt:1;
        RBus_UInt32  grt_wrt:1;
        RBus_UInt32  cbus_3d_req:1;
        RBus_UInt32  feat_req:1;
        RBus_UInt32  feat_complete:1;
        RBus_UInt32  rchg_int_7:1;
        RBus_UInt32  res1:24;
    };
}msc_reg_20_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dchg_int_0:1;
        RBus_UInt32  edid_chg:1;
        RBus_UInt32  dchg_int_2:1;
        RBus_UInt32  dchg_int_3:1;
        RBus_UInt32  dchg_int_4:1;
        RBus_UInt32  dchg_int_5:1;
        RBus_UInt32  dchg_int_6:1;
        RBus_UInt32  dchg_int_7:1;
        RBus_UInt32  res1:24;
    };
}msc_reg_21_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  chg22_0:1;
        RBus_UInt32  chg22_1:1;
        RBus_UInt32  chg22_2:1;
        RBus_UInt32  chg22_3:1;
        RBus_UInt32  chg22_4:1;
        RBus_UInt32  chg22_5:1;
        RBus_UInt32  chg22_6:1;
        RBus_UInt32  chg22_7:1;
        RBus_UInt32  res1:24;
    };
}msc_reg_22_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  chg23_0:1;
        RBus_UInt32  chg23_1:1;
        RBus_UInt32  chg23_2:1;
        RBus_UInt32  chg23_3:1;
        RBus_UInt32  chg23_4:1;
        RBus_UInt32  chg23_5:1;
        RBus_UInt32  chg23_6:1;
        RBus_UInt32  chg23_7:1;
        RBus_UInt32  res1:24;
    };
}msc_reg_23_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  chg24_0:1;
        RBus_UInt32  chg24_1:1;
        RBus_UInt32  chg24_2:1;
        RBus_UInt32  chg24_3:1;
        RBus_UInt32  chg24_4:1;
        RBus_UInt32  chg24_5:1;
        RBus_UInt32  chg24_6:1;
        RBus_UInt32  chg24_7:1;
        RBus_UInt32  res1:24;
    };
}msc_reg_24_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  chg25_0:1;
        RBus_UInt32  chg25_1:1;
        RBus_UInt32  chg25_2:1;
        RBus_UInt32  chg25_3:1;
        RBus_UInt32  chg25_4:1;
        RBus_UInt32  chg25_5:1;
        RBus_UInt32  chg25_6:1;
        RBus_UInt32  chg25_7:1;
        RBus_UInt32  res1:24;
    };
}msc_reg_25_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  chg26_0:1;
        RBus_UInt32  chg26_1:1;
        RBus_UInt32  chg26_2:1;
        RBus_UInt32  chg26_3:1;
        RBus_UInt32  chg26_4:1;
        RBus_UInt32  chg26_5:1;
        RBus_UInt32  chg26_6:1;
        RBus_UInt32  chg26_7:1;
        RBus_UInt32  res1:24;
    };
}msc_reg_26_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  chg27_0:1;
        RBus_UInt32  chg27_1:1;
        RBus_UInt32  chg27_2:1;
        RBus_UInt32  chg27_3:1;
        RBus_UInt32  chg27_4:1;
        RBus_UInt32  chg27_5:1;
        RBus_UInt32  chg27_6:1;
        RBus_UInt32  chg27_7:1;
        RBus_UInt32  res1:24;
    };
}msc_reg_27_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dcap_rdy:1;
        RBus_UInt32  xdevcap_supp:1;
        RBus_UInt32  pow_stat:1;
        RBus_UInt32  plim_stat:3;
        RBus_UInt32  conn_rdy:2;
        RBus_UInt32  res1:24;
    };
}msc_reg_30_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  clk_mode:3;
        RBus_UInt32  path_en:1;
        RBus_UInt32  muted:1;
        RBus_UInt32  link_mode:3;
        RBus_UInt32  res1:24;
    };
}msc_reg_31_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mhl_version_stat:8;
        RBus_UInt32  res1:24;
    };
}msc_reg_32_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  stat_33:8;
        RBus_UInt32  res1:24;
    };
}msc_reg_33_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  stat_34:8;
        RBus_UInt32  res1:24;
    };
}msc_reg_34_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  stat_35:8;
        RBus_UInt32  res1:24;
    };
}msc_reg_35_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  stat_36:8;
        RBus_UInt32  res1:24;
    };
}msc_reg_36_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  stat_37:8;
        RBus_UInt32  res1:24;
    };
}msc_reg_37_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  scratch_40:8;
        RBus_UInt32  res1:24;
    };
}msc_reg_40_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  scratch_41:8;
        RBus_UInt32  res1:24;
    };
}msc_reg_41_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  scratch_42:8;
        RBus_UInt32  res1:24;
    };
}msc_reg_42_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  scratch_43:8;
        RBus_UInt32  res1:24;
    };
}msc_reg_43_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  scratch_44:8;
        RBus_UInt32  res1:24;
    };
}msc_reg_44_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  scratch_45:8;
        RBus_UInt32  res1:24;
    };
}msc_reg_45_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  scratch_46:8;
        RBus_UInt32  res1:24;
    };
}msc_reg_46_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  scratch_47:8;
        RBus_UInt32  res1:24;
    };
}msc_reg_47_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  scratch_48:8;
        RBus_UInt32  res1:24;
    };
}msc_reg_48_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  scratch_49:8;
        RBus_UInt32  res1:24;
    };
}msc_reg_49_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  scratch_4a:8;
        RBus_UInt32  res1:24;
    };
}msc_reg_4a_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  scratch_4b:8;
        RBus_UInt32  res1:24;
    };
}msc_reg_4b_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  scratch_4c:8;
        RBus_UInt32  res1:24;
    };
}msc_reg_4c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  scratch_4d:8;
        RBus_UInt32  res1:24;
    };
}msc_reg_4d_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  scratch_4e:8;
        RBus_UInt32  res1:24;
    };
}msc_reg_4e_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  scratch_4f:8;
        RBus_UInt32  res1:24;
    };
}msc_reg_4f_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  scratch_50:8;
        RBus_UInt32  res1:24;
    };
}msc_reg_50_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  scratch_51:8;
        RBus_UInt32  res1:24;
    };
}msc_reg_51_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  scratch_52:8;
        RBus_UInt32  res1:24;
    };
}msc_reg_52_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  scratch_53:8;
        RBus_UInt32  res1:24;
    };
}msc_reg_53_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  scratch_54:8;
        RBus_UInt32  res1:24;
    };
}msc_reg_54_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  scratch_55:8;
        RBus_UInt32  res1:24;
    };
}msc_reg_55_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  scratch_56:8;
        RBus_UInt32  res1:24;
    };
}msc_reg_56_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  scratch_57:8;
        RBus_UInt32  res1:24;
    };
}msc_reg_57_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  scratch_58:8;
        RBus_UInt32  res1:24;
    };
}msc_reg_58_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  scratch_59:8;
        RBus_UInt32  res1:24;
    };
}msc_reg_59_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  scratch_5a:8;
        RBus_UInt32  res1:24;
    };
}msc_reg_5a_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  scratch_5b:8;
        RBus_UInt32  res1:24;
    };
}msc_reg_5b_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  scratch_5c:8;
        RBus_UInt32  res1:24;
    };
}msc_reg_5c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  scratch_5d:8;
        RBus_UInt32  res1:24;
    };
}msc_reg_5d_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  scratch_5e:8;
        RBus_UInt32  res1:24;
    };
}msc_reg_5e_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  scratch_5f:8;
        RBus_UInt32  res1:24;
    };
}msc_reg_5f_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ecbus_s_075:1;
        RBus_UInt32  ecbus_s_8b:1;
        RBus_UInt32  ecbus_s_12b:1;
        RBus_UInt32  ecbus_spd_3:1;
        RBus_UInt32  ecbus_d_150:1;
        RBus_UInt32  ecbus_d_8b:1;
        RBus_UInt32  ecbus_spd_76:2;
        RBus_UInt32  res1:24;
    };
}msc_reg_80_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tmds_150:1;
        RBus_UInt32  tmds_300:1;
        RBus_UInt32  tmds_600:1;
        RBus_UInt32  tmds_spd:5;
        RBus_UInt32  res1:24;
    };
}msc_reg_81_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dev_host:1;
        RBus_UInt32  dev_device:1;
        RBus_UInt32  dev_charger:1;
        RBus_UInt32  hid_host:1;
        RBus_UInt32  hid_dev:1;
        RBus_UInt32  ecbus_dev_roles:3;
        RBus_UInt32  res1:24;
    };
}msc_reg_82_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ld_phone:1;
        RBus_UInt32  log_dev_mapx:7;
        RBus_UInt32  res1:24;
    };
}msc_reg_83_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  xcap_84:8;
        RBus_UInt32  res1:24;
    };
}msc_reg_84_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  xcap_85:8;
        RBus_UInt32  res1:24;
    };
}msc_reg_85_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  xcap_86:8;
        RBus_UInt32  res1:24;
    };
}msc_reg_86_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  xcap_87:8;
        RBus_UInt32  res1:24;
    };
}msc_reg_87_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  xcap_88:8;
        RBus_UInt32  res1:24;
    };
}msc_reg_88_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  xcap_89:8;
        RBus_UInt32  res1:24;
    };
}msc_reg_89_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  xcap_8a:8;
        RBus_UInt32  res1:24;
    };
}msc_reg_8a_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  xcap_8b:8;
        RBus_UInt32  res1:24;
    };
}msc_reg_8b_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  xcap_8c:8;
        RBus_UInt32  res1:24;
    };
}msc_reg_8c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  xcap_8d:8;
        RBus_UInt32  res1:24;
    };
}msc_reg_8d_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  xcap_8e:8;
        RBus_UInt32  res1:24;
    };
}msc_reg_8e_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  xcap_8f:8;
        RBus_UInt32  res1:24;
    };
}msc_reg_8f_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  slot_md:2;
        RBus_UInt32  ecbus_md:2;
        RBus_UInt32  cur_ecbus_md:4;
        RBus_UInt32  res1:24;
    };
}msc_reg_90_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  link_st:2;
        RBus_UInt32  av_link_md:6;
        RBus_UInt32  res1:24;
    };
}msc_reg_91_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  link_rate:3;
        RBus_UInt32  av_link_ctrl:5;
        RBus_UInt32  res1:24;
    };
}msc_reg_92_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sink_st_0:2;
        RBus_UInt32  sink_st_1:2;
        RBus_UInt32  sink_st_2:2;
        RBus_UInt32  sink_st_3:2;
        RBus_UInt32  res1:24;
    };
}msc_reg_93_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  xstat_94:8;
        RBus_UInt32  res1:24;
    };
}msc_reg_94_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  xstat_95:8;
        RBus_UInt32  res1:24;
    };
}msc_reg_95_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  xstat_96:8;
        RBus_UInt32  res1:24;
    };
}msc_reg_96_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  xstat_97:8;
        RBus_UInt32  res1:24;
    };
}msc_reg_97_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  xstat_98:8;
        RBus_UInt32  res1:24;
    };
}msc_reg_98_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  xstat_99:8;
        RBus_UInt32  res1:24;
    };
}msc_reg_99_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  xstat_9a:8;
        RBus_UInt32  res1:24;
    };
}msc_reg_9a_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  xstat_9b:8;
        RBus_UInt32  res1:24;
    };
}msc_reg_9b_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  xstat_9c:8;
        RBus_UInt32  res1:24;
    };
}msc_reg_9c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  xstat_9d:8;
        RBus_UInt32  res1:24;
    };
}msc_reg_9d_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  xstat_9e:8;
        RBus_UInt32  res1:24;
    };
}msc_reg_9e_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  xstat_9f:8;
        RBus_UInt32  res1:24;
    };
}msc_reg_9f_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  xstat_a0:8;
        RBus_UInt32  res1:24;
    };
}msc_reg_a0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  xstat_a1:8;
        RBus_UInt32  res1:24;
    };
}msc_reg_a1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  xstat_a2:8;
        RBus_UInt32  res1:24;
    };
}msc_reg_a2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  xstat_a3:8;
        RBus_UInt32  res1:24;
    };
}msc_reg_a3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  xstat_a4:8;
        RBus_UInt32  res1:24;
    };
}msc_reg_a4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  xstat_a5:8;
        RBus_UInt32  res1:24;
    };
}msc_reg_a5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  xstat_a6:8;
        RBus_UInt32  res1:24;
    };
}msc_reg_a6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  xstat_a7:8;
        RBus_UInt32  res1:24;
    };
}msc_reg_a7_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  xstat_a8:8;
        RBus_UInt32  res1:24;
    };
}msc_reg_a8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  xstat_a9:8;
        RBus_UInt32  res1:24;
    };
}msc_reg_a9_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  xstat_aa:8;
        RBus_UInt32  res1:24;
    };
}msc_reg_aa_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  xstat_ab:8;
        RBus_UInt32  res1:24;
    };
}msc_reg_ab_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  xstat_ac:8;
        RBus_UInt32  res1:24;
    };
}msc_reg_ac_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  xstat_ad:8;
        RBus_UInt32  res1:24;
    };
}msc_reg_ad_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  xstat_ae:8;
        RBus_UInt32  res1:24;
    };
}msc_reg_ae_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  xstat_af:8;
        RBus_UInt32  res1:24;
    };
}msc_reg_af_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sync0_lb_8_0:9;
        RBus_UInt32  sync0_hb_8_0:9;
        RBus_UInt32  res1:14;
    };
}cbus_link_00_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sync1_lb_7_0:8;
        RBus_UInt32  sync1_hb_7_0:8;
        RBus_UInt32  res1:16;
    };
}cbus_link_01_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sync_bit_time:8;
        RBus_UInt32  res1:24;
    };
}cbus_link_02_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  abs_threshold:8;
        RBus_UInt32  abs_thres_en:1;
        RBus_UInt32  res1:23;
    };
}cbus_link_03_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  parity_time:8;
        RBus_UInt32  res1:24;
    };
}cbus_link_04_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  parity_limit:5;
        RBus_UInt32  ctrl_16_resv:1;
        RBus_UInt32  parity_irq_en:1;
        RBus_UInt32  parity_fail:1;
        RBus_UInt32  res1:24;
    };
}cbus_link_05_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ack_fall:7;
        RBus_UInt32  res1:25;
    };
}cbus_link_06_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ack_0:7;
        RBus_UInt32  res1:25;
    };
}cbus_link_07_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tx_bit_time:8;
        RBus_UInt32  res1:24;
    };
}cbus_link_08_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ctrl_1b_resv:2;
        RBus_UInt32  fast_reply_en:1;
        RBus_UInt32  chk_win_lo:2;
        RBus_UInt32  chk_win_up:3;
        RBus_UInt32  tx_ack_div2:1;
        RBus_UInt32  res1:23;
    };
}cbus_link_09_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tx_ack_fal:7;
        RBus_UInt32  res2:1;
        RBus_UInt32  res1:24;
    };
}cbus_link_0a_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tx_ack_low_hb:7;
        RBus_UInt32  res1:25;
    };
}cbus_link_0b_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tx_ack_low_lb:7;
        RBus_UInt32  res1:25;
    };
}cbus_link_0c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ctrl_1f_resv:4;
        RBus_UInt32  retry_flag:1;
        RBus_UInt32  retry_lv:3;
        RBus_UInt32  res1:24;
    };
}cbus_link_0d_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  drv_hi_cbus:6;
        RBus_UInt32  drv_str:2;
        RBus_UInt32  res1:24;
    };
}cbus_link_0e_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  req_opp_int:2;
        RBus_UInt32  wait:4;
        RBus_UInt32  res1:26;
    };
}cbus_link_0f_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  req_opp_flt:8;
        RBus_UInt32  res1:24;
    };
}cbus_link_10_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  req_cont:8;
        RBus_UInt32  res1:24;
    };
}cbus_link_11_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  resp_hold:4;
        RBus_UInt32  req_hold:4;
        RBus_UInt32  res1:24;
    };
}cbus_link_12_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  link_err:1;
        RBus_UInt32  link_time:5;
        RBus_UInt32  glob_time:2;
        RBus_UInt32  res1:24;
    };
}cbus_link_13_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  avoid_conf:1;
        RBus_UInt32  chk_err:1;
        RBus_UInt32  chk_point:6;
        RBus_UInt32  res1:24;
    };
}cbus_link_14_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ctrl_28_resv:4;
        RBus_UInt32  msc_wait_arb:1;
        RBus_UInt32  mcumsc_en:1;
        RBus_UInt32  res1:26;
    };
}cbus_msc_00_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  na_msc_cmd:8;
        RBus_UInt32  res1:24;
    };
}cbus_msc_01_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  na_msc_offset:8;
        RBus_UInt32  res1:24;
    };
}cbus_msc_02_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  na_rx_len:5;
        RBus_UInt32  rx_fifo_clr:1;
        RBus_UInt32  rx_fifo_empty:1;
        RBus_UInt32  rx_fifo_full:1;
        RBus_UInt32  res1:24;
    };
}cbus_msc_03_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rx_fifo_data:8;
        RBus_UInt32  res1:24;
    };
}cbus_msc_04_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fwdef_cmd_rev:8;
        RBus_UInt32  res1:24;
    };
}cbus_msc_05_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ddc_abort_irq:1;
        RBus_UInt32  abort_req_irq:1;
        RBus_UInt32  abort_res_irq:1;
        RBus_UInt32  allmsc_cmd_irq:1;
        RBus_UInt32  fwdef_cmd_irq:1;
        RBus_UInt32  sc3_err_irq:1;
        RBus_UInt32  wr_burst_irq:1;
        RBus_UInt32  msc_err_irq:1;
        RBus_UInt32  ddc_err_irq:1;
        RBus_UInt32  sc1_err_irq:1;
        RBus_UInt32  get_msg_irq:1;
        RBus_UInt32  get_id_irq:1;
        RBus_UInt32  get_stat_irq:1;
        RBus_UInt32  rd_devcap_irq:1;
        RBus_UInt32  wr_stat_irq:1;
        RBus_UInt32  msg_sub_irq:1;
        RBus_UInt32  rapk_irq:1;
        RBus_UInt32  rap_irq:1;
        RBus_UInt32  rcpe_irq:1;
        RBus_UInt32  rcpk_irq:1;
        RBus_UInt32  rcp_irq:1;
        RBus_UInt32  msge_irq:1;
        RBus_UInt32  clk_mode_chg:1;
        RBus_UInt32  path_en_chg:1;
        RBus_UInt32  muted_chg:1;
        RBus_UInt32  dcap_rdy_chg:1;
        RBus_UInt32  ucpe_irq:1;
        RBus_UInt32  ucpk_irq:1;
        RBus_UInt32  ucp_irq:1;
        RBus_UInt32  res1:3;
    };
}cbus_msc_06_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ddc_abort_irq_en:1;
        RBus_UInt32  abort_req_irq_en:1;
        RBus_UInt32  abort_res_irq_en:1;
        RBus_UInt32  allmsc_cmd_irq_en:1;
        RBus_UInt32  fwdef_cmd_irq_en:1;
        RBus_UInt32  sc3_err_irq_en:1;
        RBus_UInt32  wr_burst_irq_en:1;
        RBus_UInt32  msc_err_irq_en:1;
        RBus_UInt32  ddc_err_irq_en:1;
        RBus_UInt32  sc1_err_irq_en:1;
        RBus_UInt32  get_msg_irq_en:1;
        RBus_UInt32  get_id_irq_en:1;
        RBus_UInt32  get_stat_irq_en:1;
        RBus_UInt32  rd_devcap_irq_en:1;
        RBus_UInt32  wr_stat_irq_en:1;
        RBus_UInt32  msg_sub_irq_en:1;
        RBus_UInt32  rapk_irq_en:1;
        RBus_UInt32  rap_irq_en:1;
        RBus_UInt32  rcpe_irq_en:1;
        RBus_UInt32  rcpk_irq_en:1;
        RBus_UInt32  rcp_irq_en:1;
        RBus_UInt32  msge_irq_en:1;
        RBus_UInt32  clk_mode_irq_en:1;
        RBus_UInt32  path_en_irq_en:1;
        RBus_UInt32  muted_chg_irq_en:1;
        RBus_UInt32  dcap_rdy_irq_en:1;
        RBus_UInt32  ucpe_irq_en:1;
        RBus_UInt32  ucpk_irq_en:1;
        RBus_UInt32  ucp_irq_en:1;
        RBus_UInt32  res1:3;
    };
}cbus_msc_07_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  chg23_irq_en:8;
        RBus_UInt32  chg22_irq_en:8;
        RBus_UInt32  dchg_bit0_irq_en:1;
        RBus_UInt32  edid_irq_en:1;
        RBus_UInt32  dchg_bit2_irq_en:1;
        RBus_UInt32  dchg_bit3_irq_en:1;
        RBus_UInt32  dchg_bit4_irq_en:1;
        RBus_UInt32  dchg_bit5_irq_en:1;
        RBus_UInt32  dchg_bit6_irq_en:1;
        RBus_UInt32  dchg_bit7_irq_en:1;
        RBus_UInt32  dcap_irq_en:1;
        RBus_UInt32  dscr_irq_en:1;
        RBus_UInt32  req_irq_en:1;
        RBus_UInt32  grt_irq_en:1;
        RBus_UInt32  cbus_3d_req_irq_en:1;
        RBus_UInt32  rchg_irq_en:3;
    };
}cbus_msc_08_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  chg27_irq_en:8;
        RBus_UInt32  chg26_irq_en:8;
        RBus_UInt32  chg25_irq_en:8;
        RBus_UInt32  chg24_irq_en:8;
    };
}cbus_msc_09_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  msc_err_code:8;
        RBus_UInt32  res1:24;
    };
}cbus_msc_0a_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vendor_id:8;
        RBus_UInt32  rcp_reply_nack:1;
        RBus_UInt32  rcp_reply_abort:1;
        RBus_UInt32  res1:22;
    };
}cbus_msc_0b_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  msg_cmd:8;
        RBus_UInt32  res1:24;
    };
}cbus_msc_0c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  msg_dat:8;
        RBus_UInt32  res1:24;
    };
}cbus_msc_0d_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  msge_rcv:8;
        RBus_UInt32  res1:24;
    };
}cbus_msc_0e_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rcp_rcv:8;
        RBus_UInt32  res1:24;
    };
}cbus_msc_0f_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rcpk_rcv:8;
        RBus_UInt32  res1:24;
    };
}cbus_msc_10_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rcpe_rcv:8;
        RBus_UInt32  res1:24;
    };
}cbus_msc_11_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rap_rcv:8;
        RBus_UInt32  res1:24;
    };
}cbus_msc_12_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rapk_rcv:8;
        RBus_UInt32  res1:24;
    };
}cbus_msc_13_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  burst_wait:4;
        RBus_UInt32  wb_id_chk:1;
        RBus_UInt32  burst_timeout:1;
        RBus_UInt32  res1:26;
    };
}cbus_msc_14_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  adop_idl_rcv:8;
        RBus_UInt32  adop_idh_rcv:8;
        RBus_UInt32  res1:16;
    };
}cbus_msc_15_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  adop_txid_l:8;
        RBus_UInt32  adop_txid_h:8;
        RBus_UInt32  wb_byte_num1:6;
        RBus_UInt32  wb_byte_num0:6;
        RBus_UInt32  insert_id:1;
        RBus_UInt32  auto_handshake:1;
        RBus_UInt32  res1:2;
    };
}cbus_msc_16_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  spi_fsm_clr:1;
        RBus_UInt32  sch_fsm_clr:1;
        RBus_UInt32  que_fsm_clr:1;
        RBus_UInt32  res1:29;
    };
}cbus_msc_17_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  spi_fsm:4;
        RBus_UInt32  sch_fsm:4;
        RBus_UInt32  que_fsm:4;
        RBus_UInt32  res1:20;
    };
}cbus_msc_18_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cap_offset:8;
        RBus_UInt32  res1:24;
    };
}cbus_msc_19_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  int_offset:8;
        RBus_UInt32  res1:24;
    };
}cbus_msc_1a_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sta_offset:8;
        RBus_UInt32  res1:24;
    };
}cbus_msc_1b_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  scr_offset:8;
        RBus_UInt32  res1:24;
    };
}cbus_msc_1c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  msc_err_force:1;
        RBus_UInt32  ddc_err_force:1;
        RBus_UInt32  res1:30;
    };
}cbus_msc_1d_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ddc_err_fw:8;
        RBus_UInt32  res1:24;
    };
}cbus_msc_1e_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  msc_err_fw:8;
        RBus_UInt32  res1:24;
    };
}cbus_msc_1f_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ucp_rcv:8;
        RBus_UInt32  res1:24;
    };
}cbus_msc_20_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ucpk_rcv:8;
        RBus_UInt32  res1:24;
    };
}cbus_msc_21_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ucpe_rcv:8;
        RBus_UInt32  res1:24;
    };
}cbus_msc_22_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fw0_head:2;
        RBus_UInt32  fw0_tx_case:3;
        RBus_UInt32  fw0_fifo_empty:1;
        RBus_UInt32  fw0_fifo_full:1;
        RBus_UInt32  fw0_fifo_clr:1;
        RBus_UInt32  fw0_req:1;
        RBus_UInt32  res1:23;
    };
}fw0_req_00_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fw0_cmd1:8;
        RBus_UInt32  res1:24;
    };
}fw0_req_01_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fw0_cmd2:8;
        RBus_UInt32  res1:24;
    };
}fw0_req_02_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fw0_offset:8;
        RBus_UInt32  res1:24;
    };
}fw0_req_03_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fw0_data:8;
        RBus_UInt32  res1:24;
    };
}fw0_req_04_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fw0_wait_case:2;
        RBus_UInt32  fw0_data_irq_en:1;
        RBus_UInt32  fw0_cmd_irq_en:1;
        RBus_UInt32  fw0_fin_irq_en:1;
        RBus_UInt32  fw0_rcv_err:1;
        RBus_UInt32  fw0_data_event:1;
        RBus_UInt32  fw0_cmd_event:1;
        RBus_UInt32  fw0_fin:1;
        RBus_UInt32  fw0_rty_ovr:1;
        RBus_UInt32  res1:22;
    };
}fw0_req_05_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fw0_cmd_rcv:8;
        RBus_UInt32  res1:24;
    };
}fw0_req_06_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fw0_data_rcv:8;
        RBus_UInt32  res1:24;
    };
}fw0_req_07_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fw0_rdata:8;
        RBus_UInt32  fw0_fifo_len:5;
        RBus_UInt32  fw0_rd_en:1;
        RBus_UInt32  res1:18;
    };
}fw0_req_08_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ddc_err_code:8;
        RBus_UInt32  res1:24;
    };
}cbus_ddc_00_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  iic_ck_tgt:8;
        RBus_UInt32  res1:24;
    };
}cbus_ddc_01_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ddc_req:1;
        RBus_UInt32  ddc_req_ctrl:1;
        RBus_UInt32  ddc_data_irq_en:1;
        RBus_UInt32  ddc_cmd_irq_en:1;
        RBus_UInt32  ddc_data_event:1;
        RBus_UInt32  ddc_cmd_event:1;
        RBus_UInt32  ddc_prior_dis:1;
        RBus_UInt32  mcuddc_en:1;
        RBus_UInt32  res1:24;
    };
}cbus_ddc_02_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ddc_rcv_cmd:8;
        RBus_UInt32  res1:24;
    };
}cbus_ddc_03_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ddc_rcv_data:8;
        RBus_UInt32  res1:24;
    };
}cbus_ddc_04_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ddc_data_fw:8;
        RBus_UInt32  res1:24;
    };
}cbus_ddc_05_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ddcrd_new_md:1;
        RBus_UInt32  ddcrd_rst_en:1;
        RBus_UInt32  ddc_eof_irq_en:1;
        RBus_UInt32  ddc_eof_irq:1;
        RBus_UInt32  res1:28;
    };
}cbus_ddc_06_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  path_en_off_awd:1;
        RBus_UInt32  path_en_off_vwd:1;
        RBus_UInt32  mute_en_awd:1;
        RBus_UInt32  mute_en_vwd:1;
        RBus_UInt32  clk_mod_awd:1;
        RBus_UInt32  clk_mod_vwd:1;
        RBus_UInt32  res1:26;
    };
}cbus_wdog_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ctrl_01_resv:1;
        RBus_UInt32  msc_stat_irq:1;
        RBus_UInt32  msc_int_irq:1;
        RBus_UInt32  msc_ch_irq:1;
        RBus_UInt32  ddc_irq:1;
        RBus_UInt32  arbiter_irq:1;
        RBus_UInt32  res1:26;
    };
}cbus_int_index_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res2:2;
        RBus_UInt32  dbg_sel:3;
        RBus_UInt32  fw_out:1;
        RBus_UInt32  cbus_test_md:2;
        RBus_UInt32  res1:24;
    };
}cbus_test_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cbus_dummy0_15_0:16;
        RBus_UInt32  msc_clientt0_que_gated:1;
        RBus_UInt32  ddc_idle_no_tx_abort_gated:1;
        RBus_UInt32  cbus_dummy0_29_16:14;
    };
}cbus_dummy0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res3:2;
        RBus_UInt32  ecbus_dmac_irq:1;
        RBus_UInt32  cbus1_irq:1;
        RBus_UInt32  cbus_core_irq:1;
        RBus_UInt32  res2:11;
        RBus_UInt32  dummy980353f0_17_16:2;
        RBus_UInt32  ecbus_dmac_irq_en:1;
        RBus_UInt32  cbus1_irq_en:1;
        RBus_UInt32  cbus_core_irq_en:1;
        RBus_UInt32  res1:11;
    };
}cbus_irq_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy98035400_5_0:6;
        RBus_UInt32  cbus1_en:1;
        RBus_UInt32  cbus3_en:1;
        RBus_UInt32  res1:24;
    };
}ocbus_ctrl_00_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cbus1_coll:1;
        RBus_UInt32  cbus1_retry_limit:1;
        RBus_UInt32  cbus1_retry_irq_en:1;
        RBus_UInt32  invalid_chk:1;
        RBus_UInt32  cbus1_retry_num:4;
        RBus_UInt32  res1:24;
    };
}ocbus_ctrl_01_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_xdevcap_irq:1;
        RBus_UInt32  wr_xstat_irq:1;
        RBus_UInt32  res2:6;
        RBus_UInt32  res1:24;
    };
}ocbus_ctrl_10_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_xdevcap_irq_en:1;
        RBus_UInt32  wr_xstat_irq_en:1;
        RBus_UInt32  res2:6;
        RBus_UInt32  res1:24;
    };
}ocbus_ctrl_11_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rusbk_irq:1;
        RBus_UInt32  rusb_irq:1;
        RBus_UInt32  ucpe_irq:1;
        RBus_UInt32  ucpk_irq:1;
        RBus_UInt32  ucp_irq:1;
        RBus_UInt32  rbpe_irq:1;
        RBus_UInt32  rbpk_irq:1;
        RBus_UInt32  rbp_irq:1;
        RBus_UInt32  res1:24;
    };
}ocbus_ctrl_12_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bstop_irq:1;
        RBus_UInt32  brdy_irq:1;
        RBus_UInt32  breq_irq:1;
        RBus_UInt32  btrig_irq:1;
        RBus_UInt32  attk_irq:1;
        RBus_UInt32  att_irq:1;
        RBus_UInt32  rhidk_irq:1;
        RBus_UInt32  rhid_irq:1;
        RBus_UInt32  res1:24;
    };
}ocbus_ctrl_13_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rusbk_irq_en:1;
        RBus_UInt32  rusb_irq_en:1;
        RBus_UInt32  ucpe_irq_en:1;
        RBus_UInt32  ucpk_irq_en:1;
        RBus_UInt32  ucp_irq_en:1;
        RBus_UInt32  rbpe_irq_en:1;
        RBus_UInt32  rbpk_irq_en:1;
        RBus_UInt32  rbp_irq_en:1;
        RBus_UInt32  res1:24;
    };
}ocbus_ctrl_14_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bstop_irq_en:1;
        RBus_UInt32  brdy_irq_en:1;
        RBus_UInt32  breq_irq_en:1;
        RBus_UInt32  btrig_irq_en:1;
        RBus_UInt32  attk_irq_en:1;
        RBus_UInt32  att_irq_en:1;
        RBus_UInt32  rhidk_irq_en:1;
        RBus_UInt32  rhid_irq_en:1;
        RBus_UInt32  res1:24;
    };
}ocbus_ctrl_15_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rbp_rcv:8;
        RBus_UInt32  res1:24;
    };
}ocbus_ctrl_16_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rbpk_rcv:8;
        RBus_UInt32  res1:24;
    };
}ocbus_ctrl_17_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rbpe_rcv:8;
        RBus_UInt32  res1:24;
    };
}ocbus_ctrl_18_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ucp_rcv:8;
        RBus_UInt32  res1:24;
    };
}ocbus_ctrl_19_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ucpk_rcv:8;
        RBus_UInt32  res1:24;
    };
}ocbus_ctrl_1a_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ucpe_rcv:8;
        RBus_UInt32  res1:24;
    };
}ocbus_ctrl_1b_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rusb_rcv:8;
        RBus_UInt32  res1:24;
    };
}ocbus_ctrl_1c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rusbk_rcv:8;
        RBus_UInt32  res1:24;
    };
}ocbus_ctrl_1d_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rhid_rcv:8;
        RBus_UInt32  res1:24;
    };
}ocbus_ctrl_1e_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rhidk_rcv:8;
        RBus_UInt32  res1:24;
    };
}ocbus_ctrl_1f_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  att_rcv:8;
        RBus_UInt32  res1:24;
    };
}ocbus_ctrl_20_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  attk_rcv:8;
        RBus_UInt32  res1:24;
    };
}ocbus_ctrl_21_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  btrig_rcv:8;
        RBus_UInt32  res1:24;
    };
}ocbus_ctrl_22_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  breq_rcv:8;
        RBus_UInt32  res1:24;
    };
}ocbus_ctrl_23_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  brdy_rcv:8;
        RBus_UInt32  res1:24;
    };
}ocbus_ctrl_24_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bstop_rcv:8;
        RBus_UInt32  res1:24;
    };
}ocbus_ctrl_25_RBUS;




#endif 


#endif //_RBUS_CBUS_REG_H_
