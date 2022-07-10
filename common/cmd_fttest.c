#include <common.h>
#include <command.h>
#include <ft_test.h>



int do_fttest ( cmd_tbl_t *cmdtp, int flag, int argc, char * const argv[])
{
	printf ("Run test code\n\n\n");	
	ft_test_0();
	return 0;
}


U_BOOT_CMD(
	test,   2,   1,     do_fttest,
	"run test code",
	"test.........\n"
);
