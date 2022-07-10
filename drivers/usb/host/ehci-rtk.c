/*
 * SAMSUNG EXYNOS USB HOST EHCI Controller
 *
 * Copyright (C) 2012 Samsung Electronics Co.Ltd
 *	Vivek Gautam <gautam.vivek@samsung.com>
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of
 * the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301 USA
 */

#include <common.h>
#include <usb.h>
#include <asm/arch/usb.h>
//#include <asm/arch/ehci.h>
//#include <asm/arch/system.h>
//#include <asm/arch/power.h>
#include "ehci.h"

#define REG_WRAP_VStatusOut2	0x24//(0x18013824)
#define REG_EHCI_INSNREG05		0xA4//(0x180130A4)

#define USB_ST_BUSY	(1<<17)

struct usb2phy {
	int size;
	u8 *addr;
	u8 *data;
};

struct ctrl_data {
	void *ehci_addr;
	void *wrap_addr;

	struct usb2phy u2phy;
};


#if 0
struct rtk_usb_phy_data_s {
	char addr;
	char data;
};

static struct rtk_usb_phy_data_s phy_page0_default_setting[] = {
	{0xe0, 0x61},
	{0xe0, 0xe1},
	{0xe2, 0x9a},
	{0xe4, 0xd6},
	{0xe5, 0x1d},
	{0xe6, 0xc0},
	{0xf1, 0x9c},
};

static struct rtk_usb_phy_data_s phy_page1_default_setting[] = {
	{0xe0, 0x25},
	{0xe1, 0xaf},
};
#endif

static int utmi_wait_register(u32 reg, u32 mask, u32 result)
{
	uint timeout = 10;
	while (((__raw_readl((volatile u32*)reg) & mask) != result) && timeout--) {
		udelay(100);
		if (timeout <= 0) {
			printf("%s: \033[0:32:31m Can't program USB phy\033[m\n",__func__);
			return -1;
		}
	}
	return 0;
}
static char rtk_usb_phy_read(struct ctrl_data ctrl, char addr)
{
	volatile unsigned int regVal;

	utmi_wait_register((u32)ctrl.ehci_addr + REG_EHCI_INSNREG05, USB_ST_BUSY, 0);

	// VCtrl = low nibble of addr, VLoadM = 1
	regVal = (1 << 13) | 	// Port num
			 (1 << 12) |	// vload
			 ((addr & 0x0f) << 8);	// vcontrol
	__raw_writel(regVal, (volatile u32*) (ctrl.ehci_addr + REG_EHCI_INSNREG05));
	utmi_wait_register((u32)ctrl.ehci_addr + REG_EHCI_INSNREG05, USB_ST_BUSY, 0);

	// VCtrl = low nibble of addr, VLoadM = 0
	regVal &= ~(1 << 12);
	__raw_writel(regVal, (volatile u32*)(ctrl.ehci_addr + REG_EHCI_INSNREG05));
	utmi_wait_register((u32)ctrl.ehci_addr + REG_EHCI_INSNREG05, USB_ST_BUSY, 0);

	// VCtrl = high nibble of addr, VLoadM = 1
	regVal = (1 << 13) | 	// Port num
			 (1 << 12) |	// vload
			 ((addr & 0xf0) << 4);	// vcontrol
	__raw_writel(regVal, (volatile u32*)(ctrl.ehci_addr + REG_EHCI_INSNREG05));
	utmi_wait_register((u32)ctrl.ehci_addr + REG_EHCI_INSNREG05, USB_ST_BUSY, 0);

	// VCtrl = high nibble of addr, VLoadM = 0
	regVal &= ~(1 << 12);
	__raw_writel(regVal, (volatile u32*)(ctrl.ehci_addr + REG_EHCI_INSNREG05));
	utmi_wait_register((u32)ctrl.ehci_addr + REG_EHCI_INSNREG05, USB_ST_BUSY, 0);

	regVal = __raw_readl(ctrl.ehci_addr + REG_EHCI_INSNREG05);
	return (char) (regVal & 0xff);
}
static int rtk_usb_phy_write(struct ctrl_data ctrl, char addr, char data)
{
	volatile unsigned int regVal;

	__raw_writeb(data, (volatile u32*)(ctrl.wrap_addr + REG_WRAP_VStatusOut2));
	utmi_wait_register((u32) ctrl.ehci_addr + REG_EHCI_INSNREG05, USB_ST_BUSY, 0);

	// VCtrl = low nibble of addr, VLoadM = 1
	regVal = (1 << 13) | 	// Port num
			 (1 << 12) |	// vload
			 ((addr & 0x0f) << 8);	// vcontrol
	__raw_writel(regVal, (volatile u32*) (ctrl.ehci_addr + REG_EHCI_INSNREG05));
	utmi_wait_register((u32) ctrl.ehci_addr + REG_EHCI_INSNREG05, USB_ST_BUSY, 0);

	// VCtrl = low nibble of addr, VLoadM = 0
	regVal &= ~(1 << 12);
	__raw_writel(regVal, (volatile u32*)(ctrl.ehci_addr + REG_EHCI_INSNREG05));
	utmi_wait_register((u32) ctrl.ehci_addr + REG_EHCI_INSNREG05, USB_ST_BUSY, 0);

	// VCtrl = high nibble of addr, VLoadM = 1
	regVal = (1 << 13) | 	// Port num
			 (1 << 12) |	// vload
			 ((addr & 0xf0) << 4);	// vcontrol
	__raw_writel(regVal, (volatile u32*)(ctrl.ehci_addr + REG_EHCI_INSNREG05));
	utmi_wait_register((u32) ctrl.ehci_addr + REG_EHCI_INSNREG05, USB_ST_BUSY, 0);

	// VCtrl = high nibble of addr, VLoadM = 0
	regVal &= ~(1 << 12);
	__raw_writel(regVal, (volatile u32*)(ctrl.ehci_addr + REG_EHCI_INSNREG05));
	utmi_wait_register((u32)ctrl.ehci_addr + REG_EHCI_INSNREG05, USB_ST_BUSY, 0);

	return 0;
}

/* Setup the EHCI host controller. */
int rtk_usb_phy_init(struct ctrl_data ctrl)
{
#if 1
	int i;
	struct usb2phy u2phy = ctrl.u2phy;
//	printf("%s %d\n",__func__, __LINE__);

	for (i=0; i<u2phy.size; i++) {
		if (rtk_usb_phy_write(ctrl, u2phy.addr[i], u2phy.data[i])) {
			printf("[%s:%d], Error : addr = 0x%x, value = 0x%x\n",
				__FUNCTION__, __LINE__,
				u2phy.addr[i], u2phy.data[i]);
			return -1;
		} else {
			mdelay(100);
			debug("[%s:%d], GOOD : addr = 0x%x, value = 0x%x, verify = 0x%x\n",
				__FUNCTION__, __LINE__,
				u2phy.addr[i], u2phy.data[i], rtk_usb_phy_read(ctrl, u2phy.addr[i] - 0x20));
		}
	}

	mdelay(100);
	rtk_usb_phy_write(ctrl, 0xf4, 0x9b);
	for (i=0xC0; i<0xC7; ++i) {
			debug("[%s:%d], CHECK page0 addr = 0x%x, value = 0x%x\n",
				__FUNCTION__, __LINE__, i, rtk_usb_phy_read(ctrl, i));
	}
	for (i=0xD0; i<0xD7; ++i) {
			debug("[%s:%d], CHECK page0 addr = 0x%x, value = 0x%x\n",
				__FUNCTION__, __LINE__, i, rtk_usb_phy_read(ctrl, i));
	}
	rtk_usb_phy_write(ctrl, 0xf4, 0xbb);
	for (i=0xC0; i<0xC7; ++i) {
			debug("[%s:%d], CHECK page1 addr = 0x%x, value = 0x%x\n",
				__FUNCTION__, __LINE__, i, rtk_usb_phy_read(ctrl, i));
	}

	return 0;

#else
	int i;

//	printf("%s %d\n",__func__, __LINE__);
	rtk_usb_phy_write(0xf4, 0x9b);	// set page 0

	for (i=0; i<ARRAY_SIZE(phy_page0_default_setting); i++) {
		if (rtk_usb_phy_write(phy_page0_default_setting[i].addr, phy_page0_default_setting[i].data)) {
			printf("[%s:%d], Error : addr = 0x%x, value = 0x%x\n",
				__FUNCTION__, __LINE__,
				phy_page0_default_setting[i].addr,
				phy_page0_default_setting[i].data);
			return -1;
		}
	}

	rtk_usb_phy_write(0xf4, 0xbb);	// set page 1

	for (i=0; i<ARRAY_SIZE(phy_page1_default_setting); i++) {
		if (rtk_usb_phy_write(phy_page1_default_setting[i].addr, phy_page1_default_setting[i].data)) {
			printf("[%s:%d], Error : addr = 0x%x, value = 0x%x\n",
				__FUNCTION__, __LINE__,
				phy_page1_default_setting[i].addr,
				phy_page1_default_setting[i].data);
			return -1;
		}
	}
	mdelay(100);
	return 0;
#endif
}

#if 0
/* Reset the EHCI host controller. */
static void reset_usb_phy(void)
{
	/* HOST_PHY reset */
	setbits_le32(&usb->usbphyctrl0,
			HOST_CTRL0_PHYSWRST |
			HOST_CTRL0_PHYSWRSTALL |
			HOST_CTRL0_SIDDQ |
			HOST_CTRL0_FORCESUSPEND |
			HOST_CTRL0_FORCESLEEP);

	set_usbhost_phy_ctrl(POWER_USB_HOST_PHY_CTRL_DISABLE);
}
#endif

/*
 * EHCI-initialization
 * Create the appropriate control structures to manage
 * a new EHCI host controller.
 */
int ehci_hcd_init(int index, struct ehci_hccr **hccr, struct ehci_hcor **hcor)
{
	struct ctrl_data ctrl;
	ctrl.ehci_addr = realtek_get_base_usb_ehci(index);
	ctrl.wrap_addr = realtek_get_base_usb_ehci_phy(index);

	ctrl.u2phy.size = realtek_get_ehci_u2phy_size(index)[0];
	ctrl.u2phy.addr = realtek_get_ehci_u2phy_addr(index);
	ctrl.u2phy.data = realtek_get_ehci_u2phy_data(index);

	rtk_usb_phy_init(ctrl);

	*hccr = (struct ehci_hccr *)realtek_get_base_usb_ehci(index);
	*hcor = (struct ehci_hcor *)((uint32_t) *hccr
				+ HC_LENGTH(ehci_readl(&(*hccr)->cr_capbase)));

	debug("Realtek-ehci: init hccr %x and hcor %x hc_length %d\n",
		(uint32_t)*hccr, (uint32_t)*hcor,
		(uint32_t)HC_LENGTH(ehci_readl(&(*hccr)->cr_capbase)));

	return 0;
}

/*
 * Destroy the appropriate control structures corresponding
 * the EHCI host controller.
 */
int ehci_hcd_stop(int index)
{

	return 0;
}
