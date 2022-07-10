/**************************************************************
// Spec Version                  : unknown
// Parser Version                : DVR_Parser_6.11(120105)
// CModelGen Version             : 5.1 2012.01.05
// Naming Rule                   :  Register_Name
// Naming Rule                   : Name
// Parse Option                  : Only Parse _op1
// Parse Address Region          : All Address Region 
// Decode bit number             : 12 bits
// Firmware Header Generate Date : 2014/1/15 17:27:22
***************************************************************/


#ifndef _MIPI_CCS_REG_H_INCLUDED_
#define _MIPI_CCS_REG_H_INCLUDED_
#ifdef  _MIPI_CCS_USE_STRUCT
typedef struct 
{
unsigned int     reserved_0:30;
unsigned int     force_pixel_8bit:1;
unsigned int     hb_swap_mode:1;
}CCS_MISC_CTL;

typedef struct 
{
unsigned int     reserved_0:26;
unsigned int     ssor_op_mode:2;
unsigned int     pclk_stop_mode:1;
unsigned int     pixclk_edge_sel:1;
unsigned int     vsync_polarity:1;
unsigned int     hsync_polarity:1;
}CCS_CONTROL;

typedef struct 
{
unsigned int     reserved_0:24;
unsigned int     thsync0:8;
}CCS_HSYNC_TCTL0;

typedef struct 
{
unsigned int     reserved_0:24;
unsigned int     thsync1:8;
}CCS_HSYNC_TCTL1;

typedef struct 
{
unsigned int     reserved_0:24;
unsigned int     tvsync0:8;
}CCS_VSYNC_TCTL0;

typedef struct 
{
unsigned int     reserved_0:24;
unsigned int     tvsync1:8;
}CCS_VSYNC_TCTL1;

typedef struct 
{
unsigned int     reserved_0:24;
unsigned int     pix_num0:8;
}CCS_HORIZON_NUM0;

typedef struct 
{
unsigned int     reserved_0:24;
unsigned int     pix_num1:8;
}CCS_HORIZON_NUM1;

typedef struct 
{
unsigned int     reserved_0:24;
unsigned int     line_num0:8;
}CCS_VERTICAL_NUM0;

typedef struct 
{
unsigned int     reserved_0:24;
unsigned int     line_num1:8;
}CCS_VERTICAL_NUM1;

typedef struct 
{
unsigned int     reserved_0:24;
unsigned int     ccs_en:1;
unsigned int     idle4fw:1;
unsigned int     reset:1;
unsigned int     reserved_1:1;
unsigned int     jpg_vsync_sel:1;
unsigned int     jpg_en:1;
unsigned int     jpg_mode:2;
}CCS_TRANSFER;

typedef struct 
{
unsigned int     reserved_0:24;
unsigned int     frame_num:8;
}CCS_FRAME_CNT;

typedef struct 
{
unsigned int     reserved_0:28;
unsigned int     frame_vld_num:4;
}CCS_FRAME_VLD_CTL;

typedef struct 
{
unsigned int     reserved_0:31;
unsigned int     pclk_gating_en:1;
}CCS_PCLK_CTL;

#endif

#define CCS_MISC_CTL                                                                 0x1800430C
#define CCS_MISC_CTL_reg_addr                                                        "0xB800430C"
#define CCS_MISC_CTL_reg                                                             0xB800430C
#define set_CCS_MISC_CTL_reg(data)   (*((volatile unsigned int*) CCS_MISC_CTL_reg)=data)
#define get_CCS_MISC_CTL_reg   (*((volatile unsigned int*) CCS_MISC_CTL_reg))
#define CCS_MISC_CTL_inst_adr                                                        "0x00C3"
#define CCS_MISC_CTL_inst                                                            0x00C3
#define CCS_MISC_CTL_force_pixel_8bit_shift                                          (1)
#define CCS_MISC_CTL_force_pixel_8bit_mask                                           (0x00000002)
#define CCS_MISC_CTL_force_pixel_8bit(data)                                          (0x00000002&((data)<<1))
#define CCS_MISC_CTL_force_pixel_8bit_src(data)                                      ((0x00000002&(data))>>1)
#define CCS_MISC_CTL_get_force_pixel_8bit(data)                                      ((0x00000002&(data))>>1)
#define CCS_MISC_CTL_hb_swap_mode_shift                                              (0)
#define CCS_MISC_CTL_hb_swap_mode_mask                                               (0x00000001)
#define CCS_MISC_CTL_hb_swap_mode(data)                                              (0x00000001&((data)<<0))
#define CCS_MISC_CTL_hb_swap_mode_src(data)                                          ((0x00000001&(data))>>0)
#define CCS_MISC_CTL_get_hb_swap_mode(data)                                          ((0x00000001&(data))>>0)


#define CCS_CONTROL                                                                  0x18004334
#define CCS_CONTROL_reg_addr                                                         "0xB8004334"
#define CCS_CONTROL_reg                                                              0xB8004334
#define set_CCS_CONTROL_reg(data)   (*((volatile unsigned int*) CCS_CONTROL_reg)=data)
#define get_CCS_CONTROL_reg   (*((volatile unsigned int*) CCS_CONTROL_reg))
#define CCS_CONTROL_inst_adr                                                         "0x00CD"
#define CCS_CONTROL_inst                                                             0x00CD
#define CCS_CONTROL_ssor_op_mode_shift                                               (4)
#define CCS_CONTROL_ssor_op_mode_mask                                                (0x00000030)
#define CCS_CONTROL_ssor_op_mode(data)                                               (0x00000030&((data)<<4))
#define CCS_CONTROL_ssor_op_mode_src(data)                                           ((0x00000030&(data))>>4)
#define CCS_CONTROL_get_ssor_op_mode(data)                                           ((0x00000030&(data))>>4)
#define CCS_CONTROL_pclk_stop_mode_shift                                             (3)
#define CCS_CONTROL_pclk_stop_mode_mask                                              (0x00000008)
#define CCS_CONTROL_pclk_stop_mode(data)                                             (0x00000008&((data)<<3))
#define CCS_CONTROL_pclk_stop_mode_src(data)                                         ((0x00000008&(data))>>3)
#define CCS_CONTROL_get_pclk_stop_mode(data)                                         ((0x00000008&(data))>>3)
#define CCS_CONTROL_pixclk_edge_sel_shift                                            (2)
#define CCS_CONTROL_pixclk_edge_sel_mask                                             (0x00000004)
#define CCS_CONTROL_pixclk_edge_sel(data)                                            (0x00000004&((data)<<2))
#define CCS_CONTROL_pixclk_edge_sel_src(data)                                        ((0x00000004&(data))>>2)
#define CCS_CONTROL_get_pixclk_edge_sel(data)                                        ((0x00000004&(data))>>2)
#define CCS_CONTROL_vsync_polarity_shift                                             (1)
#define CCS_CONTROL_vsync_polarity_mask                                              (0x00000002)
#define CCS_CONTROL_vsync_polarity(data)                                             (0x00000002&((data)<<1))
#define CCS_CONTROL_vsync_polarity_src(data)                                         ((0x00000002&(data))>>1)
#define CCS_CONTROL_get_vsync_polarity(data)                                         ((0x00000002&(data))>>1)
#define CCS_CONTROL_hsync_polarity_shift                                             (0)
#define CCS_CONTROL_hsync_polarity_mask                                              (0x00000001)
#define CCS_CONTROL_hsync_polarity(data)                                             (0x00000001&((data)<<0))
#define CCS_CONTROL_hsync_polarity_src(data)                                         ((0x00000001&(data))>>0)
#define CCS_CONTROL_get_hsync_polarity(data)                                         ((0x00000001&(data))>>0)


#define CCS_HSYNC_TCTL0                                                              0x18004338
#define CCS_HSYNC_TCTL0_reg_addr                                                     "0xB8004338"
#define CCS_HSYNC_TCTL0_reg                                                          0xB8004338
#define set_CCS_HSYNC_TCTL0_reg(data)   (*((volatile unsigned int*) CCS_HSYNC_TCTL0_reg)=data)
#define get_CCS_HSYNC_TCTL0_reg   (*((volatile unsigned int*) CCS_HSYNC_TCTL0_reg))
#define CCS_HSYNC_TCTL0_inst_adr                                                     "0x00CE"
#define CCS_HSYNC_TCTL0_inst                                                         0x00CE
#define CCS_HSYNC_TCTL0_thsync0_shift                                                (0)
#define CCS_HSYNC_TCTL0_thsync0_mask                                                 (0x000000FF)
#define CCS_HSYNC_TCTL0_thsync0(data)                                                (0x000000FF&((data)<<0))
#define CCS_HSYNC_TCTL0_thsync0_src(data)                                            ((0x000000FF&(data))>>0)
#define CCS_HSYNC_TCTL0_get_thsync0(data)                                            ((0x000000FF&(data))>>0)


#define CCS_HSYNC_TCTL1                                                              0x1800433C
#define CCS_HSYNC_TCTL1_reg_addr                                                     "0xB800433C"
#define CCS_HSYNC_TCTL1_reg                                                          0xB800433C
#define set_CCS_HSYNC_TCTL1_reg(data)   (*((volatile unsigned int*) CCS_HSYNC_TCTL1_reg)=data)
#define get_CCS_HSYNC_TCTL1_reg   (*((volatile unsigned int*) CCS_HSYNC_TCTL1_reg))
#define CCS_HSYNC_TCTL1_inst_adr                                                     "0x00CF"
#define CCS_HSYNC_TCTL1_inst                                                         0x00CF
#define CCS_HSYNC_TCTL1_thsync1_shift                                                (0)
#define CCS_HSYNC_TCTL1_thsync1_mask                                                 (0x000000FF)
#define CCS_HSYNC_TCTL1_thsync1(data)                                                (0x000000FF&((data)<<0))
#define CCS_HSYNC_TCTL1_thsync1_src(data)                                            ((0x000000FF&(data))>>0)
#define CCS_HSYNC_TCTL1_get_thsync1(data)                                            ((0x000000FF&(data))>>0)


#define CCS_VSYNC_TCTL0                                                              0x18004340
#define CCS_VSYNC_TCTL0_reg_addr                                                     "0xB8004340"
#define CCS_VSYNC_TCTL0_reg                                                          0xB8004340
#define set_CCS_VSYNC_TCTL0_reg(data)   (*((volatile unsigned int*) CCS_VSYNC_TCTL0_reg)=data)
#define get_CCS_VSYNC_TCTL0_reg   (*((volatile unsigned int*) CCS_VSYNC_TCTL0_reg))
#define CCS_VSYNC_TCTL0_inst_adr                                                     "0x00D0"
#define CCS_VSYNC_TCTL0_inst                                                         0x00D0
#define CCS_VSYNC_TCTL0_tvsync0_shift                                                (0)
#define CCS_VSYNC_TCTL0_tvsync0_mask                                                 (0x000000FF)
#define CCS_VSYNC_TCTL0_tvsync0(data)                                                (0x000000FF&((data)<<0))
#define CCS_VSYNC_TCTL0_tvsync0_src(data)                                            ((0x000000FF&(data))>>0)
#define CCS_VSYNC_TCTL0_get_tvsync0(data)                                            ((0x000000FF&(data))>>0)


#define CCS_VSYNC_TCTL1                                                              0x18004344
#define CCS_VSYNC_TCTL1_reg_addr                                                     "0xB8004344"
#define CCS_VSYNC_TCTL1_reg                                                          0xB8004344
#define set_CCS_VSYNC_TCTL1_reg(data)   (*((volatile unsigned int*) CCS_VSYNC_TCTL1_reg)=data)
#define get_CCS_VSYNC_TCTL1_reg   (*((volatile unsigned int*) CCS_VSYNC_TCTL1_reg))
#define CCS_VSYNC_TCTL1_inst_adr                                                     "0x00D1"
#define CCS_VSYNC_TCTL1_inst                                                         0x00D1
#define CCS_VSYNC_TCTL1_tvsync1_shift                                                (0)
#define CCS_VSYNC_TCTL1_tvsync1_mask                                                 (0x000000FF)
#define CCS_VSYNC_TCTL1_tvsync1(data)                                                (0x000000FF&((data)<<0))
#define CCS_VSYNC_TCTL1_tvsync1_src(data)                                            ((0x000000FF&(data))>>0)
#define CCS_VSYNC_TCTL1_get_tvsync1(data)                                            ((0x000000FF&(data))>>0)


#define CCS_HORIZON_NUM0                                                             0x18004348
#define CCS_HORIZON_NUM0_reg_addr                                                    "0xB8004348"
#define CCS_HORIZON_NUM0_reg                                                         0xB8004348
#define set_CCS_HORIZON_NUM0_reg(data)   (*((volatile unsigned int*) CCS_HORIZON_NUM0_reg)=data)
#define get_CCS_HORIZON_NUM0_reg   (*((volatile unsigned int*) CCS_HORIZON_NUM0_reg))
#define CCS_HORIZON_NUM0_inst_adr                                                    "0x00D2"
#define CCS_HORIZON_NUM0_inst                                                        0x00D2
#define CCS_HORIZON_NUM0_pix_num0_shift                                              (0)
#define CCS_HORIZON_NUM0_pix_num0_mask                                               (0x000000FF)
#define CCS_HORIZON_NUM0_pix_num0(data)                                              (0x000000FF&((data)<<0))
#define CCS_HORIZON_NUM0_pix_num0_src(data)                                          ((0x000000FF&(data))>>0)
#define CCS_HORIZON_NUM0_get_pix_num0(data)                                          ((0x000000FF&(data))>>0)


#define CCS_HORIZON_NUM1                                                             0x1800434C
#define CCS_HORIZON_NUM1_reg_addr                                                    "0xB800434C"
#define CCS_HORIZON_NUM1_reg                                                         0xB800434C
#define set_CCS_HORIZON_NUM1_reg(data)   (*((volatile unsigned int*) CCS_HORIZON_NUM1_reg)=data)
#define get_CCS_HORIZON_NUM1_reg   (*((volatile unsigned int*) CCS_HORIZON_NUM1_reg))
#define CCS_HORIZON_NUM1_inst_adr                                                    "0x00D3"
#define CCS_HORIZON_NUM1_inst                                                        0x00D3
#define CCS_HORIZON_NUM1_pix_num1_shift                                              (0)
#define CCS_HORIZON_NUM1_pix_num1_mask                                               (0x000000FF)
#define CCS_HORIZON_NUM1_pix_num1(data)                                              (0x000000FF&((data)<<0))
#define CCS_HORIZON_NUM1_pix_num1_src(data)                                          ((0x000000FF&(data))>>0)
#define CCS_HORIZON_NUM1_get_pix_num1(data)                                          ((0x000000FF&(data))>>0)


#define CCS_VERTICAL_NUM0                                                            0x18004350
#define CCS_VERTICAL_NUM0_reg_addr                                                   "0xB8004350"
#define CCS_VERTICAL_NUM0_reg                                                        0xB8004350
#define set_CCS_VERTICAL_NUM0_reg(data)   (*((volatile unsigned int*) CCS_VERTICAL_NUM0_reg)=data)
#define get_CCS_VERTICAL_NUM0_reg   (*((volatile unsigned int*) CCS_VERTICAL_NUM0_reg))
#define CCS_VERTICAL_NUM0_inst_adr                                                   "0x00D4"
#define CCS_VERTICAL_NUM0_inst                                                       0x00D4
#define CCS_VERTICAL_NUM0_line_num0_shift                                            (0)
#define CCS_VERTICAL_NUM0_line_num0_mask                                             (0x000000FF)
#define CCS_VERTICAL_NUM0_line_num0(data)                                            (0x000000FF&((data)<<0))
#define CCS_VERTICAL_NUM0_line_num0_src(data)                                        ((0x000000FF&(data))>>0)
#define CCS_VERTICAL_NUM0_get_line_num0(data)                                        ((0x000000FF&(data))>>0)


#define CCS_VERTICAL_NUM1                                                            0x18004354
#define CCS_VERTICAL_NUM1_reg_addr                                                   "0xB8004354"
#define CCS_VERTICAL_NUM1_reg                                                        0xB8004354
#define set_CCS_VERTICAL_NUM1_reg(data)   (*((volatile unsigned int*) CCS_VERTICAL_NUM1_reg)=data)
#define get_CCS_VERTICAL_NUM1_reg   (*((volatile unsigned int*) CCS_VERTICAL_NUM1_reg))
#define CCS_VERTICAL_NUM1_inst_adr                                                   "0x00D5"
#define CCS_VERTICAL_NUM1_inst                                                       0x00D5
#define CCS_VERTICAL_NUM1_line_num1_shift                                            (0)
#define CCS_VERTICAL_NUM1_line_num1_mask                                             (0x000000FF)
#define CCS_VERTICAL_NUM1_line_num1(data)                                            (0x000000FF&((data)<<0))
#define CCS_VERTICAL_NUM1_line_num1_src(data)                                        ((0x000000FF&(data))>>0)
#define CCS_VERTICAL_NUM1_get_line_num1(data)                                        ((0x000000FF&(data))>>0)


#define CCS_TRANSFER                                                                 0x18004358
#define CCS_TRANSFER_reg_addr                                                        "0xB8004358"
#define CCS_TRANSFER_reg                                                             0xB8004358
#define set_CCS_TRANSFER_reg(data)   (*((volatile unsigned int*) CCS_TRANSFER_reg)=data)
#define get_CCS_TRANSFER_reg   (*((volatile unsigned int*) CCS_TRANSFER_reg))
#define CCS_TRANSFER_inst_adr                                                        "0x00D6"
#define CCS_TRANSFER_inst                                                            0x00D6
#define CCS_TRANSFER_ccs_en_shift                                                    (7)
#define CCS_TRANSFER_ccs_en_mask                                                     (0x00000080)
#define CCS_TRANSFER_ccs_en(data)                                                    (0x00000080&((data)<<7))
#define CCS_TRANSFER_ccs_en_src(data)                                                ((0x00000080&(data))>>7)
#define CCS_TRANSFER_get_ccs_en(data)                                                ((0x00000080&(data))>>7)
#define CCS_TRANSFER_idle4fw_shift                                                   (6)
#define CCS_TRANSFER_idle4fw_mask                                                    (0x00000040)
#define CCS_TRANSFER_idle4fw(data)                                                   (0x00000040&((data)<<6))
#define CCS_TRANSFER_idle4fw_src(data)                                               ((0x00000040&(data))>>6)
#define CCS_TRANSFER_get_idle4fw(data)                                               ((0x00000040&(data))>>6)
#define CCS_TRANSFER_reset_shift                                                     (5)
#define CCS_TRANSFER_reset_mask                                                      (0x00000020)
#define CCS_TRANSFER_reset(data)                                                     (0x00000020&((data)<<5))
#define CCS_TRANSFER_reset_src(data)                                                 ((0x00000020&(data))>>5)
#define CCS_TRANSFER_get_reset(data)                                                 ((0x00000020&(data))>>5)
#define CCS_TRANSFER_jpg_vsync_sel_shift                                             (3)
#define CCS_TRANSFER_jpg_vsync_sel_mask                                              (0x00000008)
#define CCS_TRANSFER_jpg_vsync_sel(data)                                             (0x00000008&((data)<<3))
#define CCS_TRANSFER_jpg_vsync_sel_src(data)                                         ((0x00000008&(data))>>3)
#define CCS_TRANSFER_get_jpg_vsync_sel(data)                                         ((0x00000008&(data))>>3)
#define CCS_TRANSFER_jpg_en_shift                                                    (2)
#define CCS_TRANSFER_jpg_en_mask                                                     (0x00000004)
#define CCS_TRANSFER_jpg_en(data)                                                    (0x00000004&((data)<<2))
#define CCS_TRANSFER_jpg_en_src(data)                                                ((0x00000004&(data))>>2)
#define CCS_TRANSFER_get_jpg_en(data)                                                ((0x00000004&(data))>>2)
#define CCS_TRANSFER_jpg_mode_shift                                                  (0)
#define CCS_TRANSFER_jpg_mode_mask                                                   (0x00000003)
#define CCS_TRANSFER_jpg_mode(data)                                                  (0x00000003&((data)<<0))
#define CCS_TRANSFER_jpg_mode_src(data)                                              ((0x00000003&(data))>>0)
#define CCS_TRANSFER_get_jpg_mode(data)                                              ((0x00000003&(data))>>0)


#define CCS_FRAME_CNT                                                                0x18004364
#define CCS_FRAME_CNT_reg_addr                                                       "0xB8004364"
#define CCS_FRAME_CNT_reg                                                            0xB8004364
#define set_CCS_FRAME_CNT_reg(data)   (*((volatile unsigned int*) CCS_FRAME_CNT_reg)=data)
#define get_CCS_FRAME_CNT_reg   (*((volatile unsigned int*) CCS_FRAME_CNT_reg))
#define CCS_FRAME_CNT_inst_adr                                                       "0x00D9"
#define CCS_FRAME_CNT_inst                                                           0x00D9
#define CCS_FRAME_CNT_frame_num_shift                                                (0)
#define CCS_FRAME_CNT_frame_num_mask                                                 (0x000000FF)
#define CCS_FRAME_CNT_frame_num(data)                                                (0x000000FF&((data)<<0))
#define CCS_FRAME_CNT_frame_num_src(data)                                            ((0x000000FF&(data))>>0)
#define CCS_FRAME_CNT_get_frame_num(data)                                            ((0x000000FF&(data))>>0)


#define CCS_FRAME_VLD_CTL                                                            0x18004374
#define CCS_FRAME_VLD_CTL_reg_addr                                                   "0xB8004374"
#define CCS_FRAME_VLD_CTL_reg                                                        0xB8004374
#define set_CCS_FRAME_VLD_CTL_reg(data)   (*((volatile unsigned int*) CCS_FRAME_VLD_CTL_reg)=data)
#define get_CCS_FRAME_VLD_CTL_reg   (*((volatile unsigned int*) CCS_FRAME_VLD_CTL_reg))
#define CCS_FRAME_VLD_CTL_inst_adr                                                   "0x00DD"
#define CCS_FRAME_VLD_CTL_inst                                                       0x00DD
#define CCS_FRAME_VLD_CTL_frame_vld_num_shift                                        (0)
#define CCS_FRAME_VLD_CTL_frame_vld_num_mask                                         (0x0000000F)
#define CCS_FRAME_VLD_CTL_frame_vld_num(data)                                        (0x0000000F&((data)<<0))
#define CCS_FRAME_VLD_CTL_frame_vld_num_src(data)                                    ((0x0000000F&(data))>>0)
#define CCS_FRAME_VLD_CTL_get_frame_vld_num(data)                                    ((0x0000000F&(data))>>0)


#define CCS_PCLK_CTL                                                                 0x18004378
#define CCS_PCLK_CTL_reg_addr                                                        "0xB8004378"
#define CCS_PCLK_CTL_reg                                                             0xB8004378
#define set_CCS_PCLK_CTL_reg(data)   (*((volatile unsigned int*) CCS_PCLK_CTL_reg)=data)
#define get_CCS_PCLK_CTL_reg   (*((volatile unsigned int*) CCS_PCLK_CTL_reg))
#define CCS_PCLK_CTL_inst_adr                                                        "0x00DE"
#define CCS_PCLK_CTL_inst                                                            0x00DE
#define CCS_PCLK_CTL_pclk_gating_en_shift                                            (0)
#define CCS_PCLK_CTL_pclk_gating_en_mask                                             (0x00000001)
#define CCS_PCLK_CTL_pclk_gating_en(data)                                            (0x00000001&((data)<<0))
#define CCS_PCLK_CTL_pclk_gating_en_src(data)                                        ((0x00000001&(data))>>0)
#define CCS_PCLK_CTL_get_pclk_gating_en(data)                                        ((0x00000001&(data))>>0)


#endif
