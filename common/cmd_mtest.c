#include <common.h>
#include <command.h>
#include <module_test.h>

int do_mtest ( cmd_tbl_t *cmdtp, int flag, int argc, char * const argv[])
{
	printf ("Run test code\n\n\n");	
	module_test();

	return 0;
}

U_BOOT_CMD(
	test,   2,   1,     do_mtest,
	"run test code",
	"test.........\n"
);
