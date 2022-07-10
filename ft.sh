INC_FILE="examples/flash_writer_u/1295_force_emmc_nS_nE.inc"
HW_SETTING_800="RTD1295_hwsetting_BOOT_2DDR3_4Gb_s800"
HW_SETTING_1333="RTD1295_hwsetting_BOOT_2DDR3_4Gb_s1333"
HW_SETTING_1600="RTD1295_hwsetting_BOOT_2DDR3_4Gb_s1600"
HW_SETTING_ANY="RTD1295_hwsetting_BOOT_2DDR3_4Gb_s.*"

echo "Build FT U-Boot for DDR-800"
sed -i "s/${HW_SETTING_ANY}/${HW_SETTING_800}/" ${INC_FILE}
make distclean; make rtd1295_qa_emmc_ft_config; make
cp -f ./examples/flash_writer_u/dvrboot.exe.bin ./1295_ft_emmc_800.bin

echo "Build FT U-Boot for DDR-1333"
sed -i "s/${HW_SETTING_800}/${HW_SETTING_1333}/" ${INC_FILE}
make
cp -f ./examples/flash_writer_u/dvrboot.exe.bin ./1295_ft_emmc_1333.bin

sed -i "s/${HW_SETTING_1333}/${HW_SETTING_1600}/" ${INC_FILE}

