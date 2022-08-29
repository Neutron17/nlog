/* Test2
 *  - speed test
 * testing L_NONE
 * compile with -lnlog
 * run with ```time ./test2```
*/
#include <nlog/log.h>

int main(int argc, char *argv[]) {
	loginit(L_NONE, L_NONE);
	for(int i = 0; i < 10000000; i++)
		LOG(L_INFO, "hello");
	logdestroy();
	return 0;
}

