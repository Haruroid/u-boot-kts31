#ifndef SET_MUX_UR2
#define SET_MUX_UR1_UR2 \
	set_ISO_MUXPAD0_reg(get_ISO_MUXPAD0_reg | 0x5); \
	set_ISO_MUXPAD1_reg(get_ISO_MUXPAD1_reg | 0x40000900); \
	set_SB2_MUXPAD5_reg(0x00000051);  /* ur1_loc*/

#define SET_MUX_UR2 \
	set_ISO_MUXPAD0_reg(get_ISO_MUXPAD0_reg | 0x5); \
	set_ISO_MUXPAD1_reg(get_ISO_MUXPAD1_reg | 0x40000900);

#endif
/*
ISO_MUXPAD1[31:30]=2b'01 for uart2 location
ISO_MUXPAD1[11:9]=3b'100 for UR2_TX
ISO_MUXPAD1[8:6]=3b'100 for UR2_RX

ISO_MUXPAD0[3:2]=2b'01 for UR2_RTS_N
ISO_MUXPAD0[1:0]=2b'01 for UR2_CTS_N 
*/
