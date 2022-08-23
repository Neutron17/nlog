#include <stdio.h>
#include <nlog/log.h>

int main(int argc, char *argv[]) {
	loginit(L_ALL, L_ALL);
	LOG(L_ERR, "hi");
	logdestroy();
	return 0;
}
