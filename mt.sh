echo "Build MT U-Boot"
make distclean; make rtd1295_qa_emmc_mt; make
cp -f ./examples/flash_writer_u/dvrboot.exe.bin ./1295_mt_emmc.bin
