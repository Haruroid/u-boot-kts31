/**************************************************************
// Spec Version                  : 1.01
// Parser Version                : DVR_Parser_6.11(120105)
// CModelGen Version             : 5.1 2012.01.05
// Naming Rule                   :  Register_Name
// Naming Rule                   : Name
// Parse Option                  : Only Parse _op1
// Parse Address Region          : All Address Region 
// Decode bit number             : 12 bits
// Firmware Header Generate Date : 2015/3/13 14:49:52
***************************************************************/


#ifndef _HDMIRX_WRAPPER_REG_H_INCLUDED_
#define _HDMIRX_WRAPPER_REG_H_INCLUDED_
#ifdef  _HDMIRX_WRAPPER_USE_STRUCT
typedef struct 
{
unsigned int     reserved_0:3;
unsigned int     den_buf1:13;
unsigned int     reserved_1:3;
unsigned int     den_buf0:13;
}HDMIRX_WRAPPER_DEN_BUF01;

typedef struct 
{
unsigned int     reserved_0:3;
unsigned int     den_buf3:13;
unsigned int     reserved_1:3;
unsigned int     den_buf2:13;
}HDMIRX_WRAPPER_DEN_BUF23;

typedef struct 
{
unsigned int     reserved_0:19;
unsigned int     hor_threshold:13;
}HDMIRX_WRAPPER_HOR_THRESHOLD;

typedef struct 
{
unsigned int     reserved_0:4;
unsigned int     set_ver_width:12;
unsigned int     reserved_1:3;
unsigned int     set_hor_width:13;
}HDMIRX_WRAPPER_ACTIVE_PIXELS;

typedef struct 
{
unsigned int     reserved_0:4;
unsigned int     polarity_l_cnt:12;
unsigned int     reserved_1:4;
unsigned int     polarity_h_cnt:12;
}HDMIRX_WRAPPER_MONITOR_0;

typedef struct 
{
unsigned int     reserved_0:19;
unsigned int     mux_polarity:1;
unsigned int     line_buf0:12;
}HDMIRX_WRAPPER_MONITOR_1;

typedef struct 
{
unsigned int     reserved_0:29;
unsigned int     ver_err_en:1;
unsigned int     hor_err_en:1;
unsigned int     polarity_detect_en:1;
}HDMIRX_WRAPPER_INTERRUPT_EN;

typedef struct 
{
unsigned int     reserved_0:29;
unsigned int     ver_err_sts:1;
unsigned int     hor_err_sts:1;
unsigned int     polarity_detect_sts:1;
}HDMIRX_WRAPPER_INTERRUPT_STATUS;

typedef struct 
{
unsigned int     reserved_0:18;
unsigned int     reg_clken_cbusrx:1;
unsigned int     reg_clken_hdmirx:1;
unsigned int     fifo_stage:1;
unsigned int     fw_dma_en:1;
unsigned int     polarity_set_en:1;
unsigned int     polarity_set:1;
unsigned int     reserved_1:4;
unsigned int     yuv_fmt:2;
unsigned int     cbusrx_en:1;
unsigned int     hdmirx_en:1;
}HDMIRX_WRAPPER_CONTROL_0;

typedef struct 
{
unsigned int     dummy_ctrl:16;
unsigned int     reserved_0:1;
unsigned int     hdmirx_vclk_div_sel:3;
unsigned int     reserved_1:1;
unsigned int     hdmirx_fdds_div_sel:3;
unsigned int     reserved_2:1;
unsigned int     hdmirx_aclk_div_sel:3;
unsigned int     reserved_3:1;
unsigned int     debug_sel:1;
unsigned int     debug_mux:2;
}HDMIRX_WRAPPER_CONTROL_1;

typedef struct 
{
unsigned int     hdmirx_dummy_reg:32;
}HDMIRX_WRAPPER_DUMMY;

#endif

#define HDMIRX_WRAPPER_DEN_BUF01                                                     0x98035F00
#define HDMIRX_WRAPPER_DEN_BUF01_reg_addr                                            "0xD8035F00"
#define HDMIRX_WRAPPER_DEN_BUF01_reg                                                 0xD8035F00
#define set_HDMIRX_WRAPPER_DEN_BUF01_reg(data)   (*((volatile unsigned int*) HDMIRX_WRAPPER_DEN_BUF01_reg)=data)
#define get_HDMIRX_WRAPPER_DEN_BUF01_reg   (*((volatile unsigned int*) HDMIRX_WRAPPER_DEN_BUF01_reg))
#define HDMIRX_WRAPPER_DEN_BUF01_inst_adr                                            "0x00C0"
#define HDMIRX_WRAPPER_DEN_BUF01_inst                                                0x00C0
#define HDMIRX_WRAPPER_DEN_BUF01_den_buf1_shift                                      (16)
#define HDMIRX_WRAPPER_DEN_BUF01_den_buf1_mask                                       (0x1FFF0000)
#define HDMIRX_WRAPPER_DEN_BUF01_den_buf1(data)                                      (0x1FFF0000&((data)<<16))
#define HDMIRX_WRAPPER_DEN_BUF01_den_buf1_src(data)                                  ((0x1FFF0000&(data))>>16)
#define HDMIRX_WRAPPER_DEN_BUF01_get_den_buf1(data)                                  ((0x1FFF0000&(data))>>16)
#define HDMIRX_WRAPPER_DEN_BUF01_den_buf0_shift                                      (0)
#define HDMIRX_WRAPPER_DEN_BUF01_den_buf0_mask                                       (0x00001FFF)
#define HDMIRX_WRAPPER_DEN_BUF01_den_buf0(data)                                      (0x00001FFF&((data)<<0))
#define HDMIRX_WRAPPER_DEN_BUF01_den_buf0_src(data)                                  ((0x00001FFF&(data))>>0)
#define HDMIRX_WRAPPER_DEN_BUF01_get_den_buf0(data)                                  ((0x00001FFF&(data))>>0)


#define HDMIRX_WRAPPER_DEN_BUF23                                                     0x98035F04
#define HDMIRX_WRAPPER_DEN_BUF23_reg_addr                                            "0xD8035F04"
#define HDMIRX_WRAPPER_DEN_BUF23_reg                                                 0xD8035F04
#define set_HDMIRX_WRAPPER_DEN_BUF23_reg(data)   (*((volatile unsigned int*) HDMIRX_WRAPPER_DEN_BUF23_reg)=data)
#define get_HDMIRX_WRAPPER_DEN_BUF23_reg   (*((volatile unsigned int*) HDMIRX_WRAPPER_DEN_BUF23_reg))
#define HDMIRX_WRAPPER_DEN_BUF23_inst_adr                                            "0x00C1"
#define HDMIRX_WRAPPER_DEN_BUF23_inst                                                0x00C1
#define HDMIRX_WRAPPER_DEN_BUF23_den_buf3_shift                                      (16)
#define HDMIRX_WRAPPER_DEN_BUF23_den_buf3_mask                                       (0x1FFF0000)
#define HDMIRX_WRAPPER_DEN_BUF23_den_buf3(data)                                      (0x1FFF0000&((data)<<16))
#define HDMIRX_WRAPPER_DEN_BUF23_den_buf3_src(data)                                  ((0x1FFF0000&(data))>>16)
#define HDMIRX_WRAPPER_DEN_BUF23_get_den_buf3(data)                                  ((0x1FFF0000&(data))>>16)
#define HDMIRX_WRAPPER_DEN_BUF23_den_buf2_shift                                      (0)
#define HDMIRX_WRAPPER_DEN_BUF23_den_buf2_mask                                       (0x00001FFF)
#define HDMIRX_WRAPPER_DEN_BUF23_den_buf2(data)                                      (0x00001FFF&((data)<<0))
#define HDMIRX_WRAPPER_DEN_BUF23_den_buf2_src(data)                                  ((0x00001FFF&(data))>>0)
#define HDMIRX_WRAPPER_DEN_BUF23_get_den_buf2(data)                                  ((0x00001FFF&(data))>>0)


#define HDMIRX_WRAPPER_HOR_THRESHOLD                                                 0x98035F08
#define HDMIRX_WRAPPER_HOR_THRESHOLD_reg_addr                                        "0xD8035F08"
#define HDMIRX_WRAPPER_HOR_THRESHOLD_reg                                             0xD8035F08
#define set_HDMIRX_WRAPPER_HOR_THRESHOLD_reg(data)   (*((volatile unsigned int*) HDMIRX_WRAPPER_HOR_THRESHOLD_reg)=data)
#define get_HDMIRX_WRAPPER_HOR_THRESHOLD_reg   (*((volatile unsigned int*) HDMIRX_WRAPPER_HOR_THRESHOLD_reg))
#define HDMIRX_WRAPPER_HOR_THRESHOLD_inst_adr                                        "0x00C2"
#define HDMIRX_WRAPPER_HOR_THRESHOLD_inst                                            0x00C2
#define HDMIRX_WRAPPER_HOR_THRESHOLD_hor_threshold_shift                             (0)
#define HDMIRX_WRAPPER_HOR_THRESHOLD_hor_threshold_mask                              (0x00001FFF)
#define HDMIRX_WRAPPER_HOR_THRESHOLD_hor_threshold(data)                             (0x00001FFF&((data)<<0))
#define HDMIRX_WRAPPER_HOR_THRESHOLD_hor_threshold_src(data)                         ((0x00001FFF&(data))>>0)
#define HDMIRX_WRAPPER_HOR_THRESHOLD_get_hor_threshold(data)                         ((0x00001FFF&(data))>>0)


#define HDMIRX_WRAPPER_ACTIVE_PIXELS                                                 0x98035F0C
#define HDMIRX_WRAPPER_ACTIVE_PIXELS_reg_addr                                        "0xD8035F0C"
#define HDMIRX_WRAPPER_ACTIVE_PIXELS_reg                                             0xD8035F0C
#define set_HDMIRX_WRAPPER_ACTIVE_PIXELS_reg(data)   (*((volatile unsigned int*) HDMIRX_WRAPPER_ACTIVE_PIXELS_reg)=data)
#define get_HDMIRX_WRAPPER_ACTIVE_PIXELS_reg   (*((volatile unsigned int*) HDMIRX_WRAPPER_ACTIVE_PIXELS_reg))
#define HDMIRX_WRAPPER_ACTIVE_PIXELS_inst_adr                                        "0x00C3"
#define HDMIRX_WRAPPER_ACTIVE_PIXELS_inst                                            0x00C3
#define HDMIRX_WRAPPER_ACTIVE_PIXELS_set_ver_width_shift                             (16)
#define HDMIRX_WRAPPER_ACTIVE_PIXELS_set_ver_width_mask                              (0x0FFF0000)
#define HDMIRX_WRAPPER_ACTIVE_PIXELS_set_ver_width(data)                             (0x0FFF0000&((data)<<16))
#define HDMIRX_WRAPPER_ACTIVE_PIXELS_set_ver_width_src(data)                         ((0x0FFF0000&(data))>>16)
#define HDMIRX_WRAPPER_ACTIVE_PIXELS_get_set_ver_width(data)                         ((0x0FFF0000&(data))>>16)
#define HDMIRX_WRAPPER_ACTIVE_PIXELS_set_hor_width_shift                             (0)
#define HDMIRX_WRAPPER_ACTIVE_PIXELS_set_hor_width_mask                              (0x00001FFF)
#define HDMIRX_WRAPPER_ACTIVE_PIXELS_set_hor_width(data)                             (0x00001FFF&((data)<<0))
#define HDMIRX_WRAPPER_ACTIVE_PIXELS_set_hor_width_src(data)                         ((0x00001FFF&(data))>>0)
#define HDMIRX_WRAPPER_ACTIVE_PIXELS_get_set_hor_width(data)                         ((0x00001FFF&(data))>>0)


#define HDMIRX_WRAPPER_MONITOR_0                                                     0x98035F10
#define HDMIRX_WRAPPER_MONITOR_0_reg_addr                                            "0xD8035F10"
#define HDMIRX_WRAPPER_MONITOR_0_reg                                                 0xD8035F10
#define set_HDMIRX_WRAPPER_MONITOR_0_reg(data)   (*((volatile unsigned int*) HDMIRX_WRAPPER_MONITOR_0_reg)=data)
#define get_HDMIRX_WRAPPER_MONITOR_0_reg   (*((volatile unsigned int*) HDMIRX_WRAPPER_MONITOR_0_reg))
#define HDMIRX_WRAPPER_MONITOR_0_inst_adr                                            "0x00C4"
#define HDMIRX_WRAPPER_MONITOR_0_inst                                                0x00C4
#define HDMIRX_WRAPPER_MONITOR_0_polarity_l_cnt_shift                                (16)
#define HDMIRX_WRAPPER_MONITOR_0_polarity_l_cnt_mask                                 (0x0FFF0000)
#define HDMIRX_WRAPPER_MONITOR_0_polarity_l_cnt(data)                                (0x0FFF0000&((data)<<16))
#define HDMIRX_WRAPPER_MONITOR_0_polarity_l_cnt_src(data)                            ((0x0FFF0000&(data))>>16)
#define HDMIRX_WRAPPER_MONITOR_0_get_polarity_l_cnt(data)                            ((0x0FFF0000&(data))>>16)
#define HDMIRX_WRAPPER_MONITOR_0_polarity_h_cnt_shift                                (0)
#define HDMIRX_WRAPPER_MONITOR_0_polarity_h_cnt_mask                                 (0x00000FFF)
#define HDMIRX_WRAPPER_MONITOR_0_polarity_h_cnt(data)                                (0x00000FFF&((data)<<0))
#define HDMIRX_WRAPPER_MONITOR_0_polarity_h_cnt_src(data)                            ((0x00000FFF&(data))>>0)
#define HDMIRX_WRAPPER_MONITOR_0_get_polarity_h_cnt(data)                            ((0x00000FFF&(data))>>0)


#define HDMIRX_WRAPPER_MONITOR_1                                                     0x98035F14
#define HDMIRX_WRAPPER_MONITOR_1_reg_addr                                            "0xD8035F14"
#define HDMIRX_WRAPPER_MONITOR_1_reg                                                 0xD8035F14
#define set_HDMIRX_WRAPPER_MONITOR_1_reg(data)   (*((volatile unsigned int*) HDMIRX_WRAPPER_MONITOR_1_reg)=data)
#define get_HDMIRX_WRAPPER_MONITOR_1_reg   (*((volatile unsigned int*) HDMIRX_WRAPPER_MONITOR_1_reg))
#define HDMIRX_WRAPPER_MONITOR_1_inst_adr                                            "0x00C5"
#define HDMIRX_WRAPPER_MONITOR_1_inst                                                0x00C5
#define HDMIRX_WRAPPER_MONITOR_1_mux_polarity_shift                                  (12)
#define HDMIRX_WRAPPER_MONITOR_1_mux_polarity_mask                                   (0x00001000)
#define HDMIRX_WRAPPER_MONITOR_1_mux_polarity(data)                                  (0x00001000&((data)<<12))
#define HDMIRX_WRAPPER_MONITOR_1_mux_polarity_src(data)                              ((0x00001000&(data))>>12)
#define HDMIRX_WRAPPER_MONITOR_1_get_mux_polarity(data)                              ((0x00001000&(data))>>12)
#define HDMIRX_WRAPPER_MONITOR_1_line_buf0_shift                                     (0)
#define HDMIRX_WRAPPER_MONITOR_1_line_buf0_mask                                      (0x00000FFF)
#define HDMIRX_WRAPPER_MONITOR_1_line_buf0(data)                                     (0x00000FFF&((data)<<0))
#define HDMIRX_WRAPPER_MONITOR_1_line_buf0_src(data)                                 ((0x00000FFF&(data))>>0)
#define HDMIRX_WRAPPER_MONITOR_1_get_line_buf0(data)                                 ((0x00000FFF&(data))>>0)


#define HDMIRX_WRAPPER_INTERRUPT_EN                                                  0x98035F18
#define HDMIRX_WRAPPER_INTERRUPT_EN_reg_addr                                         "0xD8035F18"
#define HDMIRX_WRAPPER_INTERRUPT_EN_reg                                              0xD8035F18
#define set_HDMIRX_WRAPPER_INTERRUPT_EN_reg(data)   (*((volatile unsigned int*) HDMIRX_WRAPPER_INTERRUPT_EN_reg)=data)
#define get_HDMIRX_WRAPPER_INTERRUPT_EN_reg   (*((volatile unsigned int*) HDMIRX_WRAPPER_INTERRUPT_EN_reg))
#define HDMIRX_WRAPPER_INTERRUPT_EN_inst_adr                                         "0x00C6"
#define HDMIRX_WRAPPER_INTERRUPT_EN_inst                                             0x00C6
#define HDMIRX_WRAPPER_INTERRUPT_EN_ver_err_en_shift                                 (2)
#define HDMIRX_WRAPPER_INTERRUPT_EN_ver_err_en_mask                                  (0x00000004)
#define HDMIRX_WRAPPER_INTERRUPT_EN_ver_err_en(data)                                 (0x00000004&((data)<<2))
#define HDMIRX_WRAPPER_INTERRUPT_EN_ver_err_en_src(data)                             ((0x00000004&(data))>>2)
#define HDMIRX_WRAPPER_INTERRUPT_EN_get_ver_err_en(data)                             ((0x00000004&(data))>>2)
#define HDMIRX_WRAPPER_INTERRUPT_EN_hor_err_en_shift                                 (1)
#define HDMIRX_WRAPPER_INTERRUPT_EN_hor_err_en_mask                                  (0x00000002)
#define HDMIRX_WRAPPER_INTERRUPT_EN_hor_err_en(data)                                 (0x00000002&((data)<<1))
#define HDMIRX_WRAPPER_INTERRUPT_EN_hor_err_en_src(data)                             ((0x00000002&(data))>>1)
#define HDMIRX_WRAPPER_INTERRUPT_EN_get_hor_err_en(data)                             ((0x00000002&(data))>>1)
#define HDMIRX_WRAPPER_INTERRUPT_EN_polarity_detect_en_shift                         (0)
#define HDMIRX_WRAPPER_INTERRUPT_EN_polarity_detect_en_mask                          (0x00000001)
#define HDMIRX_WRAPPER_INTERRUPT_EN_polarity_detect_en(data)                         (0x00000001&((data)<<0))
#define HDMIRX_WRAPPER_INTERRUPT_EN_polarity_detect_en_src(data)                     ((0x00000001&(data))>>0)
#define HDMIRX_WRAPPER_INTERRUPT_EN_get_polarity_detect_en(data)                     ((0x00000001&(data))>>0)


#define HDMIRX_WRAPPER_INTERRUPT_STATUS                                              0x98035F1C
#define HDMIRX_WRAPPER_INTERRUPT_STATUS_reg_addr                                     "0xD8035F1C"
#define HDMIRX_WRAPPER_INTERRUPT_STATUS_reg                                          0xD8035F1C
#define set_HDMIRX_WRAPPER_INTERRUPT_STATUS_reg(data)   (*((volatile unsigned int*) HDMIRX_WRAPPER_INTERRUPT_STATUS_reg)=data)
#define get_HDMIRX_WRAPPER_INTERRUPT_STATUS_reg   (*((volatile unsigned int*) HDMIRX_WRAPPER_INTERRUPT_STATUS_reg))
#define HDMIRX_WRAPPER_INTERRUPT_STATUS_inst_adr                                     "0x00C7"
#define HDMIRX_WRAPPER_INTERRUPT_STATUS_inst                                         0x00C7
#define HDMIRX_WRAPPER_INTERRUPT_STATUS_ver_err_sts_shift                            (2)
#define HDMIRX_WRAPPER_INTERRUPT_STATUS_ver_err_sts_mask                             (0x00000004)
#define HDMIRX_WRAPPER_INTERRUPT_STATUS_ver_err_sts(data)                            (0x00000004&((data)<<2))
#define HDMIRX_WRAPPER_INTERRUPT_STATUS_ver_err_sts_src(data)                        ((0x00000004&(data))>>2)
#define HDMIRX_WRAPPER_INTERRUPT_STATUS_get_ver_err_sts(data)                        ((0x00000004&(data))>>2)
#define HDMIRX_WRAPPER_INTERRUPT_STATUS_hor_err_sts_shift                            (1)
#define HDMIRX_WRAPPER_INTERRUPT_STATUS_hor_err_sts_mask                             (0x00000002)
#define HDMIRX_WRAPPER_INTERRUPT_STATUS_hor_err_sts(data)                            (0x00000002&((data)<<1))
#define HDMIRX_WRAPPER_INTERRUPT_STATUS_hor_err_sts_src(data)                        ((0x00000002&(data))>>1)
#define HDMIRX_WRAPPER_INTERRUPT_STATUS_get_hor_err_sts(data)                        ((0x00000002&(data))>>1)
#define HDMIRX_WRAPPER_INTERRUPT_STATUS_polarity_detect_sts_shift                    (0)
#define HDMIRX_WRAPPER_INTERRUPT_STATUS_polarity_detect_sts_mask                     (0x00000001)
#define HDMIRX_WRAPPER_INTERRUPT_STATUS_polarity_detect_sts(data)                    (0x00000001&((data)<<0))
#define HDMIRX_WRAPPER_INTERRUPT_STATUS_polarity_detect_sts_src(data)                ((0x00000001&(data))>>0)
#define HDMIRX_WRAPPER_INTERRUPT_STATUS_get_polarity_detect_sts(data)                ((0x00000001&(data))>>0)


#define HDMIRX_WRAPPER_CONTROL_0                                                     0x98035F20
#define HDMIRX_WRAPPER_CONTROL_0_reg_addr                                            "0xD8035F20"
#define HDMIRX_WRAPPER_CONTROL_0_reg                                                 0xD8035F20
#define set_HDMIRX_WRAPPER_CONTROL_0_reg(data)   (*((volatile unsigned int*) HDMIRX_WRAPPER_CONTROL_0_reg)=data)
#define get_HDMIRX_WRAPPER_CONTROL_0_reg   (*((volatile unsigned int*) HDMIRX_WRAPPER_CONTROL_0_reg))
#define HDMIRX_WRAPPER_CONTROL_0_inst_adr                                            "0x00C8"
#define HDMIRX_WRAPPER_CONTROL_0_inst                                                0x00C8
#define HDMIRX_WRAPPER_CONTROL_0_reg_clken_cbusrx_shift                              (13)
#define HDMIRX_WRAPPER_CONTROL_0_reg_clken_cbusrx_mask                               (0x00002000)
#define HDMIRX_WRAPPER_CONTROL_0_reg_clken_cbusrx(data)                              (0x00002000&((data)<<13))
#define HDMIRX_WRAPPER_CONTROL_0_reg_clken_cbusrx_src(data)                          ((0x00002000&(data))>>13)
#define HDMIRX_WRAPPER_CONTROL_0_get_reg_clken_cbusrx(data)                          ((0x00002000&(data))>>13)
#define HDMIRX_WRAPPER_CONTROL_0_reg_clken_hdmirx_shift                              (12)
#define HDMIRX_WRAPPER_CONTROL_0_reg_clken_hdmirx_mask                               (0x00001000)
#define HDMIRX_WRAPPER_CONTROL_0_reg_clken_hdmirx(data)                              (0x00001000&((data)<<12))
#define HDMIRX_WRAPPER_CONTROL_0_reg_clken_hdmirx_src(data)                          ((0x00001000&(data))>>12)
#define HDMIRX_WRAPPER_CONTROL_0_get_reg_clken_hdmirx(data)                          ((0x00001000&(data))>>12)
#define HDMIRX_WRAPPER_CONTROL_0_fifo_stage_shift                                    (11)
#define HDMIRX_WRAPPER_CONTROL_0_fifo_stage_mask                                     (0x00000800)
#define HDMIRX_WRAPPER_CONTROL_0_fifo_stage(data)                                    (0x00000800&((data)<<11))
#define HDMIRX_WRAPPER_CONTROL_0_fifo_stage_src(data)                                ((0x00000800&(data))>>11)
#define HDMIRX_WRAPPER_CONTROL_0_get_fifo_stage(data)                                ((0x00000800&(data))>>11)
#define HDMIRX_WRAPPER_CONTROL_0_fw_dma_en_shift                                     (10)
#define HDMIRX_WRAPPER_CONTROL_0_fw_dma_en_mask                                      (0x00000400)
#define HDMIRX_WRAPPER_CONTROL_0_fw_dma_en(data)                                     (0x00000400&((data)<<10))
#define HDMIRX_WRAPPER_CONTROL_0_fw_dma_en_src(data)                                 ((0x00000400&(data))>>10)
#define HDMIRX_WRAPPER_CONTROL_0_get_fw_dma_en(data)                                 ((0x00000400&(data))>>10)
#define HDMIRX_WRAPPER_CONTROL_0_polarity_set_en_shift                               (9)
#define HDMIRX_WRAPPER_CONTROL_0_polarity_set_en_mask                                (0x00000200)
#define HDMIRX_WRAPPER_CONTROL_0_polarity_set_en(data)                               (0x00000200&((data)<<9))
#define HDMIRX_WRAPPER_CONTROL_0_polarity_set_en_src(data)                           ((0x00000200&(data))>>9)
#define HDMIRX_WRAPPER_CONTROL_0_get_polarity_set_en(data)                           ((0x00000200&(data))>>9)
#define HDMIRX_WRAPPER_CONTROL_0_polarity_set_shift                                  (8)
#define HDMIRX_WRAPPER_CONTROL_0_polarity_set_mask                                   (0x00000100)
#define HDMIRX_WRAPPER_CONTROL_0_polarity_set(data)                                  (0x00000100&((data)<<8))
#define HDMIRX_WRAPPER_CONTROL_0_polarity_set_src(data)                              ((0x00000100&(data))>>8)
#define HDMIRX_WRAPPER_CONTROL_0_get_polarity_set(data)                              ((0x00000100&(data))>>8)
#define HDMIRX_WRAPPER_CONTROL_0_yuv_fmt_shift                                       (2)
#define HDMIRX_WRAPPER_CONTROL_0_yuv_fmt_mask                                        (0x0000000C)
#define HDMIRX_WRAPPER_CONTROL_0_yuv_fmt(data)                                       (0x0000000C&((data)<<2))
#define HDMIRX_WRAPPER_CONTROL_0_yuv_fmt_src(data)                                   ((0x0000000C&(data))>>2)
#define HDMIRX_WRAPPER_CONTROL_0_get_yuv_fmt(data)                                   ((0x0000000C&(data))>>2)
#define HDMIRX_WRAPPER_CONTROL_0_cbusrx_en_shift                                     (1)
#define HDMIRX_WRAPPER_CONTROL_0_cbusrx_en_mask                                      (0x00000002)
#define HDMIRX_WRAPPER_CONTROL_0_cbusrx_en(data)                                     (0x00000002&((data)<<1))
#define HDMIRX_WRAPPER_CONTROL_0_cbusrx_en_src(data)                                 ((0x00000002&(data))>>1)
#define HDMIRX_WRAPPER_CONTROL_0_get_cbusrx_en(data)                                 ((0x00000002&(data))>>1)
#define HDMIRX_WRAPPER_CONTROL_0_hdmirx_en_shift                                     (0)
#define HDMIRX_WRAPPER_CONTROL_0_hdmirx_en_mask                                      (0x00000001)
#define HDMIRX_WRAPPER_CONTROL_0_hdmirx_en(data)                                     (0x00000001&((data)<<0))
#define HDMIRX_WRAPPER_CONTROL_0_hdmirx_en_src(data)                                 ((0x00000001&(data))>>0)
#define HDMIRX_WRAPPER_CONTROL_0_get_hdmirx_en(data)                                 ((0x00000001&(data))>>0)


#define HDMIRX_WRAPPER_CONTROL_1                                                     0x98035F24
#define HDMIRX_WRAPPER_CONTROL_1_reg_addr                                            "0xD8035F24"
#define HDMIRX_WRAPPER_CONTROL_1_reg                                                 0xD8035F24
#define set_HDMIRX_WRAPPER_CONTROL_1_reg(data)   (*((volatile unsigned int*) HDMIRX_WRAPPER_CONTROL_1_reg)=data)
#define get_HDMIRX_WRAPPER_CONTROL_1_reg   (*((volatile unsigned int*) HDMIRX_WRAPPER_CONTROL_1_reg))
#define HDMIRX_WRAPPER_CONTROL_1_inst_adr                                            "0x00C9"
#define HDMIRX_WRAPPER_CONTROL_1_inst                                                0x00C9
#define HDMIRX_WRAPPER_CONTROL_1_dummy_ctrl_shift                                    (16)
#define HDMIRX_WRAPPER_CONTROL_1_dummy_ctrl_mask                                     (0xFFFF0000)
#define HDMIRX_WRAPPER_CONTROL_1_dummy_ctrl(data)                                    (0xFFFF0000&((data)<<16))
#define HDMIRX_WRAPPER_CONTROL_1_dummy_ctrl_src(data)                                ((0xFFFF0000&(data))>>16)
#define HDMIRX_WRAPPER_CONTROL_1_get_dummy_ctrl(data)                                ((0xFFFF0000&(data))>>16)
#define HDMIRX_WRAPPER_CONTROL_1_hdmirx_vclk_div_sel_shift                           (12)
#define HDMIRX_WRAPPER_CONTROL_1_hdmirx_vclk_div_sel_mask                            (0x00007000)
#define HDMIRX_WRAPPER_CONTROL_1_hdmirx_vclk_div_sel(data)                           (0x00007000&((data)<<12))
#define HDMIRX_WRAPPER_CONTROL_1_hdmirx_vclk_div_sel_src(data)                       ((0x00007000&(data))>>12)
#define HDMIRX_WRAPPER_CONTROL_1_get_hdmirx_vclk_div_sel(data)                       ((0x00007000&(data))>>12)
#define HDMIRX_WRAPPER_CONTROL_1_hdmirx_fdds_div_sel_shift                           (8)
#define HDMIRX_WRAPPER_CONTROL_1_hdmirx_fdds_div_sel_mask                            (0x00000700)
#define HDMIRX_WRAPPER_CONTROL_1_hdmirx_fdds_div_sel(data)                           (0x00000700&((data)<<8))
#define HDMIRX_WRAPPER_CONTROL_1_hdmirx_fdds_div_sel_src(data)                       ((0x00000700&(data))>>8)
#define HDMIRX_WRAPPER_CONTROL_1_get_hdmirx_fdds_div_sel(data)                       ((0x00000700&(data))>>8)
#define HDMIRX_WRAPPER_CONTROL_1_hdmirx_aclk_div_sel_shift                           (4)
#define HDMIRX_WRAPPER_CONTROL_1_hdmirx_aclk_div_sel_mask                            (0x00000070)
#define HDMIRX_WRAPPER_CONTROL_1_hdmirx_aclk_div_sel(data)                           (0x00000070&((data)<<4))
#define HDMIRX_WRAPPER_CONTROL_1_hdmirx_aclk_div_sel_src(data)                       ((0x00000070&(data))>>4)
#define HDMIRX_WRAPPER_CONTROL_1_get_hdmirx_aclk_div_sel(data)                       ((0x00000070&(data))>>4)
#define HDMIRX_WRAPPER_CONTROL_1_debug_sel_shift                                     (2)
#define HDMIRX_WRAPPER_CONTROL_1_debug_sel_mask                                      (0x00000004)
#define HDMIRX_WRAPPER_CONTROL_1_debug_sel(data)                                     (0x00000004&((data)<<2))
#define HDMIRX_WRAPPER_CONTROL_1_debug_sel_src(data)                                 ((0x00000004&(data))>>2)
#define HDMIRX_WRAPPER_CONTROL_1_get_debug_sel(data)                                 ((0x00000004&(data))>>2)
#define HDMIRX_WRAPPER_CONTROL_1_debug_mux_shift                                     (0)
#define HDMIRX_WRAPPER_CONTROL_1_debug_mux_mask                                      (0x00000003)
#define HDMIRX_WRAPPER_CONTROL_1_debug_mux(data)                                     (0x00000003&((data)<<0))
#define HDMIRX_WRAPPER_CONTROL_1_debug_mux_src(data)                                 ((0x00000003&(data))>>0)
#define HDMIRX_WRAPPER_CONTROL_1_get_debug_mux(data)                                 ((0x00000003&(data))>>0)


#define HDMIRX_WRAPPER_DUMMY                                                         0x98035F28
#define HDMIRX_WRAPPER_DUMMY_reg_addr                                                "0xD8035F28"
#define HDMIRX_WRAPPER_DUMMY_reg                                                     0xD8035F28
#define set_HDMIRX_WRAPPER_DUMMY_reg(data)   (*((volatile unsigned int*) HDMIRX_WRAPPER_DUMMY_reg)=data)
#define get_HDMIRX_WRAPPER_DUMMY_reg   (*((volatile unsigned int*) HDMIRX_WRAPPER_DUMMY_reg))
#define HDMIRX_WRAPPER_DUMMY_inst_adr                                                "0x00CA"
#define HDMIRX_WRAPPER_DUMMY_inst                                                    0x00CA
#define HDMIRX_WRAPPER_DUMMY_hdmirx_dummy_reg_shift                                  (0)
#define HDMIRX_WRAPPER_DUMMY_hdmirx_dummy_reg_mask                                   (0xFFFFFFFF)
#define HDMIRX_WRAPPER_DUMMY_hdmirx_dummy_reg(data)                                  (0xFFFFFFFF&((data)<<0))
#define HDMIRX_WRAPPER_DUMMY_hdmirx_dummy_reg_src(data)                              ((0xFFFFFFFF&(data))>>0)
#define HDMIRX_WRAPPER_DUMMY_get_hdmirx_dummy_reg(data)                              ((0xFFFFFFFF&(data))>>0)


#endif
