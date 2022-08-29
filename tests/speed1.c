/* Test3
 *  - speed test
 * testing speed
 * compile with -lnlog
 * run with ```time ./test2```
*/
#include <nlog/log.h>

int main(int argc, char *argv[]) {
	loginit(L_NONE, L_ALL);
	for(int i = 0; i < 1000000; i++)
		LOG(L_INFO, "hello");
	logdestroy();
	return 0;
}

