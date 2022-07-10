/**************************************************************
// Spec Version                  : 1.01
// Parser Version                : DVR_Parser_6.11(120105)
// CModelGen Version             : 5.1 2012.01.05
// Naming Rule                   :  Register_Name
// Naming Rule                   : Name
// Parse Option                  : Only Parse _op1
// Parse Address Region          : All Address Region 
// Decode bit number             : 12 bits
// Firmware Header Generate Date : 2015/5/14 19:39:6
***************************************************************/


#ifndef _CBUS_WRAPPER_REG_H_INCLUDED_
#define _CBUS_WRAPPER_REG_H_INCLUDED_
#ifdef  _CBUS_WRAPPER_USE_STRUCT
typedef struct 
{
unsigned int     reserved_0:7;
unsigned int     cectx_ckpsel:1;
unsigned int     cecrx_ckpsel:1;
unsigned int     debug_sel:3;
unsigned int     reserved_1:1;
unsigned int     MHL_BMOS_EN_RX:1;
unsigned int     int_scpu_en:1;
unsigned int     int_acpu_en:1;
unsigned int     reserved_2:3;
unsigned int     hdmirx_ddc_datain_detect:1;
unsigned int     hdmirx_ddc_sda_delay:4;
unsigned int     reserved_3:3;
unsigned int     cbusrx_ddc_datain_detect:1;
unsigned int     cbusrx_ddc_sda_delay:4;
}CBUS_WRAPPER_CONTROL;

typedef struct 
{
unsigned int     cbus_dummy_reg0:32;
}CBUS_WRAPPER_DUMMY0;

typedef struct 
{
unsigned int     cbus_dummy_reg1:32;
}CBUS_WRAPPER_DUMMY1;

typedef struct 
{
unsigned int     cbus_dummy_reg2:32;
}CBUS_WRAPPER_DUMMY2;

typedef struct 
{
unsigned int     cbus_dummy_reg3:32;
}CBUS_WRAPPER_DUMMY3;

#endif

#define CBUS_WRAPPER_CONTROL                                                         0x98037500
#define CBUS_WRAPPER_CONTROL_reg_addr                                                "0xD8037500"
#define CBUS_WRAPPER_CONTROL_reg                                                     0xD8037500
#define set_CBUS_WRAPPER_CONTROL_reg(data)   (*((volatile unsigned int*) CBUS_WRAPPER_CONTROL_reg)=data)
#define get_CBUS_WRAPPER_CONTROL_reg   (*((volatile unsigned int*) CBUS_WRAPPER_CONTROL_reg))
#define CBUS_WRAPPER_CONTROL_inst_adr                                                "0x0040"
#define CBUS_WRAPPER_CONTROL_inst                                                    0x0040
#define CBUS_WRAPPER_CONTROL_cectx_ckpsel_shift                                      (24)
#define CBUS_WRAPPER_CONTROL_cectx_ckpsel_mask                                       (0x01000000)
#define CBUS_WRAPPER_CONTROL_cectx_ckpsel(data)                                      (0x01000000&((data)<<24))
#define CBUS_WRAPPER_CONTROL_cectx_ckpsel_src(data)                                  ((0x01000000&(data))>>24)
#define CBUS_WRAPPER_CONTROL_get_cectx_ckpsel(data)                                  ((0x01000000&(data))>>24)
#define CBUS_WRAPPER_CONTROL_cecrx_ckpsel_shift                                      (23)
#define CBUS_WRAPPER_CONTROL_cecrx_ckpsel_mask                                       (0x00800000)
#define CBUS_WRAPPER_CONTROL_cecrx_ckpsel(data)                                      (0x00800000&((data)<<23))
#define CBUS_WRAPPER_CONTROL_cecrx_ckpsel_src(data)                                  ((0x00800000&(data))>>23)
#define CBUS_WRAPPER_CONTROL_get_cecrx_ckpsel(data)                                  ((0x00800000&(data))>>23)
#define CBUS_WRAPPER_CONTROL_debug_sel_shift                                         (20)
#define CBUS_WRAPPER_CONTROL_debug_sel_mask                                          (0x00700000)
#define CBUS_WRAPPER_CONTROL_debug_sel(data)                                         (0x00700000&((data)<<20))
#define CBUS_WRAPPER_CONTROL_debug_sel_src(data)                                     ((0x00700000&(data))>>20)
#define CBUS_WRAPPER_CONTROL_get_debug_sel(data)                                     ((0x00700000&(data))>>20)
#define CBUS_WRAPPER_CONTROL_MHL_BMOS_EN_RX_shift                                    (18)
#define CBUS_WRAPPER_CONTROL_MHL_BMOS_EN_RX_mask                                     (0x00040000)
#define CBUS_WRAPPER_CONTROL_MHL_BMOS_EN_RX(data)                                    (0x00040000&((data)<<18))
#define CBUS_WRAPPER_CONTROL_MHL_BMOS_EN_RX_src(data)                                ((0x00040000&(data))>>18)
#define CBUS_WRAPPER_CONTROL_get_MHL_BMOS_EN_RX(data)                                ((0x00040000&(data))>>18)
#define CBUS_WRAPPER_CONTROL_int_scpu_en_shift                                       (17)
#define CBUS_WRAPPER_CONTROL_int_scpu_en_mask                                        (0x00020000)
#define CBUS_WRAPPER_CONTROL_int_scpu_en(data)                                       (0x00020000&((data)<<17))
#define CBUS_WRAPPER_CONTROL_int_scpu_en_src(data)                                   ((0x00020000&(data))>>17)
#define CBUS_WRAPPER_CONTROL_get_int_scpu_en(data)                                   ((0x00020000&(data))>>17)
#define CBUS_WRAPPER_CONTROL_int_acpu_en_shift                                       (16)
#define CBUS_WRAPPER_CONTROL_int_acpu_en_mask                                        (0x00010000)
#define CBUS_WRAPPER_CONTROL_int_acpu_en(data)                                       (0x00010000&((data)<<16))
#define CBUS_WRAPPER_CONTROL_int_acpu_en_src(data)                                   ((0x00010000&(data))>>16)
#define CBUS_WRAPPER_CONTROL_get_int_acpu_en(data)                                   ((0x00010000&(data))>>16)
#define CBUS_WRAPPER_CONTROL_hdmirx_ddc_datain_detect_shift                          (12)
#define CBUS_WRAPPER_CONTROL_hdmirx_ddc_datain_detect_mask                           (0x00001000)
#define CBUS_WRAPPER_CONTROL_hdmirx_ddc_datain_detect(data)                          (0x00001000&((data)<<12))
#define CBUS_WRAPPER_CONTROL_hdmirx_ddc_datain_detect_src(data)                      ((0x00001000&(data))>>12)
#define CBUS_WRAPPER_CONTROL_get_hdmirx_ddc_datain_detect(data)                      ((0x00001000&(data))>>12)
#define CBUS_WRAPPER_CONTROL_hdmirx_ddc_sda_delay_shift                              (8)
#define CBUS_WRAPPER_CONTROL_hdmirx_ddc_sda_delay_mask                               (0x00000F00)
#define CBUS_WRAPPER_CONTROL_hdmirx_ddc_sda_delay(data)                              (0x00000F00&((data)<<8))
#define CBUS_WRAPPER_CONTROL_hdmirx_ddc_sda_delay_src(data)                          ((0x00000F00&(data))>>8)
#define CBUS_WRAPPER_CONTROL_get_hdmirx_ddc_sda_delay(data)                          ((0x00000F00&(data))>>8)
#define CBUS_WRAPPER_CONTROL_cbusrx_ddc_datain_detect_shift                          (4)
#define CBUS_WRAPPER_CONTROL_cbusrx_ddc_datain_detect_mask                           (0x00000010)
#define CBUS_WRAPPER_CONTROL_cbusrx_ddc_datain_detect(data)                          (0x00000010&((data)<<4))
#define CBUS_WRAPPER_CONTROL_cbusrx_ddc_datain_detect_src(data)                      ((0x00000010&(data))>>4)
#define CBUS_WRAPPER_CONTROL_get_cbusrx_ddc_datain_detect(data)                      ((0x00000010&(data))>>4)
#define CBUS_WRAPPER_CONTROL_cbusrx_ddc_sda_delay_shift                              (0)
#define CBUS_WRAPPER_CONTROL_cbusrx_ddc_sda_delay_mask                               (0x0000000F)
#define CBUS_WRAPPER_CONTROL_cbusrx_ddc_sda_delay(data)                              (0x0000000F&((data)<<0))
#define CBUS_WRAPPER_CONTROL_cbusrx_ddc_sda_delay_src(data)                          ((0x0000000F&(data))>>0)
#define CBUS_WRAPPER_CONTROL_get_cbusrx_ddc_sda_delay(data)                          ((0x0000000F&(data))>>0)


#define CBUS_WRAPPER_DUMMY0                                                          0x98037504
#define CBUS_WRAPPER_DUMMY0_reg_addr                                                 "0xD8037504"
#define CBUS_WRAPPER_DUMMY0_reg                                                      0xD8037504
#define set_CBUS_WRAPPER_DUMMY0_reg(data)   (*((volatile unsigned int*) CBUS_WRAPPER_DUMMY0_reg)=data)
#define get_CBUS_WRAPPER_DUMMY0_reg   (*((volatile unsigned int*) CBUS_WRAPPER_DUMMY0_reg))
#define CBUS_WRAPPER_DUMMY0_inst_adr                                                 "0x0041"
#define CBUS_WRAPPER_DUMMY0_inst                                                     0x0041
#define CBUS_WRAPPER_DUMMY0_cbus_dummy_reg0_shift                                    (0)
#define CBUS_WRAPPER_DUMMY0_cbus_dummy_reg0_mask                                     (0xFFFFFFFF)
#define CBUS_WRAPPER_DUMMY0_cbus_dummy_reg0(data)                                    (0xFFFFFFFF&((data)<<0))
#define CBUS_WRAPPER_DUMMY0_cbus_dummy_reg0_src(data)                                ((0xFFFFFFFF&(data))>>0)
#define CBUS_WRAPPER_DUMMY0_get_cbus_dummy_reg0(data)                                ((0xFFFFFFFF&(data))>>0)


#define CBUS_WRAPPER_DUMMY1                                                          0x98037508
#define CBUS_WRAPPER_DUMMY1_reg_addr                                                 "0xD8037508"
#define CBUS_WRAPPER_DUMMY1_reg                                                      0xD8037508
#define set_CBUS_WRAPPER_DUMMY1_reg(data)   (*((volatile unsigned int*) CBUS_WRAPPER_DUMMY1_reg)=data)
#define get_CBUS_WRAPPER_DUMMY1_reg   (*((volatile unsigned int*) CBUS_WRAPPER_DUMMY1_reg))
#define CBUS_WRAPPER_DUMMY1_inst_adr                                                 "0x0042"
#define CBUS_WRAPPER_DUMMY1_inst                                                     0x0042
#define CBUS_WRAPPER_DUMMY1_cbus_dummy_reg1_shift                                    (0)
#define CBUS_WRAPPER_DUMMY1_cbus_dummy_reg1_mask                                     (0xFFFFFFFF)
#define CBUS_WRAPPER_DUMMY1_cbus_dummy_reg1(data)                                    (0xFFFFFFFF&((data)<<0))
#define CBUS_WRAPPER_DUMMY1_cbus_dummy_reg1_src(data)                                ((0xFFFFFFFF&(data))>>0)
#define CBUS_WRAPPER_DUMMY1_get_cbus_dummy_reg1(data)                                ((0xFFFFFFFF&(data))>>0)


#define CBUS_WRAPPER_DUMMY2                                                          0x9803750C
#define CBUS_WRAPPER_DUMMY2_reg_addr                                                 "0xD803750C"
#define CBUS_WRAPPER_DUMMY2_reg                                                      0xD803750C
#define set_CBUS_WRAPPER_DUMMY2_reg(data)   (*((volatile unsigned int*) CBUS_WRAPPER_DUMMY2_reg)=data)
#define get_CBUS_WRAPPER_DUMMY2_reg   (*((volatile unsigned int*) CBUS_WRAPPER_DUMMY2_reg))
#define CBUS_WRAPPER_DUMMY2_inst_adr                                                 "0x0043"
#define CBUS_WRAPPER_DUMMY2_inst                                                     0x0043
#define CBUS_WRAPPER_DUMMY2_cbus_dummy_reg2_shift                                    (0)
#define CBUS_WRAPPER_DUMMY2_cbus_dummy_reg2_mask                                     (0xFFFFFFFF)
#define CBUS_WRAPPER_DUMMY2_cbus_dummy_reg2(data)                                    (0xFFFFFFFF&((data)<<0))
#define CBUS_WRAPPER_DUMMY2_cbus_dummy_reg2_src(data)                                ((0xFFFFFFFF&(data))>>0)
#define CBUS_WRAPPER_DUMMY2_get_cbus_dummy_reg2(data)                                ((0xFFFFFFFF&(data))>>0)


#define CBUS_WRAPPER_DUMMY3                                                          0x98037510
#define CBUS_WRAPPER_DUMMY3_reg_addr                                                 "0xD8037510"
#define CBUS_WRAPPER_DUMMY3_reg                                                      0xD8037510
#define set_CBUS_WRAPPER_DUMMY3_reg(data)   (*((volatile unsigned int*) CBUS_WRAPPER_DUMMY3_reg)=data)
#define get_CBUS_WRAPPER_DUMMY3_reg   (*((volatile unsigned int*) CBUS_WRAPPER_DUMMY3_reg))
#define CBUS_WRAPPER_DUMMY3_inst_adr                                                 "0x0044"
#define CBUS_WRAPPER_DUMMY3_inst                                                     0x0044
#define CBUS_WRAPPER_DUMMY3_cbus_dummy_reg3_shift                                    (0)
#define CBUS_WRAPPER_DUMMY3_cbus_dummy_reg3_mask                                     (0xFFFFFFFF)
#define CBUS_WRAPPER_DUMMY3_cbus_dummy_reg3(data)                                    (0xFFFFFFFF&((data)<<0))
#define CBUS_WRAPPER_DUMMY3_cbus_dummy_reg3_src(data)                                ((0xFFFFFFFF&(data))>>0)
#define CBUS_WRAPPER_DUMMY3_get_cbus_dummy_reg3(data)                                ((0xFFFFFFFF&(data))>>0)


#endif
