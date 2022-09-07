/* minimal test program for libstb-hal
 * (C) 2012-2013 Stefan Seyfried
 * License: GPL v2 or later
 *
 * this does just test the input converter thread for now...
 */

#include <config.h>
#include <stdint.h>
#include <unistd.h>
#include <include/init.h>

int main(int argc __attribute__((unused)), char **argv __attribute__((unused)))
{
	hal_api_init();
	while (1)
	{
		sleep(1);
		if (! access("/tmp/endtest", R_OK))
		{
			unlink("/tmp/endtest");
			break;
		}
	};
	hal_api_exit();
	return 0;
}
