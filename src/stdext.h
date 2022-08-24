#ifndef _NTR_STDEXT_H_
#define _NTR_STDEXT_H_ 1
#include <stdio.h>


#ifndef HAVE_STRNLEN
# include <stddef.h>
// Safe strlen because it's not standard
	extern size_t strnlen(const char *string, size_t maxlen);
#endif

// reverse string
void strrev(char *arr, int start, int end);
// int to string
char *itoa(int number, char *arr, int base);
// get name of pid, linux only
const char *pidname(int pid);

#endif /* ifndef _NTR_STDEXT_H_ */

