#ifndef _REALTEK_USB_H_
#define _REALTEK_USB_H_

#include "cpu.h"

#define RTD1295_CRT_BASE    				0x98000000
/////////////////////////////////////////////////////////////
//USB register base
#define RTD1295_USB_EHCI_WRAPPER_BASE		0x98013800
#define RTD1295_USB_DWC3_WRAPPER_BASE_DRD	0x98013200 //DRD
#define RTD1295_USB_DWC3_WRAPPER_BASE_U2H	0x98013C00 //U2 host
#define RTD1295_USB_DWC3_WRAPPER_BASE_U3H	0x98013E00 //U3 host
#define RTD1295_USB_HOST_EHCI_BASE  		0x98013000
#define RTD1295_USB_DWC3_XHCI_BASE_DRD		0x98020000
#define RTD1295_USB_DWC3_XHCI_BASE_U2H		0x98029000
#define RTD1295_USB_DWC3_XHCI_BASE_U3H		0x981F0000
#define RTD1295_USBOTG_BASE     			0x981E0000

#define RTD1295_USB_TYPEC_CTRL_CC1_0 		0x9801334C
#define RTD1295_USB_TYPEC_CTRL_CC1_1 		0x98013350
#define RTD1295_USB_TYPEC_CTRL_CC2_0 		0x98013354
#define RTD1295_USB_TYPEC_CTRL_CC2_1 		0x98013358
#define RTD1295_USB_TYPEC_STS 				0x9801335C
#define RTD1295_USB_TYPEC_CTR 				0x98013360

#define REALTEK_BASE(device, base)			\
static inline unsigned int __attribute__((no_instrument_function)) \
	realtek_get_base_##device(int index)	\
{									\
	switch (index) { 				\
	case 0: 						\
		return RTD1295_##base;		\
	default: 						\
		return 0; 					\
	} 								\
}

#define REALTEK_BASE_DWC3(device, base)		\
static inline unsigned int __attribute__((no_instrument_function)) \
	realtek_get_base_##device(int index)	\
{											\
	switch (index) { 						\
	case 0: 								\
		return RTD1295_##base##_DRD;		\
	case 1: 								\
		return RTD1295_##base##_U2H;		\
	case 2: 								\
		return RTD1295_##base##_U3H;		\
	default: 								\
		return 0; 							\
	} 										\
}

REALTEK_BASE(usb_ehci_phy,  USB_EHCI_WRAPPER_BASE)
REALTEK_BASE_DWC3(usb_xhci_phy,  USB_DWC3_WRAPPER_BASE)
REALTEK_BASE(usb_ehci, USB_HOST_EHCI_BASE)
REALTEK_BASE_DWC3(usb_xhci, USB_DWC3_XHCI_BASE)
REALTEK_BASE(usb_otg,  USBOTG_BASE)

// EHCI phy data
#define ehci_u2phy_ehci_size_revA {21} //page0 + page1
#define ehci_u2phy_ehci_addr_revA {0xF4, 0xE0, 0xE1, 0xE2, 0xE3, 0xE4, 0xE5, 0xE6, 0xE7, 0xF0, 0xF1, 0xF5, 0xF4, 0xE0, 0xE1, 0xE2, 0xE3, 0xE4, 0xE5, 0xE6, 0xE7}
#define ehci_u2phy_ehci_data_revA {0x9B, 0xE0, 0x30, 0x3A, 0x8D, 0x69, 0x65, 0x91, 0x81, 0xFC, 0x8C, 0x81, 0xBB, 0x25, 0xEF, 0x60, 0x00, 0x00, 0x0F, 0x18, 0xE3}

#define ehci_u2phy_ehci_size_revB ehci_u2phy_ehci_size_revA
#define ehci_u2phy_ehci_addr_revB ehci_u2phy_ehci_addr_revA
#define ehci_u2phy_ehci_data_revB ehci_u2phy_ehci_data_revA
#define ehci_u2phy_ehci_size_revC ehci_u2phy_ehci_size_revB
#define ehci_u2phy_ehci_addr_revC ehci_u2phy_ehci_addr_revB
#define ehci_u2phy_ehci_data_revC ehci_u2phy_ehci_data_revB

// DWC3 DRD phy data
#define dwc3_u2phy_drd_size_revA {21} //page0 + page1
#define dwc3_u2phy_drd_addr_revA {0xF4, 0xE0, 0xE1, 0xE2, 0xE3, 0xE4, 0xE5, 0xE6, 0xE7, 0xF0, 0xF1, 0xF5, 0xF4, 0xE0, 0xE1, 0xE2, 0xE3, 0xE4, 0xE5, 0xE6, 0xE7}
#define dwc3_u2phy_drd_data_revA {0x9B, 0xE0, 0x30, 0x3A, 0x8D, 0x68, 0x65, 0x91, 0x81, 0xFC, 0x8C, 0x81, 0xBB, 0x25, 0xEF, 0x60, 0x00, 0x00, 0x0F, 0x18, 0xE3}

#define dwc3_u2phy_drd_size_revB dwc3_u2phy_drd_size_revA
#define dwc3_u2phy_drd_addr_revB dwc3_u2phy_drd_addr_revA
#define dwc3_u2phy_drd_data_revB dwc3_u2phy_drd_data_revA

#define dwc3_u2phy_drd_size_revC dwc3_u2phy_drd_size_revB
#define dwc3_u2phy_drd_addr_revC dwc3_u2phy_drd_addr_revB
#define dwc3_u2phy_drd_data_revC dwc3_u2phy_drd_data_revB

#define dwc3_u3phy_drd_size_revA {0x33}
#define dwc3_u3phy_drd_addr_revA \
	{  0x00,   0x01,   0x02,   0x03,   0x04,   0x05,   0x06,   0x07,   0x08,   0x09,   0x0A,   0x0B,   0x0C,   0x0D,   0x0E,   0x0F, \
	   0x10,   0x11,   0x12,   0x13,   0x14,   0x15,   0x16,   0x17,   0x18,   0x19,   0x1A,   0x1B,   0x1C,   0x1D,   0x1E,   0x1F, \
	   0x20,   0x21,   0x22,   0x23,   0x24,   0x25,   0x26,   0x27,   0x28,   0x29,   0x2A,   0x2B,   0x2C,   0x2D,   0x2E,   0x2F, \
	   0x09,   0x09,   0x09}

#define dwc3_u3phy_drd_data_revA \
	{0x4008, 0xE04A, 0x6046, 0x27F1, 0x72F5, 0x2AD3, 0x000E, 0x2E00, 0x3591, 0x521C, 0xA600, 0xA905, 0xC000, 0xEF1C, 0x2000, 0x0000, \
	 0x000C, 0x4C00, 0xFC00, 0x0C81, 0xDE01, 0x0000, 0x0000, 0x0000, 0x0000, 0x4004, 0x1260, 0xFF00, 0xCB00, 0xA03F, 0xC2E0, 0x2807, \
	 0x945A, 0x88AA, 0x0057, 0xAB66, 0x0800, 0x0000, 0x040A, 0x01D6, 0xF802, 0x3080, 0x3082, 0x2078, 0xFFFF, 0xFFFF, 0x0000, 0x0040, \
	 0x521C, 0x501C, 0x521C}

#define dwc3_u3phy_drd_size_revB dwc3_u3phy_drd_size_revA
#define dwc3_u3phy_drd_addr_revB dwc3_u3phy_drd_addr_revA
#define dwc3_u3phy_drd_data_revB dwc3_u3phy_drd_data_revA

#define dwc3_u3phy_drd_size_revC dwc3_u3phy_drd_size_revB
#define dwc3_u3phy_drd_addr_revC dwc3_u3phy_drd_addr_revB
#define dwc3_u3phy_drd_data_revC dwc3_u3phy_drd_data_revB

// DWC3 U2host phy data
#define dwc3_u2phy_u2h_size_revA {21} //page0 + page1
#define dwc3_u2phy_u2h_addr_revA {0xF4, 0xE0, 0xE1, 0xE2, 0xE3, 0xE4, 0xE5, 0xE6, 0xE7, 0xF0, 0xF1, 0xF5, 0xF4, 0xE0, 0xE1, 0xE2, 0xE3, 0xE4, 0xE5, 0xE6, 0xE7}
#define dwc3_u2phy_u2h_data_revA {0x9B, 0xE0, 0x30, 0x3A, 0x8D, 0x66, 0x65, 0x91, 0x81, 0xFC, 0x8C, 0x81, 0xBB, 0x25, 0xEF, 0x60, 0x00, 0x00, 0x0F, 0x18, 0xE3}
#define dwc3_u2phy_u2h_size_revB dwc3_u2phy_u2h_size_revA
#define dwc3_u2phy_u2h_addr_revB dwc3_u2phy_u2h_addr_revA
#define dwc3_u2phy_u2h_data_revB dwc3_u2phy_u2h_data_revA
#define dwc3_u2phy_u2h_size_revC dwc3_u2phy_u2h_size_revB
#define dwc3_u2phy_u2h_addr_revC dwc3_u2phy_u2h_addr_revB
#define dwc3_u2phy_u2h_data_revC dwc3_u2phy_u2h_data_revB

#define dwc3_u3phy_u2h_size_revA {0} //U2Host no u3phy
#define dwc3_u3phy_u2h_addr_revA dwc3_u3phy_drd_addr_revA
#define dwc3_u3phy_u2h_data_revA dwc3_u3phy_drd_data_revA
#define dwc3_u3phy_u2h_size_revB {0} //U2Host no u3phy
#define dwc3_u3phy_u2h_addr_revB dwc3_u3phy_u2h_addr_revA
#define dwc3_u3phy_u2h_data_revB dwc3_u3phy_u2h_data_revA
#define dwc3_u3phy_u2h_size_revC {0} //U2Host no u3phy
#define dwc3_u3phy_u2h_addr_revC dwc3_u3phy_u2h_addr_revB
#define dwc3_u3phy_u2h_data_revC dwc3_u3phy_u2h_data_revB

// DWC3 U3Host phy data
#define dwc3_u2phy_u3h_size_revA {21} //page0 + page1
#define dwc3_u2phy_u3h_addr_revA {0xF4, 0xE0, 0xE1, 0xE2, 0xE3, 0xE4, 0xE5, 0xE6, 0xE7, 0xF0, 0xF1, 0xF5, 0xF4, 0xE0, 0xE1, 0xE2, 0xE3, 0xE4, 0xE5, 0xE6, 0xE7}
#define dwc3_u2phy_u3h_data_revA {0x9B, 0xE0, 0x30, 0x3A, 0x8D, 0x66, 0x65, 0x91, 0x81, 0xFC, 0x8C, 0x81, 0xBB, 0x25, 0xEF, 0x60, 0x00, 0x00, 0x0F, 0x18, 0xE3}
#define dwc3_u2phy_u3h_size_revB dwc3_u2phy_u3h_size_revA
#define dwc3_u2phy_u3h_addr_revB dwc3_u2phy_u3h_addr_revA
#define dwc3_u2phy_u3h_data_revB dwc3_u2phy_u3h_data_revA
#define dwc3_u2phy_u3h_size_revC dwc3_u2phy_u3h_size_revB
#define dwc3_u2phy_u3h_addr_revC dwc3_u2phy_u3h_addr_revB
#define dwc3_u2phy_u3h_data_revC dwc3_u2phy_u3h_data_revB

#define dwc3_u3phy_u3h_size_revA {0x33}
#define dwc3_u3phy_u3h_addr_revA \
	{  0x00,   0x01,   0x02,   0x03,   0x04,   0x05,   0x06,   0x07,   0x08,   0x09,   0x0A,   0x0B,   0x0C,   0x0D,   0x0E,   0x0F, \
	   0x10,   0x11,   0x12,   0x13,   0x14,   0x15,   0x16,   0x17,   0x18,   0x19,   0x1A,   0x1B,   0x1C,   0x1D,   0x1E,   0x1F, \
	   0x20,   0x21,   0x22,   0x23,   0x24,   0x25,   0x26,   0x27,   0x28,   0x29,   0x2A,   0x2B,   0x2C,   0x2D,   0x2E,   0x2F, \
	   0x09,   0x09,   0x09}

#define dwc3_u3phy_u3h_data_revA \
	{0x4008, 0xE04A, 0x6046, 0x27F1, 0x72F5, 0x2AD3, 0x000E, 0x2E00, 0x3591, 0x521C, 0xA600, 0xA905, 0xC000, 0xEF1C, 0x2000, 0x0000, \
	 0x000C, 0x4C00, 0xFC00, 0x0C81, 0xDE01, 0x0000, 0x0000, 0x0000, 0x0000, 0x4004, 0x1260, 0xFF00, 0xCB00, 0xA03F, 0xC2E0, 0x2807, \
	 0x9424, 0x284A, 0x0057, 0xAB66, 0x0800, 0x0000, 0x040A, 0x01D6, 0xF802, 0x3080, 0x3082, 0x2078, 0xFFFF, 0xFFFF, 0x0000, 0x0040, \
	 0x521C, 0x501C, 0x521C}

#define dwc3_u3phy_u3h_size_revB dwc3_u3phy_u3h_size_revA
#define dwc3_u3phy_u3h_addr_revB dwc3_u3phy_u3h_addr_revA
#define dwc3_u3phy_u3h_data_revB dwc3_u3phy_u3h_data_revA

#define dwc3_u3phy_u3h_size_revC dwc3_u3phy_u3h_size_revB
#define dwc3_u3phy_u3h_addr_revC dwc3_u3phy_u3h_addr_revB
#define dwc3_u3phy_u3h_data_revC dwc3_u3phy_u3h_data_revB


//1295 no other revision
#define _PHY_DATA(device, out, out_type, ctrl) 						\
static inline out_type* get_##device##_##ctrl##_##out(void) 		\
{ 																	\
	switch (SOC_REV_A/*get_cpu_revision()*/) { 									\
	case SOC_REV_A: { 												\
		static out_type revA[] = device##_##ctrl##_##out##_revA; 	\
		return revA; 												\
	} 																\
	case SOC_REV_B: { 												\
		static out_type revB[] = device##_##ctrl##_##out##_revB; 	\
		return revB; 												\
	} 																\
	case SOC_REV_C: { 												\
		static out_type revC[] = device##_##ctrl##_##out##_revC; 	\
		return revC; 												\
	} 																\
	default:{ 														\
		static out_type rev[] = device##_##ctrl##_##out##_revA; 	\
		return rev; 												\
	} 																\
	} 																\
}

#define REALTEK_PHY_DATA_BASE(device, out, out_type, ctrl1)			\
_PHY_DATA(device, out, out_type, ctrl1);  							\
static inline out_type* realtek_get_##device##_##out(int index) 	\
{																	\
	switch (index) { 												\
	case 0:															\
		return get_##device##_##ctrl1##_##out(); 					\
	default: 														\
		return 0; 													\
	} 																\
}

#define REALTEK_PHY_DATA_BASE2(device, out, out_type, ctrl1, ctrl2)			\
_PHY_DATA(device, out, out_type, ctrl1); 							\
_PHY_DATA(device, out, out_type, ctrl2); 							\
static inline out_type* realtek_get_##device##_##out(int index) 	\
{																	\
	switch (index) { 												\
	case 0:															\
		return get_##device##_##ctrl1##_##out(); 					\
	case 1: 														\
		return get_##device##_##ctrl2##_##out(); 					\
	default: 														\
		return 0; 													\
	} 																\
}

#define REALTEK_PHY_DATA_BASE3(device, out, out_type, ctrl1, ctrl2, ctrl3)			\
_PHY_DATA(device, out, out_type, ctrl1); 							\
_PHY_DATA(device, out, out_type, ctrl2); 							\
_PHY_DATA(device, out, out_type, ctrl3); 							\
static inline out_type* realtek_get_##device##_##out(int index) 	\
{																	\
	switch (index) { 												\
	case 0:															\
		return get_##device##_##ctrl1##_##out(); 					\
	case 1: 														\
		return get_##device##_##ctrl2##_##out(); 					\
	case 2: 														\
		return get_##device##_##ctrl3##_##out(); 					\
	default: 														\
		return 0; 													\
	} 																\
}

REALTEK_PHY_DATA_BASE(ehci_u2phy, size, int, ehci)
REALTEK_PHY_DATA_BASE(ehci_u2phy, addr, u8, ehci)
REALTEK_PHY_DATA_BASE(ehci_u2phy, data, u8, ehci)
REALTEK_PHY_DATA_BASE3(dwc3_u2phy, size, int, drd, u2h, u3h)
REALTEK_PHY_DATA_BASE3(dwc3_u2phy, addr, u8, drd, u2h, u3h)
REALTEK_PHY_DATA_BASE3(dwc3_u2phy, data, u8, drd, u2h, u3h)
REALTEK_PHY_DATA_BASE3(dwc3_u3phy, size, int, drd, u2h, u3h)
REALTEK_PHY_DATA_BASE3(dwc3_u3phy, addr, u8, drd, u2h, u3h)
REALTEK_PHY_DATA_BASE3(dwc3_u3phy, data, u16, drd, u2h, u3h)

#endif /* _REALTEK_USB_H_ */
