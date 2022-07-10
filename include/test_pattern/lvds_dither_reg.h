/**************************************************************
// Spec Version                  : 1.0.6
// Parser Version                : DVR_Parser_6.11(120105)
// CModelGen Version             : 5.1 2012.01.05
// Naming Rule                   :  Register_Name
// Naming Rule                   : Module_Register_Name_reg
// Parse Option                  : Only Parse _op1
// Parse Address Region          : All Address Region 
// Decode bit number             : 12 bits
// Firmware Header Generate Date : 2015/1/21 19:4:9
***************************************************************/


#ifndef _LVDS_DITHER_REG_H_INCLUDED_
#define _LVDS_DITHER_REG_H_INCLUDED_
#ifdef  _LVDS_DITHER_USE_STRUCT
typedef struct 
{
unsigned int     seq_2nd_b_th:8;
unsigned int     seq_2nd_g_th:8;
unsigned int     seq_2nd_r_th:8;
unsigned int     seq_2nd_mode:1;
unsigned int     reserved_0:1;
unsigned int     function_enable:1;
unsigned int     temporal_enable:1;
unsigned int     value_sign:1;
unsigned int     dithering_mode:1;
unsigned int     v_modulation:1;
unsigned int     h_modulation:1;
}DITHERING_CTRL;

typedef struct 
{
unsigned int     seq_r_7:4;
unsigned int     seq_r_6:4;
unsigned int     seq_r_5:4;
unsigned int     seq_r_4:4;
unsigned int     seq_r_3:4;
unsigned int     seq_r_2:4;
unsigned int     seq_r_1:4;
unsigned int     seq_r_0:4;
}DITHERING_SEQ_R_0;

typedef struct 
{
unsigned int     seq_r_15:4;
unsigned int     seq_r_14:4;
unsigned int     seq_r_13:4;
unsigned int     seq_r_12:4;
unsigned int     seq_r_11:4;
unsigned int     seq_r_10:4;
unsigned int     seq_r_9:4;
unsigned int     seq_r_8:4;
}DITHERING_SEQ_R_1;

typedef struct 
{
unsigned int     seq_r_23:4;
unsigned int     seq_r_22:4;
unsigned int     seq_r_21:4;
unsigned int     seq_r_20:4;
unsigned int     seq_r_19:4;
unsigned int     seq_r_18:4;
unsigned int     seq_r_17:4;
unsigned int     seq_r_16:4;
}DITHERING_SEQ_R_2;

typedef struct 
{
unsigned int     seq_r_31:4;
unsigned int     seq_r_30:4;
unsigned int     seq_r_29:4;
unsigned int     seq_r_28:4;
unsigned int     seq_r_27:4;
unsigned int     seq_r_26:4;
unsigned int     seq_r_25:4;
unsigned int     seq_r_24:4;
}DITHERING_SEQ_R_3;

typedef struct 
{
unsigned int     seq_g_7:4;
unsigned int     seq_g_6:4;
unsigned int     seq_g_5:4;
unsigned int     seq_g_4:4;
unsigned int     seq_g_3:4;
unsigned int     seq_g_2:4;
unsigned int     seq_g_1:4;
unsigned int     seq_g_0:4;
}DITHERING_SEQ_G_0;

typedef struct 
{
unsigned int     seq_g_15:4;
unsigned int     seq_g_14:4;
unsigned int     seq_g_13:4;
unsigned int     seq_g_12:4;
unsigned int     seq_g_11:4;
unsigned int     seq_g_10:4;
unsigned int     seq_g_9:4;
unsigned int     seq_g_8:4;
}DITHERING_SEQ_G_1;

typedef struct 
{
unsigned int     seq_g_23:4;
unsigned int     seq_g_22:4;
unsigned int     seq_g_21:4;
unsigned int     seq_g_20:4;
unsigned int     seq_g_19:4;
unsigned int     seq_g_18:4;
unsigned int     seq_g_17:4;
unsigned int     seq_g_16:4;
}DITHERING_SEQ_G_2;

typedef struct 
{
unsigned int     seq_g_31:4;
unsigned int     seq_g_30:4;
unsigned int     seq_g_29:4;
unsigned int     seq_g_28:4;
unsigned int     seq_g_27:4;
unsigned int     seq_g_26:4;
unsigned int     seq_g_25:4;
unsigned int     seq_g_24:4;
}DITHERING_SEQ_G_3;

typedef struct 
{
unsigned int     seq_b_7:4;
unsigned int     seq_b_6:4;
unsigned int     seq_b_5:4;
unsigned int     seq_b_4:4;
unsigned int     seq_b_3:4;
unsigned int     seq_b_2:4;
unsigned int     seq_b_1:4;
unsigned int     seq_b_0:4;
}DITHERING_SEQ_B_0;

typedef struct 
{
unsigned int     seq_b_15:4;
unsigned int     seq_b_14:4;
unsigned int     seq_b_13:4;
unsigned int     seq_b_12:4;
unsigned int     seq_b_11:4;
unsigned int     seq_b_10:4;
unsigned int     seq_b_9:4;
unsigned int     seq_b_8:4;
}DITHERING_SEQ_B_1;

typedef struct 
{
unsigned int     seq_b_23:4;
unsigned int     seq_b_22:4;
unsigned int     seq_b_21:4;
unsigned int     seq_b_20:4;
unsigned int     seq_b_19:4;
unsigned int     seq_b_18:4;
unsigned int     seq_b_17:4;
unsigned int     seq_b_16:4;
}DITHERING_SEQ_B_2;

typedef struct 
{
unsigned int     seq_b_31:4;
unsigned int     seq_b_30:4;
unsigned int     seq_b_29:4;
unsigned int     seq_b_28:4;
unsigned int     seq_b_27:4;
unsigned int     seq_b_26:4;
unsigned int     seq_b_25:4;
unsigned int     seq_b_24:4;
}DITHERING_SEQ_B_3;

typedef struct 
{
unsigned int     reserved_0:8;
unsigned int     tab_r_03:6;
unsigned int     tab_r_02:6;
unsigned int     tab_r_01:6;
unsigned int     tab_r_00:6;
}DITHERING_TAB_R_0;

typedef struct 
{
unsigned int     reserved_0:8;
unsigned int     tab_r_13:6;
unsigned int     tab_r_12:6;
unsigned int     tab_r_11:6;
unsigned int     tab_r_10:6;
}DITHERING_TAB_R_1;

typedef struct 
{
unsigned int     reserved_0:8;
unsigned int     tab_r_23:6;
unsigned int     tab_r_22:6;
unsigned int     tab_r_21:6;
unsigned int     tab_r_20:6;
}DITHERING_TAB_R_2;

typedef struct 
{
unsigned int     reserved_0:8;
unsigned int     tab_r_33:6;
unsigned int     tab_r_32:6;
unsigned int     tab_r_31:6;
unsigned int     tab_r_30:6;
}DITHERING_TAB_R_3;

typedef struct 
{
unsigned int     reserved_0:8;
unsigned int     tab_r_43:6;
unsigned int     tab_r_42:6;
unsigned int     tab_r_41:6;
unsigned int     tab_r_40:6;
}DITHERING_TAB_R_4;

typedef struct 
{
unsigned int     reserved_0:8;
unsigned int     tab_r_53:6;
unsigned int     tab_r_52:6;
unsigned int     tab_r_51:6;
unsigned int     tab_r_50:6;
}DITHERING_TAB_R_5;

typedef struct 
{
unsigned int     reserved_0:8;
unsigned int     tab_r_63:6;
unsigned int     tab_r_62:6;
unsigned int     tab_r_61:6;
unsigned int     tab_r_60:6;
}DITHERING_TAB_R_6;

typedef struct 
{
unsigned int     reserved_0:8;
unsigned int     tab_r_73:6;
unsigned int     tab_r_72:6;
unsigned int     tab_r_71:6;
unsigned int     tab_r_70:6;
}DITHERING_TAB_R_7;

typedef struct 
{
unsigned int     reserved_0:8;
unsigned int     tab_r_83:6;
unsigned int     tab_r_82:6;
unsigned int     tab_r_81:6;
unsigned int     tab_r_80:6;
}DITHERING_TAB_R_8;

typedef struct 
{
unsigned int     reserved_0:8;
unsigned int     tab_r_93:6;
unsigned int     tab_r_92:6;
unsigned int     tab_r_91:6;
unsigned int     tab_r_90:6;
}DITHERING_TAB_R_9;

typedef struct 
{
unsigned int     reserved_0:8;
unsigned int     tab_r_a3:6;
unsigned int     tab_r_a2:6;
unsigned int     tab_r_a1:6;
unsigned int     tab_r_a0:6;
}DITHERING_TAB_R_10;

typedef struct 
{
unsigned int     reserved_0:8;
unsigned int     tab_r_b3:6;
unsigned int     tab_r_b2:6;
unsigned int     tab_r_b1:6;
unsigned int     tab_r_b0:6;
}DITHERING_TAB_R_11;

typedef struct 
{
unsigned int     reserved_0:8;
unsigned int     tab_r_c3:6;
unsigned int     tab_r_c2:6;
unsigned int     tab_r_c1:6;
unsigned int     tab_r_c0:6;
}DITHERING_TAB_R_12;

typedef struct 
{
unsigned int     reserved_0:8;
unsigned int     tab_r_d3:6;
unsigned int     tab_r_d2:6;
unsigned int     tab_r_d1:6;
unsigned int     tab_r_d0:6;
}DITHERING_TAB_R_13;

typedef struct 
{
unsigned int     reserved_0:8;
unsigned int     tab_r_e3:6;
unsigned int     tab_r_e2:6;
unsigned int     tab_r_e1:6;
unsigned int     tab_r_e0:6;
}DITHERING_TAB_R_14;

typedef struct 
{
unsigned int     reserved_0:8;
unsigned int     tab_r_f3:6;
unsigned int     tab_r_f2:6;
unsigned int     tab_r_f1:6;
unsigned int     tab_r_f0:6;
}DITHERING_TAB_R_15;

typedef struct 
{
unsigned int     reserved_0:8;
unsigned int     tab_g_03:6;
unsigned int     tab_g_02:6;
unsigned int     tab_g_01:6;
unsigned int     tab_g_00:6;
}DITHERING_TAB_G_0;

typedef struct 
{
unsigned int     reserved_0:8;
unsigned int     tab_g_13:6;
unsigned int     tab_g_12:6;
unsigned int     tab_g_11:6;
unsigned int     tab_g_10:6;
}DITHERING_TAB_G_1;

typedef struct 
{
unsigned int     reserved_0:8;
unsigned int     tab_g_23:6;
unsigned int     tab_g_22:6;
unsigned int     tab_g_21:6;
unsigned int     tab_g_20:6;
}DITHERING_TAB_G_2;

typedef struct 
{
unsigned int     reserved_0:8;
unsigned int     tab_g_33:6;
unsigned int     tab_g_32:6;
unsigned int     tab_g_31:6;
unsigned int     tab_g_30:6;
}DITHERING_TAB_G_3;

typedef struct 
{
unsigned int     reserved_0:8;
unsigned int     tab_g_43:6;
unsigned int     tab_g_42:6;
unsigned int     tab_g_41:6;
unsigned int     tab_g_40:6;
}DITHERING_TAB_G_4;

typedef struct 
{
unsigned int     reserved_0:8;
unsigned int     tab_g_53:6;
unsigned int     tab_g_52:6;
unsigned int     tab_g_51:6;
unsigned int     tab_g_50:6;
}DITHERING_TAB_G_5;

typedef struct 
{
unsigned int     reserved_0:8;
unsigned int     tab_g_63:6;
unsigned int     tab_g_62:6;
unsigned int     tab_g_61:6;
unsigned int     tab_g_60:6;
}DITHERING_TAB_G_6;

typedef struct 
{
unsigned int     reserved_0:8;
unsigned int     tab_g_73:6;
unsigned int     tab_g_72:6;
unsigned int     tab_g_71:6;
unsigned int     tab_g_70:6;
}DITHERING_TAB_G_7;

typedef struct 
{
unsigned int     reserved_0:8;
unsigned int     tab_g_83:6;
unsigned int     tab_g_82:6;
unsigned int     tab_g_81:6;
unsigned int     tab_g_80:6;
}DITHERING_TAB_G_8;

typedef struct 
{
unsigned int     reserved_0:8;
unsigned int     tab_g_93:6;
unsigned int     tab_g_92:6;
unsigned int     tab_g_91:6;
unsigned int     tab_g_90:6;
}DITHERING_TAB_G_9;

typedef struct 
{
unsigned int     reserved_0:8;
unsigned int     tab_g_a3:6;
unsigned int     tab_g_a2:6;
unsigned int     tab_g_a1:6;
unsigned int     tab_g_a0:6;
}DITHERING_TAB_G_10;

typedef struct 
{
unsigned int     reserved_0:8;
unsigned int     tab_g_b3:6;
unsigned int     tab_g_b2:6;
unsigned int     tab_g_b1:6;
unsigned int     tab_g_b0:6;
}DITHERING_TAB_G_11;

typedef struct 
{
unsigned int     reserved_0:8;
unsigned int     tab_g_c3:6;
unsigned int     tab_g_c2:6;
unsigned int     tab_g_c1:6;
unsigned int     tab_g_c0:6;
}DITHERING_TAB_G_12;

typedef struct 
{
unsigned int     reserved_0:8;
unsigned int     tab_g_d3:6;
unsigned int     tab_g_d2:6;
unsigned int     tab_g_d1:6;
unsigned int     tab_g_d0:6;
}DITHERING_TAB_G_13;

typedef struct 
{
unsigned int     reserved_0:8;
unsigned int     tab_g_e3:6;
unsigned int     tab_g_e2:6;
unsigned int     tab_g_e1:6;
unsigned int     tab_g_e0:6;
}DITHERING_TAB_G_14;

typedef struct 
{
unsigned int     reserved_0:8;
unsigned int     tab_g_f3:6;
unsigned int     tab_g_f2:6;
unsigned int     tab_g_f1:6;
unsigned int     tab_g_f0:6;
}DITHERING_TAB_G_15;

typedef struct 
{
unsigned int     reserved_0:8;
unsigned int     tab_b_03:6;
unsigned int     tab_b_02:6;
unsigned int     tab_b_01:6;
unsigned int     tab_b_00:6;
}DITHERING_TAB_B_0;

typedef struct 
{
unsigned int     reserved_0:8;
unsigned int     tab_b_13:6;
unsigned int     tab_b_12:6;
unsigned int     tab_b_11:6;
unsigned int     tab_b_10:6;
}DITHERING_TAB_B_1;

typedef struct 
{
unsigned int     reserved_0:8;
unsigned int     tab_b_23:6;
unsigned int     tab_b_22:6;
unsigned int     tab_b_21:6;
unsigned int     tab_b_20:6;
}DITHERING_TAB_B_2;

typedef struct 
{
unsigned int     reserved_0:8;
unsigned int     tab_b_33:6;
unsigned int     tab_b_32:6;
unsigned int     tab_b_31:6;
unsigned int     tab_b_30:6;
}DITHERING_TAB_B_3;

typedef struct 
{
unsigned int     reserved_0:8;
unsigned int     tab_b_43:6;
unsigned int     tab_b_42:6;
unsigned int     tab_b_41:6;
unsigned int     tab_b_40:6;
}DITHERING_TAB_B_4;

typedef struct 
{
unsigned int     reserved_0:8;
unsigned int     tab_b_53:6;
unsigned int     tab_b_52:6;
unsigned int     tab_b_51:6;
unsigned int     tab_b_50:6;
}DITHERING_TAB_B_5;

typedef struct 
{
unsigned int     reserved_0:8;
unsigned int     tab_b_63:6;
unsigned int     tab_b_62:6;
unsigned int     tab_b_61:6;
unsigned int     tab_b_60:6;
}DITHERING_TAB_B_6;

typedef struct 
{
unsigned int     reserved_0:8;
unsigned int     tab_b_73:6;
unsigned int     tab_b_72:6;
unsigned int     tab_b_71:6;
unsigned int     tab_b_70:6;
}DITHERING_TAB_B_7;

typedef struct 
{
unsigned int     reserved_0:8;
unsigned int     tab_b_83:6;
unsigned int     tab_b_82:6;
unsigned int     tab_b_81:6;
unsigned int     tab_b_80:6;
}DITHERING_TAB_B_8;

typedef struct 
{
unsigned int     reserved_0:8;
unsigned int     tab_b_93:6;
unsigned int     tab_b_92:6;
unsigned int     tab_b_91:6;
unsigned int     tab_b_90:6;
}DITHERING_TAB_B_9;

typedef struct 
{
unsigned int     reserved_0:8;
unsigned int     tab_b_a3:6;
unsigned int     tab_b_a2:6;
unsigned int     tab_b_a1:6;
unsigned int     tab_b_a0:6;
}DITHERING_TAB_B_10;

typedef struct 
{
unsigned int     reserved_0:8;
unsigned int     tab_b_b3:6;
unsigned int     tab_b_b2:6;
unsigned int     tab_b_b1:6;
unsigned int     tab_b_b0:6;
}DITHERING_TAB_B_11;

typedef struct 
{
unsigned int     reserved_0:8;
unsigned int     tab_b_c3:6;
unsigned int     tab_b_c2:6;
unsigned int     tab_b_c1:6;
unsigned int     tab_b_c0:6;
}DITHERING_TAB_B_12;

typedef struct 
{
unsigned int     reserved_0:8;
unsigned int     tab_b_d3:6;
unsigned int     tab_b_d2:6;
unsigned int     tab_b_d1:6;
unsigned int     tab_b_d0:6;
}DITHERING_TAB_B_13;

typedef struct 
{
unsigned int     reserved_0:8;
unsigned int     tab_b_e3:6;
unsigned int     tab_b_e2:6;
unsigned int     tab_b_e1:6;
unsigned int     tab_b_e0:6;
}DITHERING_TAB_B_14;

typedef struct 
{
unsigned int     reserved_0:8;
unsigned int     tab_b_f3:6;
unsigned int     tab_b_f2:6;
unsigned int     tab_b_f1:6;
unsigned int     tab_b_f0:6;
}DITHERING_TAB_B_15;

typedef struct 
{
unsigned int     temp_offset_15:2;
unsigned int     temp_offset_14:2;
unsigned int     temp_offset_13:2;
unsigned int     temp_offset_12:2;
unsigned int     temp_offset_11:2;
unsigned int     temp_offset_10:2;
unsigned int     temp_offset_9:2;
unsigned int     temp_offset_8:2;
unsigned int     temp_offset_7:2;
unsigned int     temp_offset_6:2;
unsigned int     temp_offset_5:2;
unsigned int     temp_offset_4:2;
unsigned int     temp_offset_3:2;
unsigned int     temp_offset_2:2;
unsigned int     temp_offset_1:2;
unsigned int     temp_offset_0:2;
}TEMPORAL_OFFSET;

typedef struct 
{
unsigned int     seq_r_7:4;
unsigned int     seq_r_6:4;
unsigned int     seq_r_5:4;
unsigned int     seq_r_4:4;
unsigned int     seq_r_3:4;
unsigned int     seq_r_2:4;
unsigned int     seq_r_1:4;
unsigned int     seq_r_0:4;
}DITHERING_2ND_SEQ_R_0;

typedef struct 
{
unsigned int     seq_r_15:4;
unsigned int     seq_r_14:4;
unsigned int     seq_r_13:4;
unsigned int     seq_r_12:4;
unsigned int     seq_r_11:4;
unsigned int     seq_r_10:4;
unsigned int     seq_r_9:4;
unsigned int     seq_r_8:4;
}DITHERING_2ND_SEQ_R_1;

typedef struct 
{
unsigned int     seq_r_23:4;
unsigned int     seq_r_22:4;
unsigned int     seq_r_21:4;
unsigned int     seq_r_20:4;
unsigned int     seq_r_19:4;
unsigned int     seq_r_18:4;
unsigned int     seq_r_17:4;
unsigned int     seq_r_16:4;
}DITHERING_2ND_SEQ_R_2;

typedef struct 
{
unsigned int     seq_r_31:4;
unsigned int     seq_r_30:4;
unsigned int     seq_r_29:4;
unsigned int     seq_r_28:4;
unsigned int     seq_r_27:4;
unsigned int     seq_r_26:4;
unsigned int     seq_r_25:4;
unsigned int     seq_r_24:4;
}DITHERING_2ND_SEQ_R_3;

typedef struct 
{
unsigned int     seq_g_7:4;
unsigned int     seq_g_6:4;
unsigned int     seq_g_5:4;
unsigned int     seq_g_4:4;
unsigned int     seq_g_3:4;
unsigned int     seq_g_2:4;
unsigned int     seq_g_1:4;
unsigned int     seq_g_0:4;
}DITHERING_2ND_SEQ_G_0;

typedef struct 
{
unsigned int     seq_g_15:4;
unsigned int     seq_g_14:4;
unsigned int     seq_g_13:4;
unsigned int     seq_g_12:4;
unsigned int     seq_g_11:4;
unsigned int     seq_g_10:4;
unsigned int     seq_g_9:4;
unsigned int     seq_g_8:4;
}DITHERING_2ND_SEQ_G_1;

typedef struct 
{
unsigned int     seq_g_23:4;
unsigned int     seq_g_22:4;
unsigned int     seq_g_21:4;
unsigned int     seq_g_20:4;
unsigned int     seq_g_19:4;
unsigned int     seq_g_18:4;
unsigned int     seq_g_17:4;
unsigned int     seq_g_16:4;
}DITHERING_2ND_SEQ_G_2;

typedef struct 
{
unsigned int     seq_g_31:4;
unsigned int     seq_g_30:4;
unsigned int     seq_g_29:4;
unsigned int     seq_g_28:4;
unsigned int     seq_g_27:4;
unsigned int     seq_g_26:4;
unsigned int     seq_g_25:4;
unsigned int     seq_g_24:4;
}DITHERING_2ND_SEQ_G_3;

typedef struct 
{
unsigned int     seq_b_7:4;
unsigned int     seq_b_6:4;
unsigned int     seq_b_5:4;
unsigned int     seq_b_4:4;
unsigned int     seq_b_3:4;
unsigned int     seq_b_2:4;
unsigned int     seq_b_1:4;
unsigned int     seq_b_0:4;
}DITHERING_2ND_SEQ_B_0;

typedef struct 
{
unsigned int     seq_b_15:4;
unsigned int     seq_b_14:4;
unsigned int     seq_b_13:4;
unsigned int     seq_b_12:4;
unsigned int     seq_b_11:4;
unsigned int     seq_b_10:4;
unsigned int     seq_b_9:4;
unsigned int     seq_b_8:4;
}DITHERING_2ND_SEQ_B_1;

typedef struct 
{
unsigned int     seq_b_23:4;
unsigned int     seq_b_22:4;
unsigned int     seq_b_21:4;
unsigned int     seq_b_20:4;
unsigned int     seq_b_19:4;
unsigned int     seq_b_18:4;
unsigned int     seq_b_17:4;
unsigned int     seq_b_16:4;
}DITHERING_2ND_SEQ_B_2;

typedef struct 
{
unsigned int     seq_b_31:4;
unsigned int     seq_b_30:4;
unsigned int     seq_b_29:4;
unsigned int     seq_b_28:4;
unsigned int     seq_b_27:4;
unsigned int     seq_b_26:4;
unsigned int     seq_b_25:4;
unsigned int     seq_b_24:4;
}DITHERING_2ND_SEQ_B_3;

#endif

#define DITHERING_CTRL                                                               0x980098b4
#define DITHERING_CTRL_reg_addr                                                      "0xD80098B4"
#define DITHERING_CTRL_reg                                                           0xD80098B4
#define set_DITHERING_CTRL_reg(data)   (*((volatile unsigned int*) DITHERING_CTRL_reg)=data)
#define get_DITHERING_CTRL_reg   (*((volatile unsigned int*) DITHERING_CTRL_reg))
#define DITHERING_CTRL_inst_adr                                                      "0x002D"
#define DITHERING_CTRL_inst                                                          0x002D
#define DITHERING_CTRL_seq_2nd_b_th_shift                                            (24)
#define DITHERING_CTRL_seq_2nd_b_th_mask                                             (0xFF000000)
#define DITHERING_CTRL_seq_2nd_b_th(data)                                            (0xFF000000&((data)<<24))
#define DITHERING_CTRL_seq_2nd_b_th_src(data)                                        ((0xFF000000&(data))>>24)
#define DITHERING_CTRL_get_seq_2nd_b_th(data)                                        ((0xFF000000&(data))>>24)
#define DITHERING_CTRL_seq_2nd_g_th_shift                                            (16)
#define DITHERING_CTRL_seq_2nd_g_th_mask                                             (0x00FF0000)
#define DITHERING_CTRL_seq_2nd_g_th(data)                                            (0x00FF0000&((data)<<16))
#define DITHERING_CTRL_seq_2nd_g_th_src(data)                                        ((0x00FF0000&(data))>>16)
#define DITHERING_CTRL_get_seq_2nd_g_th(data)                                        ((0x00FF0000&(data))>>16)
#define DITHERING_CTRL_seq_2nd_r_th_shift                                            (8)
#define DITHERING_CTRL_seq_2nd_r_th_mask                                             (0x0000FF00)
#define DITHERING_CTRL_seq_2nd_r_th(data)                                            (0x0000FF00&((data)<<8))
#define DITHERING_CTRL_seq_2nd_r_th_src(data)                                        ((0x0000FF00&(data))>>8)
#define DITHERING_CTRL_get_seq_2nd_r_th(data)                                        ((0x0000FF00&(data))>>8)
#define DITHERING_CTRL_seq_2nd_mode_shift                                            (7)
#define DITHERING_CTRL_seq_2nd_mode_mask                                             (0x00000080)
#define DITHERING_CTRL_seq_2nd_mode(data)                                            (0x00000080&((data)<<7))
#define DITHERING_CTRL_seq_2nd_mode_src(data)                                        ((0x00000080&(data))>>7)
#define DITHERING_CTRL_get_seq_2nd_mode(data)                                        ((0x00000080&(data))>>7)
#define DITHERING_CTRL_function_enable_shift                                         (5)
#define DITHERING_CTRL_function_enable_mask                                          (0x00000020)
#define DITHERING_CTRL_function_enable(data)                                         (0x00000020&((data)<<5))
#define DITHERING_CTRL_function_enable_src(data)                                     ((0x00000020&(data))>>5)
#define DITHERING_CTRL_get_function_enable(data)                                     ((0x00000020&(data))>>5)
#define DITHERING_CTRL_temporal_enable_shift                                         (4)
#define DITHERING_CTRL_temporal_enable_mask                                          (0x00000010)
#define DITHERING_CTRL_temporal_enable(data)                                         (0x00000010&((data)<<4))
#define DITHERING_CTRL_temporal_enable_src(data)                                     ((0x00000010&(data))>>4)
#define DITHERING_CTRL_get_temporal_enable(data)                                     ((0x00000010&(data))>>4)
#define DITHERING_CTRL_value_sign_shift                                              (3)
#define DITHERING_CTRL_value_sign_mask                                               (0x00000008)
#define DITHERING_CTRL_value_sign(data)                                              (0x00000008&((data)<<3))
#define DITHERING_CTRL_value_sign_src(data)                                          ((0x00000008&(data))>>3)
#define DITHERING_CTRL_get_value_sign(data)                                          ((0x00000008&(data))>>3)
#define DITHERING_CTRL_dithering_mode_shift                                          (2)
#define DITHERING_CTRL_dithering_mode_mask                                           (0x00000004)
#define DITHERING_CTRL_dithering_mode(data)                                          (0x00000004&((data)<<2))
#define DITHERING_CTRL_dithering_mode_src(data)                                      ((0x00000004&(data))>>2)
#define DITHERING_CTRL_get_dithering_mode(data)                                      ((0x00000004&(data))>>2)
#define DITHERING_CTRL_v_modulation_shift                                            (1)
#define DITHERING_CTRL_v_modulation_mask                                             (0x00000002)
#define DITHERING_CTRL_v_modulation(data)                                            (0x00000002&((data)<<1))
#define DITHERING_CTRL_v_modulation_src(data)                                        ((0x00000002&(data))>>1)
#define DITHERING_CTRL_get_v_modulation(data)                                        ((0x00000002&(data))>>1)
#define DITHERING_CTRL_h_modulation_shift                                            (0)
#define DITHERING_CTRL_h_modulation_mask                                             (0x00000001)
#define DITHERING_CTRL_h_modulation(data)                                            (0x00000001&((data)<<0))
#define DITHERING_CTRL_h_modulation_src(data)                                        ((0x00000001&(data))>>0)
#define DITHERING_CTRL_get_h_modulation(data)                                        ((0x00000001&(data))>>0)


#define DITHERING_SEQ_R_0                                                            0x980098b8
#define DITHERING_SEQ_R_0_reg_addr                                                   "0xD80098B8"
#define DITHERING_SEQ_R_0_reg                                                        0xD80098B8
#define set_DITHERING_SEQ_R_0_reg(data)   (*((volatile unsigned int*) DITHERING_SEQ_R_0_reg)=data)
#define get_DITHERING_SEQ_R_0_reg   (*((volatile unsigned int*) DITHERING_SEQ_R_0_reg))
#define DITHERING_SEQ_R_0_inst_adr                                                   "0x002E"
#define DITHERING_SEQ_R_0_inst                                                       0x002E
#define DITHERING_SEQ_R_0_seq_r_7_shift                                              (28)
#define DITHERING_SEQ_R_0_seq_r_7_mask                                               (0xF0000000)
#define DITHERING_SEQ_R_0_seq_r_7(data)                                              (0xF0000000&((data)<<28))
#define DITHERING_SEQ_R_0_seq_r_7_src(data)                                          ((0xF0000000&(data))>>28)
#define DITHERING_SEQ_R_0_get_seq_r_7(data)                                          ((0xF0000000&(data))>>28)
#define DITHERING_SEQ_R_0_seq_r_6_shift                                              (24)
#define DITHERING_SEQ_R_0_seq_r_6_mask                                               (0x0F000000)
#define DITHERING_SEQ_R_0_seq_r_6(data)                                              (0x0F000000&((data)<<24))
#define DITHERING_SEQ_R_0_seq_r_6_src(data)                                          ((0x0F000000&(data))>>24)
#define DITHERING_SEQ_R_0_get_seq_r_6(data)                                          ((0x0F000000&(data))>>24)
#define DITHERING_SEQ_R_0_seq_r_5_shift                                              (20)
#define DITHERING_SEQ_R_0_seq_r_5_mask                                               (0x00F00000)
#define DITHERING_SEQ_R_0_seq_r_5(data)                                              (0x00F00000&((data)<<20))
#define DITHERING_SEQ_R_0_seq_r_5_src(data)                                          ((0x00F00000&(data))>>20)
#define DITHERING_SEQ_R_0_get_seq_r_5(data)                                          ((0x00F00000&(data))>>20)
#define DITHERING_SEQ_R_0_seq_r_4_shift                                              (16)
#define DITHERING_SEQ_R_0_seq_r_4_mask                                               (0x000F0000)
#define DITHERING_SEQ_R_0_seq_r_4(data)                                              (0x000F0000&((data)<<16))
#define DITHERING_SEQ_R_0_seq_r_4_src(data)                                          ((0x000F0000&(data))>>16)
#define DITHERING_SEQ_R_0_get_seq_r_4(data)                                          ((0x000F0000&(data))>>16)
#define DITHERING_SEQ_R_0_seq_r_3_shift                                              (12)
#define DITHERING_SEQ_R_0_seq_r_3_mask                                               (0x0000F000)
#define DITHERING_SEQ_R_0_seq_r_3(data)                                              (0x0000F000&((data)<<12))
#define DITHERING_SEQ_R_0_seq_r_3_src(data)                                          ((0x0000F000&(data))>>12)
#define DITHERING_SEQ_R_0_get_seq_r_3(data)                                          ((0x0000F000&(data))>>12)
#define DITHERING_SEQ_R_0_seq_r_2_shift                                              (8)
#define DITHERING_SEQ_R_0_seq_r_2_mask                                               (0x00000F00)
#define DITHERING_SEQ_R_0_seq_r_2(data)                                              (0x00000F00&((data)<<8))
#define DITHERING_SEQ_R_0_seq_r_2_src(data)                                          ((0x00000F00&(data))>>8)
#define DITHERING_SEQ_R_0_get_seq_r_2(data)                                          ((0x00000F00&(data))>>8)
#define DITHERING_SEQ_R_0_seq_r_1_shift                                              (4)
#define DITHERING_SEQ_R_0_seq_r_1_mask                                               (0x000000F0)
#define DITHERING_SEQ_R_0_seq_r_1(data)                                              (0x000000F0&((data)<<4))
#define DITHERING_SEQ_R_0_seq_r_1_src(data)                                          ((0x000000F0&(data))>>4)
#define DITHERING_SEQ_R_0_get_seq_r_1(data)                                          ((0x000000F0&(data))>>4)
#define DITHERING_SEQ_R_0_seq_r_0_shift                                              (0)
#define DITHERING_SEQ_R_0_seq_r_0_mask                                               (0x0000000F)
#define DITHERING_SEQ_R_0_seq_r_0(data)                                              (0x0000000F&((data)<<0))
#define DITHERING_SEQ_R_0_seq_r_0_src(data)                                          ((0x0000000F&(data))>>0)
#define DITHERING_SEQ_R_0_get_seq_r_0(data)                                          ((0x0000000F&(data))>>0)


#define DITHERING_SEQ_R_1                                                            0x980098bc
#define DITHERING_SEQ_R_1_reg_addr                                                   "0xD80098BC"
#define DITHERING_SEQ_R_1_reg                                                        0xD80098BC
#define set_DITHERING_SEQ_R_1_reg(data)   (*((volatile unsigned int*) DITHERING_SEQ_R_1_reg)=data)
#define get_DITHERING_SEQ_R_1_reg   (*((volatile unsigned int*) DITHERING_SEQ_R_1_reg))
#define DITHERING_SEQ_R_1_inst_adr                                                   "0x002F"
#define DITHERING_SEQ_R_1_inst                                                       0x002F
#define DITHERING_SEQ_R_1_seq_r_15_shift                                             (28)
#define DITHERING_SEQ_R_1_seq_r_15_mask                                              (0xF0000000)
#define DITHERING_SEQ_R_1_seq_r_15(data)                                             (0xF0000000&((data)<<28))
#define DITHERING_SEQ_R_1_seq_r_15_src(data)                                         ((0xF0000000&(data))>>28)
#define DITHERING_SEQ_R_1_get_seq_r_15(data)                                         ((0xF0000000&(data))>>28)
#define DITHERING_SEQ_R_1_seq_r_14_shift                                             (24)
#define DITHERING_SEQ_R_1_seq_r_14_mask                                              (0x0F000000)
#define DITHERING_SEQ_R_1_seq_r_14(data)                                             (0x0F000000&((data)<<24))
#define DITHERING_SEQ_R_1_seq_r_14_src(data)                                         ((0x0F000000&(data))>>24)
#define DITHERING_SEQ_R_1_get_seq_r_14(data)                                         ((0x0F000000&(data))>>24)
#define DITHERING_SEQ_R_1_seq_r_13_shift                                             (20)
#define DITHERING_SEQ_R_1_seq_r_13_mask                                              (0x00F00000)
#define DITHERING_SEQ_R_1_seq_r_13(data)                                             (0x00F00000&((data)<<20))
#define DITHERING_SEQ_R_1_seq_r_13_src(data)                                         ((0x00F00000&(data))>>20)
#define DITHERING_SEQ_R_1_get_seq_r_13(data)                                         ((0x00F00000&(data))>>20)
#define DITHERING_SEQ_R_1_seq_r_12_shift                                             (16)
#define DITHERING_SEQ_R_1_seq_r_12_mask                                              (0x000F0000)
#define DITHERING_SEQ_R_1_seq_r_12(data)                                             (0x000F0000&((data)<<16))
#define DITHERING_SEQ_R_1_seq_r_12_src(data)                                         ((0x000F0000&(data))>>16)
#define DITHERING_SEQ_R_1_get_seq_r_12(data)                                         ((0x000F0000&(data))>>16)
#define DITHERING_SEQ_R_1_seq_r_11_shift                                             (12)
#define DITHERING_SEQ_R_1_seq_r_11_mask                                              (0x0000F000)
#define DITHERING_SEQ_R_1_seq_r_11(data)                                             (0x0000F000&((data)<<12))
#define DITHERING_SEQ_R_1_seq_r_11_src(data)                                         ((0x0000F000&(data))>>12)
#define DITHERING_SEQ_R_1_get_seq_r_11(data)                                         ((0x0000F000&(data))>>12)
#define DITHERING_SEQ_R_1_seq_r_10_shift                                             (8)
#define DITHERING_SEQ_R_1_seq_r_10_mask                                              (0x00000F00)
#define DITHERING_SEQ_R_1_seq_r_10(data)                                             (0x00000F00&((data)<<8))
#define DITHERING_SEQ_R_1_seq_r_10_src(data)                                         ((0x00000F00&(data))>>8)
#define DITHERING_SEQ_R_1_get_seq_r_10(data)                                         ((0x00000F00&(data))>>8)
#define DITHERING_SEQ_R_1_seq_r_9_shift                                              (4)
#define DITHERING_SEQ_R_1_seq_r_9_mask                                               (0x000000F0)
#define DITHERING_SEQ_R_1_seq_r_9(data)                                              (0x000000F0&((data)<<4))
#define DITHERING_SEQ_R_1_seq_r_9_src(data)                                          ((0x000000F0&(data))>>4)
#define DITHERING_SEQ_R_1_get_seq_r_9(data)                                          ((0x000000F0&(data))>>4)
#define DITHERING_SEQ_R_1_seq_r_8_shift                                              (0)
#define DITHERING_SEQ_R_1_seq_r_8_mask                                               (0x0000000F)
#define DITHERING_SEQ_R_1_seq_r_8(data)                                              (0x0000000F&((data)<<0))
#define DITHERING_SEQ_R_1_seq_r_8_src(data)                                          ((0x0000000F&(data))>>0)
#define DITHERING_SEQ_R_1_get_seq_r_8(data)                                          ((0x0000000F&(data))>>0)


#define DITHERING_SEQ_R_2                                                            0x980098c0
#define DITHERING_SEQ_R_2_reg_addr                                                   "0xD80098C0"
#define DITHERING_SEQ_R_2_reg                                                        0xD80098C0
#define set_DITHERING_SEQ_R_2_reg(data)   (*((volatile unsigned int*) DITHERING_SEQ_R_2_reg)=data)
#define get_DITHERING_SEQ_R_2_reg   (*((volatile unsigned int*) DITHERING_SEQ_R_2_reg))
#define DITHERING_SEQ_R_2_inst_adr                                                   "0x0030"
#define DITHERING_SEQ_R_2_inst                                                       0x0030
#define DITHERING_SEQ_R_2_seq_r_23_shift                                             (28)
#define DITHERING_SEQ_R_2_seq_r_23_mask                                              (0xF0000000)
#define DITHERING_SEQ_R_2_seq_r_23(data)                                             (0xF0000000&((data)<<28))
#define DITHERING_SEQ_R_2_seq_r_23_src(data)                                         ((0xF0000000&(data))>>28)
#define DITHERING_SEQ_R_2_get_seq_r_23(data)                                         ((0xF0000000&(data))>>28)
#define DITHERING_SEQ_R_2_seq_r_22_shift                                             (24)
#define DITHERING_SEQ_R_2_seq_r_22_mask                                              (0x0F000000)
#define DITHERING_SEQ_R_2_seq_r_22(data)                                             (0x0F000000&((data)<<24))
#define DITHERING_SEQ_R_2_seq_r_22_src(data)                                         ((0x0F000000&(data))>>24)
#define DITHERING_SEQ_R_2_get_seq_r_22(data)                                         ((0x0F000000&(data))>>24)
#define DITHERING_SEQ_R_2_seq_r_21_shift                                             (20)
#define DITHERING_SEQ_R_2_seq_r_21_mask                                              (0x00F00000)
#define DITHERING_SEQ_R_2_seq_r_21(data)                                             (0x00F00000&((data)<<20))
#define DITHERING_SEQ_R_2_seq_r_21_src(data)                                         ((0x00F00000&(data))>>20)
#define DITHERING_SEQ_R_2_get_seq_r_21(data)                                         ((0x00F00000&(data))>>20)
#define DITHERING_SEQ_R_2_seq_r_20_shift                                             (16)
#define DITHERING_SEQ_R_2_seq_r_20_mask                                              (0x000F0000)
#define DITHERING_SEQ_R_2_seq_r_20(data)                                             (0x000F0000&((data)<<16))
#define DITHERING_SEQ_R_2_seq_r_20_src(data)                                         ((0x000F0000&(data))>>16)
#define DITHERING_SEQ_R_2_get_seq_r_20(data)                                         ((0x000F0000&(data))>>16)
#define DITHERING_SEQ_R_2_seq_r_19_shift                                             (12)
#define DITHERING_SEQ_R_2_seq_r_19_mask                                              (0x0000F000)
#define DITHERING_SEQ_R_2_seq_r_19(data)                                             (0x0000F000&((data)<<12))
#define DITHERING_SEQ_R_2_seq_r_19_src(data)                                         ((0x0000F000&(data))>>12)
#define DITHERING_SEQ_R_2_get_seq_r_19(data)                                         ((0x0000F000&(data))>>12)
#define DITHERING_SEQ_R_2_seq_r_18_shift                                             (8)
#define DITHERING_SEQ_R_2_seq_r_18_mask                                              (0x00000F00)
#define DITHERING_SEQ_R_2_seq_r_18(data)                                             (0x00000F00&((data)<<8))
#define DITHERING_SEQ_R_2_seq_r_18_src(data)                                         ((0x00000F00&(data))>>8)
#define DITHERING_SEQ_R_2_get_seq_r_18(data)                                         ((0x00000F00&(data))>>8)
#define DITHERING_SEQ_R_2_seq_r_17_shift                                             (4)
#define DITHERING_SEQ_R_2_seq_r_17_mask                                              (0x000000F0)
#define DITHERING_SEQ_R_2_seq_r_17(data)                                             (0x000000F0&((data)<<4))
#define DITHERING_SEQ_R_2_seq_r_17_src(data)                                         ((0x000000F0&(data))>>4)
#define DITHERING_SEQ_R_2_get_seq_r_17(data)                                         ((0x000000F0&(data))>>4)
#define DITHERING_SEQ_R_2_seq_r_16_shift                                             (0)
#define DITHERING_SEQ_R_2_seq_r_16_mask                                              (0x0000000F)
#define DITHERING_SEQ_R_2_seq_r_16(data)                                             (0x0000000F&((data)<<0))
#define DITHERING_SEQ_R_2_seq_r_16_src(data)                                         ((0x0000000F&(data))>>0)
#define DITHERING_SEQ_R_2_get_seq_r_16(data)                                         ((0x0000000F&(data))>>0)


#define DITHERING_SEQ_R_3                                                            0x980098c4
#define DITHERING_SEQ_R_3_reg_addr                                                   "0xD80098C4"
#define DITHERING_SEQ_R_3_reg                                                        0xD80098C4
#define set_DITHERING_SEQ_R_3_reg(data)   (*((volatile unsigned int*) DITHERING_SEQ_R_3_reg)=data)
#define get_DITHERING_SEQ_R_3_reg   (*((volatile unsigned int*) DITHERING_SEQ_R_3_reg))
#define DITHERING_SEQ_R_3_inst_adr                                                   "0x0031"
#define DITHERING_SEQ_R_3_inst                                                       0x0031
#define DITHERING_SEQ_R_3_seq_r_31_shift                                             (28)
#define DITHERING_SEQ_R_3_seq_r_31_mask                                              (0xF0000000)
#define DITHERING_SEQ_R_3_seq_r_31(data)                                             (0xF0000000&((data)<<28))
#define DITHERING_SEQ_R_3_seq_r_31_src(data)                                         ((0xF0000000&(data))>>28)
#define DITHERING_SEQ_R_3_get_seq_r_31(data)                                         ((0xF0000000&(data))>>28)
#define DITHERING_SEQ_R_3_seq_r_30_shift                                             (24)
#define DITHERING_SEQ_R_3_seq_r_30_mask                                              (0x0F000000)
#define DITHERING_SEQ_R_3_seq_r_30(data)                                             (0x0F000000&((data)<<24))
#define DITHERING_SEQ_R_3_seq_r_30_src(data)                                         ((0x0F000000&(data))>>24)
#define DITHERING_SEQ_R_3_get_seq_r_30(data)                                         ((0x0F000000&(data))>>24)
#define DITHERING_SEQ_R_3_seq_r_29_shift                                             (20)
#define DITHERING_SEQ_R_3_seq_r_29_mask                                              (0x00F00000)
#define DITHERING_SEQ_R_3_seq_r_29(data)                                             (0x00F00000&((data)<<20))
#define DITHERING_SEQ_R_3_seq_r_29_src(data)                                         ((0x00F00000&(data))>>20)
#define DITHERING_SEQ_R_3_get_seq_r_29(data)                                         ((0x00F00000&(data))>>20)
#define DITHERING_SEQ_R_3_seq_r_28_shift                                             (16)
#define DITHERING_SEQ_R_3_seq_r_28_mask                                              (0x000F0000)
#define DITHERING_SEQ_R_3_seq_r_28(data)                                             (0x000F0000&((data)<<16))
#define DITHERING_SEQ_R_3_seq_r_28_src(data)                                         ((0x000F0000&(data))>>16)
#define DITHERING_SEQ_R_3_get_seq_r_28(data)                                         ((0x000F0000&(data))>>16)
#define DITHERING_SEQ_R_3_seq_r_27_shift                                             (12)
#define DITHERING_SEQ_R_3_seq_r_27_mask                                              (0x0000F000)
#define DITHERING_SEQ_R_3_seq_r_27(data)                                             (0x0000F000&((data)<<12))
#define DITHERING_SEQ_R_3_seq_r_27_src(data)                                         ((0x0000F000&(data))>>12)
#define DITHERING_SEQ_R_3_get_seq_r_27(data)                                         ((0x0000F000&(data))>>12)
#define DITHERING_SEQ_R_3_seq_r_26_shift                                             (8)
#define DITHERING_SEQ_R_3_seq_r_26_mask                                              (0x00000F00)
#define DITHERING_SEQ_R_3_seq_r_26(data)                                             (0x00000F00&((data)<<8))
#define DITHERING_SEQ_R_3_seq_r_26_src(data)                                         ((0x00000F00&(data))>>8)
#define DITHERING_SEQ_R_3_get_seq_r_26(data)                                         ((0x00000F00&(data))>>8)
#define DITHERING_SEQ_R_3_seq_r_25_shift                                             (4)
#define DITHERING_SEQ_R_3_seq_r_25_mask                                              (0x000000F0)
#define DITHERING_SEQ_R_3_seq_r_25(data)                                             (0x000000F0&((data)<<4))
#define DITHERING_SEQ_R_3_seq_r_25_src(data)                                         ((0x000000F0&(data))>>4)
#define DITHERING_SEQ_R_3_get_seq_r_25(data)                                         ((0x000000F0&(data))>>4)
#define DITHERING_SEQ_R_3_seq_r_24_shift                                             (0)
#define DITHERING_SEQ_R_3_seq_r_24_mask                                              (0x0000000F)
#define DITHERING_SEQ_R_3_seq_r_24(data)                                             (0x0000000F&((data)<<0))
#define DITHERING_SEQ_R_3_seq_r_24_src(data)                                         ((0x0000000F&(data))>>0)
#define DITHERING_SEQ_R_3_get_seq_r_24(data)                                         ((0x0000000F&(data))>>0)


#define DITHERING_SEQ_G_0                                                            0x980098c8
#define DITHERING_SEQ_G_0_reg_addr                                                   "0xD80098C8"
#define DITHERING_SEQ_G_0_reg                                                        0xD80098C8
#define set_DITHERING_SEQ_G_0_reg(data)   (*((volatile unsigned int*) DITHERING_SEQ_G_0_reg)=data)
#define get_DITHERING_SEQ_G_0_reg   (*((volatile unsigned int*) DITHERING_SEQ_G_0_reg))
#define DITHERING_SEQ_G_0_inst_adr                                                   "0x0032"
#define DITHERING_SEQ_G_0_inst                                                       0x0032
#define DITHERING_SEQ_G_0_seq_g_7_shift                                              (28)
#define DITHERING_SEQ_G_0_seq_g_7_mask                                               (0xF0000000)
#define DITHERING_SEQ_G_0_seq_g_7(data)                                              (0xF0000000&((data)<<28))
#define DITHERING_SEQ_G_0_seq_g_7_src(data)                                          ((0xF0000000&(data))>>28)
#define DITHERING_SEQ_G_0_get_seq_g_7(data)                                          ((0xF0000000&(data))>>28)
#define DITHERING_SEQ_G_0_seq_g_6_shift                                              (24)
#define DITHERING_SEQ_G_0_seq_g_6_mask                                               (0x0F000000)
#define DITHERING_SEQ_G_0_seq_g_6(data)                                              (0x0F000000&((data)<<24))
#define DITHERING_SEQ_G_0_seq_g_6_src(data)                                          ((0x0F000000&(data))>>24)
#define DITHERING_SEQ_G_0_get_seq_g_6(data)                                          ((0x0F000000&(data))>>24)
#define DITHERING_SEQ_G_0_seq_g_5_shift                                              (20)
#define DITHERING_SEQ_G_0_seq_g_5_mask                                               (0x00F00000)
#define DITHERING_SEQ_G_0_seq_g_5(data)                                              (0x00F00000&((data)<<20))
#define DITHERING_SEQ_G_0_seq_g_5_src(data)                                          ((0x00F00000&(data))>>20)
#define DITHERING_SEQ_G_0_get_seq_g_5(data)                                          ((0x00F00000&(data))>>20)
#define DITHERING_SEQ_G_0_seq_g_4_shift                                              (16)
#define DITHERING_SEQ_G_0_seq_g_4_mask                                               (0x000F0000)
#define DITHERING_SEQ_G_0_seq_g_4(data)                                              (0x000F0000&((data)<<16))
#define DITHERING_SEQ_G_0_seq_g_4_src(data)                                          ((0x000F0000&(data))>>16)
#define DITHERING_SEQ_G_0_get_seq_g_4(data)                                          ((0x000F0000&(data))>>16)
#define DITHERING_SEQ_G_0_seq_g_3_shift                                              (12)
#define DITHERING_SEQ_G_0_seq_g_3_mask                                               (0x0000F000)
#define DITHERING_SEQ_G_0_seq_g_3(data)                                              (0x0000F000&((data)<<12))
#define DITHERING_SEQ_G_0_seq_g_3_src(data)                                          ((0x0000F000&(data))>>12)
#define DITHERING_SEQ_G_0_get_seq_g_3(data)                                          ((0x0000F000&(data))>>12)
#define DITHERING_SEQ_G_0_seq_g_2_shift                                              (8)
#define DITHERING_SEQ_G_0_seq_g_2_mask                                               (0x00000F00)
#define DITHERING_SEQ_G_0_seq_g_2(data)                                              (0x00000F00&((data)<<8))
#define DITHERING_SEQ_G_0_seq_g_2_src(data)                                          ((0x00000F00&(data))>>8)
#define DITHERING_SEQ_G_0_get_seq_g_2(data)                                          ((0x00000F00&(data))>>8)
#define DITHERING_SEQ_G_0_seq_g_1_shift                                              (4)
#define DITHERING_SEQ_G_0_seq_g_1_mask                                               (0x000000F0)
#define DITHERING_SEQ_G_0_seq_g_1(data)                                              (0x000000F0&((data)<<4))
#define DITHERING_SEQ_G_0_seq_g_1_src(data)                                          ((0x000000F0&(data))>>4)
#define DITHERING_SEQ_G_0_get_seq_g_1(data)                                          ((0x000000F0&(data))>>4)
#define DITHERING_SEQ_G_0_seq_g_0_shift                                              (0)
#define DITHERING_SEQ_G_0_seq_g_0_mask                                               (0x0000000F)
#define DITHERING_SEQ_G_0_seq_g_0(data)                                              (0x0000000F&((data)<<0))
#define DITHERING_SEQ_G_0_seq_g_0_src(data)                                          ((0x0000000F&(data))>>0)
#define DITHERING_SEQ_G_0_get_seq_g_0(data)                                          ((0x0000000F&(data))>>0)


#define DITHERING_SEQ_G_1                                                            0x980098cc
#define DITHERING_SEQ_G_1_reg_addr                                                   "0xD80098CC"
#define DITHERING_SEQ_G_1_reg                                                        0xD80098CC
#define set_DITHERING_SEQ_G_1_reg(data)   (*((volatile unsigned int*) DITHERING_SEQ_G_1_reg)=data)
#define get_DITHERING_SEQ_G_1_reg   (*((volatile unsigned int*) DITHERING_SEQ_G_1_reg))
#define DITHERING_SEQ_G_1_inst_adr                                                   "0x0033"
#define DITHERING_SEQ_G_1_inst                                                       0x0033
#define DITHERING_SEQ_G_1_seq_g_15_shift                                             (28)
#define DITHERING_SEQ_G_1_seq_g_15_mask                                              (0xF0000000)
#define DITHERING_SEQ_G_1_seq_g_15(data)                                             (0xF0000000&((data)<<28))
#define DITHERING_SEQ_G_1_seq_g_15_src(data)                                         ((0xF0000000&(data))>>28)
#define DITHERING_SEQ_G_1_get_seq_g_15(data)                                         ((0xF0000000&(data))>>28)
#define DITHERING_SEQ_G_1_seq_g_14_shift                                             (24)
#define DITHERING_SEQ_G_1_seq_g_14_mask                                              (0x0F000000)
#define DITHERING_SEQ_G_1_seq_g_14(data)                                             (0x0F000000&((data)<<24))
#define DITHERING_SEQ_G_1_seq_g_14_src(data)                                         ((0x0F000000&(data))>>24)
#define DITHERING_SEQ_G_1_get_seq_g_14(data)                                         ((0x0F000000&(data))>>24)
#define DITHERING_SEQ_G_1_seq_g_13_shift                                             (20)
#define DITHERING_SEQ_G_1_seq_g_13_mask                                              (0x00F00000)
#define DITHERING_SEQ_G_1_seq_g_13(data)                                             (0x00F00000&((data)<<20))
#define DITHERING_SEQ_G_1_seq_g_13_src(data)                                         ((0x00F00000&(data))>>20)
#define DITHERING_SEQ_G_1_get_seq_g_13(data)                                         ((0x00F00000&(data))>>20)
#define DITHERING_SEQ_G_1_seq_g_12_shift                                             (16)
#define DITHERING_SEQ_G_1_seq_g_12_mask                                              (0x000F0000)
#define DITHERING_SEQ_G_1_seq_g_12(data)                                             (0x000F0000&((data)<<16))
#define DITHERING_SEQ_G_1_seq_g_12_src(data)                                         ((0x000F0000&(data))>>16)
#define DITHERING_SEQ_G_1_get_seq_g_12(data)                                         ((0x000F0000&(data))>>16)
#define DITHERING_SEQ_G_1_seq_g_11_shift                                             (12)
#define DITHERING_SEQ_G_1_seq_g_11_mask                                              (0x0000F000)
#define DITHERING_SEQ_G_1_seq_g_11(data)                                             (0x0000F000&((data)<<12))
#define DITHERING_SEQ_G_1_seq_g_11_src(data)                                         ((0x0000F000&(data))>>12)
#define DITHERING_SEQ_G_1_get_seq_g_11(data)                                         ((0x0000F000&(data))>>12)
#define DITHERING_SEQ_G_1_seq_g_10_shift                                             (8)
#define DITHERING_SEQ_G_1_seq_g_10_mask                                              (0x00000F00)
#define DITHERING_SEQ_G_1_seq_g_10(data)                                             (0x00000F00&((data)<<8))
#define DITHERING_SEQ_G_1_seq_g_10_src(data)                                         ((0x00000F00&(data))>>8)
#define DITHERING_SEQ_G_1_get_seq_g_10(data)                                         ((0x00000F00&(data))>>8)
#define DITHERING_SEQ_G_1_seq_g_9_shift                                              (4)
#define DITHERING_SEQ_G_1_seq_g_9_mask                                               (0x000000F0)
#define DITHERING_SEQ_G_1_seq_g_9(data)                                              (0x000000F0&((data)<<4))
#define DITHERING_SEQ_G_1_seq_g_9_src(data)                                          ((0x000000F0&(data))>>4)
#define DITHERING_SEQ_G_1_get_seq_g_9(data)                                          ((0x000000F0&(data))>>4)
#define DITHERING_SEQ_G_1_seq_g_8_shift                                              (0)
#define DITHERING_SEQ_G_1_seq_g_8_mask                                               (0x0000000F)
#define DITHERING_SEQ_G_1_seq_g_8(data)                                              (0x0000000F&((data)<<0))
#define DITHERING_SEQ_G_1_seq_g_8_src(data)                                          ((0x0000000F&(data))>>0)
#define DITHERING_SEQ_G_1_get_seq_g_8(data)                                          ((0x0000000F&(data))>>0)


#define DITHERING_SEQ_G_2                                                            0x980098d0
#define DITHERING_SEQ_G_2_reg_addr                                                   "0xD80098D0"
#define DITHERING_SEQ_G_2_reg                                                        0xD80098D0
#define set_DITHERING_SEQ_G_2_reg(data)   (*((volatile unsigned int*) DITHERING_SEQ_G_2_reg)=data)
#define get_DITHERING_SEQ_G_2_reg   (*((volatile unsigned int*) DITHERING_SEQ_G_2_reg))
#define DITHERING_SEQ_G_2_inst_adr                                                   "0x0034"
#define DITHERING_SEQ_G_2_inst                                                       0x0034
#define DITHERING_SEQ_G_2_seq_g_23_shift                                             (28)
#define DITHERING_SEQ_G_2_seq_g_23_mask                                              (0xF0000000)
#define DITHERING_SEQ_G_2_seq_g_23(data)                                             (0xF0000000&((data)<<28))
#define DITHERING_SEQ_G_2_seq_g_23_src(data)                                         ((0xF0000000&(data))>>28)
#define DITHERING_SEQ_G_2_get_seq_g_23(data)                                         ((0xF0000000&(data))>>28)
#define DITHERING_SEQ_G_2_seq_g_22_shift                                             (24)
#define DITHERING_SEQ_G_2_seq_g_22_mask                                              (0x0F000000)
#define DITHERING_SEQ_G_2_seq_g_22(data)                                             (0x0F000000&((data)<<24))
#define DITHERING_SEQ_G_2_seq_g_22_src(data)                                         ((0x0F000000&(data))>>24)
#define DITHERING_SEQ_G_2_get_seq_g_22(data)                                         ((0x0F000000&(data))>>24)
#define DITHERING_SEQ_G_2_seq_g_21_shift                                             (20)
#define DITHERING_SEQ_G_2_seq_g_21_mask                                              (0x00F00000)
#define DITHERING_SEQ_G_2_seq_g_21(data)                                             (0x00F00000&((data)<<20))
#define DITHERING_SEQ_G_2_seq_g_21_src(data)                                         ((0x00F00000&(data))>>20)
#define DITHERING_SEQ_G_2_get_seq_g_21(data)                                         ((0x00F00000&(data))>>20)
#define DITHERING_SEQ_G_2_seq_g_20_shift                                             (16)
#define DITHERING_SEQ_G_2_seq_g_20_mask                                              (0x000F0000)
#define DITHERING_SEQ_G_2_seq_g_20(data)                                             (0x000F0000&((data)<<16))
#define DITHERING_SEQ_G_2_seq_g_20_src(data)                                         ((0x000F0000&(data))>>16)
#define DITHERING_SEQ_G_2_get_seq_g_20(data)                                         ((0x000F0000&(data))>>16)
#define DITHERING_SEQ_G_2_seq_g_19_shift                                             (12)
#define DITHERING_SEQ_G_2_seq_g_19_mask                                              (0x0000F000)
#define DITHERING_SEQ_G_2_seq_g_19(data)                                             (0x0000F000&((data)<<12))
#define DITHERING_SEQ_G_2_seq_g_19_src(data)                                         ((0x0000F000&(data))>>12)
#define DITHERING_SEQ_G_2_get_seq_g_19(data)                                         ((0x0000F000&(data))>>12)
#define DITHERING_SEQ_G_2_seq_g_18_shift                                             (8)
#define DITHERING_SEQ_G_2_seq_g_18_mask                                              (0x00000F00)
#define DITHERING_SEQ_G_2_seq_g_18(data)                                             (0x00000F00&((data)<<8))
#define DITHERING_SEQ_G_2_seq_g_18_src(data)                                         ((0x00000F00&(data))>>8)
#define DITHERING_SEQ_G_2_get_seq_g_18(data)                                         ((0x00000F00&(data))>>8)
#define DITHERING_SEQ_G_2_seq_g_17_shift                                             (4)
#define DITHERING_SEQ_G_2_seq_g_17_mask                                              (0x000000F0)
#define DITHERING_SEQ_G_2_seq_g_17(data)                                             (0x000000F0&((data)<<4))
#define DITHERING_SEQ_G_2_seq_g_17_src(data)                                         ((0x000000F0&(data))>>4)
#define DITHERING_SEQ_G_2_get_seq_g_17(data)                                         ((0x000000F0&(data))>>4)
#define DITHERING_SEQ_G_2_seq_g_16_shift                                             (0)
#define DITHERING_SEQ_G_2_seq_g_16_mask                                              (0x0000000F)
#define DITHERING_SEQ_G_2_seq_g_16(data)                                             (0x0000000F&((data)<<0))
#define DITHERING_SEQ_G_2_seq_g_16_src(data)                                         ((0x0000000F&(data))>>0)
#define DITHERING_SEQ_G_2_get_seq_g_16(data)                                         ((0x0000000F&(data))>>0)


#define DITHERING_SEQ_G_3                                                            0x980098d4
#define DITHERING_SEQ_G_3_reg_addr                                                   "0xD80098D4"
#define DITHERING_SEQ_G_3_reg                                                        0xD80098D4
#define set_DITHERING_SEQ_G_3_reg(data)   (*((volatile unsigned int*) DITHERING_SEQ_G_3_reg)=data)
#define get_DITHERING_SEQ_G_3_reg   (*((volatile unsigned int*) DITHERING_SEQ_G_3_reg))
#define DITHERING_SEQ_G_3_inst_adr                                                   "0x0035"
#define DITHERING_SEQ_G_3_inst                                                       0x0035
#define DITHERING_SEQ_G_3_seq_g_31_shift                                             (28)
#define DITHERING_SEQ_G_3_seq_g_31_mask                                              (0xF0000000)
#define DITHERING_SEQ_G_3_seq_g_31(data)                                             (0xF0000000&((data)<<28))
#define DITHERING_SEQ_G_3_seq_g_31_src(data)                                         ((0xF0000000&(data))>>28)
#define DITHERING_SEQ_G_3_get_seq_g_31(data)                                         ((0xF0000000&(data))>>28)
#define DITHERING_SEQ_G_3_seq_g_30_shift                                             (24)
#define DITHERING_SEQ_G_3_seq_g_30_mask                                              (0x0F000000)
#define DITHERING_SEQ_G_3_seq_g_30(data)                                             (0x0F000000&((data)<<24))
#define DITHERING_SEQ_G_3_seq_g_30_src(data)                                         ((0x0F000000&(data))>>24)
#define DITHERING_SEQ_G_3_get_seq_g_30(data)                                         ((0x0F000000&(data))>>24)
#define DITHERING_SEQ_G_3_seq_g_29_shift                                             (20)
#define DITHERING_SEQ_G_3_seq_g_29_mask                                              (0x00F00000)
#define DITHERING_SEQ_G_3_seq_g_29(data)                                             (0x00F00000&((data)<<20))
#define DITHERING_SEQ_G_3_seq_g_29_src(data)                                         ((0x00F00000&(data))>>20)
#define DITHERING_SEQ_G_3_get_seq_g_29(data)                                         ((0x00F00000&(data))>>20)
#define DITHERING_SEQ_G_3_seq_g_28_shift                                             (16)
#define DITHERING_SEQ_G_3_seq_g_28_mask                                              (0x000F0000)
#define DITHERING_SEQ_G_3_seq_g_28(data)                                             (0x000F0000&((data)<<16))
#define DITHERING_SEQ_G_3_seq_g_28_src(data)                                         ((0x000F0000&(data))>>16)
#define DITHERING_SEQ_G_3_get_seq_g_28(data)                                         ((0x000F0000&(data))>>16)
#define DITHERING_SEQ_G_3_seq_g_27_shift                                             (12)
#define DITHERING_SEQ_G_3_seq_g_27_mask                                              (0x0000F000)
#define DITHERING_SEQ_G_3_seq_g_27(data)                                             (0x0000F000&((data)<<12))
#define DITHERING_SEQ_G_3_seq_g_27_src(data)                                         ((0x0000F000&(data))>>12)
#define DITHERING_SEQ_G_3_get_seq_g_27(data)                                         ((0x0000F000&(data))>>12)
#define DITHERING_SEQ_G_3_seq_g_26_shift                                             (8)
#define DITHERING_SEQ_G_3_seq_g_26_mask                                              (0x00000F00)
#define DITHERING_SEQ_G_3_seq_g_26(data)                                             (0x00000F00&((data)<<8))
#define DITHERING_SEQ_G_3_seq_g_26_src(data)                                         ((0x00000F00&(data))>>8)
#define DITHERING_SEQ_G_3_get_seq_g_26(data)                                         ((0x00000F00&(data))>>8)
#define DITHERING_SEQ_G_3_seq_g_25_shift                                             (4)
#define DITHERING_SEQ_G_3_seq_g_25_mask                                              (0x000000F0)
#define DITHERING_SEQ_G_3_seq_g_25(data)                                             (0x000000F0&((data)<<4))
#define DITHERING_SEQ_G_3_seq_g_25_src(data)                                         ((0x000000F0&(data))>>4)
#define DITHERING_SEQ_G_3_get_seq_g_25(data)                                         ((0x000000F0&(data))>>4)
#define DITHERING_SEQ_G_3_seq_g_24_shift                                             (0)
#define DITHERING_SEQ_G_3_seq_g_24_mask                                              (0x0000000F)
#define DITHERING_SEQ_G_3_seq_g_24(data)                                             (0x0000000F&((data)<<0))
#define DITHERING_SEQ_G_3_seq_g_24_src(data)                                         ((0x0000000F&(data))>>0)
#define DITHERING_SEQ_G_3_get_seq_g_24(data)                                         ((0x0000000F&(data))>>0)


#define DITHERING_SEQ_B_0                                                            0x980098d8
#define DITHERING_SEQ_B_0_reg_addr                                                   "0xD80098D8"
#define DITHERING_SEQ_B_0_reg                                                        0xD80098D8
#define set_DITHERING_SEQ_B_0_reg(data)   (*((volatile unsigned int*) DITHERING_SEQ_B_0_reg)=data)
#define get_DITHERING_SEQ_B_0_reg   (*((volatile unsigned int*) DITHERING_SEQ_B_0_reg))
#define DITHERING_SEQ_B_0_inst_adr                                                   "0x0036"
#define DITHERING_SEQ_B_0_inst                                                       0x0036
#define DITHERING_SEQ_B_0_seq_b_7_shift                                              (28)
#define DITHERING_SEQ_B_0_seq_b_7_mask                                               (0xF0000000)
#define DITHERING_SEQ_B_0_seq_b_7(data)                                              (0xF0000000&((data)<<28))
#define DITHERING_SEQ_B_0_seq_b_7_src(data)                                          ((0xF0000000&(data))>>28)
#define DITHERING_SEQ_B_0_get_seq_b_7(data)                                          ((0xF0000000&(data))>>28)
#define DITHERING_SEQ_B_0_seq_b_6_shift                                              (24)
#define DITHERING_SEQ_B_0_seq_b_6_mask                                               (0x0F000000)
#define DITHERING_SEQ_B_0_seq_b_6(data)                                              (0x0F000000&((data)<<24))
#define DITHERING_SEQ_B_0_seq_b_6_src(data)                                          ((0x0F000000&(data))>>24)
#define DITHERING_SEQ_B_0_get_seq_b_6(data)                                          ((0x0F000000&(data))>>24)
#define DITHERING_SEQ_B_0_seq_b_5_shift                                              (20)
#define DITHERING_SEQ_B_0_seq_b_5_mask                                               (0x00F00000)
#define DITHERING_SEQ_B_0_seq_b_5(data)                                              (0x00F00000&((data)<<20))
#define DITHERING_SEQ_B_0_seq_b_5_src(data)                                          ((0x00F00000&(data))>>20)
#define DITHERING_SEQ_B_0_get_seq_b_5(data)                                          ((0x00F00000&(data))>>20)
#define DITHERING_SEQ_B_0_seq_b_4_shift                                              (16)
#define DITHERING_SEQ_B_0_seq_b_4_mask                                               (0x000F0000)
#define DITHERING_SEQ_B_0_seq_b_4(data)                                              (0x000F0000&((data)<<16))
#define DITHERING_SEQ_B_0_seq_b_4_src(data)                                          ((0x000F0000&(data))>>16)
#define DITHERING_SEQ_B_0_get_seq_b_4(data)                                          ((0x000F0000&(data))>>16)
#define DITHERING_SEQ_B_0_seq_b_3_shift                                              (12)
#define DITHERING_SEQ_B_0_seq_b_3_mask                                               (0x0000F000)
#define DITHERING_SEQ_B_0_seq_b_3(data)                                              (0x0000F000&((data)<<12))
#define DITHERING_SEQ_B_0_seq_b_3_src(data)                                          ((0x0000F000&(data))>>12)
#define DITHERING_SEQ_B_0_get_seq_b_3(data)                                          ((0x0000F000&(data))>>12)
#define DITHERING_SEQ_B_0_seq_b_2_shift                                              (8)
#define DITHERING_SEQ_B_0_seq_b_2_mask                                               (0x00000F00)
#define DITHERING_SEQ_B_0_seq_b_2(data)                                              (0x00000F00&((data)<<8))
#define DITHERING_SEQ_B_0_seq_b_2_src(data)                                          ((0x00000F00&(data))>>8)
#define DITHERING_SEQ_B_0_get_seq_b_2(data)                                          ((0x00000F00&(data))>>8)
#define DITHERING_SEQ_B_0_seq_b_1_shift                                              (4)
#define DITHERING_SEQ_B_0_seq_b_1_mask                                               (0x000000F0)
#define DITHERING_SEQ_B_0_seq_b_1(data)                                              (0x000000F0&((data)<<4))
#define DITHERING_SEQ_B_0_seq_b_1_src(data)                                          ((0x000000F0&(data))>>4)
#define DITHERING_SEQ_B_0_get_seq_b_1(data)                                          ((0x000000F0&(data))>>4)
#define DITHERING_SEQ_B_0_seq_b_0_shift                                              (0)
#define DITHERING_SEQ_B_0_seq_b_0_mask                                               (0x0000000F)
#define DITHERING_SEQ_B_0_seq_b_0(data)                                              (0x0000000F&((data)<<0))
#define DITHERING_SEQ_B_0_seq_b_0_src(data)                                          ((0x0000000F&(data))>>0)
#define DITHERING_SEQ_B_0_get_seq_b_0(data)                                          ((0x0000000F&(data))>>0)


#define DITHERING_SEQ_B_1                                                            0x980098dc
#define DITHERING_SEQ_B_1_reg_addr                                                   "0xD80098DC"
#define DITHERING_SEQ_B_1_reg                                                        0xD80098DC
#define set_DITHERING_SEQ_B_1_reg(data)   (*((volatile unsigned int*) DITHERING_SEQ_B_1_reg)=data)
#define get_DITHERING_SEQ_B_1_reg   (*((volatile unsigned int*) DITHERING_SEQ_B_1_reg))
#define DITHERING_SEQ_B_1_inst_adr                                                   "0x0037"
#define DITHERING_SEQ_B_1_inst                                                       0x0037
#define DITHERING_SEQ_B_1_seq_b_15_shift                                             (28)
#define DITHERING_SEQ_B_1_seq_b_15_mask                                              (0xF0000000)
#define DITHERING_SEQ_B_1_seq_b_15(data)                                             (0xF0000000&((data)<<28))
#define DITHERING_SEQ_B_1_seq_b_15_src(data)                                         ((0xF0000000&(data))>>28)
#define DITHERING_SEQ_B_1_get_seq_b_15(data)                                         ((0xF0000000&(data))>>28)
#define DITHERING_SEQ_B_1_seq_b_14_shift                                             (24)
#define DITHERING_SEQ_B_1_seq_b_14_mask                                              (0x0F000000)
#define DITHERING_SEQ_B_1_seq_b_14(data)                                             (0x0F000000&((data)<<24))
#define DITHERING_SEQ_B_1_seq_b_14_src(data)                                         ((0x0F000000&(data))>>24)
#define DITHERING_SEQ_B_1_get_seq_b_14(data)                                         ((0x0F000000&(data))>>24)
#define DITHERING_SEQ_B_1_seq_b_13_shift                                             (20)
#define DITHERING_SEQ_B_1_seq_b_13_mask                                              (0x00F00000)
#define DITHERING_SEQ_B_1_seq_b_13(data)                                             (0x00F00000&((data)<<20))
#define DITHERING_SEQ_B_1_seq_b_13_src(data)                                         ((0x00F00000&(data))>>20)
#define DITHERING_SEQ_B_1_get_seq_b_13(data)                                         ((0x00F00000&(data))>>20)
#define DITHERING_SEQ_B_1_seq_b_12_shift                                             (16)
#define DITHERING_SEQ_B_1_seq_b_12_mask                                              (0x000F0000)
#define DITHERING_SEQ_B_1_seq_b_12(data)                                             (0x000F0000&((data)<<16))
#define DITHERING_SEQ_B_1_seq_b_12_src(data)                                         ((0x000F0000&(data))>>16)
#define DITHERING_SEQ_B_1_get_seq_b_12(data)                                         ((0x000F0000&(data))>>16)
#define DITHERING_SEQ_B_1_seq_b_11_shift                                             (12)
#define DITHERING_SEQ_B_1_seq_b_11_mask                                              (0x0000F000)
#define DITHERING_SEQ_B_1_seq_b_11(data)                                             (0x0000F000&((data)<<12))
#define DITHERING_SEQ_B_1_seq_b_11_src(data)                                         ((0x0000F000&(data))>>12)
#define DITHERING_SEQ_B_1_get_seq_b_11(data)                                         ((0x0000F000&(data))>>12)
#define DITHERING_SEQ_B_1_seq_b_10_shift                                             (8)
#define DITHERING_SEQ_B_1_seq_b_10_mask                                              (0x00000F00)
#define DITHERING_SEQ_B_1_seq_b_10(data)                                             (0x00000F00&((data)<<8))
#define DITHERING_SEQ_B_1_seq_b_10_src(data)                                         ((0x00000F00&(data))>>8)
#define DITHERING_SEQ_B_1_get_seq_b_10(data)                                         ((0x00000F00&(data))>>8)
#define DITHERING_SEQ_B_1_seq_b_9_shift                                              (4)
#define DITHERING_SEQ_B_1_seq_b_9_mask                                               (0x000000F0)
#define DITHERING_SEQ_B_1_seq_b_9(data)                                              (0x000000F0&((data)<<4))
#define DITHERING_SEQ_B_1_seq_b_9_src(data)                                          ((0x000000F0&(data))>>4)
#define DITHERING_SEQ_B_1_get_seq_b_9(data)                                          ((0x000000F0&(data))>>4)
#define DITHERING_SEQ_B_1_seq_b_8_shift                                              (0)
#define DITHERING_SEQ_B_1_seq_b_8_mask                                               (0x0000000F)
#define DITHERING_SEQ_B_1_seq_b_8(data)                                              (0x0000000F&((data)<<0))
#define DITHERING_SEQ_B_1_seq_b_8_src(data)                                          ((0x0000000F&(data))>>0)
#define DITHERING_SEQ_B_1_get_seq_b_8(data)                                          ((0x0000000F&(data))>>0)


#define DITHERING_SEQ_B_2                                                            0x980098e0
#define DITHERING_SEQ_B_2_reg_addr                                                   "0xD80098E0"
#define DITHERING_SEQ_B_2_reg                                                        0xD80098E0
#define set_DITHERING_SEQ_B_2_reg(data)   (*((volatile unsigned int*) DITHERING_SEQ_B_2_reg)=data)
#define get_DITHERING_SEQ_B_2_reg   (*((volatile unsigned int*) DITHERING_SEQ_B_2_reg))
#define DITHERING_SEQ_B_2_inst_adr                                                   "0x0038"
#define DITHERING_SEQ_B_2_inst                                                       0x0038
#define DITHERING_SEQ_B_2_seq_b_23_shift                                             (28)
#define DITHERING_SEQ_B_2_seq_b_23_mask                                              (0xF0000000)
#define DITHERING_SEQ_B_2_seq_b_23(data)                                             (0xF0000000&((data)<<28))
#define DITHERING_SEQ_B_2_seq_b_23_src(data)                                         ((0xF0000000&(data))>>28)
#define DITHERING_SEQ_B_2_get_seq_b_23(data)                                         ((0xF0000000&(data))>>28)
#define DITHERING_SEQ_B_2_seq_b_22_shift                                             (24)
#define DITHERING_SEQ_B_2_seq_b_22_mask                                              (0x0F000000)
#define DITHERING_SEQ_B_2_seq_b_22(data)                                             (0x0F000000&((data)<<24))
#define DITHERING_SEQ_B_2_seq_b_22_src(data)                                         ((0x0F000000&(data))>>24)
#define DITHERING_SEQ_B_2_get_seq_b_22(data)                                         ((0x0F000000&(data))>>24)
#define DITHERING_SEQ_B_2_seq_b_21_shift                                             (20)
#define DITHERING_SEQ_B_2_seq_b_21_mask                                              (0x00F00000)
#define DITHERING_SEQ_B_2_seq_b_21(data)                                             (0x00F00000&((data)<<20))
#define DITHERING_SEQ_B_2_seq_b_21_src(data)                                         ((0x00F00000&(data))>>20)
#define DITHERING_SEQ_B_2_get_seq_b_21(data)                                         ((0x00F00000&(data))>>20)
#define DITHERING_SEQ_B_2_seq_b_20_shift                                             (16)
#define DITHERING_SEQ_B_2_seq_b_20_mask                                              (0x000F0000)
#define DITHERING_SEQ_B_2_seq_b_20(data)                                             (0x000F0000&((data)<<16))
#define DITHERING_SEQ_B_2_seq_b_20_src(data)                                         ((0x000F0000&(data))>>16)
#define DITHERING_SEQ_B_2_get_seq_b_20(data)                                         ((0x000F0000&(data))>>16)
#define DITHERING_SEQ_B_2_seq_b_19_shift                                             (12)
#define DITHERING_SEQ_B_2_seq_b_19_mask                                              (0x0000F000)
#define DITHERING_SEQ_B_2_seq_b_19(data)                                             (0x0000F000&((data)<<12))
#define DITHERING_SEQ_B_2_seq_b_19_src(data)                                         ((0x0000F000&(data))>>12)
#define DITHERING_SEQ_B_2_get_seq_b_19(data)                                         ((0x0000F000&(data))>>12)
#define DITHERING_SEQ_B_2_seq_b_18_shift                                             (8)
#define DITHERING_SEQ_B_2_seq_b_18_mask                                              (0x00000F00)
#define DITHERING_SEQ_B_2_seq_b_18(data)                                             (0x00000F00&((data)<<8))
#define DITHERING_SEQ_B_2_seq_b_18_src(data)                                         ((0x00000F00&(data))>>8)
#define DITHERING_SEQ_B_2_get_seq_b_18(data)                                         ((0x00000F00&(data))>>8)
#define DITHERING_SEQ_B_2_seq_b_17_shift                                             (4)
#define DITHERING_SEQ_B_2_seq_b_17_mask                                              (0x000000F0)
#define DITHERING_SEQ_B_2_seq_b_17(data)                                             (0x000000F0&((data)<<4))
#define DITHERING_SEQ_B_2_seq_b_17_src(data)                                         ((0x000000F0&(data))>>4)
#define DITHERING_SEQ_B_2_get_seq_b_17(data)                                         ((0x000000F0&(data))>>4)
#define DITHERING_SEQ_B_2_seq_b_16_shift                                             (0)
#define DITHERING_SEQ_B_2_seq_b_16_mask                                              (0x0000000F)
#define DITHERING_SEQ_B_2_seq_b_16(data)                                             (0x0000000F&((data)<<0))
#define DITHERING_SEQ_B_2_seq_b_16_src(data)                                         ((0x0000000F&(data))>>0)
#define DITHERING_SEQ_B_2_get_seq_b_16(data)                                         ((0x0000000F&(data))>>0)


#define DITHERING_SEQ_B_3                                                            0x980098e4
#define DITHERING_SEQ_B_3_reg_addr                                                   "0xD80098E4"
#define DITHERING_SEQ_B_3_reg                                                        0xD80098E4
#define set_DITHERING_SEQ_B_3_reg(data)   (*((volatile unsigned int*) DITHERING_SEQ_B_3_reg)=data)
#define get_DITHERING_SEQ_B_3_reg   (*((volatile unsigned int*) DITHERING_SEQ_B_3_reg))
#define DITHERING_SEQ_B_3_inst_adr                                                   "0x0039"
#define DITHERING_SEQ_B_3_inst                                                       0x0039
#define DITHERING_SEQ_B_3_seq_b_31_shift                                             (28)
#define DITHERING_SEQ_B_3_seq_b_31_mask                                              (0xF0000000)
#define DITHERING_SEQ_B_3_seq_b_31(data)                                             (0xF0000000&((data)<<28))
#define DITHERING_SEQ_B_3_seq_b_31_src(data)                                         ((0xF0000000&(data))>>28)
#define DITHERING_SEQ_B_3_get_seq_b_31(data)                                         ((0xF0000000&(data))>>28)
#define DITHERING_SEQ_B_3_seq_b_30_shift                                             (24)
#define DITHERING_SEQ_B_3_seq_b_30_mask                                              (0x0F000000)
#define DITHERING_SEQ_B_3_seq_b_30(data)                                             (0x0F000000&((data)<<24))
#define DITHERING_SEQ_B_3_seq_b_30_src(data)                                         ((0x0F000000&(data))>>24)
#define DITHERING_SEQ_B_3_get_seq_b_30(data)                                         ((0x0F000000&(data))>>24)
#define DITHERING_SEQ_B_3_seq_b_29_shift                                             (20)
#define DITHERING_SEQ_B_3_seq_b_29_mask                                              (0x00F00000)
#define DITHERING_SEQ_B_3_seq_b_29(data)                                             (0x00F00000&((data)<<20))
#define DITHERING_SEQ_B_3_seq_b_29_src(data)                                         ((0x00F00000&(data))>>20)
#define DITHERING_SEQ_B_3_get_seq_b_29(data)                                         ((0x00F00000&(data))>>20)
#define DITHERING_SEQ_B_3_seq_b_28_shift                                             (16)
#define DITHERING_SEQ_B_3_seq_b_28_mask                                              (0x000F0000)
#define DITHERING_SEQ_B_3_seq_b_28(data)                                             (0x000F0000&((data)<<16))
#define DITHERING_SEQ_B_3_seq_b_28_src(data)                                         ((0x000F0000&(data))>>16)
#define DITHERING_SEQ_B_3_get_seq_b_28(data)                                         ((0x000F0000&(data))>>16)
#define DITHERING_SEQ_B_3_seq_b_27_shift                                             (12)
#define DITHERING_SEQ_B_3_seq_b_27_mask                                              (0x0000F000)
#define DITHERING_SEQ_B_3_seq_b_27(data)                                             (0x0000F000&((data)<<12))
#define DITHERING_SEQ_B_3_seq_b_27_src(data)                                         ((0x0000F000&(data))>>12)
#define DITHERING_SEQ_B_3_get_seq_b_27(data)                                         ((0x0000F000&(data))>>12)
#define DITHERING_SEQ_B_3_seq_b_26_shift                                             (8)
#define DITHERING_SEQ_B_3_seq_b_26_mask                                              (0x00000F00)
#define DITHERING_SEQ_B_3_seq_b_26(data)                                             (0x00000F00&((data)<<8))
#define DITHERING_SEQ_B_3_seq_b_26_src(data)                                         ((0x00000F00&(data))>>8)
#define DITHERING_SEQ_B_3_get_seq_b_26(data)                                         ((0x00000F00&(data))>>8)
#define DITHERING_SEQ_B_3_seq_b_25_shift                                             (4)
#define DITHERING_SEQ_B_3_seq_b_25_mask                                              (0x000000F0)
#define DITHERING_SEQ_B_3_seq_b_25(data)                                             (0x000000F0&((data)<<4))
#define DITHERING_SEQ_B_3_seq_b_25_src(data)                                         ((0x000000F0&(data))>>4)
#define DITHERING_SEQ_B_3_get_seq_b_25(data)                                         ((0x000000F0&(data))>>4)
#define DITHERING_SEQ_B_3_seq_b_24_shift                                             (0)
#define DITHERING_SEQ_B_3_seq_b_24_mask                                              (0x0000000F)
#define DITHERING_SEQ_B_3_seq_b_24(data)                                             (0x0000000F&((data)<<0))
#define DITHERING_SEQ_B_3_seq_b_24_src(data)                                         ((0x0000000F&(data))>>0)
#define DITHERING_SEQ_B_3_get_seq_b_24(data)                                         ((0x0000000F&(data))>>0)


#define DITHERING_TAB_R_0                                                            0x980098e8
#define DITHERING_TAB_R_0_reg_addr                                                   "0xD80098E8"
#define DITHERING_TAB_R_0_reg                                                        0xD80098E8
#define set_DITHERING_TAB_R_0_reg(data)   (*((volatile unsigned int*) DITHERING_TAB_R_0_reg)=data)
#define get_DITHERING_TAB_R_0_reg   (*((volatile unsigned int*) DITHERING_TAB_R_0_reg))
#define DITHERING_TAB_R_0_inst_adr                                                   "0x003A"
#define DITHERING_TAB_R_0_inst                                                       0x003A
#define DITHERING_TAB_R_0_tab_r_03_shift                                             (18)
#define DITHERING_TAB_R_0_tab_r_03_mask                                              (0x00FC0000)
#define DITHERING_TAB_R_0_tab_r_03(data)                                             (0x00FC0000&((data)<<18))
#define DITHERING_TAB_R_0_tab_r_03_src(data)                                         ((0x00FC0000&(data))>>18)
#define DITHERING_TAB_R_0_get_tab_r_03(data)                                         ((0x00FC0000&(data))>>18)
#define DITHERING_TAB_R_0_tab_r_02_shift                                             (12)
#define DITHERING_TAB_R_0_tab_r_02_mask                                              (0x0003F000)
#define DITHERING_TAB_R_0_tab_r_02(data)                                             (0x0003F000&((data)<<12))
#define DITHERING_TAB_R_0_tab_r_02_src(data)                                         ((0x0003F000&(data))>>12)
#define DITHERING_TAB_R_0_get_tab_r_02(data)                                         ((0x0003F000&(data))>>12)
#define DITHERING_TAB_R_0_tab_r_01_shift                                             (6)
#define DITHERING_TAB_R_0_tab_r_01_mask                                              (0x00000FC0)
#define DITHERING_TAB_R_0_tab_r_01(data)                                             (0x00000FC0&((data)<<6))
#define DITHERING_TAB_R_0_tab_r_01_src(data)                                         ((0x00000FC0&(data))>>6)
#define DITHERING_TAB_R_0_get_tab_r_01(data)                                         ((0x00000FC0&(data))>>6)
#define DITHERING_TAB_R_0_tab_r_00_shift                                             (0)
#define DITHERING_TAB_R_0_tab_r_00_mask                                              (0x0000003F)
#define DITHERING_TAB_R_0_tab_r_00(data)                                             (0x0000003F&((data)<<0))
#define DITHERING_TAB_R_0_tab_r_00_src(data)                                         ((0x0000003F&(data))>>0)
#define DITHERING_TAB_R_0_get_tab_r_00(data)                                         ((0x0000003F&(data))>>0)


#define DITHERING_TAB_R_1                                                            0x980098ec
#define DITHERING_TAB_R_1_reg_addr                                                   "0xD80098EC"
#define DITHERING_TAB_R_1_reg                                                        0xD80098EC
#define set_DITHERING_TAB_R_1_reg(data)   (*((volatile unsigned int*) DITHERING_TAB_R_1_reg)=data)
#define get_DITHERING_TAB_R_1_reg   (*((volatile unsigned int*) DITHERING_TAB_R_1_reg))
#define DITHERING_TAB_R_1_inst_adr                                                   "0x003B"
#define DITHERING_TAB_R_1_inst                                                       0x003B
#define DITHERING_TAB_R_1_tab_r_13_shift                                             (18)
#define DITHERING_TAB_R_1_tab_r_13_mask                                              (0x00FC0000)
#define DITHERING_TAB_R_1_tab_r_13(data)                                             (0x00FC0000&((data)<<18))
#define DITHERING_TAB_R_1_tab_r_13_src(data)                                         ((0x00FC0000&(data))>>18)
#define DITHERING_TAB_R_1_get_tab_r_13(data)                                         ((0x00FC0000&(data))>>18)
#define DITHERING_TAB_R_1_tab_r_12_shift                                             (12)
#define DITHERING_TAB_R_1_tab_r_12_mask                                              (0x0003F000)
#define DITHERING_TAB_R_1_tab_r_12(data)                                             (0x0003F000&((data)<<12))
#define DITHERING_TAB_R_1_tab_r_12_src(data)                                         ((0x0003F000&(data))>>12)
#define DITHERING_TAB_R_1_get_tab_r_12(data)                                         ((0x0003F000&(data))>>12)
#define DITHERING_TAB_R_1_tab_r_11_shift                                             (6)
#define DITHERING_TAB_R_1_tab_r_11_mask                                              (0x00000FC0)
#define DITHERING_TAB_R_1_tab_r_11(data)                                             (0x00000FC0&((data)<<6))
#define DITHERING_TAB_R_1_tab_r_11_src(data)                                         ((0x00000FC0&(data))>>6)
#define DITHERING_TAB_R_1_get_tab_r_11(data)                                         ((0x00000FC0&(data))>>6)
#define DITHERING_TAB_R_1_tab_r_10_shift                                             (0)
#define DITHERING_TAB_R_1_tab_r_10_mask                                              (0x0000003F)
#define DITHERING_TAB_R_1_tab_r_10(data)                                             (0x0000003F&((data)<<0))
#define DITHERING_TAB_R_1_tab_r_10_src(data)                                         ((0x0000003F&(data))>>0)
#define DITHERING_TAB_R_1_get_tab_r_10(data)                                         ((0x0000003F&(data))>>0)


#define DITHERING_TAB_R_2                                                            0x980098f0
#define DITHERING_TAB_R_2_reg_addr                                                   "0xD80098F0"
#define DITHERING_TAB_R_2_reg                                                        0xD80098F0
#define set_DITHERING_TAB_R_2_reg(data)   (*((volatile unsigned int*) DITHERING_TAB_R_2_reg)=data)
#define get_DITHERING_TAB_R_2_reg   (*((volatile unsigned int*) DITHERING_TAB_R_2_reg))
#define DITHERING_TAB_R_2_inst_adr                                                   "0x003C"
#define DITHERING_TAB_R_2_inst                                                       0x003C
#define DITHERING_TAB_R_2_tab_r_23_shift                                             (18)
#define DITHERING_TAB_R_2_tab_r_23_mask                                              (0x00FC0000)
#define DITHERING_TAB_R_2_tab_r_23(data)                                             (0x00FC0000&((data)<<18))
#define DITHERING_TAB_R_2_tab_r_23_src(data)                                         ((0x00FC0000&(data))>>18)
#define DITHERING_TAB_R_2_get_tab_r_23(data)                                         ((0x00FC0000&(data))>>18)
#define DITHERING_TAB_R_2_tab_r_22_shift                                             (12)
#define DITHERING_TAB_R_2_tab_r_22_mask                                              (0x0003F000)
#define DITHERING_TAB_R_2_tab_r_22(data)                                             (0x0003F000&((data)<<12))
#define DITHERING_TAB_R_2_tab_r_22_src(data)                                         ((0x0003F000&(data))>>12)
#define DITHERING_TAB_R_2_get_tab_r_22(data)                                         ((0x0003F000&(data))>>12)
#define DITHERING_TAB_R_2_tab_r_21_shift                                             (6)
#define DITHERING_TAB_R_2_tab_r_21_mask                                              (0x00000FC0)
#define DITHERING_TAB_R_2_tab_r_21(data)                                             (0x00000FC0&((data)<<6))
#define DITHERING_TAB_R_2_tab_r_21_src(data)                                         ((0x00000FC0&(data))>>6)
#define DITHERING_TAB_R_2_get_tab_r_21(data)                                         ((0x00000FC0&(data))>>6)
#define DITHERING_TAB_R_2_tab_r_20_shift                                             (0)
#define DITHERING_TAB_R_2_tab_r_20_mask                                              (0x0000003F)
#define DITHERING_TAB_R_2_tab_r_20(data)                                             (0x0000003F&((data)<<0))
#define DITHERING_TAB_R_2_tab_r_20_src(data)                                         ((0x0000003F&(data))>>0)
#define DITHERING_TAB_R_2_get_tab_r_20(data)                                         ((0x0000003F&(data))>>0)


#define DITHERING_TAB_R_3                                                            0x980098f4
#define DITHERING_TAB_R_3_reg_addr                                                   "0xD80098F4"
#define DITHERING_TAB_R_3_reg                                                        0xD80098F4
#define set_DITHERING_TAB_R_3_reg(data)   (*((volatile unsigned int*) DITHERING_TAB_R_3_reg)=data)
#define get_DITHERING_TAB_R_3_reg   (*((volatile unsigned int*) DITHERING_TAB_R_3_reg))
#define DITHERING_TAB_R_3_inst_adr                                                   "0x003D"
#define DITHERING_TAB_R_3_inst                                                       0x003D
#define DITHERING_TAB_R_3_tab_r_33_shift                                             (18)
#define DITHERING_TAB_R_3_tab_r_33_mask                                              (0x00FC0000)
#define DITHERING_TAB_R_3_tab_r_33(data)                                             (0x00FC0000&((data)<<18))
#define DITHERING_TAB_R_3_tab_r_33_src(data)                                         ((0x00FC0000&(data))>>18)
#define DITHERING_TAB_R_3_get_tab_r_33(data)                                         ((0x00FC0000&(data))>>18)
#define DITHERING_TAB_R_3_tab_r_32_shift                                             (12)
#define DITHERING_TAB_R_3_tab_r_32_mask                                              (0x0003F000)
#define DITHERING_TAB_R_3_tab_r_32(data)                                             (0x0003F000&((data)<<12))
#define DITHERING_TAB_R_3_tab_r_32_src(data)                                         ((0x0003F000&(data))>>12)
#define DITHERING_TAB_R_3_get_tab_r_32(data)                                         ((0x0003F000&(data))>>12)
#define DITHERING_TAB_R_3_tab_r_31_shift                                             (6)
#define DITHERING_TAB_R_3_tab_r_31_mask                                              (0x00000FC0)
#define DITHERING_TAB_R_3_tab_r_31(data)                                             (0x00000FC0&((data)<<6))
#define DITHERING_TAB_R_3_tab_r_31_src(data)                                         ((0x00000FC0&(data))>>6)
#define DITHERING_TAB_R_3_get_tab_r_31(data)                                         ((0x00000FC0&(data))>>6)
#define DITHERING_TAB_R_3_tab_r_30_shift                                             (0)
#define DITHERING_TAB_R_3_tab_r_30_mask                                              (0x0000003F)
#define DITHERING_TAB_R_3_tab_r_30(data)                                             (0x0000003F&((data)<<0))
#define DITHERING_TAB_R_3_tab_r_30_src(data)                                         ((0x0000003F&(data))>>0)
#define DITHERING_TAB_R_3_get_tab_r_30(data)                                         ((0x0000003F&(data))>>0)


#define DITHERING_TAB_R_4                                                            0x980098f8
#define DITHERING_TAB_R_4_reg_addr                                                   "0xD80098F8"
#define DITHERING_TAB_R_4_reg                                                        0xD80098F8
#define set_DITHERING_TAB_R_4_reg(data)   (*((volatile unsigned int*) DITHERING_TAB_R_4_reg)=data)
#define get_DITHERING_TAB_R_4_reg   (*((volatile unsigned int*) DITHERING_TAB_R_4_reg))
#define DITHERING_TAB_R_4_inst_adr                                                   "0x003E"
#define DITHERING_TAB_R_4_inst                                                       0x003E
#define DITHERING_TAB_R_4_tab_r_43_shift                                             (18)
#define DITHERING_TAB_R_4_tab_r_43_mask                                              (0x00FC0000)
#define DITHERING_TAB_R_4_tab_r_43(data)                                             (0x00FC0000&((data)<<18))
#define DITHERING_TAB_R_4_tab_r_43_src(data)                                         ((0x00FC0000&(data))>>18)
#define DITHERING_TAB_R_4_get_tab_r_43(data)                                         ((0x00FC0000&(data))>>18)
#define DITHERING_TAB_R_4_tab_r_42_shift                                             (12)
#define DITHERING_TAB_R_4_tab_r_42_mask                                              (0x0003F000)
#define DITHERING_TAB_R_4_tab_r_42(data)                                             (0x0003F000&((data)<<12))
#define DITHERING_TAB_R_4_tab_r_42_src(data)                                         ((0x0003F000&(data))>>12)
#define DITHERING_TAB_R_4_get_tab_r_42(data)                                         ((0x0003F000&(data))>>12)
#define DITHERING_TAB_R_4_tab_r_41_shift                                             (6)
#define DITHERING_TAB_R_4_tab_r_41_mask                                              (0x00000FC0)
#define DITHERING_TAB_R_4_tab_r_41(data)                                             (0x00000FC0&((data)<<6))
#define DITHERING_TAB_R_4_tab_r_41_src(data)                                         ((0x00000FC0&(data))>>6)
#define DITHERING_TAB_R_4_get_tab_r_41(data)                                         ((0x00000FC0&(data))>>6)
#define DITHERING_TAB_R_4_tab_r_40_shift                                             (0)
#define DITHERING_TAB_R_4_tab_r_40_mask                                              (0x0000003F)
#define DITHERING_TAB_R_4_tab_r_40(data)                                             (0x0000003F&((data)<<0))
#define DITHERING_TAB_R_4_tab_r_40_src(data)                                         ((0x0000003F&(data))>>0)
#define DITHERING_TAB_R_4_get_tab_r_40(data)                                         ((0x0000003F&(data))>>0)


#define DITHERING_TAB_R_5                                                            0x980098fc
#define DITHERING_TAB_R_5_reg_addr                                                   "0xD80098FC"
#define DITHERING_TAB_R_5_reg                                                        0xD80098FC
#define set_DITHERING_TAB_R_5_reg(data)   (*((volatile unsigned int*) DITHERING_TAB_R_5_reg)=data)
#define get_DITHERING_TAB_R_5_reg   (*((volatile unsigned int*) DITHERING_TAB_R_5_reg))
#define DITHERING_TAB_R_5_inst_adr                                                   "0x003F"
#define DITHERING_TAB_R_5_inst                                                       0x003F
#define DITHERING_TAB_R_5_tab_r_53_shift                                             (18)
#define DITHERING_TAB_R_5_tab_r_53_mask                                              (0x00FC0000)
#define DITHERING_TAB_R_5_tab_r_53(data)                                             (0x00FC0000&((data)<<18))
#define DITHERING_TAB_R_5_tab_r_53_src(data)                                         ((0x00FC0000&(data))>>18)
#define DITHERING_TAB_R_5_get_tab_r_53(data)                                         ((0x00FC0000&(data))>>18)
#define DITHERING_TAB_R_5_tab_r_52_shift                                             (12)
#define DITHERING_TAB_R_5_tab_r_52_mask                                              (0x0003F000)
#define DITHERING_TAB_R_5_tab_r_52(data)                                             (0x0003F000&((data)<<12))
#define DITHERING_TAB_R_5_tab_r_52_src(data)                                         ((0x0003F000&(data))>>12)
#define DITHERING_TAB_R_5_get_tab_r_52(data)                                         ((0x0003F000&(data))>>12)
#define DITHERING_TAB_R_5_tab_r_51_shift                                             (6)
#define DITHERING_TAB_R_5_tab_r_51_mask                                              (0x00000FC0)
#define DITHERING_TAB_R_5_tab_r_51(data)                                             (0x00000FC0&((data)<<6))
#define DITHERING_TAB_R_5_tab_r_51_src(data)                                         ((0x00000FC0&(data))>>6)
#define DITHERING_TAB_R_5_get_tab_r_51(data)                                         ((0x00000FC0&(data))>>6)
#define DITHERING_TAB_R_5_tab_r_50_shift                                             (0)
#define DITHERING_TAB_R_5_tab_r_50_mask                                              (0x0000003F)
#define DITHERING_TAB_R_5_tab_r_50(data)                                             (0x0000003F&((data)<<0))
#define DITHERING_TAB_R_5_tab_r_50_src(data)                                         ((0x0000003F&(data))>>0)
#define DITHERING_TAB_R_5_get_tab_r_50(data)                                         ((0x0000003F&(data))>>0)


#define DITHERING_TAB_R_6                                                            0x98009900
#define DITHERING_TAB_R_6_reg_addr                                                   "0xD8009900"
#define DITHERING_TAB_R_6_reg                                                        0xD8009900
#define set_DITHERING_TAB_R_6_reg(data)   (*((volatile unsigned int*) DITHERING_TAB_R_6_reg)=data)
#define get_DITHERING_TAB_R_6_reg   (*((volatile unsigned int*) DITHERING_TAB_R_6_reg))
#define DITHERING_TAB_R_6_inst_adr                                                   "0x0040"
#define DITHERING_TAB_R_6_inst                                                       0x0040
#define DITHERING_TAB_R_6_tab_r_63_shift                                             (18)
#define DITHERING_TAB_R_6_tab_r_63_mask                                              (0x00FC0000)
#define DITHERING_TAB_R_6_tab_r_63(data)                                             (0x00FC0000&((data)<<18))
#define DITHERING_TAB_R_6_tab_r_63_src(data)                                         ((0x00FC0000&(data))>>18)
#define DITHERING_TAB_R_6_get_tab_r_63(data)                                         ((0x00FC0000&(data))>>18)
#define DITHERING_TAB_R_6_tab_r_62_shift                                             (12)
#define DITHERING_TAB_R_6_tab_r_62_mask                                              (0x0003F000)
#define DITHERING_TAB_R_6_tab_r_62(data)                                             (0x0003F000&((data)<<12))
#define DITHERING_TAB_R_6_tab_r_62_src(data)                                         ((0x0003F000&(data))>>12)
#define DITHERING_TAB_R_6_get_tab_r_62(data)                                         ((0x0003F000&(data))>>12)
#define DITHERING_TAB_R_6_tab_r_61_shift                                             (6)
#define DITHERING_TAB_R_6_tab_r_61_mask                                              (0x00000FC0)
#define DITHERING_TAB_R_6_tab_r_61(data)                                             (0x00000FC0&((data)<<6))
#define DITHERING_TAB_R_6_tab_r_61_src(data)                                         ((0x00000FC0&(data))>>6)
#define DITHERING_TAB_R_6_get_tab_r_61(data)                                         ((0x00000FC0&(data))>>6)
#define DITHERING_TAB_R_6_tab_r_60_shift                                             (0)
#define DITHERING_TAB_R_6_tab_r_60_mask                                              (0x0000003F)
#define DITHERING_TAB_R_6_tab_r_60(data)                                             (0x0000003F&((data)<<0))
#define DITHERING_TAB_R_6_tab_r_60_src(data)                                         ((0x0000003F&(data))>>0)
#define DITHERING_TAB_R_6_get_tab_r_60(data)                                         ((0x0000003F&(data))>>0)


#define DITHERING_TAB_R_7                                                            0x98009904
#define DITHERING_TAB_R_7_reg_addr                                                   "0xD8009904"
#define DITHERING_TAB_R_7_reg                                                        0xD8009904
#define set_DITHERING_TAB_R_7_reg(data)   (*((volatile unsigned int*) DITHERING_TAB_R_7_reg)=data)
#define get_DITHERING_TAB_R_7_reg   (*((volatile unsigned int*) DITHERING_TAB_R_7_reg))
#define DITHERING_TAB_R_7_inst_adr                                                   "0x0041"
#define DITHERING_TAB_R_7_inst                                                       0x0041
#define DITHERING_TAB_R_7_tab_r_73_shift                                             (18)
#define DITHERING_TAB_R_7_tab_r_73_mask                                              (0x00FC0000)
#define DITHERING_TAB_R_7_tab_r_73(data)                                             (0x00FC0000&((data)<<18))
#define DITHERING_TAB_R_7_tab_r_73_src(data)                                         ((0x00FC0000&(data))>>18)
#define DITHERING_TAB_R_7_get_tab_r_73(data)                                         ((0x00FC0000&(data))>>18)
#define DITHERING_TAB_R_7_tab_r_72_shift                                             (12)
#define DITHERING_TAB_R_7_tab_r_72_mask                                              (0x0003F000)
#define DITHERING_TAB_R_7_tab_r_72(data)                                             (0x0003F000&((data)<<12))
#define DITHERING_TAB_R_7_tab_r_72_src(data)                                         ((0x0003F000&(data))>>12)
#define DITHERING_TAB_R_7_get_tab_r_72(data)                                         ((0x0003F000&(data))>>12)
#define DITHERING_TAB_R_7_tab_r_71_shift                                             (6)
#define DITHERING_TAB_R_7_tab_r_71_mask                                              (0x00000FC0)
#define DITHERING_TAB_R_7_tab_r_71(data)                                             (0x00000FC0&((data)<<6))
#define DITHERING_TAB_R_7_tab_r_71_src(data)                                         ((0x00000FC0&(data))>>6)
#define DITHERING_TAB_R_7_get_tab_r_71(data)                                         ((0x00000FC0&(data))>>6)
#define DITHERING_TAB_R_7_tab_r_70_shift                                             (0)
#define DITHERING_TAB_R_7_tab_r_70_mask                                              (0x0000003F)
#define DITHERING_TAB_R_7_tab_r_70(data)                                             (0x0000003F&((data)<<0))
#define DITHERING_TAB_R_7_tab_r_70_src(data)                                         ((0x0000003F&(data))>>0)
#define DITHERING_TAB_R_7_get_tab_r_70(data)                                         ((0x0000003F&(data))>>0)


#define DITHERING_TAB_R_8                                                            0x98009908
#define DITHERING_TAB_R_8_reg_addr                                                   "0xD8009908"
#define DITHERING_TAB_R_8_reg                                                        0xD8009908
#define set_DITHERING_TAB_R_8_reg(data)   (*((volatile unsigned int*) DITHERING_TAB_R_8_reg)=data)
#define get_DITHERING_TAB_R_8_reg   (*((volatile unsigned int*) DITHERING_TAB_R_8_reg))
#define DITHERING_TAB_R_8_inst_adr                                                   "0x0042"
#define DITHERING_TAB_R_8_inst                                                       0x0042
#define DITHERING_TAB_R_8_tab_r_83_shift                                             (18)
#define DITHERING_TAB_R_8_tab_r_83_mask                                              (0x00FC0000)
#define DITHERING_TAB_R_8_tab_r_83(data)                                             (0x00FC0000&((data)<<18))
#define DITHERING_TAB_R_8_tab_r_83_src(data)                                         ((0x00FC0000&(data))>>18)
#define DITHERING_TAB_R_8_get_tab_r_83(data)                                         ((0x00FC0000&(data))>>18)
#define DITHERING_TAB_R_8_tab_r_82_shift                                             (12)
#define DITHERING_TAB_R_8_tab_r_82_mask                                              (0x0003F000)
#define DITHERING_TAB_R_8_tab_r_82(data)                                             (0x0003F000&((data)<<12))
#define DITHERING_TAB_R_8_tab_r_82_src(data)                                         ((0x0003F000&(data))>>12)
#define DITHERING_TAB_R_8_get_tab_r_82(data)                                         ((0x0003F000&(data))>>12)
#define DITHERING_TAB_R_8_tab_r_81_shift                                             (6)
#define DITHERING_TAB_R_8_tab_r_81_mask                                              (0x00000FC0)
#define DITHERING_TAB_R_8_tab_r_81(data)                                             (0x00000FC0&((data)<<6))
#define DITHERING_TAB_R_8_tab_r_81_src(data)                                         ((0x00000FC0&(data))>>6)
#define DITHERING_TAB_R_8_get_tab_r_81(data)                                         ((0x00000FC0&(data))>>6)
#define DITHERING_TAB_R_8_tab_r_80_shift                                             (0)
#define DITHERING_TAB_R_8_tab_r_80_mask                                              (0x0000003F)
#define DITHERING_TAB_R_8_tab_r_80(data)                                             (0x0000003F&((data)<<0))
#define DITHERING_TAB_R_8_tab_r_80_src(data)                                         ((0x0000003F&(data))>>0)
#define DITHERING_TAB_R_8_get_tab_r_80(data)                                         ((0x0000003F&(data))>>0)


#define DITHERING_TAB_R_9                                                            0x9800990c
#define DITHERING_TAB_R_9_reg_addr                                                   "0xD800990C"
#define DITHERING_TAB_R_9_reg                                                        0xD800990C
#define set_DITHERING_TAB_R_9_reg(data)   (*((volatile unsigned int*) DITHERING_TAB_R_9_reg)=data)
#define get_DITHERING_TAB_R_9_reg   (*((volatile unsigned int*) DITHERING_TAB_R_9_reg))
#define DITHERING_TAB_R_9_inst_adr                                                   "0x0043"
#define DITHERING_TAB_R_9_inst                                                       0x0043
#define DITHERING_TAB_R_9_tab_r_93_shift                                             (18)
#define DITHERING_TAB_R_9_tab_r_93_mask                                              (0x00FC0000)
#define DITHERING_TAB_R_9_tab_r_93(data)                                             (0x00FC0000&((data)<<18))
#define DITHERING_TAB_R_9_tab_r_93_src(data)                                         ((0x00FC0000&(data))>>18)
#define DITHERING_TAB_R_9_get_tab_r_93(data)                                         ((0x00FC0000&(data))>>18)
#define DITHERING_TAB_R_9_tab_r_92_shift                                             (12)
#define DITHERING_TAB_R_9_tab_r_92_mask                                              (0x0003F000)
#define DITHERING_TAB_R_9_tab_r_92(data)                                             (0x0003F000&((data)<<12))
#define DITHERING_TAB_R_9_tab_r_92_src(data)                                         ((0x0003F000&(data))>>12)
#define DITHERING_TAB_R_9_get_tab_r_92(data)                                         ((0x0003F000&(data))>>12)
#define DITHERING_TAB_R_9_tab_r_91_shift                                             (6)
#define DITHERING_TAB_R_9_tab_r_91_mask                                              (0x00000FC0)
#define DITHERING_TAB_R_9_tab_r_91(data)                                             (0x00000FC0&((data)<<6))
#define DITHERING_TAB_R_9_tab_r_91_src(data)                                         ((0x00000FC0&(data))>>6)
#define DITHERING_TAB_R_9_get_tab_r_91(data)                                         ((0x00000FC0&(data))>>6)
#define DITHERING_TAB_R_9_tab_r_90_shift                                             (0)
#define DITHERING_TAB_R_9_tab_r_90_mask                                              (0x0000003F)
#define DITHERING_TAB_R_9_tab_r_90(data)                                             (0x0000003F&((data)<<0))
#define DITHERING_TAB_R_9_tab_r_90_src(data)                                         ((0x0000003F&(data))>>0)
#define DITHERING_TAB_R_9_get_tab_r_90(data)                                         ((0x0000003F&(data))>>0)


#define DITHERING_TAB_R_10                                                           0x98009910
#define DITHERING_TAB_R_10_reg_addr                                                  "0xD8009910"
#define DITHERING_TAB_R_10_reg                                                       0xD8009910
#define set_DITHERING_TAB_R_10_reg(data)   (*((volatile unsigned int*) DITHERING_TAB_R_10_reg)=data)
#define get_DITHERING_TAB_R_10_reg   (*((volatile unsigned int*) DITHERING_TAB_R_10_reg))
#define DITHERING_TAB_R_10_inst_adr                                                  "0x0044"
#define DITHERING_TAB_R_10_inst                                                      0x0044
#define DITHERING_TAB_R_10_tab_r_a3_shift                                            (18)
#define DITHERING_TAB_R_10_tab_r_a3_mask                                             (0x00FC0000)
#define DITHERING_TAB_R_10_tab_r_a3(data)                                            (0x00FC0000&((data)<<18))
#define DITHERING_TAB_R_10_tab_r_a3_src(data)                                        ((0x00FC0000&(data))>>18)
#define DITHERING_TAB_R_10_get_tab_r_a3(data)                                        ((0x00FC0000&(data))>>18)
#define DITHERING_TAB_R_10_tab_r_a2_shift                                            (12)
#define DITHERING_TAB_R_10_tab_r_a2_mask                                             (0x0003F000)
#define DITHERING_TAB_R_10_tab_r_a2(data)                                            (0x0003F000&((data)<<12))
#define DITHERING_TAB_R_10_tab_r_a2_src(data)                                        ((0x0003F000&(data))>>12)
#define DITHERING_TAB_R_10_get_tab_r_a2(data)                                        ((0x0003F000&(data))>>12)
#define DITHERING_TAB_R_10_tab_r_a1_shift                                            (6)
#define DITHERING_TAB_R_10_tab_r_a1_mask                                             (0x00000FC0)
#define DITHERING_TAB_R_10_tab_r_a1(data)                                            (0x00000FC0&((data)<<6))
#define DITHERING_TAB_R_10_tab_r_a1_src(data)                                        ((0x00000FC0&(data))>>6)
#define DITHERING_TAB_R_10_get_tab_r_a1(data)                                        ((0x00000FC0&(data))>>6)
#define DITHERING_TAB_R_10_tab_r_a0_shift                                            (0)
#define DITHERING_TAB_R_10_tab_r_a0_mask                                             (0x0000003F)
#define DITHERING_TAB_R_10_tab_r_a0(data)                                            (0x0000003F&((data)<<0))
#define DITHERING_TAB_R_10_tab_r_a0_src(data)                                        ((0x0000003F&(data))>>0)
#define DITHERING_TAB_R_10_get_tab_r_a0(data)                                        ((0x0000003F&(data))>>0)


#define DITHERING_TAB_R_11                                                           0x98009914
#define DITHERING_TAB_R_11_reg_addr                                                  "0xD8009914"
#define DITHERING_TAB_R_11_reg                                                       0xD8009914
#define set_DITHERING_TAB_R_11_reg(data)   (*((volatile unsigned int*) DITHERING_TAB_R_11_reg)=data)
#define get_DITHERING_TAB_R_11_reg   (*((volatile unsigned int*) DITHERING_TAB_R_11_reg))
#define DITHERING_TAB_R_11_inst_adr                                                  "0x0045"
#define DITHERING_TAB_R_11_inst                                                      0x0045
#define DITHERING_TAB_R_11_tab_r_b3_shift                                            (18)
#define DITHERING_TAB_R_11_tab_r_b3_mask                                             (0x00FC0000)
#define DITHERING_TAB_R_11_tab_r_b3(data)                                            (0x00FC0000&((data)<<18))
#define DITHERING_TAB_R_11_tab_r_b3_src(data)                                        ((0x00FC0000&(data))>>18)
#define DITHERING_TAB_R_11_get_tab_r_b3(data)                                        ((0x00FC0000&(data))>>18)
#define DITHERING_TAB_R_11_tab_r_b2_shift                                            (12)
#define DITHERING_TAB_R_11_tab_r_b2_mask                                             (0x0003F000)
#define DITHERING_TAB_R_11_tab_r_b2(data)                                            (0x0003F000&((data)<<12))
#define DITHERING_TAB_R_11_tab_r_b2_src(data)                                        ((0x0003F000&(data))>>12)
#define DITHERING_TAB_R_11_get_tab_r_b2(data)                                        ((0x0003F000&(data))>>12)
#define DITHERING_TAB_R_11_tab_r_b1_shift                                            (6)
#define DITHERING_TAB_R_11_tab_r_b1_mask                                             (0x00000FC0)
#define DITHERING_TAB_R_11_tab_r_b1(data)                                            (0x00000FC0&((data)<<6))
#define DITHERING_TAB_R_11_tab_r_b1_src(data)                                        ((0x00000FC0&(data))>>6)
#define DITHERING_TAB_R_11_get_tab_r_b1(data)                                        ((0x00000FC0&(data))>>6)
#define DITHERING_TAB_R_11_tab_r_b0_shift                                            (0)
#define DITHERING_TAB_R_11_tab_r_b0_mask                                             (0x0000003F)
#define DITHERING_TAB_R_11_tab_r_b0(data)                                            (0x0000003F&((data)<<0))
#define DITHERING_TAB_R_11_tab_r_b0_src(data)                                        ((0x0000003F&(data))>>0)
#define DITHERING_TAB_R_11_get_tab_r_b0(data)                                        ((0x0000003F&(data))>>0)


#define DITHERING_TAB_R_12                                                           0x98009918
#define DITHERING_TAB_R_12_reg_addr                                                  "0xD8009918"
#define DITHERING_TAB_R_12_reg                                                       0xD8009918
#define set_DITHERING_TAB_R_12_reg(data)   (*((volatile unsigned int*) DITHERING_TAB_R_12_reg)=data)
#define get_DITHERING_TAB_R_12_reg   (*((volatile unsigned int*) DITHERING_TAB_R_12_reg))
#define DITHERING_TAB_R_12_inst_adr                                                  "0x0046"
#define DITHERING_TAB_R_12_inst                                                      0x0046
#define DITHERING_TAB_R_12_tab_r_c3_shift                                            (18)
#define DITHERING_TAB_R_12_tab_r_c3_mask                                             (0x00FC0000)
#define DITHERING_TAB_R_12_tab_r_c3(data)                                            (0x00FC0000&((data)<<18))
#define DITHERING_TAB_R_12_tab_r_c3_src(data)                                        ((0x00FC0000&(data))>>18)
#define DITHERING_TAB_R_12_get_tab_r_c3(data)                                        ((0x00FC0000&(data))>>18)
#define DITHERING_TAB_R_12_tab_r_c2_shift                                            (12)
#define DITHERING_TAB_R_12_tab_r_c2_mask                                             (0x0003F000)
#define DITHERING_TAB_R_12_tab_r_c2(data)                                            (0x0003F000&((data)<<12))
#define DITHERING_TAB_R_12_tab_r_c2_src(data)                                        ((0x0003F000&(data))>>12)
#define DITHERING_TAB_R_12_get_tab_r_c2(data)                                        ((0x0003F000&(data))>>12)
#define DITHERING_TAB_R_12_tab_r_c1_shift                                            (6)
#define DITHERING_TAB_R_12_tab_r_c1_mask                                             (0x00000FC0)
#define DITHERING_TAB_R_12_tab_r_c1(data)                                            (0x00000FC0&((data)<<6))
#define DITHERING_TAB_R_12_tab_r_c1_src(data)                                        ((0x00000FC0&(data))>>6)
#define DITHERING_TAB_R_12_get_tab_r_c1(data)                                        ((0x00000FC0&(data))>>6)
#define DITHERING_TAB_R_12_tab_r_c0_shift                                            (0)
#define DITHERING_TAB_R_12_tab_r_c0_mask                                             (0x0000003F)
#define DITHERING_TAB_R_12_tab_r_c0(data)                                            (0x0000003F&((data)<<0))
#define DITHERING_TAB_R_12_tab_r_c0_src(data)                                        ((0x0000003F&(data))>>0)
#define DITHERING_TAB_R_12_get_tab_r_c0(data)                                        ((0x0000003F&(data))>>0)


#define DITHERING_TAB_R_13                                                           0x9800991c
#define DITHERING_TAB_R_13_reg_addr                                                  "0xD800991C"
#define DITHERING_TAB_R_13_reg                                                       0xD800991C
#define set_DITHERING_TAB_R_13_reg(data)   (*((volatile unsigned int*) DITHERING_TAB_R_13_reg)=data)
#define get_DITHERING_TAB_R_13_reg   (*((volatile unsigned int*) DITHERING_TAB_R_13_reg))
#define DITHERING_TAB_R_13_inst_adr                                                  "0x0047"
#define DITHERING_TAB_R_13_inst                                                      0x0047
#define DITHERING_TAB_R_13_tab_r_d3_shift                                            (18)
#define DITHERING_TAB_R_13_tab_r_d3_mask                                             (0x00FC0000)
#define DITHERING_TAB_R_13_tab_r_d3(data)                                            (0x00FC0000&((data)<<18))
#define DITHERING_TAB_R_13_tab_r_d3_src(data)                                        ((0x00FC0000&(data))>>18)
#define DITHERING_TAB_R_13_get_tab_r_d3(data)                                        ((0x00FC0000&(data))>>18)
#define DITHERING_TAB_R_13_tab_r_d2_shift                                            (12)
#define DITHERING_TAB_R_13_tab_r_d2_mask                                             (0x0003F000)
#define DITHERING_TAB_R_13_tab_r_d2(data)                                            (0x0003F000&((data)<<12))
#define DITHERING_TAB_R_13_tab_r_d2_src(data)                                        ((0x0003F000&(data))>>12)
#define DITHERING_TAB_R_13_get_tab_r_d2(data)                                        ((0x0003F000&(data))>>12)
#define DITHERING_TAB_R_13_tab_r_d1_shift                                            (6)
#define DITHERING_TAB_R_13_tab_r_d1_mask                                             (0x00000FC0)
#define DITHERING_TAB_R_13_tab_r_d1(data)                                            (0x00000FC0&((data)<<6))
#define DITHERING_TAB_R_13_tab_r_d1_src(data)                                        ((0x00000FC0&(data))>>6)
#define DITHERING_TAB_R_13_get_tab_r_d1(data)                                        ((0x00000FC0&(data))>>6)
#define DITHERING_TAB_R_13_tab_r_d0_shift                                            (0)
#define DITHERING_TAB_R_13_tab_r_d0_mask                                             (0x0000003F)
#define DITHERING_TAB_R_13_tab_r_d0(data)                                            (0x0000003F&((data)<<0))
#define DITHERING_TAB_R_13_tab_r_d0_src(data)                                        ((0x0000003F&(data))>>0)
#define DITHERING_TAB_R_13_get_tab_r_d0(data)                                        ((0x0000003F&(data))>>0)


#define DITHERING_TAB_R_14                                                           0x98009920
#define DITHERING_TAB_R_14_reg_addr                                                  "0xD8009920"
#define DITHERING_TAB_R_14_reg                                                       0xD8009920
#define set_DITHERING_TAB_R_14_reg(data)   (*((volatile unsigned int*) DITHERING_TAB_R_14_reg)=data)
#define get_DITHERING_TAB_R_14_reg   (*((volatile unsigned int*) DITHERING_TAB_R_14_reg))
#define DITHERING_TAB_R_14_inst_adr                                                  "0x0048"
#define DITHERING_TAB_R_14_inst                                                      0x0048
#define DITHERING_TAB_R_14_tab_r_e3_shift                                            (18)
#define DITHERING_TAB_R_14_tab_r_e3_mask                                             (0x00FC0000)
#define DITHERING_TAB_R_14_tab_r_e3(data)                                            (0x00FC0000&((data)<<18))
#define DITHERING_TAB_R_14_tab_r_e3_src(data)                                        ((0x00FC0000&(data))>>18)
#define DITHERING_TAB_R_14_get_tab_r_e3(data)                                        ((0x00FC0000&(data))>>18)
#define DITHERING_TAB_R_14_tab_r_e2_shift                                            (12)
#define DITHERING_TAB_R_14_tab_r_e2_mask                                             (0x0003F000)
#define DITHERING_TAB_R_14_tab_r_e2(data)                                            (0x0003F000&((data)<<12))
#define DITHERING_TAB_R_14_tab_r_e2_src(data)                                        ((0x0003F000&(data))>>12)
#define DITHERING_TAB_R_14_get_tab_r_e2(data)                                        ((0x0003F000&(data))>>12)
#define DITHERING_TAB_R_14_tab_r_e1_shift                                            (6)
#define DITHERING_TAB_R_14_tab_r_e1_mask                                             (0x00000FC0)
#define DITHERING_TAB_R_14_tab_r_e1(data)                                            (0x00000FC0&((data)<<6))
#define DITHERING_TAB_R_14_tab_r_e1_src(data)                                        ((0x00000FC0&(data))>>6)
#define DITHERING_TAB_R_14_get_tab_r_e1(data)                                        ((0x00000FC0&(data))>>6)
#define DITHERING_TAB_R_14_tab_r_e0_shift                                            (0)
#define DITHERING_TAB_R_14_tab_r_e0_mask                                             (0x0000003F)
#define DITHERING_TAB_R_14_tab_r_e0(data)                                            (0x0000003F&((data)<<0))
#define DITHERING_TAB_R_14_tab_r_e0_src(data)                                        ((0x0000003F&(data))>>0)
#define DITHERING_TAB_R_14_get_tab_r_e0(data)                                        ((0x0000003F&(data))>>0)


#define DITHERING_TAB_R_15                                                           0x98009924
#define DITHERING_TAB_R_15_reg_addr                                                  "0xD8009924"
#define DITHERING_TAB_R_15_reg                                                       0xD8009924
#define set_DITHERING_TAB_R_15_reg(data)   (*((volatile unsigned int*) DITHERING_TAB_R_15_reg)=data)
#define get_DITHERING_TAB_R_15_reg   (*((volatile unsigned int*) DITHERING_TAB_R_15_reg))
#define DITHERING_TAB_R_15_inst_adr                                                  "0x0049"
#define DITHERING_TAB_R_15_inst                                                      0x0049
#define DITHERING_TAB_R_15_tab_r_f3_shift                                            (18)
#define DITHERING_TAB_R_15_tab_r_f3_mask                                             (0x00FC0000)
#define DITHERING_TAB_R_15_tab_r_f3(data)                                            (0x00FC0000&((data)<<18))
#define DITHERING_TAB_R_15_tab_r_f3_src(data)                                        ((0x00FC0000&(data))>>18)
#define DITHERING_TAB_R_15_get_tab_r_f3(data)                                        ((0x00FC0000&(data))>>18)
#define DITHERING_TAB_R_15_tab_r_f2_shift                                            (12)
#define DITHERING_TAB_R_15_tab_r_f2_mask                                             (0x0003F000)
#define DITHERING_TAB_R_15_tab_r_f2(data)                                            (0x0003F000&((data)<<12))
#define DITHERING_TAB_R_15_tab_r_f2_src(data)                                        ((0x0003F000&(data))>>12)
#define DITHERING_TAB_R_15_get_tab_r_f2(data)                                        ((0x0003F000&(data))>>12)
#define DITHERING_TAB_R_15_tab_r_f1_shift                                            (6)
#define DITHERING_TAB_R_15_tab_r_f1_mask                                             (0x00000FC0)
#define DITHERING_TAB_R_15_tab_r_f1(data)                                            (0x00000FC0&((data)<<6))
#define DITHERING_TAB_R_15_tab_r_f1_src(data)                                        ((0x00000FC0&(data))>>6)
#define DITHERING_TAB_R_15_get_tab_r_f1(data)                                        ((0x00000FC0&(data))>>6)
#define DITHERING_TAB_R_15_tab_r_f0_shift                                            (0)
#define DITHERING_TAB_R_15_tab_r_f0_mask                                             (0x0000003F)
#define DITHERING_TAB_R_15_tab_r_f0(data)                                            (0x0000003F&((data)<<0))
#define DITHERING_TAB_R_15_tab_r_f0_src(data)                                        ((0x0000003F&(data))>>0)
#define DITHERING_TAB_R_15_get_tab_r_f0(data)                                        ((0x0000003F&(data))>>0)


#define DITHERING_TAB_G_0                                                            0x98009928
#define DITHERING_TAB_G_0_reg_addr                                                   "0xD8009928"
#define DITHERING_TAB_G_0_reg                                                        0xD8009928
#define set_DITHERING_TAB_G_0_reg(data)   (*((volatile unsigned int*) DITHERING_TAB_G_0_reg)=data)
#define get_DITHERING_TAB_G_0_reg   (*((volatile unsigned int*) DITHERING_TAB_G_0_reg))
#define DITHERING_TAB_G_0_inst_adr                                                   "0x004A"
#define DITHERING_TAB_G_0_inst                                                       0x004A
#define DITHERING_TAB_G_0_tab_g_03_shift                                             (18)
#define DITHERING_TAB_G_0_tab_g_03_mask                                              (0x00FC0000)
#define DITHERING_TAB_G_0_tab_g_03(data)                                             (0x00FC0000&((data)<<18))
#define DITHERING_TAB_G_0_tab_g_03_src(data)                                         ((0x00FC0000&(data))>>18)
#define DITHERING_TAB_G_0_get_tab_g_03(data)                                         ((0x00FC0000&(data))>>18)
#define DITHERING_TAB_G_0_tab_g_02_shift                                             (12)
#define DITHERING_TAB_G_0_tab_g_02_mask                                              (0x0003F000)
#define DITHERING_TAB_G_0_tab_g_02(data)                                             (0x0003F000&((data)<<12))
#define DITHERING_TAB_G_0_tab_g_02_src(data)                                         ((0x0003F000&(data))>>12)
#define DITHERING_TAB_G_0_get_tab_g_02(data)                                         ((0x0003F000&(data))>>12)
#define DITHERING_TAB_G_0_tab_g_01_shift                                             (6)
#define DITHERING_TAB_G_0_tab_g_01_mask                                              (0x00000FC0)
#define DITHERING_TAB_G_0_tab_g_01(data)                                             (0x00000FC0&((data)<<6))
#define DITHERING_TAB_G_0_tab_g_01_src(data)                                         ((0x00000FC0&(data))>>6)
#define DITHERING_TAB_G_0_get_tab_g_01(data)                                         ((0x00000FC0&(data))>>6)
#define DITHERING_TAB_G_0_tab_g_00_shift                                             (0)
#define DITHERING_TAB_G_0_tab_g_00_mask                                              (0x0000003F)
#define DITHERING_TAB_G_0_tab_g_00(data)                                             (0x0000003F&((data)<<0))
#define DITHERING_TAB_G_0_tab_g_00_src(data)                                         ((0x0000003F&(data))>>0)
#define DITHERING_TAB_G_0_get_tab_g_00(data)                                         ((0x0000003F&(data))>>0)


#define DITHERING_TAB_G_1                                                            0x9800992c
#define DITHERING_TAB_G_1_reg_addr                                                   "0xD800992C"
#define DITHERING_TAB_G_1_reg                                                        0xD800992C
#define set_DITHERING_TAB_G_1_reg(data)   (*((volatile unsigned int*) DITHERING_TAB_G_1_reg)=data)
#define get_DITHERING_TAB_G_1_reg   (*((volatile unsigned int*) DITHERING_TAB_G_1_reg))
#define DITHERING_TAB_G_1_inst_adr                                                   "0x004B"
#define DITHERING_TAB_G_1_inst                                                       0x004B
#define DITHERING_TAB_G_1_tab_g_13_shift                                             (18)
#define DITHERING_TAB_G_1_tab_g_13_mask                                              (0x00FC0000)
#define DITHERING_TAB_G_1_tab_g_13(data)                                             (0x00FC0000&((data)<<18))
#define DITHERING_TAB_G_1_tab_g_13_src(data)                                         ((0x00FC0000&(data))>>18)
#define DITHERING_TAB_G_1_get_tab_g_13(data)                                         ((0x00FC0000&(data))>>18)
#define DITHERING_TAB_G_1_tab_g_12_shift                                             (12)
#define DITHERING_TAB_G_1_tab_g_12_mask                                              (0x0003F000)
#define DITHERING_TAB_G_1_tab_g_12(data)                                             (0x0003F000&((data)<<12))
#define DITHERING_TAB_G_1_tab_g_12_src(data)                                         ((0x0003F000&(data))>>12)
#define DITHERING_TAB_G_1_get_tab_g_12(data)                                         ((0x0003F000&(data))>>12)
#define DITHERING_TAB_G_1_tab_g_11_shift                                             (6)
#define DITHERING_TAB_G_1_tab_g_11_mask                                              (0x00000FC0)
#define DITHERING_TAB_G_1_tab_g_11(data)                                             (0x00000FC0&((data)<<6))
#define DITHERING_TAB_G_1_tab_g_11_src(data)                                         ((0x00000FC0&(data))>>6)
#define DITHERING_TAB_G_1_get_tab_g_11(data)                                         ((0x00000FC0&(data))>>6)
#define DITHERING_TAB_G_1_tab_g_10_shift                                             (0)
#define DITHERING_TAB_G_1_tab_g_10_mask                                              (0x0000003F)
#define DITHERING_TAB_G_1_tab_g_10(data)                                             (0x0000003F&((data)<<0))
#define DITHERING_TAB_G_1_tab_g_10_src(data)                                         ((0x0000003F&(data))>>0)
#define DITHERING_TAB_G_1_get_tab_g_10(data)                                         ((0x0000003F&(data))>>0)


#define DITHERING_TAB_G_2                                                            0x98009930
#define DITHERING_TAB_G_2_reg_addr                                                   "0xD8009930"
#define DITHERING_TAB_G_2_reg                                                        0xD8009930
#define set_DITHERING_TAB_G_2_reg(data)   (*((volatile unsigned int*) DITHERING_TAB_G_2_reg)=data)
#define get_DITHERING_TAB_G_2_reg   (*((volatile unsigned int*) DITHERING_TAB_G_2_reg))
#define DITHERING_TAB_G_2_inst_adr                                                   "0x004C"
#define DITHERING_TAB_G_2_inst                                                       0x004C
#define DITHERING_TAB_G_2_tab_g_23_shift                                             (18)
#define DITHERING_TAB_G_2_tab_g_23_mask                                              (0x00FC0000)
#define DITHERING_TAB_G_2_tab_g_23(data)                                             (0x00FC0000&((data)<<18))
#define DITHERING_TAB_G_2_tab_g_23_src(data)                                         ((0x00FC0000&(data))>>18)
#define DITHERING_TAB_G_2_get_tab_g_23(data)                                         ((0x00FC0000&(data))>>18)
#define DITHERING_TAB_G_2_tab_g_22_shift                                             (12)
#define DITHERING_TAB_G_2_tab_g_22_mask                                              (0x0003F000)
#define DITHERING_TAB_G_2_tab_g_22(data)                                             (0x0003F000&((data)<<12))
#define DITHERING_TAB_G_2_tab_g_22_src(data)                                         ((0x0003F000&(data))>>12)
#define DITHERING_TAB_G_2_get_tab_g_22(data)                                         ((0x0003F000&(data))>>12)
#define DITHERING_TAB_G_2_tab_g_21_shift                                             (6)
#define DITHERING_TAB_G_2_tab_g_21_mask                                              (0x00000FC0)
#define DITHERING_TAB_G_2_tab_g_21(data)                                             (0x00000FC0&((data)<<6))
#define DITHERING_TAB_G_2_tab_g_21_src(data)                                         ((0x00000FC0&(data))>>6)
#define DITHERING_TAB_G_2_get_tab_g_21(data)                                         ((0x00000FC0&(data))>>6)
#define DITHERING_TAB_G_2_tab_g_20_shift                                             (0)
#define DITHERING_TAB_G_2_tab_g_20_mask                                              (0x0000003F)
#define DITHERING_TAB_G_2_tab_g_20(data)                                             (0x0000003F&((data)<<0))
#define DITHERING_TAB_G_2_tab_g_20_src(data)                                         ((0x0000003F&(data))>>0)
#define DITHERING_TAB_G_2_get_tab_g_20(data)                                         ((0x0000003F&(data))>>0)


#define DITHERING_TAB_G_3                                                            0x98009934
#define DITHERING_TAB_G_3_reg_addr                                                   "0xD8009934"
#define DITHERING_TAB_G_3_reg                                                        0xD8009934
#define set_DITHERING_TAB_G_3_reg(data)   (*((volatile unsigned int*) DITHERING_TAB_G_3_reg)=data)
#define get_DITHERING_TAB_G_3_reg   (*((volatile unsigned int*) DITHERING_TAB_G_3_reg))
#define DITHERING_TAB_G_3_inst_adr                                                   "0x004D"
#define DITHERING_TAB_G_3_inst                                                       0x004D
#define DITHERING_TAB_G_3_tab_g_33_shift                                             (18)
#define DITHERING_TAB_G_3_tab_g_33_mask                                              (0x00FC0000)
#define DITHERING_TAB_G_3_tab_g_33(data)                                             (0x00FC0000&((data)<<18))
#define DITHERING_TAB_G_3_tab_g_33_src(data)                                         ((0x00FC0000&(data))>>18)
#define DITHERING_TAB_G_3_get_tab_g_33(data)                                         ((0x00FC0000&(data))>>18)
#define DITHERING_TAB_G_3_tab_g_32_shift                                             (12)
#define DITHERING_TAB_G_3_tab_g_32_mask                                              (0x0003F000)
#define DITHERING_TAB_G_3_tab_g_32(data)                                             (0x0003F000&((data)<<12))
#define DITHERING_TAB_G_3_tab_g_32_src(data)                                         ((0x0003F000&(data))>>12)
#define DITHERING_TAB_G_3_get_tab_g_32(data)                                         ((0x0003F000&(data))>>12)
#define DITHERING_TAB_G_3_tab_g_31_shift                                             (6)
#define DITHERING_TAB_G_3_tab_g_31_mask                                              (0x00000FC0)
#define DITHERING_TAB_G_3_tab_g_31(data)                                             (0x00000FC0&((data)<<6))
#define DITHERING_TAB_G_3_tab_g_31_src(data)                                         ((0x00000FC0&(data))>>6)
#define DITHERING_TAB_G_3_get_tab_g_31(data)                                         ((0x00000FC0&(data))>>6)
#define DITHERING_TAB_G_3_tab_g_30_shift                                             (0)
#define DITHERING_TAB_G_3_tab_g_30_mask                                              (0x0000003F)
#define DITHERING_TAB_G_3_tab_g_30(data)                                             (0x0000003F&((data)<<0))
#define DITHERING_TAB_G_3_tab_g_30_src(data)                                         ((0x0000003F&(data))>>0)
#define DITHERING_TAB_G_3_get_tab_g_30(data)                                         ((0x0000003F&(data))>>0)


#define DITHERING_TAB_G_4                                                            0x98009938
#define DITHERING_TAB_G_4_reg_addr                                                   "0xD8009938"
#define DITHERING_TAB_G_4_reg                                                        0xD8009938
#define set_DITHERING_TAB_G_4_reg(data)   (*((volatile unsigned int*) DITHERING_TAB_G_4_reg)=data)
#define get_DITHERING_TAB_G_4_reg   (*((volatile unsigned int*) DITHERING_TAB_G_4_reg))
#define DITHERING_TAB_G_4_inst_adr                                                   "0x004E"
#define DITHERING_TAB_G_4_inst                                                       0x004E
#define DITHERING_TAB_G_4_tab_g_43_shift                                             (18)
#define DITHERING_TAB_G_4_tab_g_43_mask                                              (0x00FC0000)
#define DITHERING_TAB_G_4_tab_g_43(data)                                             (0x00FC0000&((data)<<18))
#define DITHERING_TAB_G_4_tab_g_43_src(data)                                         ((0x00FC0000&(data))>>18)
#define DITHERING_TAB_G_4_get_tab_g_43(data)                                         ((0x00FC0000&(data))>>18)
#define DITHERING_TAB_G_4_tab_g_42_shift                                             (12)
#define DITHERING_TAB_G_4_tab_g_42_mask                                              (0x0003F000)
#define DITHERING_TAB_G_4_tab_g_42(data)                                             (0x0003F000&((data)<<12))
#define DITHERING_TAB_G_4_tab_g_42_src(data)                                         ((0x0003F000&(data))>>12)
#define DITHERING_TAB_G_4_get_tab_g_42(data)                                         ((0x0003F000&(data))>>12)
#define DITHERING_TAB_G_4_tab_g_41_shift                                             (6)
#define DITHERING_TAB_G_4_tab_g_41_mask                                              (0x00000FC0)
#define DITHERING_TAB_G_4_tab_g_41(data)                                             (0x00000FC0&((data)<<6))
#define DITHERING_TAB_G_4_tab_g_41_src(data)                                         ((0x00000FC0&(data))>>6)
#define DITHERING_TAB_G_4_get_tab_g_41(data)                                         ((0x00000FC0&(data))>>6)
#define DITHERING_TAB_G_4_tab_g_40_shift                                             (0)
#define DITHERING_TAB_G_4_tab_g_40_mask                                              (0x0000003F)
#define DITHERING_TAB_G_4_tab_g_40(data)                                             (0x0000003F&((data)<<0))
#define DITHERING_TAB_G_4_tab_g_40_src(data)                                         ((0x0000003F&(data))>>0)
#define DITHERING_TAB_G_4_get_tab_g_40(data)                                         ((0x0000003F&(data))>>0)


#define DITHERING_TAB_G_5                                                            0x9800993c
#define DITHERING_TAB_G_5_reg_addr                                                   "0xD800993C"
#define DITHERING_TAB_G_5_reg                                                        0xD800993C
#define set_DITHERING_TAB_G_5_reg(data)   (*((volatile unsigned int*) DITHERING_TAB_G_5_reg)=data)
#define get_DITHERING_TAB_G_5_reg   (*((volatile unsigned int*) DITHERING_TAB_G_5_reg))
#define DITHERING_TAB_G_5_inst_adr                                                   "0x004F"
#define DITHERING_TAB_G_5_inst                                                       0x004F
#define DITHERING_TAB_G_5_tab_g_53_shift                                             (18)
#define DITHERING_TAB_G_5_tab_g_53_mask                                              (0x00FC0000)
#define DITHERING_TAB_G_5_tab_g_53(data)                                             (0x00FC0000&((data)<<18))
#define DITHERING_TAB_G_5_tab_g_53_src(data)                                         ((0x00FC0000&(data))>>18)
#define DITHERING_TAB_G_5_get_tab_g_53(data)                                         ((0x00FC0000&(data))>>18)
#define DITHERING_TAB_G_5_tab_g_52_shift                                             (12)
#define DITHERING_TAB_G_5_tab_g_52_mask                                              (0x0003F000)
#define DITHERING_TAB_G_5_tab_g_52(data)                                             (0x0003F000&((data)<<12))
#define DITHERING_TAB_G_5_tab_g_52_src(data)                                         ((0x0003F000&(data))>>12)
#define DITHERING_TAB_G_5_get_tab_g_52(data)                                         ((0x0003F000&(data))>>12)
#define DITHERING_TAB_G_5_tab_g_51_shift                                             (6)
#define DITHERING_TAB_G_5_tab_g_51_mask                                              (0x00000FC0)
#define DITHERING_TAB_G_5_tab_g_51(data)                                             (0x00000FC0&((data)<<6))
#define DITHERING_TAB_G_5_tab_g_51_src(data)                                         ((0x00000FC0&(data))>>6)
#define DITHERING_TAB_G_5_get_tab_g_51(data)                                         ((0x00000FC0&(data))>>6)
#define DITHERING_TAB_G_5_tab_g_50_shift                                             (0)
#define DITHERING_TAB_G_5_tab_g_50_mask                                              (0x0000003F)
#define DITHERING_TAB_G_5_tab_g_50(data)                                             (0x0000003F&((data)<<0))
#define DITHERING_TAB_G_5_tab_g_50_src(data)                                         ((0x0000003F&(data))>>0)
#define DITHERING_TAB_G_5_get_tab_g_50(data)                                         ((0x0000003F&(data))>>0)


#define DITHERING_TAB_G_6                                                            0x98009940
#define DITHERING_TAB_G_6_reg_addr                                                   "0xD8009940"
#define DITHERING_TAB_G_6_reg                                                        0xD8009940
#define set_DITHERING_TAB_G_6_reg(data)   (*((volatile unsigned int*) DITHERING_TAB_G_6_reg)=data)
#define get_DITHERING_TAB_G_6_reg   (*((volatile unsigned int*) DITHERING_TAB_G_6_reg))
#define DITHERING_TAB_G_6_inst_adr                                                   "0x0050"
#define DITHERING_TAB_G_6_inst                                                       0x0050
#define DITHERING_TAB_G_6_tab_g_63_shift                                             (18)
#define DITHERING_TAB_G_6_tab_g_63_mask                                              (0x00FC0000)
#define DITHERING_TAB_G_6_tab_g_63(data)                                             (0x00FC0000&((data)<<18))
#define DITHERING_TAB_G_6_tab_g_63_src(data)                                         ((0x00FC0000&(data))>>18)
#define DITHERING_TAB_G_6_get_tab_g_63(data)                                         ((0x00FC0000&(data))>>18)
#define DITHERING_TAB_G_6_tab_g_62_shift                                             (12)
#define DITHERING_TAB_G_6_tab_g_62_mask                                              (0x0003F000)
#define DITHERING_TAB_G_6_tab_g_62(data)                                             (0x0003F000&((data)<<12))
#define DITHERING_TAB_G_6_tab_g_62_src(data)                                         ((0x0003F000&(data))>>12)
#define DITHERING_TAB_G_6_get_tab_g_62(data)                                         ((0x0003F000&(data))>>12)
#define DITHERING_TAB_G_6_tab_g_61_shift                                             (6)
#define DITHERING_TAB_G_6_tab_g_61_mask                                              (0x00000FC0)
#define DITHERING_TAB_G_6_tab_g_61(data)                                             (0x00000FC0&((data)<<6))
#define DITHERING_TAB_G_6_tab_g_61_src(data)                                         ((0x00000FC0&(data))>>6)
#define DITHERING_TAB_G_6_get_tab_g_61(data)                                         ((0x00000FC0&(data))>>6)
#define DITHERING_TAB_G_6_tab_g_60_shift                                             (0)
#define DITHERING_TAB_G_6_tab_g_60_mask                                              (0x0000003F)
#define DITHERING_TAB_G_6_tab_g_60(data)                                             (0x0000003F&((data)<<0))
#define DITHERING_TAB_G_6_tab_g_60_src(data)                                         ((0x0000003F&(data))>>0)
#define DITHERING_TAB_G_6_get_tab_g_60(data)                                         ((0x0000003F&(data))>>0)


#define DITHERING_TAB_G_7                                                            0x98009944
#define DITHERING_TAB_G_7_reg_addr                                                   "0xD8009944"
#define DITHERING_TAB_G_7_reg                                                        0xD8009944
#define set_DITHERING_TAB_G_7_reg(data)   (*((volatile unsigned int*) DITHERING_TAB_G_7_reg)=data)
#define get_DITHERING_TAB_G_7_reg   (*((volatile unsigned int*) DITHERING_TAB_G_7_reg))
#define DITHERING_TAB_G_7_inst_adr                                                   "0x0051"
#define DITHERING_TAB_G_7_inst                                                       0x0051
#define DITHERING_TAB_G_7_tab_g_73_shift                                             (18)
#define DITHERING_TAB_G_7_tab_g_73_mask                                              (0x00FC0000)
#define DITHERING_TAB_G_7_tab_g_73(data)                                             (0x00FC0000&((data)<<18))
#define DITHERING_TAB_G_7_tab_g_73_src(data)                                         ((0x00FC0000&(data))>>18)
#define DITHERING_TAB_G_7_get_tab_g_73(data)                                         ((0x00FC0000&(data))>>18)
#define DITHERING_TAB_G_7_tab_g_72_shift                                             (12)
#define DITHERING_TAB_G_7_tab_g_72_mask                                              (0x0003F000)
#define DITHERING_TAB_G_7_tab_g_72(data)                                             (0x0003F000&((data)<<12))
#define DITHERING_TAB_G_7_tab_g_72_src(data)                                         ((0x0003F000&(data))>>12)
#define DITHERING_TAB_G_7_get_tab_g_72(data)                                         ((0x0003F000&(data))>>12)
#define DITHERING_TAB_G_7_tab_g_71_shift                                             (6)
#define DITHERING_TAB_G_7_tab_g_71_mask                                              (0x00000FC0)
#define DITHERING_TAB_G_7_tab_g_71(data)                                             (0x00000FC0&((data)<<6))
#define DITHERING_TAB_G_7_tab_g_71_src(data)                                         ((0x00000FC0&(data))>>6)
#define DITHERING_TAB_G_7_get_tab_g_71(data)                                         ((0x00000FC0&(data))>>6)
#define DITHERING_TAB_G_7_tab_g_70_shift                                             (0)
#define DITHERING_TAB_G_7_tab_g_70_mask                                              (0x0000003F)
#define DITHERING_TAB_G_7_tab_g_70(data)                                             (0x0000003F&((data)<<0))
#define DITHERING_TAB_G_7_tab_g_70_src(data)                                         ((0x0000003F&(data))>>0)
#define DITHERING_TAB_G_7_get_tab_g_70(data)                                         ((0x0000003F&(data))>>0)


#define DITHERING_TAB_G_8                                                            0x98009948
#define DITHERING_TAB_G_8_reg_addr                                                   "0xD8009948"
#define DITHERING_TAB_G_8_reg                                                        0xD8009948
#define set_DITHERING_TAB_G_8_reg(data)   (*((volatile unsigned int*) DITHERING_TAB_G_8_reg)=data)
#define get_DITHERING_TAB_G_8_reg   (*((volatile unsigned int*) DITHERING_TAB_G_8_reg))
#define DITHERING_TAB_G_8_inst_adr                                                   "0x0052"
#define DITHERING_TAB_G_8_inst                                                       0x0052
#define DITHERING_TAB_G_8_tab_g_83_shift                                             (18)
#define DITHERING_TAB_G_8_tab_g_83_mask                                              (0x00FC0000)
#define DITHERING_TAB_G_8_tab_g_83(data)                                             (0x00FC0000&((data)<<18))
#define DITHERING_TAB_G_8_tab_g_83_src(data)                                         ((0x00FC0000&(data))>>18)
#define DITHERING_TAB_G_8_get_tab_g_83(data)                                         ((0x00FC0000&(data))>>18)
#define DITHERING_TAB_G_8_tab_g_82_shift                                             (12)
#define DITHERING_TAB_G_8_tab_g_82_mask                                              (0x0003F000)
#define DITHERING_TAB_G_8_tab_g_82(data)                                             (0x0003F000&((data)<<12))
#define DITHERING_TAB_G_8_tab_g_82_src(data)                                         ((0x0003F000&(data))>>12)
#define DITHERING_TAB_G_8_get_tab_g_82(data)                                         ((0x0003F000&(data))>>12)
#define DITHERING_TAB_G_8_tab_g_81_shift                                             (6)
#define DITHERING_TAB_G_8_tab_g_81_mask                                              (0x00000FC0)
#define DITHERING_TAB_G_8_tab_g_81(data)                                             (0x00000FC0&((data)<<6))
#define DITHERING_TAB_G_8_tab_g_81_src(data)                                         ((0x00000FC0&(data))>>6)
#define DITHERING_TAB_G_8_get_tab_g_81(data)                                         ((0x00000FC0&(data))>>6)
#define DITHERING_TAB_G_8_tab_g_80_shift                                             (0)
#define DITHERING_TAB_G_8_tab_g_80_mask                                              (0x0000003F)
#define DITHERING_TAB_G_8_tab_g_80(data)                                             (0x0000003F&((data)<<0))
#define DITHERING_TAB_G_8_tab_g_80_src(data)                                         ((0x0000003F&(data))>>0)
#define DITHERING_TAB_G_8_get_tab_g_80(data)                                         ((0x0000003F&(data))>>0)


#define DITHERING_TAB_G_9                                                            0x9800994c
#define DITHERING_TAB_G_9_reg_addr                                                   "0xD800994C"
#define DITHERING_TAB_G_9_reg                                                        0xD800994C
#define set_DITHERING_TAB_G_9_reg(data)   (*((volatile unsigned int*) DITHERING_TAB_G_9_reg)=data)
#define get_DITHERING_TAB_G_9_reg   (*((volatile unsigned int*) DITHERING_TAB_G_9_reg))
#define DITHERING_TAB_G_9_inst_adr                                                   "0x0053"
#define DITHERING_TAB_G_9_inst                                                       0x0053
#define DITHERING_TAB_G_9_tab_g_93_shift                                             (18)
#define DITHERING_TAB_G_9_tab_g_93_mask                                              (0x00FC0000)
#define DITHERING_TAB_G_9_tab_g_93(data)                                             (0x00FC0000&((data)<<18))
#define DITHERING_TAB_G_9_tab_g_93_src(data)                                         ((0x00FC0000&(data))>>18)
#define DITHERING_TAB_G_9_get_tab_g_93(data)                                         ((0x00FC0000&(data))>>18)
#define DITHERING_TAB_G_9_tab_g_92_shift                                             (12)
#define DITHERING_TAB_G_9_tab_g_92_mask                                              (0x0003F000)
#define DITHERING_TAB_G_9_tab_g_92(data)                                             (0x0003F000&((data)<<12))
#define DITHERING_TAB_G_9_tab_g_92_src(data)                                         ((0x0003F000&(data))>>12)
#define DITHERING_TAB_G_9_get_tab_g_92(data)                                         ((0x0003F000&(data))>>12)
#define DITHERING_TAB_G_9_tab_g_91_shift                                             (6)
#define DITHERING_TAB_G_9_tab_g_91_mask                                              (0x00000FC0)
#define DITHERING_TAB_G_9_tab_g_91(data)                                             (0x00000FC0&((data)<<6))
#define DITHERING_TAB_G_9_tab_g_91_src(data)                                         ((0x00000FC0&(data))>>6)
#define DITHERING_TAB_G_9_get_tab_g_91(data)                                         ((0x00000FC0&(data))>>6)
#define DITHERING_TAB_G_9_tab_g_90_shift                                             (0)
#define DITHERING_TAB_G_9_tab_g_90_mask                                              (0x0000003F)
#define DITHERING_TAB_G_9_tab_g_90(data)                                             (0x0000003F&((data)<<0))
#define DITHERING_TAB_G_9_tab_g_90_src(data)                                         ((0x0000003F&(data))>>0)
#define DITHERING_TAB_G_9_get_tab_g_90(data)                                         ((0x0000003F&(data))>>0)


#define DITHERING_TAB_G_10                                                           0x98009950
#define DITHERING_TAB_G_10_reg_addr                                                  "0xD8009950"
#define DITHERING_TAB_G_10_reg                                                       0xD8009950
#define set_DITHERING_TAB_G_10_reg(data)   (*((volatile unsigned int*) DITHERING_TAB_G_10_reg)=data)
#define get_DITHERING_TAB_G_10_reg   (*((volatile unsigned int*) DITHERING_TAB_G_10_reg))
#define DITHERING_TAB_G_10_inst_adr                                                  "0x0054"
#define DITHERING_TAB_G_10_inst                                                      0x0054
#define DITHERING_TAB_G_10_tab_g_a3_shift                                            (18)
#define DITHERING_TAB_G_10_tab_g_a3_mask                                             (0x00FC0000)
#define DITHERING_TAB_G_10_tab_g_a3(data)                                            (0x00FC0000&((data)<<18))
#define DITHERING_TAB_G_10_tab_g_a3_src(data)                                        ((0x00FC0000&(data))>>18)
#define DITHERING_TAB_G_10_get_tab_g_a3(data)                                        ((0x00FC0000&(data))>>18)
#define DITHERING_TAB_G_10_tab_g_a2_shift                                            (12)
#define DITHERING_TAB_G_10_tab_g_a2_mask                                             (0x0003F000)
#define DITHERING_TAB_G_10_tab_g_a2(data)                                            (0x0003F000&((data)<<12))
#define DITHERING_TAB_G_10_tab_g_a2_src(data)                                        ((0x0003F000&(data))>>12)
#define DITHERING_TAB_G_10_get_tab_g_a2(data)                                        ((0x0003F000&(data))>>12)
#define DITHERING_TAB_G_10_tab_g_a1_shift                                            (6)
#define DITHERING_TAB_G_10_tab_g_a1_mask                                             (0x00000FC0)
#define DITHERING_TAB_G_10_tab_g_a1(data)                                            (0x00000FC0&((data)<<6))
#define DITHERING_TAB_G_10_tab_g_a1_src(data)                                        ((0x00000FC0&(data))>>6)
#define DITHERING_TAB_G_10_get_tab_g_a1(data)                                        ((0x00000FC0&(data))>>6)
#define DITHERING_TAB_G_10_tab_g_a0_shift                                            (0)
#define DITHERING_TAB_G_10_tab_g_a0_mask                                             (0x0000003F)
#define DITHERING_TAB_G_10_tab_g_a0(data)                                            (0x0000003F&((data)<<0))
#define DITHERING_TAB_G_10_tab_g_a0_src(data)                                        ((0x0000003F&(data))>>0)
#define DITHERING_TAB_G_10_get_tab_g_a0(data)                                        ((0x0000003F&(data))>>0)


#define DITHERING_TAB_G_11                                                           0x98009954
#define DITHERING_TAB_G_11_reg_addr                                                  "0xD8009954"
#define DITHERING_TAB_G_11_reg                                                       0xD8009954
#define set_DITHERING_TAB_G_11_reg(data)   (*((volatile unsigned int*) DITHERING_TAB_G_11_reg)=data)
#define get_DITHERING_TAB_G_11_reg   (*((volatile unsigned int*) DITHERING_TAB_G_11_reg))
#define DITHERING_TAB_G_11_inst_adr                                                  "0x0055"
#define DITHERING_TAB_G_11_inst                                                      0x0055
#define DITHERING_TAB_G_11_tab_g_b3_shift                                            (18)
#define DITHERING_TAB_G_11_tab_g_b3_mask                                             (0x00FC0000)
#define DITHERING_TAB_G_11_tab_g_b3(data)                                            (0x00FC0000&((data)<<18))
#define DITHERING_TAB_G_11_tab_g_b3_src(data)                                        ((0x00FC0000&(data))>>18)
#define DITHERING_TAB_G_11_get_tab_g_b3(data)                                        ((0x00FC0000&(data))>>18)
#define DITHERING_TAB_G_11_tab_g_b2_shift                                            (12)
#define DITHERING_TAB_G_11_tab_g_b2_mask                                             (0x0003F000)
#define DITHERING_TAB_G_11_tab_g_b2(data)                                            (0x0003F000&((data)<<12))
#define DITHERING_TAB_G_11_tab_g_b2_src(data)                                        ((0x0003F000&(data))>>12)
#define DITHERING_TAB_G_11_get_tab_g_b2(data)                                        ((0x0003F000&(data))>>12)
#define DITHERING_TAB_G_11_tab_g_b1_shift                                            (6)
#define DITHERING_TAB_G_11_tab_g_b1_mask                                             (0x00000FC0)
#define DITHERING_TAB_G_11_tab_g_b1(data)                                            (0x00000FC0&((data)<<6))
#define DITHERING_TAB_G_11_tab_g_b1_src(data)                                        ((0x00000FC0&(data))>>6)
#define DITHERING_TAB_G_11_get_tab_g_b1(data)                                        ((0x00000FC0&(data))>>6)
#define DITHERING_TAB_G_11_tab_g_b0_shift                                            (0)
#define DITHERING_TAB_G_11_tab_g_b0_mask                                             (0x0000003F)
#define DITHERING_TAB_G_11_tab_g_b0(data)                                            (0x0000003F&((data)<<0))
#define DITHERING_TAB_G_11_tab_g_b0_src(data)                                        ((0x0000003F&(data))>>0)
#define DITHERING_TAB_G_11_get_tab_g_b0(data)                                        ((0x0000003F&(data))>>0)


#define DITHERING_TAB_G_12                                                           0x98009958
#define DITHERING_TAB_G_12_reg_addr                                                  "0xD8009958"
#define DITHERING_TAB_G_12_reg                                                       0xD8009958
#define set_DITHERING_TAB_G_12_reg(data)   (*((volatile unsigned int*) DITHERING_TAB_G_12_reg)=data)
#define get_DITHERING_TAB_G_12_reg   (*((volatile unsigned int*) DITHERING_TAB_G_12_reg))
#define DITHERING_TAB_G_12_inst_adr                                                  "0x0056"
#define DITHERING_TAB_G_12_inst                                                      0x0056
#define DITHERING_TAB_G_12_tab_g_c3_shift                                            (18)
#define DITHERING_TAB_G_12_tab_g_c3_mask                                             (0x00FC0000)
#define DITHERING_TAB_G_12_tab_g_c3(data)                                            (0x00FC0000&((data)<<18))
#define DITHERING_TAB_G_12_tab_g_c3_src(data)                                        ((0x00FC0000&(data))>>18)
#define DITHERING_TAB_G_12_get_tab_g_c3(data)                                        ((0x00FC0000&(data))>>18)
#define DITHERING_TAB_G_12_tab_g_c2_shift                                            (12)
#define DITHERING_TAB_G_12_tab_g_c2_mask                                             (0x0003F000)
#define DITHERING_TAB_G_12_tab_g_c2(data)                                            (0x0003F000&((data)<<12))
#define DITHERING_TAB_G_12_tab_g_c2_src(data)                                        ((0x0003F000&(data))>>12)
#define DITHERING_TAB_G_12_get_tab_g_c2(data)                                        ((0x0003F000&(data))>>12)
#define DITHERING_TAB_G_12_tab_g_c1_shift                                            (6)
#define DITHERING_TAB_G_12_tab_g_c1_mask                                             (0x00000FC0)
#define DITHERING_TAB_G_12_tab_g_c1(data)                                            (0x00000FC0&((data)<<6))
#define DITHERING_TAB_G_12_tab_g_c1_src(data)                                        ((0x00000FC0&(data))>>6)
#define DITHERING_TAB_G_12_get_tab_g_c1(data)                                        ((0x00000FC0&(data))>>6)
#define DITHERING_TAB_G_12_tab_g_c0_shift                                            (0)
#define DITHERING_TAB_G_12_tab_g_c0_mask                                             (0x0000003F)
#define DITHERING_TAB_G_12_tab_g_c0(data)                                            (0x0000003F&((data)<<0))
#define DITHERING_TAB_G_12_tab_g_c0_src(data)                                        ((0x0000003F&(data))>>0)
#define DITHERING_TAB_G_12_get_tab_g_c0(data)                                        ((0x0000003F&(data))>>0)


#define DITHERING_TAB_G_13                                                           0x9800995c
#define DITHERING_TAB_G_13_reg_addr                                                  "0xD800995C"
#define DITHERING_TAB_G_13_reg                                                       0xD800995C
#define set_DITHERING_TAB_G_13_reg(data)   (*((volatile unsigned int*) DITHERING_TAB_G_13_reg)=data)
#define get_DITHERING_TAB_G_13_reg   (*((volatile unsigned int*) DITHERING_TAB_G_13_reg))
#define DITHERING_TAB_G_13_inst_adr                                                  "0x0057"
#define DITHERING_TAB_G_13_inst                                                      0x0057
#define DITHERING_TAB_G_13_tab_g_d3_shift                                            (18)
#define DITHERING_TAB_G_13_tab_g_d3_mask                                             (0x00FC0000)
#define DITHERING_TAB_G_13_tab_g_d3(data)                                            (0x00FC0000&((data)<<18))
#define DITHERING_TAB_G_13_tab_g_d3_src(data)                                        ((0x00FC0000&(data))>>18)
#define DITHERING_TAB_G_13_get_tab_g_d3(data)                                        ((0x00FC0000&(data))>>18)
#define DITHERING_TAB_G_13_tab_g_d2_shift                                            (12)
#define DITHERING_TAB_G_13_tab_g_d2_mask                                             (0x0003F000)
#define DITHERING_TAB_G_13_tab_g_d2(data)                                            (0x0003F000&((data)<<12))
#define DITHERING_TAB_G_13_tab_g_d2_src(data)                                        ((0x0003F000&(data))>>12)
#define DITHERING_TAB_G_13_get_tab_g_d2(data)                                        ((0x0003F000&(data))>>12)
#define DITHERING_TAB_G_13_tab_g_d1_shift                                            (6)
#define DITHERING_TAB_G_13_tab_g_d1_mask                                             (0x00000FC0)
#define DITHERING_TAB_G_13_tab_g_d1(data)                                            (0x00000FC0&((data)<<6))
#define DITHERING_TAB_G_13_tab_g_d1_src(data)                                        ((0x00000FC0&(data))>>6)
#define DITHERING_TAB_G_13_get_tab_g_d1(data)                                        ((0x00000FC0&(data))>>6)
#define DITHERING_TAB_G_13_tab_g_d0_shift                                            (0)
#define DITHERING_TAB_G_13_tab_g_d0_mask                                             (0x0000003F)
#define DITHERING_TAB_G_13_tab_g_d0(data)                                            (0x0000003F&((data)<<0))
#define DITHERING_TAB_G_13_tab_g_d0_src(data)                                        ((0x0000003F&(data))>>0)
#define DITHERING_TAB_G_13_get_tab_g_d0(data)                                        ((0x0000003F&(data))>>0)


#define DITHERING_TAB_G_14                                                           0x98009960
#define DITHERING_TAB_G_14_reg_addr                                                  "0xD8009960"
#define DITHERING_TAB_G_14_reg                                                       0xD8009960
#define set_DITHERING_TAB_G_14_reg(data)   (*((volatile unsigned int*) DITHERING_TAB_G_14_reg)=data)
#define get_DITHERING_TAB_G_14_reg   (*((volatile unsigned int*) DITHERING_TAB_G_14_reg))
#define DITHERING_TAB_G_14_inst_adr                                                  "0x0058"
#define DITHERING_TAB_G_14_inst                                                      0x0058
#define DITHERING_TAB_G_14_tab_g_e3_shift                                            (18)
#define DITHERING_TAB_G_14_tab_g_e3_mask                                             (0x00FC0000)
#define DITHERING_TAB_G_14_tab_g_e3(data)                                            (0x00FC0000&((data)<<18))
#define DITHERING_TAB_G_14_tab_g_e3_src(data)                                        ((0x00FC0000&(data))>>18)
#define DITHERING_TAB_G_14_get_tab_g_e3(data)                                        ((0x00FC0000&(data))>>18)
#define DITHERING_TAB_G_14_tab_g_e2_shift                                            (12)
#define DITHERING_TAB_G_14_tab_g_e2_mask                                             (0x0003F000)
#define DITHERING_TAB_G_14_tab_g_e2(data)                                            (0x0003F000&((data)<<12))
#define DITHERING_TAB_G_14_tab_g_e2_src(data)                                        ((0x0003F000&(data))>>12)
#define DITHERING_TAB_G_14_get_tab_g_e2(data)                                        ((0x0003F000&(data))>>12)
#define DITHERING_TAB_G_14_tab_g_e1_shift                                            (6)
#define DITHERING_TAB_G_14_tab_g_e1_mask                                             (0x00000FC0)
#define DITHERING_TAB_G_14_tab_g_e1(data)                                            (0x00000FC0&((data)<<6))
#define DITHERING_TAB_G_14_tab_g_e1_src(data)                                        ((0x00000FC0&(data))>>6)
#define DITHERING_TAB_G_14_get_tab_g_e1(data)                                        ((0x00000FC0&(data))>>6)
#define DITHERING_TAB_G_14_tab_g_e0_shift                                            (0)
#define DITHERING_TAB_G_14_tab_g_e0_mask                                             (0x0000003F)
#define DITHERING_TAB_G_14_tab_g_e0(data)                                            (0x0000003F&((data)<<0))
#define DITHERING_TAB_G_14_tab_g_e0_src(data)                                        ((0x0000003F&(data))>>0)
#define DITHERING_TAB_G_14_get_tab_g_e0(data)                                        ((0x0000003F&(data))>>0)


#define DITHERING_TAB_G_15                                                           0x98009964
#define DITHERING_TAB_G_15_reg_addr                                                  "0xD8009964"
#define DITHERING_TAB_G_15_reg                                                       0xD8009964
#define set_DITHERING_TAB_G_15_reg(data)   (*((volatile unsigned int*) DITHERING_TAB_G_15_reg)=data)
#define get_DITHERING_TAB_G_15_reg   (*((volatile unsigned int*) DITHERING_TAB_G_15_reg))
#define DITHERING_TAB_G_15_inst_adr                                                  "0x0059"
#define DITHERING_TAB_G_15_inst                                                      0x0059
#define DITHERING_TAB_G_15_tab_g_f3_shift                                            (18)
#define DITHERING_TAB_G_15_tab_g_f3_mask                                             (0x00FC0000)
#define DITHERING_TAB_G_15_tab_g_f3(data)                                            (0x00FC0000&((data)<<18))
#define DITHERING_TAB_G_15_tab_g_f3_src(data)                                        ((0x00FC0000&(data))>>18)
#define DITHERING_TAB_G_15_get_tab_g_f3(data)                                        ((0x00FC0000&(data))>>18)
#define DITHERING_TAB_G_15_tab_g_f2_shift                                            (12)
#define DITHERING_TAB_G_15_tab_g_f2_mask                                             (0x0003F000)
#define DITHERING_TAB_G_15_tab_g_f2(data)                                            (0x0003F000&((data)<<12))
#define DITHERING_TAB_G_15_tab_g_f2_src(data)                                        ((0x0003F000&(data))>>12)
#define DITHERING_TAB_G_15_get_tab_g_f2(data)                                        ((0x0003F000&(data))>>12)
#define DITHERING_TAB_G_15_tab_g_f1_shift                                            (6)
#define DITHERING_TAB_G_15_tab_g_f1_mask                                             (0x00000FC0)
#define DITHERING_TAB_G_15_tab_g_f1(data)                                            (0x00000FC0&((data)<<6))
#define DITHERING_TAB_G_15_tab_g_f1_src(data)                                        ((0x00000FC0&(data))>>6)
#define DITHERING_TAB_G_15_get_tab_g_f1(data)                                        ((0x00000FC0&(data))>>6)
#define DITHERING_TAB_G_15_tab_g_f0_shift                                            (0)
#define DITHERING_TAB_G_15_tab_g_f0_mask                                             (0x0000003F)
#define DITHERING_TAB_G_15_tab_g_f0(data)                                            (0x0000003F&((data)<<0))
#define DITHERING_TAB_G_15_tab_g_f0_src(data)                                        ((0x0000003F&(data))>>0)
#define DITHERING_TAB_G_15_get_tab_g_f0(data)                                        ((0x0000003F&(data))>>0)


#define DITHERING_TAB_B_0                                                            0x98009968
#define DITHERING_TAB_B_0_reg_addr                                                   "0xD8009968"
#define DITHERING_TAB_B_0_reg                                                        0xD8009968
#define set_DITHERING_TAB_B_0_reg(data)   (*((volatile unsigned int*) DITHERING_TAB_B_0_reg)=data)
#define get_DITHERING_TAB_B_0_reg   (*((volatile unsigned int*) DITHERING_TAB_B_0_reg))
#define DITHERING_TAB_B_0_inst_adr                                                   "0x005A"
#define DITHERING_TAB_B_0_inst                                                       0x005A
#define DITHERING_TAB_B_0_tab_b_03_shift                                             (18)
#define DITHERING_TAB_B_0_tab_b_03_mask                                              (0x00FC0000)
#define DITHERING_TAB_B_0_tab_b_03(data)                                             (0x00FC0000&((data)<<18))
#define DITHERING_TAB_B_0_tab_b_03_src(data)                                         ((0x00FC0000&(data))>>18)
#define DITHERING_TAB_B_0_get_tab_b_03(data)                                         ((0x00FC0000&(data))>>18)
#define DITHERING_TAB_B_0_tab_b_02_shift                                             (12)
#define DITHERING_TAB_B_0_tab_b_02_mask                                              (0x0003F000)
#define DITHERING_TAB_B_0_tab_b_02(data)                                             (0x0003F000&((data)<<12))
#define DITHERING_TAB_B_0_tab_b_02_src(data)                                         ((0x0003F000&(data))>>12)
#define DITHERING_TAB_B_0_get_tab_b_02(data)                                         ((0x0003F000&(data))>>12)
#define DITHERING_TAB_B_0_tab_b_01_shift                                             (6)
#define DITHERING_TAB_B_0_tab_b_01_mask                                              (0x00000FC0)
#define DITHERING_TAB_B_0_tab_b_01(data)                                             (0x00000FC0&((data)<<6))
#define DITHERING_TAB_B_0_tab_b_01_src(data)                                         ((0x00000FC0&(data))>>6)
#define DITHERING_TAB_B_0_get_tab_b_01(data)                                         ((0x00000FC0&(data))>>6)
#define DITHERING_TAB_B_0_tab_b_00_shift                                             (0)
#define DITHERING_TAB_B_0_tab_b_00_mask                                              (0x0000003F)
#define DITHERING_TAB_B_0_tab_b_00(data)                                             (0x0000003F&((data)<<0))
#define DITHERING_TAB_B_0_tab_b_00_src(data)                                         ((0x0000003F&(data))>>0)
#define DITHERING_TAB_B_0_get_tab_b_00(data)                                         ((0x0000003F&(data))>>0)


#define DITHERING_TAB_B_1                                                            0x9800996c
#define DITHERING_TAB_B_1_reg_addr                                                   "0xD800996C"
#define DITHERING_TAB_B_1_reg                                                        0xD800996C
#define set_DITHERING_TAB_B_1_reg(data)   (*((volatile unsigned int*) DITHERING_TAB_B_1_reg)=data)
#define get_DITHERING_TAB_B_1_reg   (*((volatile unsigned int*) DITHERING_TAB_B_1_reg))
#define DITHERING_TAB_B_1_inst_adr                                                   "0x005B"
#define DITHERING_TAB_B_1_inst                                                       0x005B
#define DITHERING_TAB_B_1_tab_b_13_shift                                             (18)
#define DITHERING_TAB_B_1_tab_b_13_mask                                              (0x00FC0000)
#define DITHERING_TAB_B_1_tab_b_13(data)                                             (0x00FC0000&((data)<<18))
#define DITHERING_TAB_B_1_tab_b_13_src(data)                                         ((0x00FC0000&(data))>>18)
#define DITHERING_TAB_B_1_get_tab_b_13(data)                                         ((0x00FC0000&(data))>>18)
#define DITHERING_TAB_B_1_tab_b_12_shift                                             (12)
#define DITHERING_TAB_B_1_tab_b_12_mask                                              (0x0003F000)
#define DITHERING_TAB_B_1_tab_b_12(data)                                             (0x0003F000&((data)<<12))
#define DITHERING_TAB_B_1_tab_b_12_src(data)                                         ((0x0003F000&(data))>>12)
#define DITHERING_TAB_B_1_get_tab_b_12(data)                                         ((0x0003F000&(data))>>12)
#define DITHERING_TAB_B_1_tab_b_11_shift                                             (6)
#define DITHERING_TAB_B_1_tab_b_11_mask                                              (0x00000FC0)
#define DITHERING_TAB_B_1_tab_b_11(data)                                             (0x00000FC0&((data)<<6))
#define DITHERING_TAB_B_1_tab_b_11_src(data)                                         ((0x00000FC0&(data))>>6)
#define DITHERING_TAB_B_1_get_tab_b_11(data)                                         ((0x00000FC0&(data))>>6)
#define DITHERING_TAB_B_1_tab_b_10_shift                                             (0)
#define DITHERING_TAB_B_1_tab_b_10_mask                                              (0x0000003F)
#define DITHERING_TAB_B_1_tab_b_10(data)                                             (0x0000003F&((data)<<0))
#define DITHERING_TAB_B_1_tab_b_10_src(data)                                         ((0x0000003F&(data))>>0)
#define DITHERING_TAB_B_1_get_tab_b_10(data)                                         ((0x0000003F&(data))>>0)


#define DITHERING_TAB_B_2                                                            0x98009970
#define DITHERING_TAB_B_2_reg_addr                                                   "0xD8009970"
#define DITHERING_TAB_B_2_reg                                                        0xD8009970
#define set_DITHERING_TAB_B_2_reg(data)   (*((volatile unsigned int*) DITHERING_TAB_B_2_reg)=data)
#define get_DITHERING_TAB_B_2_reg   (*((volatile unsigned int*) DITHERING_TAB_B_2_reg))
#define DITHERING_TAB_B_2_inst_adr                                                   "0x005C"
#define DITHERING_TAB_B_2_inst                                                       0x005C
#define DITHERING_TAB_B_2_tab_b_23_shift                                             (18)
#define DITHERING_TAB_B_2_tab_b_23_mask                                              (0x00FC0000)
#define DITHERING_TAB_B_2_tab_b_23(data)                                             (0x00FC0000&((data)<<18))
#define DITHERING_TAB_B_2_tab_b_23_src(data)                                         ((0x00FC0000&(data))>>18)
#define DITHERING_TAB_B_2_get_tab_b_23(data)                                         ((0x00FC0000&(data))>>18)
#define DITHERING_TAB_B_2_tab_b_22_shift                                             (12)
#define DITHERING_TAB_B_2_tab_b_22_mask                                              (0x0003F000)
#define DITHERING_TAB_B_2_tab_b_22(data)                                             (0x0003F000&((data)<<12))
#define DITHERING_TAB_B_2_tab_b_22_src(data)                                         ((0x0003F000&(data))>>12)
#define DITHERING_TAB_B_2_get_tab_b_22(data)                                         ((0x0003F000&(data))>>12)
#define DITHERING_TAB_B_2_tab_b_21_shift                                             (6)
#define DITHERING_TAB_B_2_tab_b_21_mask                                              (0x00000FC0)
#define DITHERING_TAB_B_2_tab_b_21(data)                                             (0x00000FC0&((data)<<6))
#define DITHERING_TAB_B_2_tab_b_21_src(data)                                         ((0x00000FC0&(data))>>6)
#define DITHERING_TAB_B_2_get_tab_b_21(data)                                         ((0x00000FC0&(data))>>6)
#define DITHERING_TAB_B_2_tab_b_20_shift                                             (0)
#define DITHERING_TAB_B_2_tab_b_20_mask                                              (0x0000003F)
#define DITHERING_TAB_B_2_tab_b_20(data)                                             (0x0000003F&((data)<<0))
#define DITHERING_TAB_B_2_tab_b_20_src(data)                                         ((0x0000003F&(data))>>0)
#define DITHERING_TAB_B_2_get_tab_b_20(data)                                         ((0x0000003F&(data))>>0)


#define DITHERING_TAB_B_3                                                            0x98009974
#define DITHERING_TAB_B_3_reg_addr                                                   "0xD8009974"
#define DITHERING_TAB_B_3_reg                                                        0xD8009974
#define set_DITHERING_TAB_B_3_reg(data)   (*((volatile unsigned int*) DITHERING_TAB_B_3_reg)=data)
#define get_DITHERING_TAB_B_3_reg   (*((volatile unsigned int*) DITHERING_TAB_B_3_reg))
#define DITHERING_TAB_B_3_inst_adr                                                   "0x005D"
#define DITHERING_TAB_B_3_inst                                                       0x005D
#define DITHERING_TAB_B_3_tab_b_33_shift                                             (18)
#define DITHERING_TAB_B_3_tab_b_33_mask                                              (0x00FC0000)
#define DITHERING_TAB_B_3_tab_b_33(data)                                             (0x00FC0000&((data)<<18))
#define DITHERING_TAB_B_3_tab_b_33_src(data)                                         ((0x00FC0000&(data))>>18)
#define DITHERING_TAB_B_3_get_tab_b_33(data)                                         ((0x00FC0000&(data))>>18)
#define DITHERING_TAB_B_3_tab_b_32_shift                                             (12)
#define DITHERING_TAB_B_3_tab_b_32_mask                                              (0x0003F000)
#define DITHERING_TAB_B_3_tab_b_32(data)                                             (0x0003F000&((data)<<12))
#define DITHERING_TAB_B_3_tab_b_32_src(data)                                         ((0x0003F000&(data))>>12)
#define DITHERING_TAB_B_3_get_tab_b_32(data)                                         ((0x0003F000&(data))>>12)
#define DITHERING_TAB_B_3_tab_b_31_shift                                             (6)
#define DITHERING_TAB_B_3_tab_b_31_mask                                              (0x00000FC0)
#define DITHERING_TAB_B_3_tab_b_31(data)                                             (0x00000FC0&((data)<<6))
#define DITHERING_TAB_B_3_tab_b_31_src(data)                                         ((0x00000FC0&(data))>>6)
#define DITHERING_TAB_B_3_get_tab_b_31(data)                                         ((0x00000FC0&(data))>>6)
#define DITHERING_TAB_B_3_tab_b_30_shift                                             (0)
#define DITHERING_TAB_B_3_tab_b_30_mask                                              (0x0000003F)
#define DITHERING_TAB_B_3_tab_b_30(data)                                             (0x0000003F&((data)<<0))
#define DITHERING_TAB_B_3_tab_b_30_src(data)                                         ((0x0000003F&(data))>>0)
#define DITHERING_TAB_B_3_get_tab_b_30(data)                                         ((0x0000003F&(data))>>0)


#define DITHERING_TAB_B_4                                                            0x98009978
#define DITHERING_TAB_B_4_reg_addr                                                   "0xD8009978"
#define DITHERING_TAB_B_4_reg                                                        0xD8009978
#define set_DITHERING_TAB_B_4_reg(data)   (*((volatile unsigned int*) DITHERING_TAB_B_4_reg)=data)
#define get_DITHERING_TAB_B_4_reg   (*((volatile unsigned int*) DITHERING_TAB_B_4_reg))
#define DITHERING_TAB_B_4_inst_adr                                                   "0x005E"
#define DITHERING_TAB_B_4_inst                                                       0x005E
#define DITHERING_TAB_B_4_tab_b_43_shift                                             (18)
#define DITHERING_TAB_B_4_tab_b_43_mask                                              (0x00FC0000)
#define DITHERING_TAB_B_4_tab_b_43(data)                                             (0x00FC0000&((data)<<18))
#define DITHERING_TAB_B_4_tab_b_43_src(data)                                         ((0x00FC0000&(data))>>18)
#define DITHERING_TAB_B_4_get_tab_b_43(data)                                         ((0x00FC0000&(data))>>18)
#define DITHERING_TAB_B_4_tab_b_42_shift                                             (12)
#define DITHERING_TAB_B_4_tab_b_42_mask                                              (0x0003F000)
#define DITHERING_TAB_B_4_tab_b_42(data)                                             (0x0003F000&((data)<<12))
#define DITHERING_TAB_B_4_tab_b_42_src(data)                                         ((0x0003F000&(data))>>12)
#define DITHERING_TAB_B_4_get_tab_b_42(data)                                         ((0x0003F000&(data))>>12)
#define DITHERING_TAB_B_4_tab_b_41_shift                                             (6)
#define DITHERING_TAB_B_4_tab_b_41_mask                                              (0x00000FC0)
#define DITHERING_TAB_B_4_tab_b_41(data)                                             (0x00000FC0&((data)<<6))
#define DITHERING_TAB_B_4_tab_b_41_src(data)                                         ((0x00000FC0&(data))>>6)
#define DITHERING_TAB_B_4_get_tab_b_41(data)                                         ((0x00000FC0&(data))>>6)
#define DITHERING_TAB_B_4_tab_b_40_shift                                             (0)
#define DITHERING_TAB_B_4_tab_b_40_mask                                              (0x0000003F)
#define DITHERING_TAB_B_4_tab_b_40(data)                                             (0x0000003F&((data)<<0))
#define DITHERING_TAB_B_4_tab_b_40_src(data)                                         ((0x0000003F&(data))>>0)
#define DITHERING_TAB_B_4_get_tab_b_40(data)                                         ((0x0000003F&(data))>>0)


#define DITHERING_TAB_B_5                                                            0x9800997c
#define DITHERING_TAB_B_5_reg_addr                                                   "0xD800997C"
#define DITHERING_TAB_B_5_reg                                                        0xD800997C
#define set_DITHERING_TAB_B_5_reg(data)   (*((volatile unsigned int*) DITHERING_TAB_B_5_reg)=data)
#define get_DITHERING_TAB_B_5_reg   (*((volatile unsigned int*) DITHERING_TAB_B_5_reg))
#define DITHERING_TAB_B_5_inst_adr                                                   "0x005F"
#define DITHERING_TAB_B_5_inst                                                       0x005F
#define DITHERING_TAB_B_5_tab_b_53_shift                                             (18)
#define DITHERING_TAB_B_5_tab_b_53_mask                                              (0x00FC0000)
#define DITHERING_TAB_B_5_tab_b_53(data)                                             (0x00FC0000&((data)<<18))
#define DITHERING_TAB_B_5_tab_b_53_src(data)                                         ((0x00FC0000&(data))>>18)
#define DITHERING_TAB_B_5_get_tab_b_53(data)                                         ((0x00FC0000&(data))>>18)
#define DITHERING_TAB_B_5_tab_b_52_shift                                             (12)
#define DITHERING_TAB_B_5_tab_b_52_mask                                              (0x0003F000)
#define DITHERING_TAB_B_5_tab_b_52(data)                                             (0x0003F000&((data)<<12))
#define DITHERING_TAB_B_5_tab_b_52_src(data)                                         ((0x0003F000&(data))>>12)
#define DITHERING_TAB_B_5_get_tab_b_52(data)                                         ((0x0003F000&(data))>>12)
#define DITHERING_TAB_B_5_tab_b_51_shift                                             (6)
#define DITHERING_TAB_B_5_tab_b_51_mask                                              (0x00000FC0)
#define DITHERING_TAB_B_5_tab_b_51(data)                                             (0x00000FC0&((data)<<6))
#define DITHERING_TAB_B_5_tab_b_51_src(data)                                         ((0x00000FC0&(data))>>6)
#define DITHERING_TAB_B_5_get_tab_b_51(data)                                         ((0x00000FC0&(data))>>6)
#define DITHERING_TAB_B_5_tab_b_50_shift                                             (0)
#define DITHERING_TAB_B_5_tab_b_50_mask                                              (0x0000003F)
#define DITHERING_TAB_B_5_tab_b_50(data)                                             (0x0000003F&((data)<<0))
#define DITHERING_TAB_B_5_tab_b_50_src(data)                                         ((0x0000003F&(data))>>0)
#define DITHERING_TAB_B_5_get_tab_b_50(data)                                         ((0x0000003F&(data))>>0)


#define DITHERING_TAB_B_6                                                            0x98009980
#define DITHERING_TAB_B_6_reg_addr                                                   "0xD8009980"
#define DITHERING_TAB_B_6_reg                                                        0xD8009980
#define set_DITHERING_TAB_B_6_reg(data)   (*((volatile unsigned int*) DITHERING_TAB_B_6_reg)=data)
#define get_DITHERING_TAB_B_6_reg   (*((volatile unsigned int*) DITHERING_TAB_B_6_reg))
#define DITHERING_TAB_B_6_inst_adr                                                   "0x0060"
#define DITHERING_TAB_B_6_inst                                                       0x0060
#define DITHERING_TAB_B_6_tab_b_63_shift                                             (18)
#define DITHERING_TAB_B_6_tab_b_63_mask                                              (0x00FC0000)
#define DITHERING_TAB_B_6_tab_b_63(data)                                             (0x00FC0000&((data)<<18))
#define DITHERING_TAB_B_6_tab_b_63_src(data)                                         ((0x00FC0000&(data))>>18)
#define DITHERING_TAB_B_6_get_tab_b_63(data)                                         ((0x00FC0000&(data))>>18)
#define DITHERING_TAB_B_6_tab_b_62_shift                                             (12)
#define DITHERING_TAB_B_6_tab_b_62_mask                                              (0x0003F000)
#define DITHERING_TAB_B_6_tab_b_62(data)                                             (0x0003F000&((data)<<12))
#define DITHERING_TAB_B_6_tab_b_62_src(data)                                         ((0x0003F000&(data))>>12)
#define DITHERING_TAB_B_6_get_tab_b_62(data)                                         ((0x0003F000&(data))>>12)
#define DITHERING_TAB_B_6_tab_b_61_shift                                             (6)
#define DITHERING_TAB_B_6_tab_b_61_mask                                              (0x00000FC0)
#define DITHERING_TAB_B_6_tab_b_61(data)                                             (0x00000FC0&((data)<<6))
#define DITHERING_TAB_B_6_tab_b_61_src(data)                                         ((0x00000FC0&(data))>>6)
#define DITHERING_TAB_B_6_get_tab_b_61(data)                                         ((0x00000FC0&(data))>>6)
#define DITHERING_TAB_B_6_tab_b_60_shift                                             (0)
#define DITHERING_TAB_B_6_tab_b_60_mask                                              (0x0000003F)
#define DITHERING_TAB_B_6_tab_b_60(data)                                             (0x0000003F&((data)<<0))
#define DITHERING_TAB_B_6_tab_b_60_src(data)                                         ((0x0000003F&(data))>>0)
#define DITHERING_TAB_B_6_get_tab_b_60(data)                                         ((0x0000003F&(data))>>0)


#define DITHERING_TAB_B_7                                                            0x98009984
#define DITHERING_TAB_B_7_reg_addr                                                   "0xD8009984"
#define DITHERING_TAB_B_7_reg                                                        0xD8009984
#define set_DITHERING_TAB_B_7_reg(data)   (*((volatile unsigned int*) DITHERING_TAB_B_7_reg)=data)
#define get_DITHERING_TAB_B_7_reg   (*((volatile unsigned int*) DITHERING_TAB_B_7_reg))
#define DITHERING_TAB_B_7_inst_adr                                                   "0x0061"
#define DITHERING_TAB_B_7_inst                                                       0x0061
#define DITHERING_TAB_B_7_tab_b_73_shift                                             (18)
#define DITHERING_TAB_B_7_tab_b_73_mask                                              (0x00FC0000)
#define DITHERING_TAB_B_7_tab_b_73(data)                                             (0x00FC0000&((data)<<18))
#define DITHERING_TAB_B_7_tab_b_73_src(data)                                         ((0x00FC0000&(data))>>18)
#define DITHERING_TAB_B_7_get_tab_b_73(data)                                         ((0x00FC0000&(data))>>18)
#define DITHERING_TAB_B_7_tab_b_72_shift                                             (12)
#define DITHERING_TAB_B_7_tab_b_72_mask                                              (0x0003F000)
#define DITHERING_TAB_B_7_tab_b_72(data)                                             (0x0003F000&((data)<<12))
#define DITHERING_TAB_B_7_tab_b_72_src(data)                                         ((0x0003F000&(data))>>12)
#define DITHERING_TAB_B_7_get_tab_b_72(data)                                         ((0x0003F000&(data))>>12)
#define DITHERING_TAB_B_7_tab_b_71_shift                                             (6)
#define DITHERING_TAB_B_7_tab_b_71_mask                                              (0x00000FC0)
#define DITHERING_TAB_B_7_tab_b_71(data)                                             (0x00000FC0&((data)<<6))
#define DITHERING_TAB_B_7_tab_b_71_src(data)                                         ((0x00000FC0&(data))>>6)
#define DITHERING_TAB_B_7_get_tab_b_71(data)                                         ((0x00000FC0&(data))>>6)
#define DITHERING_TAB_B_7_tab_b_70_shift                                             (0)
#define DITHERING_TAB_B_7_tab_b_70_mask                                              (0x0000003F)
#define DITHERING_TAB_B_7_tab_b_70(data)                                             (0x0000003F&((data)<<0))
#define DITHERING_TAB_B_7_tab_b_70_src(data)                                         ((0x0000003F&(data))>>0)
#define DITHERING_TAB_B_7_get_tab_b_70(data)                                         ((0x0000003F&(data))>>0)


#define DITHERING_TAB_B_8                                                            0x98009988
#define DITHERING_TAB_B_8_reg_addr                                                   "0xD8009988"
#define DITHERING_TAB_B_8_reg                                                        0xD8009988
#define set_DITHERING_TAB_B_8_reg(data)   (*((volatile unsigned int*) DITHERING_TAB_B_8_reg)=data)
#define get_DITHERING_TAB_B_8_reg   (*((volatile unsigned int*) DITHERING_TAB_B_8_reg))
#define DITHERING_TAB_B_8_inst_adr                                                   "0x0062"
#define DITHERING_TAB_B_8_inst                                                       0x0062
#define DITHERING_TAB_B_8_tab_b_83_shift                                             (18)
#define DITHERING_TAB_B_8_tab_b_83_mask                                              (0x00FC0000)
#define DITHERING_TAB_B_8_tab_b_83(data)                                             (0x00FC0000&((data)<<18))
#define DITHERING_TAB_B_8_tab_b_83_src(data)                                         ((0x00FC0000&(data))>>18)
#define DITHERING_TAB_B_8_get_tab_b_83(data)                                         ((0x00FC0000&(data))>>18)
#define DITHERING_TAB_B_8_tab_b_82_shift                                             (12)
#define DITHERING_TAB_B_8_tab_b_82_mask                                              (0x0003F000)
#define DITHERING_TAB_B_8_tab_b_82(data)                                             (0x0003F000&((data)<<12))
#define DITHERING_TAB_B_8_tab_b_82_src(data)                                         ((0x0003F000&(data))>>12)
#define DITHERING_TAB_B_8_get_tab_b_82(data)                                         ((0x0003F000&(data))>>12)
#define DITHERING_TAB_B_8_tab_b_81_shift                                             (6)
#define DITHERING_TAB_B_8_tab_b_81_mask                                              (0x00000FC0)
#define DITHERING_TAB_B_8_tab_b_81(data)                                             (0x00000FC0&((data)<<6))
#define DITHERING_TAB_B_8_tab_b_81_src(data)                                         ((0x00000FC0&(data))>>6)
#define DITHERING_TAB_B_8_get_tab_b_81(data)                                         ((0x00000FC0&(data))>>6)
#define DITHERING_TAB_B_8_tab_b_80_shift                                             (0)
#define DITHERING_TAB_B_8_tab_b_80_mask                                              (0x0000003F)
#define DITHERING_TAB_B_8_tab_b_80(data)                                             (0x0000003F&((data)<<0))
#define DITHERING_TAB_B_8_tab_b_80_src(data)                                         ((0x0000003F&(data))>>0)
#define DITHERING_TAB_B_8_get_tab_b_80(data)                                         ((0x0000003F&(data))>>0)


#define DITHERING_TAB_B_9                                                            0x9800998c
#define DITHERING_TAB_B_9_reg_addr                                                   "0xD800998C"
#define DITHERING_TAB_B_9_reg                                                        0xD800998C
#define set_DITHERING_TAB_B_9_reg(data)   (*((volatile unsigned int*) DITHERING_TAB_B_9_reg)=data)
#define get_DITHERING_TAB_B_9_reg   (*((volatile unsigned int*) DITHERING_TAB_B_9_reg))
#define DITHERING_TAB_B_9_inst_adr                                                   "0x0063"
#define DITHERING_TAB_B_9_inst                                                       0x0063
#define DITHERING_TAB_B_9_tab_b_93_shift                                             (18)
#define DITHERING_TAB_B_9_tab_b_93_mask                                              (0x00FC0000)
#define DITHERING_TAB_B_9_tab_b_93(data)                                             (0x00FC0000&((data)<<18))
#define DITHERING_TAB_B_9_tab_b_93_src(data)                                         ((0x00FC0000&(data))>>18)
#define DITHERING_TAB_B_9_get_tab_b_93(data)                                         ((0x00FC0000&(data))>>18)
#define DITHERING_TAB_B_9_tab_b_92_shift                                             (12)
#define DITHERING_TAB_B_9_tab_b_92_mask                                              (0x0003F000)
#define DITHERING_TAB_B_9_tab_b_92(data)                                             (0x0003F000&((data)<<12))
#define DITHERING_TAB_B_9_tab_b_92_src(data)                                         ((0x0003F000&(data))>>12)
#define DITHERING_TAB_B_9_get_tab_b_92(data)                                         ((0x0003F000&(data))>>12)
#define DITHERING_TAB_B_9_tab_b_91_shift                                             (6)
#define DITHERING_TAB_B_9_tab_b_91_mask                                              (0x00000FC0)
#define DITHERING_TAB_B_9_tab_b_91(data)                                             (0x00000FC0&((data)<<6))
#define DITHERING_TAB_B_9_tab_b_91_src(data)                                         ((0x00000FC0&(data))>>6)
#define DITHERING_TAB_B_9_get_tab_b_91(data)                                         ((0x00000FC0&(data))>>6)
#define DITHERING_TAB_B_9_tab_b_90_shift                                             (0)
#define DITHERING_TAB_B_9_tab_b_90_mask                                              (0x0000003F)
#define DITHERING_TAB_B_9_tab_b_90(data)                                             (0x0000003F&((data)<<0))
#define DITHERING_TAB_B_9_tab_b_90_src(data)                                         ((0x0000003F&(data))>>0)
#define DITHERING_TAB_B_9_get_tab_b_90(data)                                         ((0x0000003F&(data))>>0)


#define DITHERING_TAB_B_10                                                           0x98009990
#define DITHERING_TAB_B_10_reg_addr                                                  "0xD8009990"
#define DITHERING_TAB_B_10_reg                                                       0xD8009990
#define set_DITHERING_TAB_B_10_reg(data)   (*((volatile unsigned int*) DITHERING_TAB_B_10_reg)=data)
#define get_DITHERING_TAB_B_10_reg   (*((volatile unsigned int*) DITHERING_TAB_B_10_reg))
#define DITHERING_TAB_B_10_inst_adr                                                  "0x0064"
#define DITHERING_TAB_B_10_inst                                                      0x0064
#define DITHERING_TAB_B_10_tab_b_a3_shift                                            (18)
#define DITHERING_TAB_B_10_tab_b_a3_mask                                             (0x00FC0000)
#define DITHERING_TAB_B_10_tab_b_a3(data)                                            (0x00FC0000&((data)<<18))
#define DITHERING_TAB_B_10_tab_b_a3_src(data)                                        ((0x00FC0000&(data))>>18)
#define DITHERING_TAB_B_10_get_tab_b_a3(data)                                        ((0x00FC0000&(data))>>18)
#define DITHERING_TAB_B_10_tab_b_a2_shift                                            (12)
#define DITHERING_TAB_B_10_tab_b_a2_mask                                             (0x0003F000)
#define DITHERING_TAB_B_10_tab_b_a2(data)                                            (0x0003F000&((data)<<12))
#define DITHERING_TAB_B_10_tab_b_a2_src(data)                                        ((0x0003F000&(data))>>12)
#define DITHERING_TAB_B_10_get_tab_b_a2(data)                                        ((0x0003F000&(data))>>12)
#define DITHERING_TAB_B_10_tab_b_a1_shift                                            (6)
#define DITHERING_TAB_B_10_tab_b_a1_mask                                             (0x00000FC0)
#define DITHERING_TAB_B_10_tab_b_a1(data)                                            (0x00000FC0&((data)<<6))
#define DITHERING_TAB_B_10_tab_b_a1_src(data)                                        ((0x00000FC0&(data))>>6)
#define DITHERING_TAB_B_10_get_tab_b_a1(data)                                        ((0x00000FC0&(data))>>6)
#define DITHERING_TAB_B_10_tab_b_a0_shift                                            (0)
#define DITHERING_TAB_B_10_tab_b_a0_mask                                             (0x0000003F)
#define DITHERING_TAB_B_10_tab_b_a0(data)                                            (0x0000003F&((data)<<0))
#define DITHERING_TAB_B_10_tab_b_a0_src(data)                                        ((0x0000003F&(data))>>0)
#define DITHERING_TAB_B_10_get_tab_b_a0(data)                                        ((0x0000003F&(data))>>0)


#define DITHERING_TAB_B_11                                                           0x98009994
#define DITHERING_TAB_B_11_reg_addr                                                  "0xD8009994"
#define DITHERING_TAB_B_11_reg                                                       0xD8009994
#define set_DITHERING_TAB_B_11_reg(data)   (*((volatile unsigned int*) DITHERING_TAB_B_11_reg)=data)
#define get_DITHERING_TAB_B_11_reg   (*((volatile unsigned int*) DITHERING_TAB_B_11_reg))
#define DITHERING_TAB_B_11_inst_adr                                                  "0x0065"
#define DITHERING_TAB_B_11_inst                                                      0x0065
#define DITHERING_TAB_B_11_tab_b_b3_shift                                            (18)
#define DITHERING_TAB_B_11_tab_b_b3_mask                                             (0x00FC0000)
#define DITHERING_TAB_B_11_tab_b_b3(data)                                            (0x00FC0000&((data)<<18))
#define DITHERING_TAB_B_11_tab_b_b3_src(data)                                        ((0x00FC0000&(data))>>18)
#define DITHERING_TAB_B_11_get_tab_b_b3(data)                                        ((0x00FC0000&(data))>>18)
#define DITHERING_TAB_B_11_tab_b_b2_shift                                            (12)
#define DITHERING_TAB_B_11_tab_b_b2_mask                                             (0x0003F000)
#define DITHERING_TAB_B_11_tab_b_b2(data)                                            (0x0003F000&((data)<<12))
#define DITHERING_TAB_B_11_tab_b_b2_src(data)                                        ((0x0003F000&(data))>>12)
#define DITHERING_TAB_B_11_get_tab_b_b2(data)                                        ((0x0003F000&(data))>>12)
#define DITHERING_TAB_B_11_tab_b_b1_shift                                            (6)
#define DITHERING_TAB_B_11_tab_b_b1_mask                                             (0x00000FC0)
#define DITHERING_TAB_B_11_tab_b_b1(data)                                            (0x00000FC0&((data)<<6))
#define DITHERING_TAB_B_11_tab_b_b1_src(data)                                        ((0x00000FC0&(data))>>6)
#define DITHERING_TAB_B_11_get_tab_b_b1(data)                                        ((0x00000FC0&(data))>>6)
#define DITHERING_TAB_B_11_tab_b_b0_shift                                            (0)
#define DITHERING_TAB_B_11_tab_b_b0_mask                                             (0x0000003F)
#define DITHERING_TAB_B_11_tab_b_b0(data)                                            (0x0000003F&((data)<<0))
#define DITHERING_TAB_B_11_tab_b_b0_src(data)                                        ((0x0000003F&(data))>>0)
#define DITHERING_TAB_B_11_get_tab_b_b0(data)                                        ((0x0000003F&(data))>>0)


#define DITHERING_TAB_B_12                                                           0x98009998
#define DITHERING_TAB_B_12_reg_addr                                                  "0xD8009998"
#define DITHERING_TAB_B_12_reg                                                       0xD8009998
#define set_DITHERING_TAB_B_12_reg(data)   (*((volatile unsigned int*) DITHERING_TAB_B_12_reg)=data)
#define get_DITHERING_TAB_B_12_reg   (*((volatile unsigned int*) DITHERING_TAB_B_12_reg))
#define DITHERING_TAB_B_12_inst_adr                                                  "0x0066"
#define DITHERING_TAB_B_12_inst                                                      0x0066
#define DITHERING_TAB_B_12_tab_b_c3_shift                                            (18)
#define DITHERING_TAB_B_12_tab_b_c3_mask                                             (0x00FC0000)
#define DITHERING_TAB_B_12_tab_b_c3(data)                                            (0x00FC0000&((data)<<18))
#define DITHERING_TAB_B_12_tab_b_c3_src(data)                                        ((0x00FC0000&(data))>>18)
#define DITHERING_TAB_B_12_get_tab_b_c3(data)                                        ((0x00FC0000&(data))>>18)
#define DITHERING_TAB_B_12_tab_b_c2_shift                                            (12)
#define DITHERING_TAB_B_12_tab_b_c2_mask                                             (0x0003F000)
#define DITHERING_TAB_B_12_tab_b_c2(data)                                            (0x0003F000&((data)<<12))
#define DITHERING_TAB_B_12_tab_b_c2_src(data)                                        ((0x0003F000&(data))>>12)
#define DITHERING_TAB_B_12_get_tab_b_c2(data)                                        ((0x0003F000&(data))>>12)
#define DITHERING_TAB_B_12_tab_b_c1_shift                                            (6)
#define DITHERING_TAB_B_12_tab_b_c1_mask                                             (0x00000FC0)
#define DITHERING_TAB_B_12_tab_b_c1(data)                                            (0x00000FC0&((data)<<6))
#define DITHERING_TAB_B_12_tab_b_c1_src(data)                                        ((0x00000FC0&(data))>>6)
#define DITHERING_TAB_B_12_get_tab_b_c1(data)                                        ((0x00000FC0&(data))>>6)
#define DITHERING_TAB_B_12_tab_b_c0_shift                                            (0)
#define DITHERING_TAB_B_12_tab_b_c0_mask                                             (0x0000003F)
#define DITHERING_TAB_B_12_tab_b_c0(data)                                            (0x0000003F&((data)<<0))
#define DITHERING_TAB_B_12_tab_b_c0_src(data)                                        ((0x0000003F&(data))>>0)
#define DITHERING_TAB_B_12_get_tab_b_c0(data)                                        ((0x0000003F&(data))>>0)


#define DITHERING_TAB_B_13                                                           0x9800999c
#define DITHERING_TAB_B_13_reg_addr                                                  "0xD800999C"
#define DITHERING_TAB_B_13_reg                                                       0xD800999C
#define set_DITHERING_TAB_B_13_reg(data)   (*((volatile unsigned int*) DITHERING_TAB_B_13_reg)=data)
#define get_DITHERING_TAB_B_13_reg   (*((volatile unsigned int*) DITHERING_TAB_B_13_reg))
#define DITHERING_TAB_B_13_inst_adr                                                  "0x0067"
#define DITHERING_TAB_B_13_inst                                                      0x0067
#define DITHERING_TAB_B_13_tab_b_d3_shift                                            (18)
#define DITHERING_TAB_B_13_tab_b_d3_mask                                             (0x00FC0000)
#define DITHERING_TAB_B_13_tab_b_d3(data)                                            (0x00FC0000&((data)<<18))
#define DITHERING_TAB_B_13_tab_b_d3_src(data)                                        ((0x00FC0000&(data))>>18)
#define DITHERING_TAB_B_13_get_tab_b_d3(data)                                        ((0x00FC0000&(data))>>18)
#define DITHERING_TAB_B_13_tab_b_d2_shift                                            (12)
#define DITHERING_TAB_B_13_tab_b_d2_mask                                             (0x0003F000)
#define DITHERING_TAB_B_13_tab_b_d2(data)                                            (0x0003F000&((data)<<12))
#define DITHERING_TAB_B_13_tab_b_d2_src(data)                                        ((0x0003F000&(data))>>12)
#define DITHERING_TAB_B_13_get_tab_b_d2(data)                                        ((0x0003F000&(data))>>12)
#define DITHERING_TAB_B_13_tab_b_d1_shift                                            (6)
#define DITHERING_TAB_B_13_tab_b_d1_mask                                             (0x00000FC0)
#define DITHERING_TAB_B_13_tab_b_d1(data)                                            (0x00000FC0&((data)<<6))
#define DITHERING_TAB_B_13_tab_b_d1_src(data)                                        ((0x00000FC0&(data))>>6)
#define DITHERING_TAB_B_13_get_tab_b_d1(data)                                        ((0x00000FC0&(data))>>6)
#define DITHERING_TAB_B_13_tab_b_d0_shift                                            (0)
#define DITHERING_TAB_B_13_tab_b_d0_mask                                             (0x0000003F)
#define DITHERING_TAB_B_13_tab_b_d0(data)                                            (0x0000003F&((data)<<0))
#define DITHERING_TAB_B_13_tab_b_d0_src(data)                                        ((0x0000003F&(data))>>0)
#define DITHERING_TAB_B_13_get_tab_b_d0(data)                                        ((0x0000003F&(data))>>0)


#define DITHERING_TAB_B_14                                                           0x980099a0
#define DITHERING_TAB_B_14_reg_addr                                                  "0xD80099A0"
#define DITHERING_TAB_B_14_reg                                                       0xD80099A0
#define set_DITHERING_TAB_B_14_reg(data)   (*((volatile unsigned int*) DITHERING_TAB_B_14_reg)=data)
#define get_DITHERING_TAB_B_14_reg   (*((volatile unsigned int*) DITHERING_TAB_B_14_reg))
#define DITHERING_TAB_B_14_inst_adr                                                  "0x0068"
#define DITHERING_TAB_B_14_inst                                                      0x0068
#define DITHERING_TAB_B_14_tab_b_e3_shift                                            (18)
#define DITHERING_TAB_B_14_tab_b_e3_mask                                             (0x00FC0000)
#define DITHERING_TAB_B_14_tab_b_e3(data)                                            (0x00FC0000&((data)<<18))
#define DITHERING_TAB_B_14_tab_b_e3_src(data)                                        ((0x00FC0000&(data))>>18)
#define DITHERING_TAB_B_14_get_tab_b_e3(data)                                        ((0x00FC0000&(data))>>18)
#define DITHERING_TAB_B_14_tab_b_e2_shift                                            (12)
#define DITHERING_TAB_B_14_tab_b_e2_mask                                             (0x0003F000)
#define DITHERING_TAB_B_14_tab_b_e2(data)                                            (0x0003F000&((data)<<12))
#define DITHERING_TAB_B_14_tab_b_e2_src(data)                                        ((0x0003F000&(data))>>12)
#define DITHERING_TAB_B_14_get_tab_b_e2(data)                                        ((0x0003F000&(data))>>12)
#define DITHERING_TAB_B_14_tab_b_e1_shift                                            (6)
#define DITHERING_TAB_B_14_tab_b_e1_mask                                             (0x00000FC0)
#define DITHERING_TAB_B_14_tab_b_e1(data)                                            (0x00000FC0&((data)<<6))
#define DITHERING_TAB_B_14_tab_b_e1_src(data)                                        ((0x00000FC0&(data))>>6)
#define DITHERING_TAB_B_14_get_tab_b_e1(data)                                        ((0x00000FC0&(data))>>6)
#define DITHERING_TAB_B_14_tab_b_e0_shift                                            (0)
#define DITHERING_TAB_B_14_tab_b_e0_mask                                             (0x0000003F)
#define DITHERING_TAB_B_14_tab_b_e0(data)                                            (0x0000003F&((data)<<0))
#define DITHERING_TAB_B_14_tab_b_e0_src(data)                                        ((0x0000003F&(data))>>0)
#define DITHERING_TAB_B_14_get_tab_b_e0(data)                                        ((0x0000003F&(data))>>0)


#define DITHERING_TAB_B_15                                                           0x980099a4
#define DITHERING_TAB_B_15_reg_addr                                                  "0xD80099A4"
#define DITHERING_TAB_B_15_reg                                                       0xD80099A4
#define set_DITHERING_TAB_B_15_reg(data)   (*((volatile unsigned int*) DITHERING_TAB_B_15_reg)=data)
#define get_DITHERING_TAB_B_15_reg   (*((volatile unsigned int*) DITHERING_TAB_B_15_reg))
#define DITHERING_TAB_B_15_inst_adr                                                  "0x0069"
#define DITHERING_TAB_B_15_inst                                                      0x0069
#define DITHERING_TAB_B_15_tab_b_f3_shift                                            (18)
#define DITHERING_TAB_B_15_tab_b_f3_mask                                             (0x00FC0000)
#define DITHERING_TAB_B_15_tab_b_f3(data)                                            (0x00FC0000&((data)<<18))
#define DITHERING_TAB_B_15_tab_b_f3_src(data)                                        ((0x00FC0000&(data))>>18)
#define DITHERING_TAB_B_15_get_tab_b_f3(data)                                        ((0x00FC0000&(data))>>18)
#define DITHERING_TAB_B_15_tab_b_f2_shift                                            (12)
#define DITHERING_TAB_B_15_tab_b_f2_mask                                             (0x0003F000)
#define DITHERING_TAB_B_15_tab_b_f2(data)                                            (0x0003F000&((data)<<12))
#define DITHERING_TAB_B_15_tab_b_f2_src(data)                                        ((0x0003F000&(data))>>12)
#define DITHERING_TAB_B_15_get_tab_b_f2(data)                                        ((0x0003F000&(data))>>12)
#define DITHERING_TAB_B_15_tab_b_f1_shift                                            (6)
#define DITHERING_TAB_B_15_tab_b_f1_mask                                             (0x00000FC0)
#define DITHERING_TAB_B_15_tab_b_f1(data)                                            (0x00000FC0&((data)<<6))
#define DITHERING_TAB_B_15_tab_b_f1_src(data)                                        ((0x00000FC0&(data))>>6)
#define DITHERING_TAB_B_15_get_tab_b_f1(data)                                        ((0x00000FC0&(data))>>6)
#define DITHERING_TAB_B_15_tab_b_f0_shift                                            (0)
#define DITHERING_TAB_B_15_tab_b_f0_mask                                             (0x0000003F)
#define DITHERING_TAB_B_15_tab_b_f0(data)                                            (0x0000003F&((data)<<0))
#define DITHERING_TAB_B_15_tab_b_f0_src(data)                                        ((0x0000003F&(data))>>0)
#define DITHERING_TAB_B_15_get_tab_b_f0(data)                                        ((0x0000003F&(data))>>0)


#define TEMPORAL_OFFSET                                                              0x980099a8
#define TEMPORAL_OFFSET_reg_addr                                                     "0xD80099A8"
#define TEMPORAL_OFFSET_reg                                                          0xD80099A8
#define set_TEMPORAL_OFFSET_reg(data)   (*((volatile unsigned int*) TEMPORAL_OFFSET_reg)=data)
#define get_TEMPORAL_OFFSET_reg   (*((volatile unsigned int*) TEMPORAL_OFFSET_reg))
#define TEMPORAL_OFFSET_inst_adr                                                     "0x006A"
#define TEMPORAL_OFFSET_inst                                                         0x006A
#define TEMPORAL_OFFSET_temp_offset_15_shift                                         (30)
#define TEMPORAL_OFFSET_temp_offset_15_mask                                          (0xC0000000)
#define TEMPORAL_OFFSET_temp_offset_15(data)                                         (0xC0000000&((data)<<30))
#define TEMPORAL_OFFSET_temp_offset_15_src(data)                                     ((0xC0000000&(data))>>30)
#define TEMPORAL_OFFSET_get_temp_offset_15(data)                                     ((0xC0000000&(data))>>30)
#define TEMPORAL_OFFSET_temp_offset_14_shift                                         (28)
#define TEMPORAL_OFFSET_temp_offset_14_mask                                          (0x30000000)
#define TEMPORAL_OFFSET_temp_offset_14(data)                                         (0x30000000&((data)<<28))
#define TEMPORAL_OFFSET_temp_offset_14_src(data)                                     ((0x30000000&(data))>>28)
#define TEMPORAL_OFFSET_get_temp_offset_14(data)                                     ((0x30000000&(data))>>28)
#define TEMPORAL_OFFSET_temp_offset_13_shift                                         (26)
#define TEMPORAL_OFFSET_temp_offset_13_mask                                          (0x0C000000)
#define TEMPORAL_OFFSET_temp_offset_13(data)                                         (0x0C000000&((data)<<26))
#define TEMPORAL_OFFSET_temp_offset_13_src(data)                                     ((0x0C000000&(data))>>26)
#define TEMPORAL_OFFSET_get_temp_offset_13(data)                                     ((0x0C000000&(data))>>26)
#define TEMPORAL_OFFSET_temp_offset_12_shift                                         (24)
#define TEMPORAL_OFFSET_temp_offset_12_mask                                          (0x03000000)
#define TEMPORAL_OFFSET_temp_offset_12(data)                                         (0x03000000&((data)<<24))
#define TEMPORAL_OFFSET_temp_offset_12_src(data)                                     ((0x03000000&(data))>>24)
#define TEMPORAL_OFFSET_get_temp_offset_12(data)                                     ((0x03000000&(data))>>24)
#define TEMPORAL_OFFSET_temp_offset_11_shift                                         (22)
#define TEMPORAL_OFFSET_temp_offset_11_mask                                          (0x00C00000)
#define TEMPORAL_OFFSET_temp_offset_11(data)                                         (0x00C00000&((data)<<22))
#define TEMPORAL_OFFSET_temp_offset_11_src(data)                                     ((0x00C00000&(data))>>22)
#define TEMPORAL_OFFSET_get_temp_offset_11(data)                                     ((0x00C00000&(data))>>22)
#define TEMPORAL_OFFSET_temp_offset_10_shift                                         (20)
#define TEMPORAL_OFFSET_temp_offset_10_mask                                          (0x00300000)
#define TEMPORAL_OFFSET_temp_offset_10(data)                                         (0x00300000&((data)<<20))
#define TEMPORAL_OFFSET_temp_offset_10_src(data)                                     ((0x00300000&(data))>>20)
#define TEMPORAL_OFFSET_get_temp_offset_10(data)                                     ((0x00300000&(data))>>20)
#define TEMPORAL_OFFSET_temp_offset_9_shift                                          (18)
#define TEMPORAL_OFFSET_temp_offset_9_mask                                           (0x000C0000)
#define TEMPORAL_OFFSET_temp_offset_9(data)                                          (0x000C0000&((data)<<18))
#define TEMPORAL_OFFSET_temp_offset_9_src(data)                                      ((0x000C0000&(data))>>18)
#define TEMPORAL_OFFSET_get_temp_offset_9(data)                                      ((0x000C0000&(data))>>18)
#define TEMPORAL_OFFSET_temp_offset_8_shift                                          (16)
#define TEMPORAL_OFFSET_temp_offset_8_mask                                           (0x00030000)
#define TEMPORAL_OFFSET_temp_offset_8(data)                                          (0x00030000&((data)<<16))
#define TEMPORAL_OFFSET_temp_offset_8_src(data)                                      ((0x00030000&(data))>>16)
#define TEMPORAL_OFFSET_get_temp_offset_8(data)                                      ((0x00030000&(data))>>16)
#define TEMPORAL_OFFSET_temp_offset_7_shift                                          (14)
#define TEMPORAL_OFFSET_temp_offset_7_mask                                           (0x0000C000)
#define TEMPORAL_OFFSET_temp_offset_7(data)                                          (0x0000C000&((data)<<14))
#define TEMPORAL_OFFSET_temp_offset_7_src(data)                                      ((0x0000C000&(data))>>14)
#define TEMPORAL_OFFSET_get_temp_offset_7(data)                                      ((0x0000C000&(data))>>14)
#define TEMPORAL_OFFSET_temp_offset_6_shift                                          (12)
#define TEMPORAL_OFFSET_temp_offset_6_mask                                           (0x00003000)
#define TEMPORAL_OFFSET_temp_offset_6(data)                                          (0x00003000&((data)<<12))
#define TEMPORAL_OFFSET_temp_offset_6_src(data)                                      ((0x00003000&(data))>>12)
#define TEMPORAL_OFFSET_get_temp_offset_6(data)                                      ((0x00003000&(data))>>12)
#define TEMPORAL_OFFSET_temp_offset_5_shift                                          (10)
#define TEMPORAL_OFFSET_temp_offset_5_mask                                           (0x00000C00)
#define TEMPORAL_OFFSET_temp_offset_5(data)                                          (0x00000C00&((data)<<10))
#define TEMPORAL_OFFSET_temp_offset_5_src(data)                                      ((0x00000C00&(data))>>10)
#define TEMPORAL_OFFSET_get_temp_offset_5(data)                                      ((0x00000C00&(data))>>10)
#define TEMPORAL_OFFSET_temp_offset_4_shift                                          (8)
#define TEMPORAL_OFFSET_temp_offset_4_mask                                           (0x00000300)
#define TEMPORAL_OFFSET_temp_offset_4(data)                                          (0x00000300&((data)<<8))
#define TEMPORAL_OFFSET_temp_offset_4_src(data)                                      ((0x00000300&(data))>>8)
#define TEMPORAL_OFFSET_get_temp_offset_4(data)                                      ((0x00000300&(data))>>8)
#define TEMPORAL_OFFSET_temp_offset_3_shift                                          (6)
#define TEMPORAL_OFFSET_temp_offset_3_mask                                           (0x000000C0)
#define TEMPORAL_OFFSET_temp_offset_3(data)                                          (0x000000C0&((data)<<6))
#define TEMPORAL_OFFSET_temp_offset_3_src(data)                                      ((0x000000C0&(data))>>6)
#define TEMPORAL_OFFSET_get_temp_offset_3(data)                                      ((0x000000C0&(data))>>6)
#define TEMPORAL_OFFSET_temp_offset_2_shift                                          (4)
#define TEMPORAL_OFFSET_temp_offset_2_mask                                           (0x00000030)
#define TEMPORAL_OFFSET_temp_offset_2(data)                                          (0x00000030&((data)<<4))
#define TEMPORAL_OFFSET_temp_offset_2_src(data)                                      ((0x00000030&(data))>>4)
#define TEMPORAL_OFFSET_get_temp_offset_2(data)                                      ((0x00000030&(data))>>4)
#define TEMPORAL_OFFSET_temp_offset_1_shift                                          (2)
#define TEMPORAL_OFFSET_temp_offset_1_mask                                           (0x0000000C)
#define TEMPORAL_OFFSET_temp_offset_1(data)                                          (0x0000000C&((data)<<2))
#define TEMPORAL_OFFSET_temp_offset_1_src(data)                                      ((0x0000000C&(data))>>2)
#define TEMPORAL_OFFSET_get_temp_offset_1(data)                                      ((0x0000000C&(data))>>2)
#define TEMPORAL_OFFSET_temp_offset_0_shift                                          (0)
#define TEMPORAL_OFFSET_temp_offset_0_mask                                           (0x00000003)
#define TEMPORAL_OFFSET_temp_offset_0(data)                                          (0x00000003&((data)<<0))
#define TEMPORAL_OFFSET_temp_offset_0_src(data)                                      ((0x00000003&(data))>>0)
#define TEMPORAL_OFFSET_get_temp_offset_0(data)                                      ((0x00000003&(data))>>0)


#define DITHERING_2ND_SEQ_R_0                                                        0x980099ac
#define DITHERING_2ND_SEQ_R_0_reg_addr                                               "0xD80099AC"
#define DITHERING_2ND_SEQ_R_0_reg                                                    0xD80099AC
#define set_DITHERING_2ND_SEQ_R_0_reg(data)   (*((volatile unsigned int*) DITHERING_2ND_SEQ_R_0_reg)=data)
#define get_DITHERING_2ND_SEQ_R_0_reg   (*((volatile unsigned int*) DITHERING_2ND_SEQ_R_0_reg))
#define DITHERING_2ND_SEQ_R_0_inst_adr                                               "0x006B"
#define DITHERING_2ND_SEQ_R_0_inst                                                   0x006B
#define DITHERING_2ND_SEQ_R_0_seq_r_7_shift                                          (28)
#define DITHERING_2ND_SEQ_R_0_seq_r_7_mask                                           (0xF0000000)
#define DITHERING_2ND_SEQ_R_0_seq_r_7(data)                                          (0xF0000000&((data)<<28))
#define DITHERING_2ND_SEQ_R_0_seq_r_7_src(data)                                      ((0xF0000000&(data))>>28)
#define DITHERING_2ND_SEQ_R_0_get_seq_r_7(data)                                      ((0xF0000000&(data))>>28)
#define DITHERING_2ND_SEQ_R_0_seq_r_6_shift                                          (24)
#define DITHERING_2ND_SEQ_R_0_seq_r_6_mask                                           (0x0F000000)
#define DITHERING_2ND_SEQ_R_0_seq_r_6(data)                                          (0x0F000000&((data)<<24))
#define DITHERING_2ND_SEQ_R_0_seq_r_6_src(data)                                      ((0x0F000000&(data))>>24)
#define DITHERING_2ND_SEQ_R_0_get_seq_r_6(data)                                      ((0x0F000000&(data))>>24)
#define DITHERING_2ND_SEQ_R_0_seq_r_5_shift                                          (20)
#define DITHERING_2ND_SEQ_R_0_seq_r_5_mask                                           (0x00F00000)
#define DITHERING_2ND_SEQ_R_0_seq_r_5(data)                                          (0x00F00000&((data)<<20))
#define DITHERING_2ND_SEQ_R_0_seq_r_5_src(data)                                      ((0x00F00000&(data))>>20)
#define DITHERING_2ND_SEQ_R_0_get_seq_r_5(data)                                      ((0x00F00000&(data))>>20)
#define DITHERING_2ND_SEQ_R_0_seq_r_4_shift                                          (16)
#define DITHERING_2ND_SEQ_R_0_seq_r_4_mask                                           (0x000F0000)
#define DITHERING_2ND_SEQ_R_0_seq_r_4(data)                                          (0x000F0000&((data)<<16))
#define DITHERING_2ND_SEQ_R_0_seq_r_4_src(data)                                      ((0x000F0000&(data))>>16)
#define DITHERING_2ND_SEQ_R_0_get_seq_r_4(data)                                      ((0x000F0000&(data))>>16)
#define DITHERING_2ND_SEQ_R_0_seq_r_3_shift                                          (12)
#define DITHERING_2ND_SEQ_R_0_seq_r_3_mask                                           (0x0000F000)
#define DITHERING_2ND_SEQ_R_0_seq_r_3(data)                                          (0x0000F000&((data)<<12))
#define DITHERING_2ND_SEQ_R_0_seq_r_3_src(data)                                      ((0x0000F000&(data))>>12)
#define DITHERING_2ND_SEQ_R_0_get_seq_r_3(data)                                      ((0x0000F000&(data))>>12)
#define DITHERING_2ND_SEQ_R_0_seq_r_2_shift                                          (8)
#define DITHERING_2ND_SEQ_R_0_seq_r_2_mask                                           (0x00000F00)
#define DITHERING_2ND_SEQ_R_0_seq_r_2(data)                                          (0x00000F00&((data)<<8))
#define DITHERING_2ND_SEQ_R_0_seq_r_2_src(data)                                      ((0x00000F00&(data))>>8)
#define DITHERING_2ND_SEQ_R_0_get_seq_r_2(data)                                      ((0x00000F00&(data))>>8)
#define DITHERING_2ND_SEQ_R_0_seq_r_1_shift                                          (4)
#define DITHERING_2ND_SEQ_R_0_seq_r_1_mask                                           (0x000000F0)
#define DITHERING_2ND_SEQ_R_0_seq_r_1(data)                                          (0x000000F0&((data)<<4))
#define DITHERING_2ND_SEQ_R_0_seq_r_1_src(data)                                      ((0x000000F0&(data))>>4)
#define DITHERING_2ND_SEQ_R_0_get_seq_r_1(data)                                      ((0x000000F0&(data))>>4)
#define DITHERING_2ND_SEQ_R_0_seq_r_0_shift                                          (0)
#define DITHERING_2ND_SEQ_R_0_seq_r_0_mask                                           (0x0000000F)
#define DITHERING_2ND_SEQ_R_0_seq_r_0(data)                                          (0x0000000F&((data)<<0))
#define DITHERING_2ND_SEQ_R_0_seq_r_0_src(data)                                      ((0x0000000F&(data))>>0)
#define DITHERING_2ND_SEQ_R_0_get_seq_r_0(data)                                      ((0x0000000F&(data))>>0)


#define DITHERING_2ND_SEQ_R_1                                                        0x980099b0
#define DITHERING_2ND_SEQ_R_1_reg_addr                                               "0xD80099B0"
#define DITHERING_2ND_SEQ_R_1_reg                                                    0xD80099B0
#define set_DITHERING_2ND_SEQ_R_1_reg(data)   (*((volatile unsigned int*) DITHERING_2ND_SEQ_R_1_reg)=data)
#define get_DITHERING_2ND_SEQ_R_1_reg   (*((volatile unsigned int*) DITHERING_2ND_SEQ_R_1_reg))
#define DITHERING_2ND_SEQ_R_1_inst_adr                                               "0x006C"
#define DITHERING_2ND_SEQ_R_1_inst                                                   0x006C
#define DITHERING_2ND_SEQ_R_1_seq_r_15_shift                                         (28)
#define DITHERING_2ND_SEQ_R_1_seq_r_15_mask                                          (0xF0000000)
#define DITHERING_2ND_SEQ_R_1_seq_r_15(data)                                         (0xF0000000&((data)<<28))
#define DITHERING_2ND_SEQ_R_1_seq_r_15_src(data)                                     ((0xF0000000&(data))>>28)
#define DITHERING_2ND_SEQ_R_1_get_seq_r_15(data)                                     ((0xF0000000&(data))>>28)
#define DITHERING_2ND_SEQ_R_1_seq_r_14_shift                                         (24)
#define DITHERING_2ND_SEQ_R_1_seq_r_14_mask                                          (0x0F000000)
#define DITHERING_2ND_SEQ_R_1_seq_r_14(data)                                         (0x0F000000&((data)<<24))
#define DITHERING_2ND_SEQ_R_1_seq_r_14_src(data)                                     ((0x0F000000&(data))>>24)
#define DITHERING_2ND_SEQ_R_1_get_seq_r_14(data)                                     ((0x0F000000&(data))>>24)
#define DITHERING_2ND_SEQ_R_1_seq_r_13_shift                                         (20)
#define DITHERING_2ND_SEQ_R_1_seq_r_13_mask                                          (0x00F00000)
#define DITHERING_2ND_SEQ_R_1_seq_r_13(data)                                         (0x00F00000&((data)<<20))
#define DITHERING_2ND_SEQ_R_1_seq_r_13_src(data)                                     ((0x00F00000&(data))>>20)
#define DITHERING_2ND_SEQ_R_1_get_seq_r_13(data)                                     ((0x00F00000&(data))>>20)
#define DITHERING_2ND_SEQ_R_1_seq_r_12_shift                                         (16)
#define DITHERING_2ND_SEQ_R_1_seq_r_12_mask                                          (0x000F0000)
#define DITHERING_2ND_SEQ_R_1_seq_r_12(data)                                         (0x000F0000&((data)<<16))
#define DITHERING_2ND_SEQ_R_1_seq_r_12_src(data)                                     ((0x000F0000&(data))>>16)
#define DITHERING_2ND_SEQ_R_1_get_seq_r_12(data)                                     ((0x000F0000&(data))>>16)
#define DITHERING_2ND_SEQ_R_1_seq_r_11_shift                                         (12)
#define DITHERING_2ND_SEQ_R_1_seq_r_11_mask                                          (0x0000F000)
#define DITHERING_2ND_SEQ_R_1_seq_r_11(data)                                         (0x0000F000&((data)<<12))
#define DITHERING_2ND_SEQ_R_1_seq_r_11_src(data)                                     ((0x0000F000&(data))>>12)
#define DITHERING_2ND_SEQ_R_1_get_seq_r_11(data)                                     ((0x0000F000&(data))>>12)
#define DITHERING_2ND_SEQ_R_1_seq_r_10_shift                                         (8)
#define DITHERING_2ND_SEQ_R_1_seq_r_10_mask                                          (0x00000F00)
#define DITHERING_2ND_SEQ_R_1_seq_r_10(data)                                         (0x00000F00&((data)<<8))
#define DITHERING_2ND_SEQ_R_1_seq_r_10_src(data)                                     ((0x00000F00&(data))>>8)
#define DITHERING_2ND_SEQ_R_1_get_seq_r_10(data)                                     ((0x00000F00&(data))>>8)
#define DITHERING_2ND_SEQ_R_1_seq_r_9_shift                                          (4)
#define DITHERING_2ND_SEQ_R_1_seq_r_9_mask                                           (0x000000F0)
#define DITHERING_2ND_SEQ_R_1_seq_r_9(data)                                          (0x000000F0&((data)<<4))
#define DITHERING_2ND_SEQ_R_1_seq_r_9_src(data)                                      ((0x000000F0&(data))>>4)
#define DITHERING_2ND_SEQ_R_1_get_seq_r_9(data)                                      ((0x000000F0&(data))>>4)
#define DITHERING_2ND_SEQ_R_1_seq_r_8_shift                                          (0)
#define DITHERING_2ND_SEQ_R_1_seq_r_8_mask                                           (0x0000000F)
#define DITHERING_2ND_SEQ_R_1_seq_r_8(data)                                          (0x0000000F&((data)<<0))
#define DITHERING_2ND_SEQ_R_1_seq_r_8_src(data)                                      ((0x0000000F&(data))>>0)
#define DITHERING_2ND_SEQ_R_1_get_seq_r_8(data)                                      ((0x0000000F&(data))>>0)


#define DITHERING_2ND_SEQ_R_2                                                        0x980099b4
#define DITHERING_2ND_SEQ_R_2_reg_addr                                               "0xD80099B4"
#define DITHERING_2ND_SEQ_R_2_reg                                                    0xD80099B4
#define set_DITHERING_2ND_SEQ_R_2_reg(data)   (*((volatile unsigned int*) DITHERING_2ND_SEQ_R_2_reg)=data)
#define get_DITHERING_2ND_SEQ_R_2_reg   (*((volatile unsigned int*) DITHERING_2ND_SEQ_R_2_reg))
#define DITHERING_2ND_SEQ_R_2_inst_adr                                               "0x006D"
#define DITHERING_2ND_SEQ_R_2_inst                                                   0x006D
#define DITHERING_2ND_SEQ_R_2_seq_r_23_shift                                         (28)
#define DITHERING_2ND_SEQ_R_2_seq_r_23_mask                                          (0xF0000000)
#define DITHERING_2ND_SEQ_R_2_seq_r_23(data)                                         (0xF0000000&((data)<<28))
#define DITHERING_2ND_SEQ_R_2_seq_r_23_src(data)                                     ((0xF0000000&(data))>>28)
#define DITHERING_2ND_SEQ_R_2_get_seq_r_23(data)                                     ((0xF0000000&(data))>>28)
#define DITHERING_2ND_SEQ_R_2_seq_r_22_shift                                         (24)
#define DITHERING_2ND_SEQ_R_2_seq_r_22_mask                                          (0x0F000000)
#define DITHERING_2ND_SEQ_R_2_seq_r_22(data)                                         (0x0F000000&((data)<<24))
#define DITHERING_2ND_SEQ_R_2_seq_r_22_src(data)                                     ((0x0F000000&(data))>>24)
#define DITHERING_2ND_SEQ_R_2_get_seq_r_22(data)                                     ((0x0F000000&(data))>>24)
#define DITHERING_2ND_SEQ_R_2_seq_r_21_shift                                         (20)
#define DITHERING_2ND_SEQ_R_2_seq_r_21_mask                                          (0x00F00000)
#define DITHERING_2ND_SEQ_R_2_seq_r_21(data)                                         (0x00F00000&((data)<<20))
#define DITHERING_2ND_SEQ_R_2_seq_r_21_src(data)                                     ((0x00F00000&(data))>>20)
#define DITHERING_2ND_SEQ_R_2_get_seq_r_21(data)                                     ((0x00F00000&(data))>>20)
#define DITHERING_2ND_SEQ_R_2_seq_r_20_shift                                         (16)
#define DITHERING_2ND_SEQ_R_2_seq_r_20_mask                                          (0x000F0000)
#define DITHERING_2ND_SEQ_R_2_seq_r_20(data)                                         (0x000F0000&((data)<<16))
#define DITHERING_2ND_SEQ_R_2_seq_r_20_src(data)                                     ((0x000F0000&(data))>>16)
#define DITHERING_2ND_SEQ_R_2_get_seq_r_20(data)                                     ((0x000F0000&(data))>>16)
#define DITHERING_2ND_SEQ_R_2_seq_r_19_shift                                         (12)
#define DITHERING_2ND_SEQ_R_2_seq_r_19_mask                                          (0x0000F000)
#define DITHERING_2ND_SEQ_R_2_seq_r_19(data)                                         (0x0000F000&((data)<<12))
#define DITHERING_2ND_SEQ_R_2_seq_r_19_src(data)                                     ((0x0000F000&(data))>>12)
#define DITHERING_2ND_SEQ_R_2_get_seq_r_19(data)                                     ((0x0000F000&(data))>>12)
#define DITHERING_2ND_SEQ_R_2_seq_r_18_shift                                         (8)
#define DITHERING_2ND_SEQ_R_2_seq_r_18_mask                                          (0x00000F00)
#define DITHERING_2ND_SEQ_R_2_seq_r_18(data)                                         (0x00000F00&((data)<<8))
#define DITHERING_2ND_SEQ_R_2_seq_r_18_src(data)                                     ((0x00000F00&(data))>>8)
#define DITHERING_2ND_SEQ_R_2_get_seq_r_18(data)                                     ((0x00000F00&(data))>>8)
#define DITHERING_2ND_SEQ_R_2_seq_r_17_shift                                         (4)
#define DITHERING_2ND_SEQ_R_2_seq_r_17_mask                                          (0x000000F0)
#define DITHERING_2ND_SEQ_R_2_seq_r_17(data)                                         (0x000000F0&((data)<<4))
#define DITHERING_2ND_SEQ_R_2_seq_r_17_src(data)                                     ((0x000000F0&(data))>>4)
#define DITHERING_2ND_SEQ_R_2_get_seq_r_17(data)                                     ((0x000000F0&(data))>>4)
#define DITHERING_2ND_SEQ_R_2_seq_r_16_shift                                         (0)
#define DITHERING_2ND_SEQ_R_2_seq_r_16_mask                                          (0x0000000F)
#define DITHERING_2ND_SEQ_R_2_seq_r_16(data)                                         (0x0000000F&((data)<<0))
#define DITHERING_2ND_SEQ_R_2_seq_r_16_src(data)                                     ((0x0000000F&(data))>>0)
#define DITHERING_2ND_SEQ_R_2_get_seq_r_16(data)                                     ((0x0000000F&(data))>>0)


#define DITHERING_2ND_SEQ_R_3                                                        0x980099b8
#define DITHERING_2ND_SEQ_R_3_reg_addr                                               "0xD80099B8"
#define DITHERING_2ND_SEQ_R_3_reg                                                    0xD80099B8
#define set_DITHERING_2ND_SEQ_R_3_reg(data)   (*((volatile unsigned int*) DITHERING_2ND_SEQ_R_3_reg)=data)
#define get_DITHERING_2ND_SEQ_R_3_reg   (*((volatile unsigned int*) DITHERING_2ND_SEQ_R_3_reg))
#define DITHERING_2ND_SEQ_R_3_inst_adr                                               "0x006E"
#define DITHERING_2ND_SEQ_R_3_inst                                                   0x006E
#define DITHERING_2ND_SEQ_R_3_seq_r_31_shift                                         (28)
#define DITHERING_2ND_SEQ_R_3_seq_r_31_mask                                          (0xF0000000)
#define DITHERING_2ND_SEQ_R_3_seq_r_31(data)                                         (0xF0000000&((data)<<28))
#define DITHERING_2ND_SEQ_R_3_seq_r_31_src(data)                                     ((0xF0000000&(data))>>28)
#define DITHERING_2ND_SEQ_R_3_get_seq_r_31(data)                                     ((0xF0000000&(data))>>28)
#define DITHERING_2ND_SEQ_R_3_seq_r_30_shift                                         (24)
#define DITHERING_2ND_SEQ_R_3_seq_r_30_mask                                          (0x0F000000)
#define DITHERING_2ND_SEQ_R_3_seq_r_30(data)                                         (0x0F000000&((data)<<24))
#define DITHERING_2ND_SEQ_R_3_seq_r_30_src(data)                                     ((0x0F000000&(data))>>24)
#define DITHERING_2ND_SEQ_R_3_get_seq_r_30(data)                                     ((0x0F000000&(data))>>24)
#define DITHERING_2ND_SEQ_R_3_seq_r_29_shift                                         (20)
#define DITHERING_2ND_SEQ_R_3_seq_r_29_mask                                          (0x00F00000)
#define DITHERING_2ND_SEQ_R_3_seq_r_29(data)                                         (0x00F00000&((data)<<20))
#define DITHERING_2ND_SEQ_R_3_seq_r_29_src(data)                                     ((0x00F00000&(data))>>20)
#define DITHERING_2ND_SEQ_R_3_get_seq_r_29(data)                                     ((0x00F00000&(data))>>20)
#define DITHERING_2ND_SEQ_R_3_seq_r_28_shift                                         (16)
#define DITHERING_2ND_SEQ_R_3_seq_r_28_mask                                          (0x000F0000)
#define DITHERING_2ND_SEQ_R_3_seq_r_28(data)                                         (0x000F0000&((data)<<16))
#define DITHERING_2ND_SEQ_R_3_seq_r_28_src(data)                                     ((0x000F0000&(data))>>16)
#define DITHERING_2ND_SEQ_R_3_get_seq_r_28(data)                                     ((0x000F0000&(data))>>16)
#define DITHERING_2ND_SEQ_R_3_seq_r_27_shift                                         (12)
#define DITHERING_2ND_SEQ_R_3_seq_r_27_mask                                          (0x0000F000)
#define DITHERING_2ND_SEQ_R_3_seq_r_27(data)                                         (0x0000F000&((data)<<12))
#define DITHERING_2ND_SEQ_R_3_seq_r_27_src(data)                                     ((0x0000F000&(data))>>12)
#define DITHERING_2ND_SEQ_R_3_get_seq_r_27(data)                                     ((0x0000F000&(data))>>12)
#define DITHERING_2ND_SEQ_R_3_seq_r_26_shift                                         (8)
#define DITHERING_2ND_SEQ_R_3_seq_r_26_mask                                          (0x00000F00)
#define DITHERING_2ND_SEQ_R_3_seq_r_26(data)                                         (0x00000F00&((data)<<8))
#define DITHERING_2ND_SEQ_R_3_seq_r_26_src(data)                                     ((0x00000F00&(data))>>8)
#define DITHERING_2ND_SEQ_R_3_get_seq_r_26(data)                                     ((0x00000F00&(data))>>8)
#define DITHERING_2ND_SEQ_R_3_seq_r_25_shift                                         (4)
#define DITHERING_2ND_SEQ_R_3_seq_r_25_mask                                          (0x000000F0)
#define DITHERING_2ND_SEQ_R_3_seq_r_25(data)                                         (0x000000F0&((data)<<4))
#define DITHERING_2ND_SEQ_R_3_seq_r_25_src(data)                                     ((0x000000F0&(data))>>4)
#define DITHERING_2ND_SEQ_R_3_get_seq_r_25(data)                                     ((0x000000F0&(data))>>4)
#define DITHERING_2ND_SEQ_R_3_seq_r_24_shift                                         (0)
#define DITHERING_2ND_SEQ_R_3_seq_r_24_mask                                          (0x0000000F)
#define DITHERING_2ND_SEQ_R_3_seq_r_24(data)                                         (0x0000000F&((data)<<0))
#define DITHERING_2ND_SEQ_R_3_seq_r_24_src(data)                                     ((0x0000000F&(data))>>0)
#define DITHERING_2ND_SEQ_R_3_get_seq_r_24(data)                                     ((0x0000000F&(data))>>0)


#define DITHERING_2ND_SEQ_G_0                                                        0x980099bc
#define DITHERING_2ND_SEQ_G_0_reg_addr                                               "0xD80099BC"
#define DITHERING_2ND_SEQ_G_0_reg                                                    0xD80099BC
#define set_DITHERING_2ND_SEQ_G_0_reg(data)   (*((volatile unsigned int*) DITHERING_2ND_SEQ_G_0_reg)=data)
#define get_DITHERING_2ND_SEQ_G_0_reg   (*((volatile unsigned int*) DITHERING_2ND_SEQ_G_0_reg))
#define DITHERING_2ND_SEQ_G_0_inst_adr                                               "0x006F"
#define DITHERING_2ND_SEQ_G_0_inst                                                   0x006F
#define DITHERING_2ND_SEQ_G_0_seq_g_7_shift                                          (28)
#define DITHERING_2ND_SEQ_G_0_seq_g_7_mask                                           (0xF0000000)
#define DITHERING_2ND_SEQ_G_0_seq_g_7(data)                                          (0xF0000000&((data)<<28))
#define DITHERING_2ND_SEQ_G_0_seq_g_7_src(data)                                      ((0xF0000000&(data))>>28)
#define DITHERING_2ND_SEQ_G_0_get_seq_g_7(data)                                      ((0xF0000000&(data))>>28)
#define DITHERING_2ND_SEQ_G_0_seq_g_6_shift                                          (24)
#define DITHERING_2ND_SEQ_G_0_seq_g_6_mask                                           (0x0F000000)
#define DITHERING_2ND_SEQ_G_0_seq_g_6(data)                                          (0x0F000000&((data)<<24))
#define DITHERING_2ND_SEQ_G_0_seq_g_6_src(data)                                      ((0x0F000000&(data))>>24)
#define DITHERING_2ND_SEQ_G_0_get_seq_g_6(data)                                      ((0x0F000000&(data))>>24)
#define DITHERING_2ND_SEQ_G_0_seq_g_5_shift                                          (20)
#define DITHERING_2ND_SEQ_G_0_seq_g_5_mask                                           (0x00F00000)
#define DITHERING_2ND_SEQ_G_0_seq_g_5(data)                                          (0x00F00000&((data)<<20))
#define DITHERING_2ND_SEQ_G_0_seq_g_5_src(data)                                      ((0x00F00000&(data))>>20)
#define DITHERING_2ND_SEQ_G_0_get_seq_g_5(data)                                      ((0x00F00000&(data))>>20)
#define DITHERING_2ND_SEQ_G_0_seq_g_4_shift                                          (16)
#define DITHERING_2ND_SEQ_G_0_seq_g_4_mask                                           (0x000F0000)
#define DITHERING_2ND_SEQ_G_0_seq_g_4(data)                                          (0x000F0000&((data)<<16))
#define DITHERING_2ND_SEQ_G_0_seq_g_4_src(data)                                      ((0x000F0000&(data))>>16)
#define DITHERING_2ND_SEQ_G_0_get_seq_g_4(data)                                      ((0x000F0000&(data))>>16)
#define DITHERING_2ND_SEQ_G_0_seq_g_3_shift                                          (12)
#define DITHERING_2ND_SEQ_G_0_seq_g_3_mask                                           (0x0000F000)
#define DITHERING_2ND_SEQ_G_0_seq_g_3(data)                                          (0x0000F000&((data)<<12))
#define DITHERING_2ND_SEQ_G_0_seq_g_3_src(data)                                      ((0x0000F000&(data))>>12)
#define DITHERING_2ND_SEQ_G_0_get_seq_g_3(data)                                      ((0x0000F000&(data))>>12)
#define DITHERING_2ND_SEQ_G_0_seq_g_2_shift                                          (8)
#define DITHERING_2ND_SEQ_G_0_seq_g_2_mask                                           (0x00000F00)
#define DITHERING_2ND_SEQ_G_0_seq_g_2(data)                                          (0x00000F00&((data)<<8))
#define DITHERING_2ND_SEQ_G_0_seq_g_2_src(data)                                      ((0x00000F00&(data))>>8)
#define DITHERING_2ND_SEQ_G_0_get_seq_g_2(data)                                      ((0x00000F00&(data))>>8)
#define DITHERING_2ND_SEQ_G_0_seq_g_1_shift                                          (4)
#define DITHERING_2ND_SEQ_G_0_seq_g_1_mask                                           (0x000000F0)
#define DITHERING_2ND_SEQ_G_0_seq_g_1(data)                                          (0x000000F0&((data)<<4))
#define DITHERING_2ND_SEQ_G_0_seq_g_1_src(data)                                      ((0x000000F0&(data))>>4)
#define DITHERING_2ND_SEQ_G_0_get_seq_g_1(data)                                      ((0x000000F0&(data))>>4)
#define DITHERING_2ND_SEQ_G_0_seq_g_0_shift                                          (0)
#define DITHERING_2ND_SEQ_G_0_seq_g_0_mask                                           (0x0000000F)
#define DITHERING_2ND_SEQ_G_0_seq_g_0(data)                                          (0x0000000F&((data)<<0))
#define DITHERING_2ND_SEQ_G_0_seq_g_0_src(data)                                      ((0x0000000F&(data))>>0)
#define DITHERING_2ND_SEQ_G_0_get_seq_g_0(data)                                      ((0x0000000F&(data))>>0)


#define DITHERING_2ND_SEQ_G_1                                                        0x980099c0
#define DITHERING_2ND_SEQ_G_1_reg_addr                                               "0xD80099C0"
#define DITHERING_2ND_SEQ_G_1_reg                                                    0xD80099C0
#define set_DITHERING_2ND_SEQ_G_1_reg(data)   (*((volatile unsigned int*) DITHERING_2ND_SEQ_G_1_reg)=data)
#define get_DITHERING_2ND_SEQ_G_1_reg   (*((volatile unsigned int*) DITHERING_2ND_SEQ_G_1_reg))
#define DITHERING_2ND_SEQ_G_1_inst_adr                                               "0x0070"
#define DITHERING_2ND_SEQ_G_1_inst                                                   0x0070
#define DITHERING_2ND_SEQ_G_1_seq_g_15_shift                                         (28)
#define DITHERING_2ND_SEQ_G_1_seq_g_15_mask                                          (0xF0000000)
#define DITHERING_2ND_SEQ_G_1_seq_g_15(data)                                         (0xF0000000&((data)<<28))
#define DITHERING_2ND_SEQ_G_1_seq_g_15_src(data)                                     ((0xF0000000&(data))>>28)
#define DITHERING_2ND_SEQ_G_1_get_seq_g_15(data)                                     ((0xF0000000&(data))>>28)
#define DITHERING_2ND_SEQ_G_1_seq_g_14_shift                                         (24)
#define DITHERING_2ND_SEQ_G_1_seq_g_14_mask                                          (0x0F000000)
#define DITHERING_2ND_SEQ_G_1_seq_g_14(data)                                         (0x0F000000&((data)<<24))
#define DITHERING_2ND_SEQ_G_1_seq_g_14_src(data)                                     ((0x0F000000&(data))>>24)
#define DITHERING_2ND_SEQ_G_1_get_seq_g_14(data)                                     ((0x0F000000&(data))>>24)
#define DITHERING_2ND_SEQ_G_1_seq_g_13_shift                                         (20)
#define DITHERING_2ND_SEQ_G_1_seq_g_13_mask                                          (0x00F00000)
#define DITHERING_2ND_SEQ_G_1_seq_g_13(data)                                         (0x00F00000&((data)<<20))
#define DITHERING_2ND_SEQ_G_1_seq_g_13_src(data)                                     ((0x00F00000&(data))>>20)
#define DITHERING_2ND_SEQ_G_1_get_seq_g_13(data)                                     ((0x00F00000&(data))>>20)
#define DITHERING_2ND_SEQ_G_1_seq_g_12_shift                                         (16)
#define DITHERING_2ND_SEQ_G_1_seq_g_12_mask                                          (0x000F0000)
#define DITHERING_2ND_SEQ_G_1_seq_g_12(data)                                         (0x000F0000&((data)<<16))
#define DITHERING_2ND_SEQ_G_1_seq_g_12_src(data)                                     ((0x000F0000&(data))>>16)
#define DITHERING_2ND_SEQ_G_1_get_seq_g_12(data)                                     ((0x000F0000&(data))>>16)
#define DITHERING_2ND_SEQ_G_1_seq_g_11_shift                                         (12)
#define DITHERING_2ND_SEQ_G_1_seq_g_11_mask                                          (0x0000F000)
#define DITHERING_2ND_SEQ_G_1_seq_g_11(data)                                         (0x0000F000&((data)<<12))
#define DITHERING_2ND_SEQ_G_1_seq_g_11_src(data)                                     ((0x0000F000&(data))>>12)
#define DITHERING_2ND_SEQ_G_1_get_seq_g_11(data)                                     ((0x0000F000&(data))>>12)
#define DITHERING_2ND_SEQ_G_1_seq_g_10_shift                                         (8)
#define DITHERING_2ND_SEQ_G_1_seq_g_10_mask                                          (0x00000F00)
#define DITHERING_2ND_SEQ_G_1_seq_g_10(data)                                         (0x00000F00&((data)<<8))
#define DITHERING_2ND_SEQ_G_1_seq_g_10_src(data)                                     ((0x00000F00&(data))>>8)
#define DITHERING_2ND_SEQ_G_1_get_seq_g_10(data)                                     ((0x00000F00&(data))>>8)
#define DITHERING_2ND_SEQ_G_1_seq_g_9_shift                                          (4)
#define DITHERING_2ND_SEQ_G_1_seq_g_9_mask                                           (0x000000F0)
#define DITHERING_2ND_SEQ_G_1_seq_g_9(data)                                          (0x000000F0&((data)<<4))
#define DITHERING_2ND_SEQ_G_1_seq_g_9_src(data)                                      ((0x000000F0&(data))>>4)
#define DITHERING_2ND_SEQ_G_1_get_seq_g_9(data)                                      ((0x000000F0&(data))>>4)
#define DITHERING_2ND_SEQ_G_1_seq_g_8_shift                                          (0)
#define DITHERING_2ND_SEQ_G_1_seq_g_8_mask                                           (0x0000000F)
#define DITHERING_2ND_SEQ_G_1_seq_g_8(data)                                          (0x0000000F&((data)<<0))
#define DITHERING_2ND_SEQ_G_1_seq_g_8_src(data)                                      ((0x0000000F&(data))>>0)
#define DITHERING_2ND_SEQ_G_1_get_seq_g_8(data)                                      ((0x0000000F&(data))>>0)


#define DITHERING_2ND_SEQ_G_2                                                        0x980099c4
#define DITHERING_2ND_SEQ_G_2_reg_addr                                               "0xD80099C4"
#define DITHERING_2ND_SEQ_G_2_reg                                                    0xD80099C4
#define set_DITHERING_2ND_SEQ_G_2_reg(data)   (*((volatile unsigned int*) DITHERING_2ND_SEQ_G_2_reg)=data)
#define get_DITHERING_2ND_SEQ_G_2_reg   (*((volatile unsigned int*) DITHERING_2ND_SEQ_G_2_reg))
#define DITHERING_2ND_SEQ_G_2_inst_adr                                               "0x0071"
#define DITHERING_2ND_SEQ_G_2_inst                                                   0x0071
#define DITHERING_2ND_SEQ_G_2_seq_g_23_shift                                         (28)
#define DITHERING_2ND_SEQ_G_2_seq_g_23_mask                                          (0xF0000000)
#define DITHERING_2ND_SEQ_G_2_seq_g_23(data)                                         (0xF0000000&((data)<<28))
#define DITHERING_2ND_SEQ_G_2_seq_g_23_src(data)                                     ((0xF0000000&(data))>>28)
#define DITHERING_2ND_SEQ_G_2_get_seq_g_23(data)                                     ((0xF0000000&(data))>>28)
#define DITHERING_2ND_SEQ_G_2_seq_g_22_shift                                         (24)
#define DITHERING_2ND_SEQ_G_2_seq_g_22_mask                                          (0x0F000000)
#define DITHERING_2ND_SEQ_G_2_seq_g_22(data)                                         (0x0F000000&((data)<<24))
#define DITHERING_2ND_SEQ_G_2_seq_g_22_src(data)                                     ((0x0F000000&(data))>>24)
#define DITHERING_2ND_SEQ_G_2_get_seq_g_22(data)                                     ((0x0F000000&(data))>>24)
#define DITHERING_2ND_SEQ_G_2_seq_g_21_shift                                         (20)
#define DITHERING_2ND_SEQ_G_2_seq_g_21_mask                                          (0x00F00000)
#define DITHERING_2ND_SEQ_G_2_seq_g_21(data)                                         (0x00F00000&((data)<<20))
#define DITHERING_2ND_SEQ_G_2_seq_g_21_src(data)                                     ((0x00F00000&(data))>>20)
#define DITHERING_2ND_SEQ_G_2_get_seq_g_21(data)                                     ((0x00F00000&(data))>>20)
#define DITHERING_2ND_SEQ_G_2_seq_g_20_shift                                         (16)
#define DITHERING_2ND_SEQ_G_2_seq_g_20_mask                                          (0x000F0000)
#define DITHERING_2ND_SEQ_G_2_seq_g_20(data)                                         (0x000F0000&((data)<<16))
#define DITHERING_2ND_SEQ_G_2_seq_g_20_src(data)                                     ((0x000F0000&(data))>>16)
#define DITHERING_2ND_SEQ_G_2_get_seq_g_20(data)                                     ((0x000F0000&(data))>>16)
#define DITHERING_2ND_SEQ_G_2_seq_g_19_shift                                         (12)
#define DITHERING_2ND_SEQ_G_2_seq_g_19_mask                                          (0x0000F000)
#define DITHERING_2ND_SEQ_G_2_seq_g_19(data)                                         (0x0000F000&((data)<<12))
#define DITHERING_2ND_SEQ_G_2_seq_g_19_src(data)                                     ((0x0000F000&(data))>>12)
#define DITHERING_2ND_SEQ_G_2_get_seq_g_19(data)                                     ((0x0000F000&(data))>>12)
#define DITHERING_2ND_SEQ_G_2_seq_g_18_shift                                         (8)
#define DITHERING_2ND_SEQ_G_2_seq_g_18_mask                                          (0x00000F00)
#define DITHERING_2ND_SEQ_G_2_seq_g_18(data)                                         (0x00000F00&((data)<<8))
#define DITHERING_2ND_SEQ_G_2_seq_g_18_src(data)                                     ((0x00000F00&(data))>>8)
#define DITHERING_2ND_SEQ_G_2_get_seq_g_18(data)                                     ((0x00000F00&(data))>>8)
#define DITHERING_2ND_SEQ_G_2_seq_g_17_shift                                         (4)
#define DITHERING_2ND_SEQ_G_2_seq_g_17_mask                                          (0x000000F0)
#define DITHERING_2ND_SEQ_G_2_seq_g_17(data)                                         (0x000000F0&((data)<<4))
#define DITHERING_2ND_SEQ_G_2_seq_g_17_src(data)                                     ((0x000000F0&(data))>>4)
#define DITHERING_2ND_SEQ_G_2_get_seq_g_17(data)                                     ((0x000000F0&(data))>>4)
#define DITHERING_2ND_SEQ_G_2_seq_g_16_shift                                         (0)
#define DITHERING_2ND_SEQ_G_2_seq_g_16_mask                                          (0x0000000F)
#define DITHERING_2ND_SEQ_G_2_seq_g_16(data)                                         (0x0000000F&((data)<<0))
#define DITHERING_2ND_SEQ_G_2_seq_g_16_src(data)                                     ((0x0000000F&(data))>>0)
#define DITHERING_2ND_SEQ_G_2_get_seq_g_16(data)                                     ((0x0000000F&(data))>>0)


#define DITHERING_2ND_SEQ_G_3                                                        0x980099c8
#define DITHERING_2ND_SEQ_G_3_reg_addr                                               "0xD80099C8"
#define DITHERING_2ND_SEQ_G_3_reg                                                    0xD80099C8
#define set_DITHERING_2ND_SEQ_G_3_reg(data)   (*((volatile unsigned int*) DITHERING_2ND_SEQ_G_3_reg)=data)
#define get_DITHERING_2ND_SEQ_G_3_reg   (*((volatile unsigned int*) DITHERING_2ND_SEQ_G_3_reg))
#define DITHERING_2ND_SEQ_G_3_inst_adr                                               "0x0072"
#define DITHERING_2ND_SEQ_G_3_inst                                                   0x0072
#define DITHERING_2ND_SEQ_G_3_seq_g_31_shift                                         (28)
#define DITHERING_2ND_SEQ_G_3_seq_g_31_mask                                          (0xF0000000)
#define DITHERING_2ND_SEQ_G_3_seq_g_31(data)                                         (0xF0000000&((data)<<28))
#define DITHERING_2ND_SEQ_G_3_seq_g_31_src(data)                                     ((0xF0000000&(data))>>28)
#define DITHERING_2ND_SEQ_G_3_get_seq_g_31(data)                                     ((0xF0000000&(data))>>28)
#define DITHERING_2ND_SEQ_G_3_seq_g_30_shift                                         (24)
#define DITHERING_2ND_SEQ_G_3_seq_g_30_mask                                          (0x0F000000)
#define DITHERING_2ND_SEQ_G_3_seq_g_30(data)                                         (0x0F000000&((data)<<24))
#define DITHERING_2ND_SEQ_G_3_seq_g_30_src(data)                                     ((0x0F000000&(data))>>24)
#define DITHERING_2ND_SEQ_G_3_get_seq_g_30(data)                                     ((0x0F000000&(data))>>24)
#define DITHERING_2ND_SEQ_G_3_seq_g_29_shift                                         (20)
#define DITHERING_2ND_SEQ_G_3_seq_g_29_mask                                          (0x00F00000)
#define DITHERING_2ND_SEQ_G_3_seq_g_29(data)                                         (0x00F00000&((data)<<20))
#define DITHERING_2ND_SEQ_G_3_seq_g_29_src(data)                                     ((0x00F00000&(data))>>20)
#define DITHERING_2ND_SEQ_G_3_get_seq_g_29(data)                                     ((0x00F00000&(data))>>20)
#define DITHERING_2ND_SEQ_G_3_seq_g_28_shift                                         (16)
#define DITHERING_2ND_SEQ_G_3_seq_g_28_mask                                          (0x000F0000)
#define DITHERING_2ND_SEQ_G_3_seq_g_28(data)                                         (0x000F0000&((data)<<16))
#define DITHERING_2ND_SEQ_G_3_seq_g_28_src(data)                                     ((0x000F0000&(data))>>16)
#define DITHERING_2ND_SEQ_G_3_get_seq_g_28(data)                                     ((0x000F0000&(data))>>16)
#define DITHERING_2ND_SEQ_G_3_seq_g_27_shift                                         (12)
#define DITHERING_2ND_SEQ_G_3_seq_g_27_mask                                          (0x0000F000)
#define DITHERING_2ND_SEQ_G_3_seq_g_27(data)                                         (0x0000F000&((data)<<12))
#define DITHERING_2ND_SEQ_G_3_seq_g_27_src(data)                                     ((0x0000F000&(data))>>12)
#define DITHERING_2ND_SEQ_G_3_get_seq_g_27(data)                                     ((0x0000F000&(data))>>12)
#define DITHERING_2ND_SEQ_G_3_seq_g_26_shift                                         (8)
#define DITHERING_2ND_SEQ_G_3_seq_g_26_mask                                          (0x00000F00)
#define DITHERING_2ND_SEQ_G_3_seq_g_26(data)                                         (0x00000F00&((data)<<8))
#define DITHERING_2ND_SEQ_G_3_seq_g_26_src(data)                                     ((0x00000F00&(data))>>8)
#define DITHERING_2ND_SEQ_G_3_get_seq_g_26(data)                                     ((0x00000F00&(data))>>8)
#define DITHERING_2ND_SEQ_G_3_seq_g_25_shift                                         (4)
#define DITHERING_2ND_SEQ_G_3_seq_g_25_mask                                          (0x000000F0)
#define DITHERING_2ND_SEQ_G_3_seq_g_25(data)                                         (0x000000F0&((data)<<4))
#define DITHERING_2ND_SEQ_G_3_seq_g_25_src(data)                                     ((0x000000F0&(data))>>4)
#define DITHERING_2ND_SEQ_G_3_get_seq_g_25(data)                                     ((0x000000F0&(data))>>4)
#define DITHERING_2ND_SEQ_G_3_seq_g_24_shift                                         (0)
#define DITHERING_2ND_SEQ_G_3_seq_g_24_mask                                          (0x0000000F)
#define DITHERING_2ND_SEQ_G_3_seq_g_24(data)                                         (0x0000000F&((data)<<0))
#define DITHERING_2ND_SEQ_G_3_seq_g_24_src(data)                                     ((0x0000000F&(data))>>0)
#define DITHERING_2ND_SEQ_G_3_get_seq_g_24(data)                                     ((0x0000000F&(data))>>0)


#define DITHERING_2ND_SEQ_B_0                                                        0x980099cc
#define DITHERING_2ND_SEQ_B_0_reg_addr                                               "0xD80099CC"
#define DITHERING_2ND_SEQ_B_0_reg                                                    0xD80099CC
#define set_DITHERING_2ND_SEQ_B_0_reg(data)   (*((volatile unsigned int*) DITHERING_2ND_SEQ_B_0_reg)=data)
#define get_DITHERING_2ND_SEQ_B_0_reg   (*((volatile unsigned int*) DITHERING_2ND_SEQ_B_0_reg))
#define DITHERING_2ND_SEQ_B_0_inst_adr                                               "0x0073"
#define DITHERING_2ND_SEQ_B_0_inst                                                   0x0073
#define DITHERING_2ND_SEQ_B_0_seq_b_7_shift                                          (28)
#define DITHERING_2ND_SEQ_B_0_seq_b_7_mask                                           (0xF0000000)
#define DITHERING_2ND_SEQ_B_0_seq_b_7(data)                                          (0xF0000000&((data)<<28))
#define DITHERING_2ND_SEQ_B_0_seq_b_7_src(data)                                      ((0xF0000000&(data))>>28)
#define DITHERING_2ND_SEQ_B_0_get_seq_b_7(data)                                      ((0xF0000000&(data))>>28)
#define DITHERING_2ND_SEQ_B_0_seq_b_6_shift                                          (24)
#define DITHERING_2ND_SEQ_B_0_seq_b_6_mask                                           (0x0F000000)
#define DITHERING_2ND_SEQ_B_0_seq_b_6(data)                                          (0x0F000000&((data)<<24))
#define DITHERING_2ND_SEQ_B_0_seq_b_6_src(data)                                      ((0x0F000000&(data))>>24)
#define DITHERING_2ND_SEQ_B_0_get_seq_b_6(data)                                      ((0x0F000000&(data))>>24)
#define DITHERING_2ND_SEQ_B_0_seq_b_5_shift                                          (20)
#define DITHERING_2ND_SEQ_B_0_seq_b_5_mask                                           (0x00F00000)
#define DITHERING_2ND_SEQ_B_0_seq_b_5(data)                                          (0x00F00000&((data)<<20))
#define DITHERING_2ND_SEQ_B_0_seq_b_5_src(data)                                      ((0x00F00000&(data))>>20)
#define DITHERING_2ND_SEQ_B_0_get_seq_b_5(data)                                      ((0x00F00000&(data))>>20)
#define DITHERING_2ND_SEQ_B_0_seq_b_4_shift                                          (16)
#define DITHERING_2ND_SEQ_B_0_seq_b_4_mask                                           (0x000F0000)
#define DITHERING_2ND_SEQ_B_0_seq_b_4(data)                                          (0x000F0000&((data)<<16))
#define DITHERING_2ND_SEQ_B_0_seq_b_4_src(data)                                      ((0x000F0000&(data))>>16)
#define DITHERING_2ND_SEQ_B_0_get_seq_b_4(data)                                      ((0x000F0000&(data))>>16)
#define DITHERING_2ND_SEQ_B_0_seq_b_3_shift                                          (12)
#define DITHERING_2ND_SEQ_B_0_seq_b_3_mask                                           (0x0000F000)
#define DITHERING_2ND_SEQ_B_0_seq_b_3(data)                                          (0x0000F000&((data)<<12))
#define DITHERING_2ND_SEQ_B_0_seq_b_3_src(data)                                      ((0x0000F000&(data))>>12)
#define DITHERING_2ND_SEQ_B_0_get_seq_b_3(data)                                      ((0x0000F000&(data))>>12)
#define DITHERING_2ND_SEQ_B_0_seq_b_2_shift                                          (8)
#define DITHERING_2ND_SEQ_B_0_seq_b_2_mask                                           (0x00000F00)
#define DITHERING_2ND_SEQ_B_0_seq_b_2(data)                                          (0x00000F00&((data)<<8))
#define DITHERING_2ND_SEQ_B_0_seq_b_2_src(data)                                      ((0x00000F00&(data))>>8)
#define DITHERING_2ND_SEQ_B_0_get_seq_b_2(data)                                      ((0x00000F00&(data))>>8)
#define DITHERING_2ND_SEQ_B_0_seq_b_1_shift                                          (4)
#define DITHERING_2ND_SEQ_B_0_seq_b_1_mask                                           (0x000000F0)
#define DITHERING_2ND_SEQ_B_0_seq_b_1(data)                                          (0x000000F0&((data)<<4))
#define DITHERING_2ND_SEQ_B_0_seq_b_1_src(data)                                      ((0x000000F0&(data))>>4)
#define DITHERING_2ND_SEQ_B_0_get_seq_b_1(data)                                      ((0x000000F0&(data))>>4)
#define DITHERING_2ND_SEQ_B_0_seq_b_0_shift                                          (0)
#define DITHERING_2ND_SEQ_B_0_seq_b_0_mask                                           (0x0000000F)
#define DITHERING_2ND_SEQ_B_0_seq_b_0(data)                                          (0x0000000F&((data)<<0))
#define DITHERING_2ND_SEQ_B_0_seq_b_0_src(data)                                      ((0x0000000F&(data))>>0)
#define DITHERING_2ND_SEQ_B_0_get_seq_b_0(data)                                      ((0x0000000F&(data))>>0)


#define DITHERING_2ND_SEQ_B_1                                                        0x980099d0
#define DITHERING_2ND_SEQ_B_1_reg_addr                                               "0xD80099D0"
#define DITHERING_2ND_SEQ_B_1_reg                                                    0xD80099D0
#define set_DITHERING_2ND_SEQ_B_1_reg(data)   (*((volatile unsigned int*) DITHERING_2ND_SEQ_B_1_reg)=data)
#define get_DITHERING_2ND_SEQ_B_1_reg   (*((volatile unsigned int*) DITHERING_2ND_SEQ_B_1_reg))
#define DITHERING_2ND_SEQ_B_1_inst_adr                                               "0x0074"
#define DITHERING_2ND_SEQ_B_1_inst                                                   0x0074
#define DITHERING_2ND_SEQ_B_1_seq_b_15_shift                                         (28)
#define DITHERING_2ND_SEQ_B_1_seq_b_15_mask                                          (0xF0000000)
#define DITHERING_2ND_SEQ_B_1_seq_b_15(data)                                         (0xF0000000&((data)<<28))
#define DITHERING_2ND_SEQ_B_1_seq_b_15_src(data)                                     ((0xF0000000&(data))>>28)
#define DITHERING_2ND_SEQ_B_1_get_seq_b_15(data)                                     ((0xF0000000&(data))>>28)
#define DITHERING_2ND_SEQ_B_1_seq_b_14_shift                                         (24)
#define DITHERING_2ND_SEQ_B_1_seq_b_14_mask                                          (0x0F000000)
#define DITHERING_2ND_SEQ_B_1_seq_b_14(data)                                         (0x0F000000&((data)<<24))
#define DITHERING_2ND_SEQ_B_1_seq_b_14_src(data)                                     ((0x0F000000&(data))>>24)
#define DITHERING_2ND_SEQ_B_1_get_seq_b_14(data)                                     ((0x0F000000&(data))>>24)
#define DITHERING_2ND_SEQ_B_1_seq_b_13_shift                                         (20)
#define DITHERING_2ND_SEQ_B_1_seq_b_13_mask                                          (0x00F00000)
#define DITHERING_2ND_SEQ_B_1_seq_b_13(data)                                         (0x00F00000&((data)<<20))
#define DITHERING_2ND_SEQ_B_1_seq_b_13_src(data)                                     ((0x00F00000&(data))>>20)
#define DITHERING_2ND_SEQ_B_1_get_seq_b_13(data)                                     ((0x00F00000&(data))>>20)
#define DITHERING_2ND_SEQ_B_1_seq_b_12_shift                                         (16)
#define DITHERING_2ND_SEQ_B_1_seq_b_12_mask                                          (0x000F0000)
#define DITHERING_2ND_SEQ_B_1_seq_b_12(data)                                         (0x000F0000&((data)<<16))
#define DITHERING_2ND_SEQ_B_1_seq_b_12_src(data)                                     ((0x000F0000&(data))>>16)
#define DITHERING_2ND_SEQ_B_1_get_seq_b_12(data)                                     ((0x000F0000&(data))>>16)
#define DITHERING_2ND_SEQ_B_1_seq_b_11_shift                                         (12)
#define DITHERING_2ND_SEQ_B_1_seq_b_11_mask                                          (0x0000F000)
#define DITHERING_2ND_SEQ_B_1_seq_b_11(data)                                         (0x0000F000&((data)<<12))
#define DITHERING_2ND_SEQ_B_1_seq_b_11_src(data)                                     ((0x0000F000&(data))>>12)
#define DITHERING_2ND_SEQ_B_1_get_seq_b_11(data)                                     ((0x0000F000&(data))>>12)
#define DITHERING_2ND_SEQ_B_1_seq_b_10_shift                                         (8)
#define DITHERING_2ND_SEQ_B_1_seq_b_10_mask                                          (0x00000F00)
#define DITHERING_2ND_SEQ_B_1_seq_b_10(data)                                         (0x00000F00&((data)<<8))
#define DITHERING_2ND_SEQ_B_1_seq_b_10_src(data)                                     ((0x00000F00&(data))>>8)
#define DITHERING_2ND_SEQ_B_1_get_seq_b_10(data)                                     ((0x00000F00&(data))>>8)
#define DITHERING_2ND_SEQ_B_1_seq_b_9_shift                                          (4)
#define DITHERING_2ND_SEQ_B_1_seq_b_9_mask                                           (0x000000F0)
#define DITHERING_2ND_SEQ_B_1_seq_b_9(data)                                          (0x000000F0&((data)<<4))
#define DITHERING_2ND_SEQ_B_1_seq_b_9_src(data)                                      ((0x000000F0&(data))>>4)
#define DITHERING_2ND_SEQ_B_1_get_seq_b_9(data)                                      ((0x000000F0&(data))>>4)
#define DITHERING_2ND_SEQ_B_1_seq_b_8_shift                                          (0)
#define DITHERING_2ND_SEQ_B_1_seq_b_8_mask                                           (0x0000000F)
#define DITHERING_2ND_SEQ_B_1_seq_b_8(data)                                          (0x0000000F&((data)<<0))
#define DITHERING_2ND_SEQ_B_1_seq_b_8_src(data)                                      ((0x0000000F&(data))>>0)
#define DITHERING_2ND_SEQ_B_1_get_seq_b_8(data)                                      ((0x0000000F&(data))>>0)


#define DITHERING_2ND_SEQ_B_2                                                        0x980099d4
#define DITHERING_2ND_SEQ_B_2_reg_addr                                               "0xD80099D4"
#define DITHERING_2ND_SEQ_B_2_reg                                                    0xD80099D4
#define set_DITHERING_2ND_SEQ_B_2_reg(data)   (*((volatile unsigned int*) DITHERING_2ND_SEQ_B_2_reg)=data)
#define get_DITHERING_2ND_SEQ_B_2_reg   (*((volatile unsigned int*) DITHERING_2ND_SEQ_B_2_reg))
#define DITHERING_2ND_SEQ_B_2_inst_adr                                               "0x0075"
#define DITHERING_2ND_SEQ_B_2_inst                                                   0x0075
#define DITHERING_2ND_SEQ_B_2_seq_b_23_shift                                         (28)
#define DITHERING_2ND_SEQ_B_2_seq_b_23_mask                                          (0xF0000000)
#define DITHERING_2ND_SEQ_B_2_seq_b_23(data)                                         (0xF0000000&((data)<<28))
#define DITHERING_2ND_SEQ_B_2_seq_b_23_src(data)                                     ((0xF0000000&(data))>>28)
#define DITHERING_2ND_SEQ_B_2_get_seq_b_23(data)                                     ((0xF0000000&(data))>>28)
#define DITHERING_2ND_SEQ_B_2_seq_b_22_shift                                         (24)
#define DITHERING_2ND_SEQ_B_2_seq_b_22_mask                                          (0x0F000000)
#define DITHERING_2ND_SEQ_B_2_seq_b_22(data)                                         (0x0F000000&((data)<<24))
#define DITHERING_2ND_SEQ_B_2_seq_b_22_src(data)                                     ((0x0F000000&(data))>>24)
#define DITHERING_2ND_SEQ_B_2_get_seq_b_22(data)                                     ((0x0F000000&(data))>>24)
#define DITHERING_2ND_SEQ_B_2_seq_b_21_shift                                         (20)
#define DITHERING_2ND_SEQ_B_2_seq_b_21_mask                                          (0x00F00000)
#define DITHERING_2ND_SEQ_B_2_seq_b_21(data)                                         (0x00F00000&((data)<<20))
#define DITHERING_2ND_SEQ_B_2_seq_b_21_src(data)                                     ((0x00F00000&(data))>>20)
#define DITHERING_2ND_SEQ_B_2_get_seq_b_21(data)                                     ((0x00F00000&(data))>>20)
#define DITHERING_2ND_SEQ_B_2_seq_b_20_shift                                         (16)
#define DITHERING_2ND_SEQ_B_2_seq_b_20_mask                                          (0x000F0000)
#define DITHERING_2ND_SEQ_B_2_seq_b_20(data)                                         (0x000F0000&((data)<<16))
#define DITHERING_2ND_SEQ_B_2_seq_b_20_src(data)                                     ((0x000F0000&(data))>>16)
#define DITHERING_2ND_SEQ_B_2_get_seq_b_20(data)                                     ((0x000F0000&(data))>>16)
#define DITHERING_2ND_SEQ_B_2_seq_b_19_shift                                         (12)
#define DITHERING_2ND_SEQ_B_2_seq_b_19_mask                                          (0x0000F000)
#define DITHERING_2ND_SEQ_B_2_seq_b_19(data)                                         (0x0000F000&((data)<<12))
#define DITHERING_2ND_SEQ_B_2_seq_b_19_src(data)                                     ((0x0000F000&(data))>>12)
#define DITHERING_2ND_SEQ_B_2_get_seq_b_19(data)                                     ((0x0000F000&(data))>>12)
#define DITHERING_2ND_SEQ_B_2_seq_b_18_shift                                         (8)
#define DITHERING_2ND_SEQ_B_2_seq_b_18_mask                                          (0x00000F00)
#define DITHERING_2ND_SEQ_B_2_seq_b_18(data)                                         (0x00000F00&((data)<<8))
#define DITHERING_2ND_SEQ_B_2_seq_b_18_src(data)                                     ((0x00000F00&(data))>>8)
#define DITHERING_2ND_SEQ_B_2_get_seq_b_18(data)                                     ((0x00000F00&(data))>>8)
#define DITHERING_2ND_SEQ_B_2_seq_b_17_shift                                         (4)
#define DITHERING_2ND_SEQ_B_2_seq_b_17_mask                                          (0x000000F0)
#define DITHERING_2ND_SEQ_B_2_seq_b_17(data)                                         (0x000000F0&((data)<<4))
#define DITHERING_2ND_SEQ_B_2_seq_b_17_src(data)                                     ((0x000000F0&(data))>>4)
#define DITHERING_2ND_SEQ_B_2_get_seq_b_17(data)                                     ((0x000000F0&(data))>>4)
#define DITHERING_2ND_SEQ_B_2_seq_b_16_shift                                         (0)
#define DITHERING_2ND_SEQ_B_2_seq_b_16_mask                                          (0x0000000F)
#define DITHERING_2ND_SEQ_B_2_seq_b_16(data)                                         (0x0000000F&((data)<<0))
#define DITHERING_2ND_SEQ_B_2_seq_b_16_src(data)                                     ((0x0000000F&(data))>>0)
#define DITHERING_2ND_SEQ_B_2_get_seq_b_16(data)                                     ((0x0000000F&(data))>>0)


#define DITHERING_2ND_SEQ_B_3                                                        0x980099d8
#define DITHERING_2ND_SEQ_B_3_reg_addr                                               "0xD80099D8"
#define DITHERING_2ND_SEQ_B_3_reg                                                    0xD80099D8
#define set_DITHERING_2ND_SEQ_B_3_reg(data)   (*((volatile unsigned int*) DITHERING_2ND_SEQ_B_3_reg)=data)
#define get_DITHERING_2ND_SEQ_B_3_reg   (*((volatile unsigned int*) DITHERING_2ND_SEQ_B_3_reg))
#define DITHERING_2ND_SEQ_B_3_inst_adr                                               "0x0076"
#define DITHERING_2ND_SEQ_B_3_inst                                                   0x0076
#define DITHERING_2ND_SEQ_B_3_seq_b_31_shift                                         (28)
#define DITHERING_2ND_SEQ_B_3_seq_b_31_mask                                          (0xF0000000)
#define DITHERING_2ND_SEQ_B_3_seq_b_31(data)                                         (0xF0000000&((data)<<28))
#define DITHERING_2ND_SEQ_B_3_seq_b_31_src(data)                                     ((0xF0000000&(data))>>28)
#define DITHERING_2ND_SEQ_B_3_get_seq_b_31(data)                                     ((0xF0000000&(data))>>28)
#define DITHERING_2ND_SEQ_B_3_seq_b_30_shift                                         (24)
#define DITHERING_2ND_SEQ_B_3_seq_b_30_mask                                          (0x0F000000)
#define DITHERING_2ND_SEQ_B_3_seq_b_30(data)                                         (0x0F000000&((data)<<24))
#define DITHERING_2ND_SEQ_B_3_seq_b_30_src(data)                                     ((0x0F000000&(data))>>24)
#define DITHERING_2ND_SEQ_B_3_get_seq_b_30(data)                                     ((0x0F000000&(data))>>24)
#define DITHERING_2ND_SEQ_B_3_seq_b_29_shift                                         (20)
#define DITHERING_2ND_SEQ_B_3_seq_b_29_mask                                          (0x00F00000)
#define DITHERING_2ND_SEQ_B_3_seq_b_29(data)                                         (0x00F00000&((data)<<20))
#define DITHERING_2ND_SEQ_B_3_seq_b_29_src(data)                                     ((0x00F00000&(data))>>20)
#define DITHERING_2ND_SEQ_B_3_get_seq_b_29(data)                                     ((0x00F00000&(data))>>20)
#define DITHERING_2ND_SEQ_B_3_seq_b_28_shift                                         (16)
#define DITHERING_2ND_SEQ_B_3_seq_b_28_mask                                          (0x000F0000)
#define DITHERING_2ND_SEQ_B_3_seq_b_28(data)                                         (0x000F0000&((data)<<16))
#define DITHERING_2ND_SEQ_B_3_seq_b_28_src(data)                                     ((0x000F0000&(data))>>16)
#define DITHERING_2ND_SEQ_B_3_get_seq_b_28(data)                                     ((0x000F0000&(data))>>16)
#define DITHERING_2ND_SEQ_B_3_seq_b_27_shift                                         (12)
#define DITHERING_2ND_SEQ_B_3_seq_b_27_mask                                          (0x0000F000)
#define DITHERING_2ND_SEQ_B_3_seq_b_27(data)                                         (0x0000F000&((data)<<12))
#define DITHERING_2ND_SEQ_B_3_seq_b_27_src(data)                                     ((0x0000F000&(data))>>12)
#define DITHERING_2ND_SEQ_B_3_get_seq_b_27(data)                                     ((0x0000F000&(data))>>12)
#define DITHERING_2ND_SEQ_B_3_seq_b_26_shift                                         (8)
#define DITHERING_2ND_SEQ_B_3_seq_b_26_mask                                          (0x00000F00)
#define DITHERING_2ND_SEQ_B_3_seq_b_26(data)                                         (0x00000F00&((data)<<8))
#define DITHERING_2ND_SEQ_B_3_seq_b_26_src(data)                                     ((0x00000F00&(data))>>8)
#define DITHERING_2ND_SEQ_B_3_get_seq_b_26(data)                                     ((0x00000F00&(data))>>8)
#define DITHERING_2ND_SEQ_B_3_seq_b_25_shift                                         (4)
#define DITHERING_2ND_SEQ_B_3_seq_b_25_mask                                          (0x000000F0)
#define DITHERING_2ND_SEQ_B_3_seq_b_25(data)                                         (0x000000F0&((data)<<4))
#define DITHERING_2ND_SEQ_B_3_seq_b_25_src(data)                                     ((0x000000F0&(data))>>4)
#define DITHERING_2ND_SEQ_B_3_get_seq_b_25(data)                                     ((0x000000F0&(data))>>4)
#define DITHERING_2ND_SEQ_B_3_seq_b_24_shift                                         (0)
#define DITHERING_2ND_SEQ_B_3_seq_b_24_mask                                          (0x0000000F)
#define DITHERING_2ND_SEQ_B_3_seq_b_24(data)                                         (0x0000000F&((data)<<0))
#define DITHERING_2ND_SEQ_B_3_seq_b_24_src(data)                                     ((0x0000000F&(data))>>0)
#define DITHERING_2ND_SEQ_B_3_get_seq_b_24(data)                                     ((0x0000000F&(data))>>0)


#endif
