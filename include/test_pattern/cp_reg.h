/**************************************************************
// Spec Version                  : 2.1
// Parser Version                : DVR_Parser_6.11(120105)
// CModelGen Version             : 5.1 2012.01.05
// Naming Rule                   :  Register_Name
// Naming Rule                   : Module_Register_Name_reg
// Parse Option                  : Only Parse _op2
// Parse Address Region          : All Address Region 
// Decode bit number             : 12 bits
// Firmware Header Generate Date : 2015/6/4 21:40:47
***************************************************************/


#ifndef _CP_REG_H_INCLUDED_
#define _CP_REG_H_INCLUDED_
#ifdef  _CP_USE_STRUCT
typedef struct 
{
unsigned int     data:32;
}CP_REG_KEY;

typedef struct 
{
unsigned int     data:32;
}CP_REG_DATAIN;

typedef struct 
{
unsigned int     data:32;
}CP_REG_DATAOUT;

typedef struct 
{
unsigned int     data:32;
}CP_REG_IV;

typedef struct 
{
unsigned int     reserved_0:14;
unsigned int     write_enable3:1;
unsigned int     mode:4;
unsigned int     reserved_1:7;
unsigned int     write_enable2:1;
unsigned int     cbc:1;
unsigned int     write_enable1:1;
unsigned int     reg_first:1;
unsigned int     write_enable0:1;
unsigned int     reg_ende:1;
}CP_REG_SET;

typedef struct 
{
unsigned int     reserved_0:18;
unsigned int     dataout_byte_swap:1;
unsigned int     datain_byte_swap:1;
unsigned int     iv_byte_swap:1;
unsigned int     key_byte_swap:1;
unsigned int     des_key_order:1;
unsigned int     reserved_1:1;
unsigned int     key_mode:2;
unsigned int     iv_mode:2;
unsigned int     input_mode:2;
unsigned int     output_mode:2;
}CP_REG_SET1;

typedef struct 
{
unsigned int     reserved_0:1;
unsigned int     output_entry:7;
unsigned int     reserved_1:1;
unsigned int     input_entry:7;
unsigned int     reserved_2:1;
unsigned int     key_entry:7;
unsigned int     reserved_3:1;
unsigned int     iv_entry:7;
}CP_REG_SET2;

typedef struct 
{
unsigned int     data:32;
}CP_REG_KEY_1;

typedef struct 
{
unsigned int     reg1:16;
unsigned int     reg0:16;
}CP_SCTCH;

typedef struct 
{
unsigned int     data:32;
}CP_NF_KEY;

typedef struct 
{
unsigned int     data:32;
}CP_NF_INI_KEY;

typedef struct 
{
unsigned int     reserved_0:17;
unsigned int     otp_sel:2;
unsigned int     aes_mode:2;
unsigned int     bcm:2;
unsigned int     cw_entry:7;
unsigned int     sel:2;
}CP_NF_SET;

typedef struct 
{
unsigned int     data:32;
}CP_NF_KEY_1;

typedef struct 
{
unsigned int     data:32;
}CP_MD_KEY;

typedef struct 
{
unsigned int     data:32;
}CP_MD_INI_KEY;

typedef struct 
{
unsigned int     reserved_0:17;
unsigned int     otp_sel:2;
unsigned int     aes_mode:2;
unsigned int     bcm:2;
unsigned int     cw_entry:7;
unsigned int     sel:2;
}CP_MD_SET;

typedef struct 
{
unsigned int     data:32;
}CP_MD_KEY_1;

typedef struct 
{
unsigned int     data:32;
}K_CP_REG_KEY;

typedef struct 
{
unsigned int     data:32;
}K_CP_REG_DATAIN;

typedef struct 
{
unsigned int     data:32;
}K_CP_REG_DATAOUT;

typedef struct 
{
unsigned int     data:32;
}K_CP_REG_IV;

typedef struct 
{
unsigned int     reserved_0:14;
unsigned int     write_enable3:1;
unsigned int     mode:4;
unsigned int     reserved_1:7;
unsigned int     write_enable2:1;
unsigned int     cbc:1;
unsigned int     write_enable1:1;
unsigned int     reg_first:1;
unsigned int     write_enable0:1;
unsigned int     reg_ende:1;
}K_CP_REG_SET;

typedef struct 
{
unsigned int     reserved_0:18;
unsigned int     dataout_byte_swap:1;
unsigned int     datain_byte_swap:1;
unsigned int     iv_byte_swap:1;
unsigned int     key_byte_swap:1;
unsigned int     des_key_order:1;
unsigned int     key_mode:3;
unsigned int     iv_mode:2;
unsigned int     input_mode:2;
unsigned int     output_mode:2;
}K_CP_REG_SET1;

typedef struct 
{
unsigned int     reserved_0:1;
unsigned int     output_entry:7;
unsigned int     reserved_1:1;
unsigned int     input_entry:7;
unsigned int     reserved_2:1;
unsigned int     key_entry:7;
unsigned int     reserved_3:1;
unsigned int     iv_entry:7;
}K_CP_REG_SET2;

typedef struct 
{
unsigned int     data:32;
}K_CP_REG_KEY_1;

typedef struct 
{
unsigned int     reserved_0:21;
unsigned int     dbg_sel1:5;
unsigned int     dbg_sel0:5;
unsigned int     dbg_en:1;
}CP_DBG;

#endif

#define CP_REG_KEY_0                                                                 0x98015034
#define CP_REG_KEY_1                                                                 0x98015038
#define CP_REG_KEY_2                                                                 0x9801503C
#define CP_REG_KEY_3                                                                 0x98015040
#define CP_REG_KEY_0_reg_addr                                                        "0xD8015034"
#define CP_REG_KEY_1_reg_addr                                                        "0xD8015038"
#define CP_REG_KEY_2_reg_addr                                                        "0xD801503C"
#define CP_REG_KEY_3_reg_addr                                                        "0xD8015040"
#define CP_REG_KEY_0_reg                                                             0xD8015034
#define CP_REG_KEY_1_reg                                                             0xD8015038
#define CP_REG_KEY_2_reg                                                             0xD801503C
#define CP_REG_KEY_3_reg                                                             0xD8015040
#define set_CP_REG_KEY_0_reg(data)   (*((volatile unsigned int*) CP_REG_KEY_0_reg)=data)
#define set_CP_REG_KEY_1_reg(data)   (*((volatile unsigned int*) CP_REG_KEY_1_reg)=data)
#define set_CP_REG_KEY_2_reg(data)   (*((volatile unsigned int*) CP_REG_KEY_2_reg)=data)
#define set_CP_REG_KEY_3_reg(data)   (*((volatile unsigned int*) CP_REG_KEY_3_reg)=data)
#define get_CP_REG_KEY_0_reg   (*((volatile unsigned int*) CP_REG_KEY_0_reg))
#define get_CP_REG_KEY_1_reg   (*((volatile unsigned int*) CP_REG_KEY_1_reg))
#define get_CP_REG_KEY_2_reg   (*((volatile unsigned int*) CP_REG_KEY_2_reg))
#define get_CP_REG_KEY_3_reg   (*((volatile unsigned int*) CP_REG_KEY_3_reg))
#define CP_REG_KEY_0_inst_adr                                                        "0x000D"
#define CP_REG_KEY_1_inst_adr                                                        "0x000E"
#define CP_REG_KEY_2_inst_adr                                                        "0x000F"
#define CP_REG_KEY_3_inst_adr                                                        "0x0010"
#define CP_REG_KEY_0_inst                                                            0x000D
#define CP_REG_KEY_1_inst                                                            0x000E
#define CP_REG_KEY_2_inst                                                            0x000F
#define CP_REG_KEY_3_inst                                                            0x0010
#define CP_REG_KEY_data_shift                                                        (0)
#define CP_REG_KEY_data_mask                                                         (0xFFFFFFFF)
#define CP_REG_KEY_data(data)                                                        (0xFFFFFFFF&((data)<<0))
#define CP_REG_KEY_data_src(data)                                                    ((0xFFFFFFFF&(data))>>0)
#define CP_REG_KEY_get_data(data)                                                    ((0xFFFFFFFF&(data))>>0)


#define CP_REG_DATAIN_0                                                              0x98015044
#define CP_REG_DATAIN_1                                                              0x98015048
#define CP_REG_DATAIN_2                                                              0x9801504C
#define CP_REG_DATAIN_3                                                              0x98015050
#define CP_REG_DATAIN_0_reg_addr                                                     "0xD8015044"
#define CP_REG_DATAIN_1_reg_addr                                                     "0xD8015048"
#define CP_REG_DATAIN_2_reg_addr                                                     "0xD801504C"
#define CP_REG_DATAIN_3_reg_addr                                                     "0xD8015050"
#define CP_REG_DATAIN_0_reg                                                          0xD8015044
#define CP_REG_DATAIN_1_reg                                                          0xD8015048
#define CP_REG_DATAIN_2_reg                                                          0xD801504C
#define CP_REG_DATAIN_3_reg                                                          0xD8015050
#define set_CP_REG_DATAIN_0_reg(data)   (*((volatile unsigned int*) CP_REG_DATAIN_0_reg)=data)
#define set_CP_REG_DATAIN_1_reg(data)   (*((volatile unsigned int*) CP_REG_DATAIN_1_reg)=data)
#define set_CP_REG_DATAIN_2_reg(data)   (*((volatile unsigned int*) CP_REG_DATAIN_2_reg)=data)
#define set_CP_REG_DATAIN_3_reg(data)   (*((volatile unsigned int*) CP_REG_DATAIN_3_reg)=data)
#define get_CP_REG_DATAIN_0_reg   (*((volatile unsigned int*) CP_REG_DATAIN_0_reg))
#define get_CP_REG_DATAIN_1_reg   (*((volatile unsigned int*) CP_REG_DATAIN_1_reg))
#define get_CP_REG_DATAIN_2_reg   (*((volatile unsigned int*) CP_REG_DATAIN_2_reg))
#define get_CP_REG_DATAIN_3_reg   (*((volatile unsigned int*) CP_REG_DATAIN_3_reg))
#define CP_REG_DATAIN_0_inst_adr                                                     "0x0011"
#define CP_REG_DATAIN_1_inst_adr                                                     "0x0012"
#define CP_REG_DATAIN_2_inst_adr                                                     "0x0013"
#define CP_REG_DATAIN_3_inst_adr                                                     "0x0014"
#define CP_REG_DATAIN_0_inst                                                         0x0011
#define CP_REG_DATAIN_1_inst                                                         0x0012
#define CP_REG_DATAIN_2_inst                                                         0x0013
#define CP_REG_DATAIN_3_inst                                                         0x0014
#define CP_REG_DATAIN_data_shift                                                     (0)
#define CP_REG_DATAIN_data_mask                                                      (0xFFFFFFFF)
#define CP_REG_DATAIN_data(data)                                                     (0xFFFFFFFF&((data)<<0))
#define CP_REG_DATAIN_data_src(data)                                                 ((0xFFFFFFFF&(data))>>0)
#define CP_REG_DATAIN_get_data(data)                                                 ((0xFFFFFFFF&(data))>>0)


#define CP_REG_DATAOUT_0                                                             0x98015054
#define CP_REG_DATAOUT_1                                                             0x98015058
#define CP_REG_DATAOUT_2                                                             0x9801505C
#define CP_REG_DATAOUT_3                                                             0x98015060
#define CP_REG_DATAOUT_0_reg_addr                                                    "0xD8015054"
#define CP_REG_DATAOUT_1_reg_addr                                                    "0xD8015058"
#define CP_REG_DATAOUT_2_reg_addr                                                    "0xD801505C"
#define CP_REG_DATAOUT_3_reg_addr                                                    "0xD8015060"
#define CP_REG_DATAOUT_0_reg                                                         0xD8015054
#define CP_REG_DATAOUT_1_reg                                                         0xD8015058
#define CP_REG_DATAOUT_2_reg                                                         0xD801505C
#define CP_REG_DATAOUT_3_reg                                                         0xD8015060
#define set_CP_REG_DATAOUT_0_reg(data)   (*((volatile unsigned int*) CP_REG_DATAOUT_0_reg)=data)
#define set_CP_REG_DATAOUT_1_reg(data)   (*((volatile unsigned int*) CP_REG_DATAOUT_1_reg)=data)
#define set_CP_REG_DATAOUT_2_reg(data)   (*((volatile unsigned int*) CP_REG_DATAOUT_2_reg)=data)
#define set_CP_REG_DATAOUT_3_reg(data)   (*((volatile unsigned int*) CP_REG_DATAOUT_3_reg)=data)
#define get_CP_REG_DATAOUT_0_reg   (*((volatile unsigned int*) CP_REG_DATAOUT_0_reg))
#define get_CP_REG_DATAOUT_1_reg   (*((volatile unsigned int*) CP_REG_DATAOUT_1_reg))
#define get_CP_REG_DATAOUT_2_reg   (*((volatile unsigned int*) CP_REG_DATAOUT_2_reg))
#define get_CP_REG_DATAOUT_3_reg   (*((volatile unsigned int*) CP_REG_DATAOUT_3_reg))
#define CP_REG_DATAOUT_0_inst_adr                                                    "0x0015"
#define CP_REG_DATAOUT_1_inst_adr                                                    "0x0016"
#define CP_REG_DATAOUT_2_inst_adr                                                    "0x0017"
#define CP_REG_DATAOUT_3_inst_adr                                                    "0x0018"
#define CP_REG_DATAOUT_0_inst                                                        0x0015
#define CP_REG_DATAOUT_1_inst                                                        0x0016
#define CP_REG_DATAOUT_2_inst                                                        0x0017
#define CP_REG_DATAOUT_3_inst                                                        0x0018
#define CP_REG_DATAOUT_data_shift                                                    (0)
#define CP_REG_DATAOUT_data_mask                                                     (0xFFFFFFFF)
#define CP_REG_DATAOUT_data(data)                                                    (0xFFFFFFFF&((data)<<0))
#define CP_REG_DATAOUT_data_src(data)                                                ((0xFFFFFFFF&(data))>>0)
#define CP_REG_DATAOUT_get_data(data)                                                ((0xFFFFFFFF&(data))>>0)


#define CP_REG_IV_0                                                                  0x98015064
#define CP_REG_IV_1                                                                  0x98015068
#define CP_REG_IV_2                                                                  0x9801506C
#define CP_REG_IV_3                                                                  0x98015070
#define CP_REG_IV_0_reg_addr                                                         "0xD8015064"
#define CP_REG_IV_1_reg_addr                                                         "0xD8015068"
#define CP_REG_IV_2_reg_addr                                                         "0xD801506C"
#define CP_REG_IV_3_reg_addr                                                         "0xD8015070"
#define CP_REG_IV_0_reg                                                              0xD8015064
#define CP_REG_IV_1_reg                                                              0xD8015068
#define CP_REG_IV_2_reg                                                              0xD801506C
#define CP_REG_IV_3_reg                                                              0xD8015070
#define set_CP_REG_IV_0_reg(data)   (*((volatile unsigned int*) CP_REG_IV_0_reg)=data)
#define set_CP_REG_IV_1_reg(data)   (*((volatile unsigned int*) CP_REG_IV_1_reg)=data)
#define set_CP_REG_IV_2_reg(data)   (*((volatile unsigned int*) CP_REG_IV_2_reg)=data)
#define set_CP_REG_IV_3_reg(data)   (*((volatile unsigned int*) CP_REG_IV_3_reg)=data)
#define get_CP_REG_IV_0_reg   (*((volatile unsigned int*) CP_REG_IV_0_reg))
#define get_CP_REG_IV_1_reg   (*((volatile unsigned int*) CP_REG_IV_1_reg))
#define get_CP_REG_IV_2_reg   (*((volatile unsigned int*) CP_REG_IV_2_reg))
#define get_CP_REG_IV_3_reg   (*((volatile unsigned int*) CP_REG_IV_3_reg))
#define CP_REG_IV_0_inst_adr                                                         "0x0019"
#define CP_REG_IV_1_inst_adr                                                         "0x001A"
#define CP_REG_IV_2_inst_adr                                                         "0x001B"
#define CP_REG_IV_3_inst_adr                                                         "0x001C"
#define CP_REG_IV_0_inst                                                             0x0019
#define CP_REG_IV_1_inst                                                             0x001A
#define CP_REG_IV_2_inst                                                             0x001B
#define CP_REG_IV_3_inst                                                             0x001C
#define CP_REG_IV_data_shift                                                         (0)
#define CP_REG_IV_data_mask                                                          (0xFFFFFFFF)
#define CP_REG_IV_data(data)                                                         (0xFFFFFFFF&((data)<<0))
#define CP_REG_IV_data_src(data)                                                     ((0xFFFFFFFF&(data))>>0)
#define CP_REG_IV_get_data(data)                                                     ((0xFFFFFFFF&(data))>>0)


#define CP_REG_SET                                                                   0x98015074
#define CP_REG_SET_reg_addr                                                          "0xD8015074"
#define CP_REG_SET_reg                                                               0xD8015074
#define set_CP_REG_SET_reg(data)   (*((volatile unsigned int*) CP_REG_SET_reg)=data)
#define get_CP_REG_SET_reg   (*((volatile unsigned int*) CP_REG_SET_reg))
#define CP_REG_SET_inst_adr                                                          "0x001D"
#define CP_REG_SET_inst                                                              0x001D
#define CP_REG_SET_write_enable3_shift                                               (17)
#define CP_REG_SET_write_enable3_mask                                                (0x00020000)
#define CP_REG_SET_write_enable3(data)                                               (0x00020000&((data)<<17))
#define CP_REG_SET_write_enable3_src(data)                                           ((0x00020000&(data))>>17)
#define CP_REG_SET_get_write_enable3(data)                                           ((0x00020000&(data))>>17)
#define CP_REG_SET_mode_shift                                                        (13)
#define CP_REG_SET_mode_mask                                                         (0x0001E000)
#define CP_REG_SET_mode(data)                                                        (0x0001E000&((data)<<13))
#define CP_REG_SET_mode_src(data)                                                    ((0x0001E000&(data))>>13)
#define CP_REG_SET_get_mode(data)                                                    ((0x0001E000&(data))>>13)
#define CP_REG_SET_write_enable2_shift                                               (5)
#define CP_REG_SET_write_enable2_mask                                                (0x00000020)
#define CP_REG_SET_write_enable2(data)                                               (0x00000020&((data)<<5))
#define CP_REG_SET_write_enable2_src(data)                                           ((0x00000020&(data))>>5)
#define CP_REG_SET_get_write_enable2(data)                                           ((0x00000020&(data))>>5)
#define CP_REG_SET_cbc_shift                                                         (4)
#define CP_REG_SET_cbc_mask                                                          (0x00000010)
#define CP_REG_SET_cbc(data)                                                         (0x00000010&((data)<<4))
#define CP_REG_SET_cbc_src(data)                                                     ((0x00000010&(data))>>4)
#define CP_REG_SET_get_cbc(data)                                                     ((0x00000010&(data))>>4)
#define CP_REG_SET_write_enable1_shift                                               (3)
#define CP_REG_SET_write_enable1_mask                                                (0x00000008)
#define CP_REG_SET_write_enable1(data)                                               (0x00000008&((data)<<3))
#define CP_REG_SET_write_enable1_src(data)                                           ((0x00000008&(data))>>3)
#define CP_REG_SET_get_write_enable1(data)                                           ((0x00000008&(data))>>3)
#define CP_REG_SET_reg_first_shift                                                   (2)
#define CP_REG_SET_reg_first_mask                                                    (0x00000004)
#define CP_REG_SET_reg_first(data)                                                   (0x00000004&((data)<<2))
#define CP_REG_SET_reg_first_src(data)                                               ((0x00000004&(data))>>2)
#define CP_REG_SET_get_reg_first(data)                                               ((0x00000004&(data))>>2)
#define CP_REG_SET_write_enable0_shift                                               (1)
#define CP_REG_SET_write_enable0_mask                                                (0x00000002)
#define CP_REG_SET_write_enable0(data)                                               (0x00000002&((data)<<1))
#define CP_REG_SET_write_enable0_src(data)                                           ((0x00000002&(data))>>1)
#define CP_REG_SET_get_write_enable0(data)                                           ((0x00000002&(data))>>1)
#define CP_REG_SET_reg_ende_shift                                                    (0)
#define CP_REG_SET_reg_ende_mask                                                     (0x00000001)
#define CP_REG_SET_reg_ende(data)                                                    (0x00000001&((data)<<0))
#define CP_REG_SET_reg_ende_src(data)                                                ((0x00000001&(data))>>0)
#define CP_REG_SET_get_reg_ende(data)                                                ((0x00000001&(data))>>0)


#define CP_REG_SET1                                                                  0x98015078
#define CP_REG_SET1_reg_addr                                                         "0xD8015078"
#define CP_REG_SET1_reg                                                              0xD8015078
#define set_CP_REG_SET1_reg(data)   (*((volatile unsigned int*) CP_REG_SET1_reg)=data)
#define get_CP_REG_SET1_reg   (*((volatile unsigned int*) CP_REG_SET1_reg))
#define CP_REG_SET1_inst_adr                                                         "0x001E"
#define CP_REG_SET1_inst                                                             0x001E
#define CP_REG_SET1_dataout_byte_swap_shift                                          (13)
#define CP_REG_SET1_dataout_byte_swap_mask                                           (0x00002000)
#define CP_REG_SET1_dataout_byte_swap(data)                                          (0x00002000&((data)<<13))
#define CP_REG_SET1_dataout_byte_swap_src(data)                                      ((0x00002000&(data))>>13)
#define CP_REG_SET1_get_dataout_byte_swap(data)                                      ((0x00002000&(data))>>13)
#define CP_REG_SET1_datain_byte_swap_shift                                           (12)
#define CP_REG_SET1_datain_byte_swap_mask                                            (0x00001000)
#define CP_REG_SET1_datain_byte_swap(data)                                           (0x00001000&((data)<<12))
#define CP_REG_SET1_datain_byte_swap_src(data)                                       ((0x00001000&(data))>>12)
#define CP_REG_SET1_get_datain_byte_swap(data)                                       ((0x00001000&(data))>>12)
#define CP_REG_SET1_iv_byte_swap_shift                                               (11)
#define CP_REG_SET1_iv_byte_swap_mask                                                (0x00000800)
#define CP_REG_SET1_iv_byte_swap(data)                                               (0x00000800&((data)<<11))
#define CP_REG_SET1_iv_byte_swap_src(data)                                           ((0x00000800&(data))>>11)
#define CP_REG_SET1_get_iv_byte_swap(data)                                           ((0x00000800&(data))>>11)
#define CP_REG_SET1_key_byte_swap_shift                                              (10)
#define CP_REG_SET1_key_byte_swap_mask                                               (0x00000400)
#define CP_REG_SET1_key_byte_swap(data)                                              (0x00000400&((data)<<10))
#define CP_REG_SET1_key_byte_swap_src(data)                                          ((0x00000400&(data))>>10)
#define CP_REG_SET1_get_key_byte_swap(data)                                          ((0x00000400&(data))>>10)
#define CP_REG_SET1_des_key_order_shift                                              (9)
#define CP_REG_SET1_des_key_order_mask                                               (0x00000200)
#define CP_REG_SET1_des_key_order(data)                                              (0x00000200&((data)<<9))
#define CP_REG_SET1_des_key_order_src(data)                                          ((0x00000200&(data))>>9)
#define CP_REG_SET1_get_des_key_order(data)                                          ((0x00000200&(data))>>9)
#define CP_REG_SET1_key_mode_shift                                                   (6)
#define CP_REG_SET1_key_mode_mask                                                    (0x000000C0)
#define CP_REG_SET1_key_mode(data)                                                   (0x000000C0&((data)<<6))
#define CP_REG_SET1_key_mode_src(data)                                               ((0x000000C0&(data))>>6)
#define CP_REG_SET1_get_key_mode(data)                                               ((0x000000C0&(data))>>6)
#define CP_REG_SET1_iv_mode_shift                                                    (4)
#define CP_REG_SET1_iv_mode_mask                                                     (0x00000030)
#define CP_REG_SET1_iv_mode(data)                                                    (0x00000030&((data)<<4))
#define CP_REG_SET1_iv_mode_src(data)                                                ((0x00000030&(data))>>4)
#define CP_REG_SET1_get_iv_mode(data)                                                ((0x00000030&(data))>>4)
#define CP_REG_SET1_input_mode_shift                                                 (2)
#define CP_REG_SET1_input_mode_mask                                                  (0x0000000C)
#define CP_REG_SET1_input_mode(data)                                                 (0x0000000C&((data)<<2))
#define CP_REG_SET1_input_mode_src(data)                                             ((0x0000000C&(data))>>2)
#define CP_REG_SET1_get_input_mode(data)                                             ((0x0000000C&(data))>>2)
#define CP_REG_SET1_output_mode_shift                                                (0)
#define CP_REG_SET1_output_mode_mask                                                 (0x00000003)
#define CP_REG_SET1_output_mode(data)                                                (0x00000003&((data)<<0))
#define CP_REG_SET1_output_mode_src(data)                                            ((0x00000003&(data))>>0)
#define CP_REG_SET1_get_output_mode(data)                                            ((0x00000003&(data))>>0)


#define CP_REG_SET2                                                                  0x9801507c
#define CP_REG_SET2_reg_addr                                                         "0xD801507C"
#define CP_REG_SET2_reg                                                              0xD801507C
#define set_CP_REG_SET2_reg(data)   (*((volatile unsigned int*) CP_REG_SET2_reg)=data)
#define get_CP_REG_SET2_reg   (*((volatile unsigned int*) CP_REG_SET2_reg))
#define CP_REG_SET2_inst_adr                                                         "0x001F"
#define CP_REG_SET2_inst                                                             0x001F
#define CP_REG_SET2_output_entry_shift                                               (24)
#define CP_REG_SET2_output_entry_mask                                                (0x7F000000)
#define CP_REG_SET2_output_entry(data)                                               (0x7F000000&((data)<<24))
#define CP_REG_SET2_output_entry_src(data)                                           ((0x7F000000&(data))>>24)
#define CP_REG_SET2_get_output_entry(data)                                           ((0x7F000000&(data))>>24)
#define CP_REG_SET2_input_entry_shift                                                (16)
#define CP_REG_SET2_input_entry_mask                                                 (0x007F0000)
#define CP_REG_SET2_input_entry(data)                                                (0x007F0000&((data)<<16))
#define CP_REG_SET2_input_entry_src(data)                                            ((0x007F0000&(data))>>16)
#define CP_REG_SET2_get_input_entry(data)                                            ((0x007F0000&(data))>>16)
#define CP_REG_SET2_key_entry_shift                                                  (8)
#define CP_REG_SET2_key_entry_mask                                                   (0x00007F00)
#define CP_REG_SET2_key_entry(data)                                                  (0x00007F00&((data)<<8))
#define CP_REG_SET2_key_entry_src(data)                                              ((0x00007F00&(data))>>8)
#define CP_REG_SET2_get_key_entry(data)                                              ((0x00007F00&(data))>>8)
#define CP_REG_SET2_iv_entry_shift                                                   (0)
#define CP_REG_SET2_iv_entry_mask                                                    (0x0000007F)
#define CP_REG_SET2_iv_entry(data)                                                   (0x0000007F&((data)<<0))
#define CP_REG_SET2_iv_entry_src(data)                                               ((0x0000007F&(data))>>0)
#define CP_REG_SET2_get_iv_entry(data)                                               ((0x0000007F&(data))>>0)


#define CP_REG_KEY_1_0                                                               0x980150F0
#define CP_REG_KEY_1_1                                                               0x980150F4
#define CP_REG_KEY_1_2                                                               0x980150F8
#define CP_REG_KEY_1_3                                                               0x980150FC
#define CP_REG_KEY_1_0_reg_addr                                                      "0xD80150F0"
#define CP_REG_KEY_1_1_reg_addr                                                      "0xD80150F4"
#define CP_REG_KEY_1_2_reg_addr                                                      "0xD80150F8"
#define CP_REG_KEY_1_3_reg_addr                                                      "0xD80150FC"
#define CP_REG_KEY_1_0_reg                                                           0xD80150F0
#define CP_REG_KEY_1_1_reg                                                           0xD80150F4
#define CP_REG_KEY_1_2_reg                                                           0xD80150F8
#define CP_REG_KEY_1_3_reg                                                           0xD80150FC
#define set_CP_REG_KEY_1_0_reg(data)   (*((volatile unsigned int*) CP_REG_KEY_1_0_reg)=data)
#define set_CP_REG_KEY_1_1_reg(data)   (*((volatile unsigned int*) CP_REG_KEY_1_1_reg)=data)
#define set_CP_REG_KEY_1_2_reg(data)   (*((volatile unsigned int*) CP_REG_KEY_1_2_reg)=data)
#define set_CP_REG_KEY_1_3_reg(data)   (*((volatile unsigned int*) CP_REG_KEY_1_3_reg)=data)
#define get_CP_REG_KEY_1_0_reg   (*((volatile unsigned int*) CP_REG_KEY_1_0_reg))
#define get_CP_REG_KEY_1_1_reg   (*((volatile unsigned int*) CP_REG_KEY_1_1_reg))
#define get_CP_REG_KEY_1_2_reg   (*((volatile unsigned int*) CP_REG_KEY_1_2_reg))
#define get_CP_REG_KEY_1_3_reg   (*((volatile unsigned int*) CP_REG_KEY_1_3_reg))
#define CP_REG_KEY_1_0_inst_adr                                                      "0x003C"
#define CP_REG_KEY_1_1_inst_adr                                                      "0x003D"
#define CP_REG_KEY_1_2_inst_adr                                                      "0x003E"
#define CP_REG_KEY_1_3_inst_adr                                                      "0x003F"
#define CP_REG_KEY_1_0_inst                                                          0x003C
#define CP_REG_KEY_1_1_inst                                                          0x003D
#define CP_REG_KEY_1_2_inst                                                          0x003E
#define CP_REG_KEY_1_3_inst                                                          0x003F
#define CP_REG_KEY_1_data_shift                                                      (0)
#define CP_REG_KEY_1_data_mask                                                       (0xFFFFFFFF)
#define CP_REG_KEY_1_data(data)                                                      (0xFFFFFFFF&((data)<<0))
#define CP_REG_KEY_1_data_src(data)                                                  ((0xFFFFFFFF&(data))>>0)
#define CP_REG_KEY_1_get_data(data)                                                  ((0xFFFFFFFF&(data))>>0)


#define CP_SCTCH                                                                     0x98015080
#define CP_SCTCH_reg_addr                                                            "0xD8015080"
#define CP_SCTCH_reg                                                                 0xD8015080
#define set_CP_SCTCH_reg(data)   (*((volatile unsigned int*) CP_SCTCH_reg)=data)
#define get_CP_SCTCH_reg   (*((volatile unsigned int*) CP_SCTCH_reg))
#define CP_SCTCH_inst_adr                                                            "0x0020"
#define CP_SCTCH_inst                                                                0x0020
#define CP_SCTCH_reg1_shift                                                          (16)
#define CP_SCTCH_reg1_mask                                                           (0xFFFF0000)
#define CP_SCTCH_reg1(data)                                                          (0xFFFF0000&((data)<<16))
#define CP_SCTCH_reg1_src(data)                                                      ((0xFFFF0000&(data))>>16)
#define CP_SCTCH_get_reg1(data)                                                      ((0xFFFF0000&(data))>>16)
#define CP_SCTCH_reg0_shift                                                          (0)
#define CP_SCTCH_reg0_mask                                                           (0x0000FFFF)
#define CP_SCTCH_reg0(data)                                                          (0x0000FFFF&((data)<<0))
#define CP_SCTCH_reg0_src(data)                                                      ((0x0000FFFF&(data))>>0)
#define CP_SCTCH_get_reg0(data)                                                      ((0x0000FFFF&(data))>>0)


#define CP_NF_KEY_0                                                                  0x98015084
#define CP_NF_KEY_1                                                                  0x98015088
#define CP_NF_KEY_2                                                                  0x9801508C
#define CP_NF_KEY_3                                                                  0x98015090
#define CP_NF_KEY_0_reg_addr                                                         "0xD8015084"
#define CP_NF_KEY_1_reg_addr                                                         "0xD8015088"
#define CP_NF_KEY_2_reg_addr                                                         "0xD801508C"
#define CP_NF_KEY_3_reg_addr                                                         "0xD8015090"
#define CP_NF_KEY_0_reg                                                              0xD8015084
#define CP_NF_KEY_1_reg                                                              0xD8015088
#define CP_NF_KEY_2_reg                                                              0xD801508C
#define CP_NF_KEY_3_reg                                                              0xD8015090
#define set_CP_NF_KEY_0_reg(data)   (*((volatile unsigned int*) CP_NF_KEY_0_reg)=data)
#define set_CP_NF_KEY_1_reg(data)   (*((volatile unsigned int*) CP_NF_KEY_1_reg)=data)
#define set_CP_NF_KEY_2_reg(data)   (*((volatile unsigned int*) CP_NF_KEY_2_reg)=data)
#define set_CP_NF_KEY_3_reg(data)   (*((volatile unsigned int*) CP_NF_KEY_3_reg)=data)
#define get_CP_NF_KEY_0_reg   (*((volatile unsigned int*) CP_NF_KEY_0_reg))
#define get_CP_NF_KEY_1_reg   (*((volatile unsigned int*) CP_NF_KEY_1_reg))
#define get_CP_NF_KEY_2_reg   (*((volatile unsigned int*) CP_NF_KEY_2_reg))
#define get_CP_NF_KEY_3_reg   (*((volatile unsigned int*) CP_NF_KEY_3_reg))
#define CP_NF_KEY_0_inst_adr                                                         "0x0021"
#define CP_NF_KEY_1_inst_adr                                                         "0x0022"
#define CP_NF_KEY_2_inst_adr                                                         "0x0023"
#define CP_NF_KEY_3_inst_adr                                                         "0x0024"
#define CP_NF_KEY_0_inst                                                             0x0021
#define CP_NF_KEY_1_inst                                                             0x0022
#define CP_NF_KEY_2_inst                                                             0x0023
#define CP_NF_KEY_3_inst                                                             0x0024
#define CP_NF_KEY_data_shift                                                         (0)
#define CP_NF_KEY_data_mask                                                          (0xFFFFFFFF)
#define CP_NF_KEY_data(data)                                                         (0xFFFFFFFF&((data)<<0))
#define CP_NF_KEY_data_src(data)                                                     ((0xFFFFFFFF&(data))>>0)
#define CP_NF_KEY_get_data(data)                                                     ((0xFFFFFFFF&(data))>>0)


#define CP_NF_INI_KEY_0                                                              0x98015094
#define CP_NF_INI_KEY_1                                                              0x98015098
#define CP_NF_INI_KEY_2                                                              0x9801509C
#define CP_NF_INI_KEY_3                                                              0x980150A0
#define CP_NF_INI_KEY_0_reg_addr                                                     "0xD8015094"
#define CP_NF_INI_KEY_1_reg_addr                                                     "0xD8015098"
#define CP_NF_INI_KEY_2_reg_addr                                                     "0xD801509C"
#define CP_NF_INI_KEY_3_reg_addr                                                     "0xD80150A0"
#define CP_NF_INI_KEY_0_reg                                                          0xD8015094
#define CP_NF_INI_KEY_1_reg                                                          0xD8015098
#define CP_NF_INI_KEY_2_reg                                                          0xD801509C
#define CP_NF_INI_KEY_3_reg                                                          0xD80150A0
#define set_CP_NF_INI_KEY_0_reg(data)   (*((volatile unsigned int*) CP_NF_INI_KEY_0_reg)=data)
#define set_CP_NF_INI_KEY_1_reg(data)   (*((volatile unsigned int*) CP_NF_INI_KEY_1_reg)=data)
#define set_CP_NF_INI_KEY_2_reg(data)   (*((volatile unsigned int*) CP_NF_INI_KEY_2_reg)=data)
#define set_CP_NF_INI_KEY_3_reg(data)   (*((volatile unsigned int*) CP_NF_INI_KEY_3_reg)=data)
#define get_CP_NF_INI_KEY_0_reg   (*((volatile unsigned int*) CP_NF_INI_KEY_0_reg))
#define get_CP_NF_INI_KEY_1_reg   (*((volatile unsigned int*) CP_NF_INI_KEY_1_reg))
#define get_CP_NF_INI_KEY_2_reg   (*((volatile unsigned int*) CP_NF_INI_KEY_2_reg))
#define get_CP_NF_INI_KEY_3_reg   (*((volatile unsigned int*) CP_NF_INI_KEY_3_reg))
#define CP_NF_INI_KEY_0_inst_adr                                                     "0x0025"
#define CP_NF_INI_KEY_1_inst_adr                                                     "0x0026"
#define CP_NF_INI_KEY_2_inst_adr                                                     "0x0027"
#define CP_NF_INI_KEY_3_inst_adr                                                     "0x0028"
#define CP_NF_INI_KEY_0_inst                                                         0x0025
#define CP_NF_INI_KEY_1_inst                                                         0x0026
#define CP_NF_INI_KEY_2_inst                                                         0x0027
#define CP_NF_INI_KEY_3_inst                                                         0x0028
#define CP_NF_INI_KEY_data_shift                                                     (0)
#define CP_NF_INI_KEY_data_mask                                                      (0xFFFFFFFF)
#define CP_NF_INI_KEY_data(data)                                                     (0xFFFFFFFF&((data)<<0))
#define CP_NF_INI_KEY_data_src(data)                                                 ((0xFFFFFFFF&(data))>>0)
#define CP_NF_INI_KEY_get_data(data)                                                 ((0xFFFFFFFF&(data))>>0)


#define CP_NF_SET                                                                    0x980150a4
#define CP_NF_SET_reg_addr                                                           "0xD80150A4"
#define CP_NF_SET_reg                                                                0xD80150A4
#define set_CP_NF_SET_reg(data)   (*((volatile unsigned int*) CP_NF_SET_reg)=data)
#define get_CP_NF_SET_reg   (*((volatile unsigned int*) CP_NF_SET_reg))
#define CP_NF_SET_inst_adr                                                           "0x0029"
#define CP_NF_SET_inst                                                               0x0029
#define CP_NF_SET_otp_sel_shift                                                      (13)
#define CP_NF_SET_otp_sel_mask                                                       (0x00006000)
#define CP_NF_SET_otp_sel(data)                                                      (0x00006000&((data)<<13))
#define CP_NF_SET_otp_sel_src(data)                                                  ((0x00006000&(data))>>13)
#define CP_NF_SET_get_otp_sel(data)                                                  ((0x00006000&(data))>>13)
#define CP_NF_SET_aes_mode_shift                                                     (11)
#define CP_NF_SET_aes_mode_mask                                                      (0x00001800)
#define CP_NF_SET_aes_mode(data)                                                     (0x00001800&((data)<<11))
#define CP_NF_SET_aes_mode_src(data)                                                 ((0x00001800&(data))>>11)
#define CP_NF_SET_get_aes_mode(data)                                                 ((0x00001800&(data))>>11)
#define CP_NF_SET_bcm_shift                                                          (9)
#define CP_NF_SET_bcm_mask                                                           (0x00000600)
#define CP_NF_SET_bcm(data)                                                          (0x00000600&((data)<<9))
#define CP_NF_SET_bcm_src(data)                                                      ((0x00000600&(data))>>9)
#define CP_NF_SET_get_bcm(data)                                                      ((0x00000600&(data))>>9)
#define CP_NF_SET_cw_entry_shift                                                     (2)
#define CP_NF_SET_cw_entry_mask                                                      (0x000001FC)
#define CP_NF_SET_cw_entry(data)                                                     (0x000001FC&((data)<<2))
#define CP_NF_SET_cw_entry_src(data)                                                 ((0x000001FC&(data))>>2)
#define CP_NF_SET_get_cw_entry(data)                                                 ((0x000001FC&(data))>>2)
#define CP_NF_SET_sel_shift                                                          (0)
#define CP_NF_SET_sel_mask                                                           (0x00000003)
#define CP_NF_SET_sel(data)                                                          (0x00000003&((data)<<0))
#define CP_NF_SET_sel_src(data)                                                      ((0x00000003&(data))>>0)
#define CP_NF_SET_get_sel(data)                                                      ((0x00000003&(data))>>0)


#define CP_NF_KEY_1_0                                                                0x980150E0
#define CP_NF_KEY_1_1                                                                0x980150E4
#define CP_NF_KEY_1_2                                                                0x980150E8
#define CP_NF_KEY_1_3                                                                0x980150EC
#define CP_NF_KEY_1_0_reg_addr                                                       "0xD80150E0"
#define CP_NF_KEY_1_1_reg_addr                                                       "0xD80150E4"
#define CP_NF_KEY_1_2_reg_addr                                                       "0xD80150E8"
#define CP_NF_KEY_1_3_reg_addr                                                       "0xD80150EC"
#define CP_NF_KEY_1_0_reg                                                            0xD80150E0
#define CP_NF_KEY_1_1_reg                                                            0xD80150E4
#define CP_NF_KEY_1_2_reg                                                            0xD80150E8
#define CP_NF_KEY_1_3_reg                                                            0xD80150EC
#define set_CP_NF_KEY_1_0_reg(data)   (*((volatile unsigned int*) CP_NF_KEY_1_0_reg)=data)
#define set_CP_NF_KEY_1_1_reg(data)   (*((volatile unsigned int*) CP_NF_KEY_1_1_reg)=data)
#define set_CP_NF_KEY_1_2_reg(data)   (*((volatile unsigned int*) CP_NF_KEY_1_2_reg)=data)
#define set_CP_NF_KEY_1_3_reg(data)   (*((volatile unsigned int*) CP_NF_KEY_1_3_reg)=data)
#define get_CP_NF_KEY_1_0_reg   (*((volatile unsigned int*) CP_NF_KEY_1_0_reg))
#define get_CP_NF_KEY_1_1_reg   (*((volatile unsigned int*) CP_NF_KEY_1_1_reg))
#define get_CP_NF_KEY_1_2_reg   (*((volatile unsigned int*) CP_NF_KEY_1_2_reg))
#define get_CP_NF_KEY_1_3_reg   (*((volatile unsigned int*) CP_NF_KEY_1_3_reg))
#define CP_NF_KEY_1_0_inst_adr                                                       "0x0038"
#define CP_NF_KEY_1_1_inst_adr                                                       "0x0039"
#define CP_NF_KEY_1_2_inst_adr                                                       "0x003A"
#define CP_NF_KEY_1_3_inst_adr                                                       "0x003B"
#define CP_NF_KEY_1_0_inst                                                           0x0038
#define CP_NF_KEY_1_1_inst                                                           0x0039
#define CP_NF_KEY_1_2_inst                                                           0x003A
#define CP_NF_KEY_1_3_inst                                                           0x003B
#define CP_NF_KEY_1_data_shift                                                       (0)
#define CP_NF_KEY_1_data_mask                                                        (0xFFFFFFFF)
#define CP_NF_KEY_1_data(data)                                                       (0xFFFFFFFF&((data)<<0))
#define CP_NF_KEY_1_data_src(data)                                                   ((0xFFFFFFFF&(data))>>0)
#define CP_NF_KEY_1_get_data(data)                                                   ((0xFFFFFFFF&(data))>>0)


#define CP_MD_KEY_0                                                                  0x980150A8
#define CP_MD_KEY_1                                                                  0x980150AC
#define CP_MD_KEY_2                                                                  0x980150B0
#define CP_MD_KEY_3                                                                  0x980150B4
#define CP_MD_KEY_0_reg_addr                                                         "0xD80150A8"
#define CP_MD_KEY_1_reg_addr                                                         "0xD80150AC"
#define CP_MD_KEY_2_reg_addr                                                         "0xD80150B0"
#define CP_MD_KEY_3_reg_addr                                                         "0xD80150B4"
#define CP_MD_KEY_0_reg                                                              0xD80150A8
#define CP_MD_KEY_1_reg                                                              0xD80150AC
#define CP_MD_KEY_2_reg                                                              0xD80150B0
#define CP_MD_KEY_3_reg                                                              0xD80150B4
#define set_CP_MD_KEY_0_reg(data)   (*((volatile unsigned int*) CP_MD_KEY_0_reg)=data)
#define set_CP_MD_KEY_1_reg(data)   (*((volatile unsigned int*) CP_MD_KEY_1_reg)=data)
#define set_CP_MD_KEY_2_reg(data)   (*((volatile unsigned int*) CP_MD_KEY_2_reg)=data)
#define set_CP_MD_KEY_3_reg(data)   (*((volatile unsigned int*) CP_MD_KEY_3_reg)=data)
#define get_CP_MD_KEY_0_reg   (*((volatile unsigned int*) CP_MD_KEY_0_reg))
#define get_CP_MD_KEY_1_reg   (*((volatile unsigned int*) CP_MD_KEY_1_reg))
#define get_CP_MD_KEY_2_reg   (*((volatile unsigned int*) CP_MD_KEY_2_reg))
#define get_CP_MD_KEY_3_reg   (*((volatile unsigned int*) CP_MD_KEY_3_reg))
#define CP_MD_KEY_0_inst_adr                                                         "0x002A"
#define CP_MD_KEY_1_inst_adr                                                         "0x002B"
#define CP_MD_KEY_2_inst_adr                                                         "0x002C"
#define CP_MD_KEY_3_inst_adr                                                         "0x002D"
#define CP_MD_KEY_0_inst                                                             0x002A
#define CP_MD_KEY_1_inst                                                             0x002B
#define CP_MD_KEY_2_inst                                                             0x002C
#define CP_MD_KEY_3_inst                                                             0x002D
#define CP_MD_KEY_data_shift                                                         (0)
#define CP_MD_KEY_data_mask                                                          (0xFFFFFFFF)
#define CP_MD_KEY_data(data)                                                         (0xFFFFFFFF&((data)<<0))
#define CP_MD_KEY_data_src(data)                                                     ((0xFFFFFFFF&(data))>>0)
#define CP_MD_KEY_get_data(data)                                                     ((0xFFFFFFFF&(data))>>0)


#define CP_MD_INI_KEY_0                                                              0x980150B8
#define CP_MD_INI_KEY_1                                                              0x980150BC
#define CP_MD_INI_KEY_2                                                              0x980150C0
#define CP_MD_INI_KEY_3                                                              0x980150C4
#define CP_MD_INI_KEY_0_reg_addr                                                     "0xD80150B8"
#define CP_MD_INI_KEY_1_reg_addr                                                     "0xD80150BC"
#define CP_MD_INI_KEY_2_reg_addr                                                     "0xD80150C0"
#define CP_MD_INI_KEY_3_reg_addr                                                     "0xD80150C4"
#define CP_MD_INI_KEY_0_reg                                                          0xD80150B8
#define CP_MD_INI_KEY_1_reg                                                          0xD80150BC
#define CP_MD_INI_KEY_2_reg                                                          0xD80150C0
#define CP_MD_INI_KEY_3_reg                                                          0xD80150C4
#define set_CP_MD_INI_KEY_0_reg(data)   (*((volatile unsigned int*) CP_MD_INI_KEY_0_reg)=data)
#define set_CP_MD_INI_KEY_1_reg(data)   (*((volatile unsigned int*) CP_MD_INI_KEY_1_reg)=data)
#define set_CP_MD_INI_KEY_2_reg(data)   (*((volatile unsigned int*) CP_MD_INI_KEY_2_reg)=data)
#define set_CP_MD_INI_KEY_3_reg(data)   (*((volatile unsigned int*) CP_MD_INI_KEY_3_reg)=data)
#define get_CP_MD_INI_KEY_0_reg   (*((volatile unsigned int*) CP_MD_INI_KEY_0_reg))
#define get_CP_MD_INI_KEY_1_reg   (*((volatile unsigned int*) CP_MD_INI_KEY_1_reg))
#define get_CP_MD_INI_KEY_2_reg   (*((volatile unsigned int*) CP_MD_INI_KEY_2_reg))
#define get_CP_MD_INI_KEY_3_reg   (*((volatile unsigned int*) CP_MD_INI_KEY_3_reg))
#define CP_MD_INI_KEY_0_inst_adr                                                     "0x002E"
#define CP_MD_INI_KEY_1_inst_adr                                                     "0x002F"
#define CP_MD_INI_KEY_2_inst_adr                                                     "0x0030"
#define CP_MD_INI_KEY_3_inst_adr                                                     "0x0031"
#define CP_MD_INI_KEY_0_inst                                                         0x002E
#define CP_MD_INI_KEY_1_inst                                                         0x002F
#define CP_MD_INI_KEY_2_inst                                                         0x0030
#define CP_MD_INI_KEY_3_inst                                                         0x0031
#define CP_MD_INI_KEY_data_shift                                                     (0)
#define CP_MD_INI_KEY_data_mask                                                      (0xFFFFFFFF)
#define CP_MD_INI_KEY_data(data)                                                     (0xFFFFFFFF&((data)<<0))
#define CP_MD_INI_KEY_data_src(data)                                                 ((0xFFFFFFFF&(data))>>0)
#define CP_MD_INI_KEY_get_data(data)                                                 ((0xFFFFFFFF&(data))>>0)


#define CP_MD_SET                                                                    0x980150c8
#define CP_MD_SET_reg_addr                                                           "0xD80150C8"
#define CP_MD_SET_reg                                                                0xD80150C8
#define set_CP_MD_SET_reg(data)   (*((volatile unsigned int*) CP_MD_SET_reg)=data)
#define get_CP_MD_SET_reg   (*((volatile unsigned int*) CP_MD_SET_reg))
#define CP_MD_SET_inst_adr                                                           "0x0032"
#define CP_MD_SET_inst                                                               0x0032
#define CP_MD_SET_otp_sel_shift                                                      (13)
#define CP_MD_SET_otp_sel_mask                                                       (0x00006000)
#define CP_MD_SET_otp_sel(data)                                                      (0x00006000&((data)<<13))
#define CP_MD_SET_otp_sel_src(data)                                                  ((0x00006000&(data))>>13)
#define CP_MD_SET_get_otp_sel(data)                                                  ((0x00006000&(data))>>13)
#define CP_MD_SET_aes_mode_shift                                                     (11)
#define CP_MD_SET_aes_mode_mask                                                      (0x00001800)
#define CP_MD_SET_aes_mode(data)                                                     (0x00001800&((data)<<11))
#define CP_MD_SET_aes_mode_src(data)                                                 ((0x00001800&(data))>>11)
#define CP_MD_SET_get_aes_mode(data)                                                 ((0x00001800&(data))>>11)
#define CP_MD_SET_bcm_shift                                                          (9)
#define CP_MD_SET_bcm_mask                                                           (0x00000600)
#define CP_MD_SET_bcm(data)                                                          (0x00000600&((data)<<9))
#define CP_MD_SET_bcm_src(data)                                                      ((0x00000600&(data))>>9)
#define CP_MD_SET_get_bcm(data)                                                      ((0x00000600&(data))>>9)
#define CP_MD_SET_cw_entry_shift                                                     (2)
#define CP_MD_SET_cw_entry_mask                                                      (0x000001FC)
#define CP_MD_SET_cw_entry(data)                                                     (0x000001FC&((data)<<2))
#define CP_MD_SET_cw_entry_src(data)                                                 ((0x000001FC&(data))>>2)
#define CP_MD_SET_get_cw_entry(data)                                                 ((0x000001FC&(data))>>2)
#define CP_MD_SET_sel_shift                                                          (0)
#define CP_MD_SET_sel_mask                                                           (0x00000003)
#define CP_MD_SET_sel(data)                                                          (0x00000003&((data)<<0))
#define CP_MD_SET_sel_src(data)                                                      ((0x00000003&(data))>>0)
#define CP_MD_SET_get_sel(data)                                                      ((0x00000003&(data))>>0)


#define CP_MD_KEY_1_0                                                                0x980150D0
#define CP_MD_KEY_1_1                                                                0x980150D4
#define CP_MD_KEY_1_2                                                                0x980150D8
#define CP_MD_KEY_1_3                                                                0x980150DC
#define CP_MD_KEY_1_0_reg_addr                                                       "0xD80150D0"
#define CP_MD_KEY_1_1_reg_addr                                                       "0xD80150D4"
#define CP_MD_KEY_1_2_reg_addr                                                       "0xD80150D8"
#define CP_MD_KEY_1_3_reg_addr                                                       "0xD80150DC"
#define CP_MD_KEY_1_0_reg                                                            0xD80150D0
#define CP_MD_KEY_1_1_reg                                                            0xD80150D4
#define CP_MD_KEY_1_2_reg                                                            0xD80150D8
#define CP_MD_KEY_1_3_reg                                                            0xD80150DC
#define set_CP_MD_KEY_1_0_reg(data)   (*((volatile unsigned int*) CP_MD_KEY_1_0_reg)=data)
#define set_CP_MD_KEY_1_1_reg(data)   (*((volatile unsigned int*) CP_MD_KEY_1_1_reg)=data)
#define set_CP_MD_KEY_1_2_reg(data)   (*((volatile unsigned int*) CP_MD_KEY_1_2_reg)=data)
#define set_CP_MD_KEY_1_3_reg(data)   (*((volatile unsigned int*) CP_MD_KEY_1_3_reg)=data)
#define get_CP_MD_KEY_1_0_reg   (*((volatile unsigned int*) CP_MD_KEY_1_0_reg))
#define get_CP_MD_KEY_1_1_reg   (*((volatile unsigned int*) CP_MD_KEY_1_1_reg))
#define get_CP_MD_KEY_1_2_reg   (*((volatile unsigned int*) CP_MD_KEY_1_2_reg))
#define get_CP_MD_KEY_1_3_reg   (*((volatile unsigned int*) CP_MD_KEY_1_3_reg))
#define CP_MD_KEY_1_0_inst_adr                                                       "0x0034"
#define CP_MD_KEY_1_1_inst_adr                                                       "0x0035"
#define CP_MD_KEY_1_2_inst_adr                                                       "0x0036"
#define CP_MD_KEY_1_3_inst_adr                                                       "0x0037"
#define CP_MD_KEY_1_0_inst                                                           0x0034
#define CP_MD_KEY_1_1_inst                                                           0x0035
#define CP_MD_KEY_1_2_inst                                                           0x0036
#define CP_MD_KEY_1_3_inst                                                           0x0037
#define CP_MD_KEY_1_data_shift                                                       (0)
#define CP_MD_KEY_1_data_mask                                                        (0xFFFFFFFF)
#define CP_MD_KEY_1_data(data)                                                       (0xFFFFFFFF&((data)<<0))
#define CP_MD_KEY_1_data_src(data)                                                   ((0xFFFFFFFF&(data))>>0)
#define CP_MD_KEY_1_get_data(data)                                                   ((0xFFFFFFFF&(data))>>0)


#define K_CP_REG_KEY_0                                                               0x98015834
#define K_CP_REG_KEY_1                                                               0x98015838
#define K_CP_REG_KEY_2                                                               0x9801583C
#define K_CP_REG_KEY_3                                                               0x98015840
#define K_CP_REG_KEY_0_reg_addr                                                      "0xD8015834"
#define K_CP_REG_KEY_1_reg_addr                                                      "0xD8015838"
#define K_CP_REG_KEY_2_reg_addr                                                      "0xD801583C"
#define K_CP_REG_KEY_3_reg_addr                                                      "0xD8015840"
#define K_CP_REG_KEY_0_reg                                                           0xD8015834
#define K_CP_REG_KEY_1_reg                                                           0xD8015838
#define K_CP_REG_KEY_2_reg                                                           0xD801583C
#define K_CP_REG_KEY_3_reg                                                           0xD8015840
#define set_K_CP_REG_KEY_0_reg(data)   (*((volatile unsigned int*) K_CP_REG_KEY_0_reg)=data)
#define set_K_CP_REG_KEY_1_reg(data)   (*((volatile unsigned int*) K_CP_REG_KEY_1_reg)=data)
#define set_K_CP_REG_KEY_2_reg(data)   (*((volatile unsigned int*) K_CP_REG_KEY_2_reg)=data)
#define set_K_CP_REG_KEY_3_reg(data)   (*((volatile unsigned int*) K_CP_REG_KEY_3_reg)=data)
#define get_K_CP_REG_KEY_0_reg   (*((volatile unsigned int*) K_CP_REG_KEY_0_reg))
#define get_K_CP_REG_KEY_1_reg   (*((volatile unsigned int*) K_CP_REG_KEY_1_reg))
#define get_K_CP_REG_KEY_2_reg   (*((volatile unsigned int*) K_CP_REG_KEY_2_reg))
#define get_K_CP_REG_KEY_3_reg   (*((volatile unsigned int*) K_CP_REG_KEY_3_reg))
#define K_CP_REG_KEY_0_inst_adr                                                      "0x000D"
#define K_CP_REG_KEY_1_inst_adr                                                      "0x000E"
#define K_CP_REG_KEY_2_inst_adr                                                      "0x000F"
#define K_CP_REG_KEY_3_inst_adr                                                      "0x0010"
#define K_CP_REG_KEY_0_inst                                                          0x000D
#define K_CP_REG_KEY_1_inst                                                          0x000E
#define K_CP_REG_KEY_2_inst                                                          0x000F
#define K_CP_REG_KEY_3_inst                                                          0x0010
#define K_CP_REG_KEY_data_shift                                                      (0)
#define K_CP_REG_KEY_data_mask                                                       (0xFFFFFFFF)
#define K_CP_REG_KEY_data(data)                                                      (0xFFFFFFFF&((data)<<0))
#define K_CP_REG_KEY_data_src(data)                                                  ((0xFFFFFFFF&(data))>>0)
#define K_CP_REG_KEY_get_data(data)                                                  ((0xFFFFFFFF&(data))>>0)


#define K_CP_REG_DATAIN_0                                                            0x98015844
#define K_CP_REG_DATAIN_1                                                            0x98015848
#define K_CP_REG_DATAIN_2                                                            0x9801584C
#define K_CP_REG_DATAIN_3                                                            0x98015850
#define K_CP_REG_DATAIN_0_reg_addr                                                   "0xD8015844"
#define K_CP_REG_DATAIN_1_reg_addr                                                   "0xD8015848"
#define K_CP_REG_DATAIN_2_reg_addr                                                   "0xD801584C"
#define K_CP_REG_DATAIN_3_reg_addr                                                   "0xD8015850"
#define K_CP_REG_DATAIN_0_reg                                                        0xD8015844
#define K_CP_REG_DATAIN_1_reg                                                        0xD8015848
#define K_CP_REG_DATAIN_2_reg                                                        0xD801584C
#define K_CP_REG_DATAIN_3_reg                                                        0xD8015850
#define set_K_CP_REG_DATAIN_0_reg(data)   (*((volatile unsigned int*) K_CP_REG_DATAIN_0_reg)=data)
#define set_K_CP_REG_DATAIN_1_reg(data)   (*((volatile unsigned int*) K_CP_REG_DATAIN_1_reg)=data)
#define set_K_CP_REG_DATAIN_2_reg(data)   (*((volatile unsigned int*) K_CP_REG_DATAIN_2_reg)=data)
#define set_K_CP_REG_DATAIN_3_reg(data)   (*((volatile unsigned int*) K_CP_REG_DATAIN_3_reg)=data)
#define get_K_CP_REG_DATAIN_0_reg   (*((volatile unsigned int*) K_CP_REG_DATAIN_0_reg))
#define get_K_CP_REG_DATAIN_1_reg   (*((volatile unsigned int*) K_CP_REG_DATAIN_1_reg))
#define get_K_CP_REG_DATAIN_2_reg   (*((volatile unsigned int*) K_CP_REG_DATAIN_2_reg))
#define get_K_CP_REG_DATAIN_3_reg   (*((volatile unsigned int*) K_CP_REG_DATAIN_3_reg))
#define K_CP_REG_DATAIN_0_inst_adr                                                   "0x0011"
#define K_CP_REG_DATAIN_1_inst_adr                                                   "0x0012"
#define K_CP_REG_DATAIN_2_inst_adr                                                   "0x0013"
#define K_CP_REG_DATAIN_3_inst_adr                                                   "0x0014"
#define K_CP_REG_DATAIN_0_inst                                                       0x0011
#define K_CP_REG_DATAIN_1_inst                                                       0x0012
#define K_CP_REG_DATAIN_2_inst                                                       0x0013
#define K_CP_REG_DATAIN_3_inst                                                       0x0014
#define K_CP_REG_DATAIN_data_shift                                                   (0)
#define K_CP_REG_DATAIN_data_mask                                                    (0xFFFFFFFF)
#define K_CP_REG_DATAIN_data(data)                                                   (0xFFFFFFFF&((data)<<0))
#define K_CP_REG_DATAIN_data_src(data)                                               ((0xFFFFFFFF&(data))>>0)
#define K_CP_REG_DATAIN_get_data(data)                                               ((0xFFFFFFFF&(data))>>0)


#define K_CP_REG_DATAOUT_0                                                           0x98015854
#define K_CP_REG_DATAOUT_1                                                           0x98015858
#define K_CP_REG_DATAOUT_2                                                           0x9801585C
#define K_CP_REG_DATAOUT_3                                                           0x98015860
#define K_CP_REG_DATAOUT_0_reg_addr                                                  "0xD8015854"
#define K_CP_REG_DATAOUT_1_reg_addr                                                  "0xD8015858"
#define K_CP_REG_DATAOUT_2_reg_addr                                                  "0xD801585C"
#define K_CP_REG_DATAOUT_3_reg_addr                                                  "0xD8015860"
#define K_CP_REG_DATAOUT_0_reg                                                       0xD8015854
#define K_CP_REG_DATAOUT_1_reg                                                       0xD8015858
#define K_CP_REG_DATAOUT_2_reg                                                       0xD801585C
#define K_CP_REG_DATAOUT_3_reg                                                       0xD8015860
#define set_K_CP_REG_DATAOUT_0_reg(data)   (*((volatile unsigned int*) K_CP_REG_DATAOUT_0_reg)=data)
#define set_K_CP_REG_DATAOUT_1_reg(data)   (*((volatile unsigned int*) K_CP_REG_DATAOUT_1_reg)=data)
#define set_K_CP_REG_DATAOUT_2_reg(data)   (*((volatile unsigned int*) K_CP_REG_DATAOUT_2_reg)=data)
#define set_K_CP_REG_DATAOUT_3_reg(data)   (*((volatile unsigned int*) K_CP_REG_DATAOUT_3_reg)=data)
#define get_K_CP_REG_DATAOUT_0_reg   (*((volatile unsigned int*) K_CP_REG_DATAOUT_0_reg))
#define get_K_CP_REG_DATAOUT_1_reg   (*((volatile unsigned int*) K_CP_REG_DATAOUT_1_reg))
#define get_K_CP_REG_DATAOUT_2_reg   (*((volatile unsigned int*) K_CP_REG_DATAOUT_2_reg))
#define get_K_CP_REG_DATAOUT_3_reg   (*((volatile unsigned int*) K_CP_REG_DATAOUT_3_reg))
#define K_CP_REG_DATAOUT_0_inst_adr                                                  "0x0015"
#define K_CP_REG_DATAOUT_1_inst_adr                                                  "0x0016"
#define K_CP_REG_DATAOUT_2_inst_adr                                                  "0x0017"
#define K_CP_REG_DATAOUT_3_inst_adr                                                  "0x0018"
#define K_CP_REG_DATAOUT_0_inst                                                      0x0015
#define K_CP_REG_DATAOUT_1_inst                                                      0x0016
#define K_CP_REG_DATAOUT_2_inst                                                      0x0017
#define K_CP_REG_DATAOUT_3_inst                                                      0x0018
#define K_CP_REG_DATAOUT_data_shift                                                  (0)
#define K_CP_REG_DATAOUT_data_mask                                                   (0xFFFFFFFF)
#define K_CP_REG_DATAOUT_data(data)                                                  (0xFFFFFFFF&((data)<<0))
#define K_CP_REG_DATAOUT_data_src(data)                                              ((0xFFFFFFFF&(data))>>0)
#define K_CP_REG_DATAOUT_get_data(data)                                              ((0xFFFFFFFF&(data))>>0)


#define K_CP_REG_IV_0                                                                0x98015864
#define K_CP_REG_IV_1                                                                0x98015868
#define K_CP_REG_IV_2                                                                0x9801586C
#define K_CP_REG_IV_3                                                                0x98015870
#define K_CP_REG_IV_0_reg_addr                                                       "0xD8015864"
#define K_CP_REG_IV_1_reg_addr                                                       "0xD8015868"
#define K_CP_REG_IV_2_reg_addr                                                       "0xD801586C"
#define K_CP_REG_IV_3_reg_addr                                                       "0xD8015870"
#define K_CP_REG_IV_0_reg                                                            0xD8015864
#define K_CP_REG_IV_1_reg                                                            0xD8015868
#define K_CP_REG_IV_2_reg                                                            0xD801586C
#define K_CP_REG_IV_3_reg                                                            0xD8015870
#define set_K_CP_REG_IV_0_reg(data)   (*((volatile unsigned int*) K_CP_REG_IV_0_reg)=data)
#define set_K_CP_REG_IV_1_reg(data)   (*((volatile unsigned int*) K_CP_REG_IV_1_reg)=data)
#define set_K_CP_REG_IV_2_reg(data)   (*((volatile unsigned int*) K_CP_REG_IV_2_reg)=data)
#define set_K_CP_REG_IV_3_reg(data)   (*((volatile unsigned int*) K_CP_REG_IV_3_reg)=data)
#define get_K_CP_REG_IV_0_reg   (*((volatile unsigned int*) K_CP_REG_IV_0_reg))
#define get_K_CP_REG_IV_1_reg   (*((volatile unsigned int*) K_CP_REG_IV_1_reg))
#define get_K_CP_REG_IV_2_reg   (*((volatile unsigned int*) K_CP_REG_IV_2_reg))
#define get_K_CP_REG_IV_3_reg   (*((volatile unsigned int*) K_CP_REG_IV_3_reg))
#define K_CP_REG_IV_0_inst_adr                                                       "0x0019"
#define K_CP_REG_IV_1_inst_adr                                                       "0x001A"
#define K_CP_REG_IV_2_inst_adr                                                       "0x001B"
#define K_CP_REG_IV_3_inst_adr                                                       "0x001C"
#define K_CP_REG_IV_0_inst                                                           0x0019
#define K_CP_REG_IV_1_inst                                                           0x001A
#define K_CP_REG_IV_2_inst                                                           0x001B
#define K_CP_REG_IV_3_inst                                                           0x001C
#define K_CP_REG_IV_data_shift                                                       (0)
#define K_CP_REG_IV_data_mask                                                        (0xFFFFFFFF)
#define K_CP_REG_IV_data(data)                                                       (0xFFFFFFFF&((data)<<0))
#define K_CP_REG_IV_data_src(data)                                                   ((0xFFFFFFFF&(data))>>0)
#define K_CP_REG_IV_get_data(data)                                                   ((0xFFFFFFFF&(data))>>0)


#define K_CP_REG_SET                                                                 0x98015874
#define K_CP_REG_SET_reg_addr                                                        "0xD8015874"
#define K_CP_REG_SET_reg                                                             0xD8015874
#define set_K_CP_REG_SET_reg(data)   (*((volatile unsigned int*) K_CP_REG_SET_reg)=data)
#define get_K_CP_REG_SET_reg   (*((volatile unsigned int*) K_CP_REG_SET_reg))
#define K_CP_REG_SET_inst_adr                                                        "0x001D"
#define K_CP_REG_SET_inst                                                            0x001D
#define K_CP_REG_SET_write_enable3_shift                                             (17)
#define K_CP_REG_SET_write_enable3_mask                                              (0x00020000)
#define K_CP_REG_SET_write_enable3(data)                                             (0x00020000&((data)<<17))
#define K_CP_REG_SET_write_enable3_src(data)                                         ((0x00020000&(data))>>17)
#define K_CP_REG_SET_get_write_enable3(data)                                         ((0x00020000&(data))>>17)
#define K_CP_REG_SET_mode_shift                                                      (13)
#define K_CP_REG_SET_mode_mask                                                       (0x0001E000)
#define K_CP_REG_SET_mode(data)                                                      (0x0001E000&((data)<<13))
#define K_CP_REG_SET_mode_src(data)                                                  ((0x0001E000&(data))>>13)
#define K_CP_REG_SET_get_mode(data)                                                  ((0x0001E000&(data))>>13)
#define K_CP_REG_SET_write_enable2_shift                                             (5)
#define K_CP_REG_SET_write_enable2_mask                                              (0x00000020)
#define K_CP_REG_SET_write_enable2(data)                                             (0x00000020&((data)<<5))
#define K_CP_REG_SET_write_enable2_src(data)                                         ((0x00000020&(data))>>5)
#define K_CP_REG_SET_get_write_enable2(data)                                         ((0x00000020&(data))>>5)
#define K_CP_REG_SET_cbc_shift                                                       (4)
#define K_CP_REG_SET_cbc_mask                                                        (0x00000010)
#define K_CP_REG_SET_cbc(data)                                                       (0x00000010&((data)<<4))
#define K_CP_REG_SET_cbc_src(data)                                                   ((0x00000010&(data))>>4)
#define K_CP_REG_SET_get_cbc(data)                                                   ((0x00000010&(data))>>4)
#define K_CP_REG_SET_write_enable1_shift                                             (3)
#define K_CP_REG_SET_write_enable1_mask                                              (0x00000008)
#define K_CP_REG_SET_write_enable1(data)                                             (0x00000008&((data)<<3))
#define K_CP_REG_SET_write_enable1_src(data)                                         ((0x00000008&(data))>>3)
#define K_CP_REG_SET_get_write_enable1(data)                                         ((0x00000008&(data))>>3)
#define K_CP_REG_SET_reg_first_shift                                                 (2)
#define K_CP_REG_SET_reg_first_mask                                                  (0x00000004)
#define K_CP_REG_SET_reg_first(data)                                                 (0x00000004&((data)<<2))
#define K_CP_REG_SET_reg_first_src(data)                                             ((0x00000004&(data))>>2)
#define K_CP_REG_SET_get_reg_first(data)                                             ((0x00000004&(data))>>2)
#define K_CP_REG_SET_write_enable0_shift                                             (1)
#define K_CP_REG_SET_write_enable0_mask                                              (0x00000002)
#define K_CP_REG_SET_write_enable0(data)                                             (0x00000002&((data)<<1))
#define K_CP_REG_SET_write_enable0_src(data)                                         ((0x00000002&(data))>>1)
#define K_CP_REG_SET_get_write_enable0(data)                                         ((0x00000002&(data))>>1)
#define K_CP_REG_SET_reg_ende_shift                                                  (0)
#define K_CP_REG_SET_reg_ende_mask                                                   (0x00000001)
#define K_CP_REG_SET_reg_ende(data)                                                  (0x00000001&((data)<<0))
#define K_CP_REG_SET_reg_ende_src(data)                                              ((0x00000001&(data))>>0)
#define K_CP_REG_SET_get_reg_ende(data)                                              ((0x00000001&(data))>>0)


#define K_CP_REG_SET1                                                                0x98015878
#define K_CP_REG_SET1_reg_addr                                                       "0xD8015878"
#define K_CP_REG_SET1_reg                                                            0xD8015878
#define set_K_CP_REG_SET1_reg(data)   (*((volatile unsigned int*) K_CP_REG_SET1_reg)=data)
#define get_K_CP_REG_SET1_reg   (*((volatile unsigned int*) K_CP_REG_SET1_reg))
#define K_CP_REG_SET1_inst_adr                                                       "0x001E"
#define K_CP_REG_SET1_inst                                                           0x001E
#define K_CP_REG_SET1_dataout_byte_swap_shift                                        (13)
#define K_CP_REG_SET1_dataout_byte_swap_mask                                         (0x00002000)
#define K_CP_REG_SET1_dataout_byte_swap(data)                                        (0x00002000&((data)<<13))
#define K_CP_REG_SET1_dataout_byte_swap_src(data)                                    ((0x00002000&(data))>>13)
#define K_CP_REG_SET1_get_dataout_byte_swap(data)                                    ((0x00002000&(data))>>13)
#define K_CP_REG_SET1_datain_byte_swap_shift                                         (12)
#define K_CP_REG_SET1_datain_byte_swap_mask                                          (0x00001000)
#define K_CP_REG_SET1_datain_byte_swap(data)                                         (0x00001000&((data)<<12))
#define K_CP_REG_SET1_datain_byte_swap_src(data)                                     ((0x00001000&(data))>>12)
#define K_CP_REG_SET1_get_datain_byte_swap(data)                                     ((0x00001000&(data))>>12)
#define K_CP_REG_SET1_iv_byte_swap_shift                                             (11)
#define K_CP_REG_SET1_iv_byte_swap_mask                                              (0x00000800)
#define K_CP_REG_SET1_iv_byte_swap(data)                                             (0x00000800&((data)<<11))
#define K_CP_REG_SET1_iv_byte_swap_src(data)                                         ((0x00000800&(data))>>11)
#define K_CP_REG_SET1_get_iv_byte_swap(data)                                         ((0x00000800&(data))>>11)
#define K_CP_REG_SET1_key_byte_swap_shift                                            (10)
#define K_CP_REG_SET1_key_byte_swap_mask                                             (0x00000400)
#define K_CP_REG_SET1_key_byte_swap(data)                                            (0x00000400&((data)<<10))
#define K_CP_REG_SET1_key_byte_swap_src(data)                                        ((0x00000400&(data))>>10)
#define K_CP_REG_SET1_get_key_byte_swap(data)                                        ((0x00000400&(data))>>10)
#define K_CP_REG_SET1_des_key_order_shift                                            (9)
#define K_CP_REG_SET1_des_key_order_mask                                             (0x00000200)
#define K_CP_REG_SET1_des_key_order(data)                                            (0x00000200&((data)<<9))
#define K_CP_REG_SET1_des_key_order_src(data)                                        ((0x00000200&(data))>>9)
#define K_CP_REG_SET1_get_des_key_order(data)                                        ((0x00000200&(data))>>9)
#define K_CP_REG_SET1_key_mode_shift                                                 (6)
#define K_CP_REG_SET1_key_mode_mask                                                  (0x000001C0)
#define K_CP_REG_SET1_key_mode(data)                                                 (0x000001C0&((data)<<6))
#define K_CP_REG_SET1_key_mode_src(data)                                             ((0x000001C0&(data))>>6)
#define K_CP_REG_SET1_get_key_mode(data)                                             ((0x000001C0&(data))>>6)
#define K_CP_REG_SET1_iv_mode_shift                                                  (4)
#define K_CP_REG_SET1_iv_mode_mask                                                   (0x00000030)
#define K_CP_REG_SET1_iv_mode(data)                                                  (0x00000030&((data)<<4))
#define K_CP_REG_SET1_iv_mode_src(data)                                              ((0x00000030&(data))>>4)
#define K_CP_REG_SET1_get_iv_mode(data)                                              ((0x00000030&(data))>>4)
#define K_CP_REG_SET1_input_mode_shift                                               (2)
#define K_CP_REG_SET1_input_mode_mask                                                (0x0000000C)
#define K_CP_REG_SET1_input_mode(data)                                               (0x0000000C&((data)<<2))
#define K_CP_REG_SET1_input_mode_src(data)                                           ((0x0000000C&(data))>>2)
#define K_CP_REG_SET1_get_input_mode(data)                                           ((0x0000000C&(data))>>2)
#define K_CP_REG_SET1_output_mode_shift                                              (0)
#define K_CP_REG_SET1_output_mode_mask                                               (0x00000003)
#define K_CP_REG_SET1_output_mode(data)                                              (0x00000003&((data)<<0))
#define K_CP_REG_SET1_output_mode_src(data)                                          ((0x00000003&(data))>>0)
#define K_CP_REG_SET1_get_output_mode(data)                                          ((0x00000003&(data))>>0)


#define K_CP_REG_SET2                                                                0x9801587c
#define K_CP_REG_SET2_reg_addr                                                       "0xD801587C"
#define K_CP_REG_SET2_reg                                                            0xD801587C
#define set_K_CP_REG_SET2_reg(data)   (*((volatile unsigned int*) K_CP_REG_SET2_reg)=data)
#define get_K_CP_REG_SET2_reg   (*((volatile unsigned int*) K_CP_REG_SET2_reg))
#define K_CP_REG_SET2_inst_adr                                                       "0x001F"
#define K_CP_REG_SET2_inst                                                           0x001F
#define K_CP_REG_SET2_output_entry_shift                                             (24)
#define K_CP_REG_SET2_output_entry_mask                                              (0x7F000000)
#define K_CP_REG_SET2_output_entry(data)                                             (0x7F000000&((data)<<24))
#define K_CP_REG_SET2_output_entry_src(data)                                         ((0x7F000000&(data))>>24)
#define K_CP_REG_SET2_get_output_entry(data)                                         ((0x7F000000&(data))>>24)
#define K_CP_REG_SET2_input_entry_shift                                              (16)
#define K_CP_REG_SET2_input_entry_mask                                               (0x007F0000)
#define K_CP_REG_SET2_input_entry(data)                                              (0x007F0000&((data)<<16))
#define K_CP_REG_SET2_input_entry_src(data)                                          ((0x007F0000&(data))>>16)
#define K_CP_REG_SET2_get_input_entry(data)                                          ((0x007F0000&(data))>>16)
#define K_CP_REG_SET2_key_entry_shift                                                (8)
#define K_CP_REG_SET2_key_entry_mask                                                 (0x00007F00)
#define K_CP_REG_SET2_key_entry(data)                                                (0x00007F00&((data)<<8))
#define K_CP_REG_SET2_key_entry_src(data)                                            ((0x00007F00&(data))>>8)
#define K_CP_REG_SET2_get_key_entry(data)                                            ((0x00007F00&(data))>>8)
#define K_CP_REG_SET2_iv_entry_shift                                                 (0)
#define K_CP_REG_SET2_iv_entry_mask                                                  (0x0000007F)
#define K_CP_REG_SET2_iv_entry(data)                                                 (0x0000007F&((data)<<0))
#define K_CP_REG_SET2_iv_entry_src(data)                                             ((0x0000007F&(data))>>0)
#define K_CP_REG_SET2_get_iv_entry(data)                                             ((0x0000007F&(data))>>0)


#define K_CP_REG_KEY_1_0                                                             0x98015880
#define K_CP_REG_KEY_1_1                                                             0x98015884
#define K_CP_REG_KEY_1_2                                                             0x98015888
#define K_CP_REG_KEY_1_3                                                             0x9801588C
#define K_CP_REG_KEY_1_0_reg_addr                                                    "0xD8015880"
#define K_CP_REG_KEY_1_1_reg_addr                                                    "0xD8015884"
#define K_CP_REG_KEY_1_2_reg_addr                                                    "0xD8015888"
#define K_CP_REG_KEY_1_3_reg_addr                                                    "0xD801588C"
#define K_CP_REG_KEY_1_0_reg                                                         0xD8015880
#define K_CP_REG_KEY_1_1_reg                                                         0xD8015884
#define K_CP_REG_KEY_1_2_reg                                                         0xD8015888
#define K_CP_REG_KEY_1_3_reg                                                         0xD801588C
#define set_K_CP_REG_KEY_1_0_reg(data)   (*((volatile unsigned int*) K_CP_REG_KEY_1_0_reg)=data)
#define set_K_CP_REG_KEY_1_1_reg(data)   (*((volatile unsigned int*) K_CP_REG_KEY_1_1_reg)=data)
#define set_K_CP_REG_KEY_1_2_reg(data)   (*((volatile unsigned int*) K_CP_REG_KEY_1_2_reg)=data)
#define set_K_CP_REG_KEY_1_3_reg(data)   (*((volatile unsigned int*) K_CP_REG_KEY_1_3_reg)=data)
#define get_K_CP_REG_KEY_1_0_reg   (*((volatile unsigned int*) K_CP_REG_KEY_1_0_reg))
#define get_K_CP_REG_KEY_1_1_reg   (*((volatile unsigned int*) K_CP_REG_KEY_1_1_reg))
#define get_K_CP_REG_KEY_1_2_reg   (*((volatile unsigned int*) K_CP_REG_KEY_1_2_reg))
#define get_K_CP_REG_KEY_1_3_reg   (*((volatile unsigned int*) K_CP_REG_KEY_1_3_reg))
#define K_CP_REG_KEY_1_0_inst_adr                                                    "0x0020"
#define K_CP_REG_KEY_1_1_inst_adr                                                    "0x0021"
#define K_CP_REG_KEY_1_2_inst_adr                                                    "0x0022"
#define K_CP_REG_KEY_1_3_inst_adr                                                    "0x0023"
#define K_CP_REG_KEY_1_0_inst                                                        0x0020
#define K_CP_REG_KEY_1_1_inst                                                        0x0021
#define K_CP_REG_KEY_1_2_inst                                                        0x0022
#define K_CP_REG_KEY_1_3_inst                                                        0x0023
#define K_CP_REG_KEY_1_data_shift                                                    (0)
#define K_CP_REG_KEY_1_data_mask                                                     (0xFFFFFFFF)
#define K_CP_REG_KEY_1_data(data)                                                    (0xFFFFFFFF&((data)<<0))
#define K_CP_REG_KEY_1_data_src(data)                                                ((0xFFFFFFFF&(data))>>0)
#define K_CP_REG_KEY_1_get_data(data)                                                ((0xFFFFFFFF&(data))>>0)


#define CP_DBG                                                                       0x980150cc
#define CP_DBG_reg_addr                                                              "0xD80150CC"
#define CP_DBG_reg                                                                   0xD80150CC
#define set_CP_DBG_reg(data)   (*((volatile unsigned int*) CP_DBG_reg)=data)
#define get_CP_DBG_reg   (*((volatile unsigned int*) CP_DBG_reg))
#define CP_DBG_inst_adr                                                              "0x0033"
#define CP_DBG_inst                                                                  0x0033
#define CP_DBG_dbg_sel1_shift                                                        (6)
#define CP_DBG_dbg_sel1_mask                                                         (0x000007C0)
#define CP_DBG_dbg_sel1(data)                                                        (0x000007C0&((data)<<6))
#define CP_DBG_dbg_sel1_src(data)                                                    ((0x000007C0&(data))>>6)
#define CP_DBG_get_dbg_sel1(data)                                                    ((0x000007C0&(data))>>6)
#define CP_DBG_dbg_sel0_shift                                                        (1)
#define CP_DBG_dbg_sel0_mask                                                         (0x0000003E)
#define CP_DBG_dbg_sel0(data)                                                        (0x0000003E&((data)<<1))
#define CP_DBG_dbg_sel0_src(data)                                                    ((0x0000003E&(data))>>1)
#define CP_DBG_get_dbg_sel0(data)                                                    ((0x0000003E&(data))>>1)
#define CP_DBG_dbg_en_shift                                                          (0)
#define CP_DBG_dbg_en_mask                                                           (0x00000001)
#define CP_DBG_dbg_en(data)                                                          (0x00000001&((data)<<0))
#define CP_DBG_dbg_en_src(data)                                                      ((0x00000001&(data))>>0)
#define CP_DBG_get_dbg_en(data)                                                      ((0x00000001&(data))>>0)


#endif
