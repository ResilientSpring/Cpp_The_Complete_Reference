#include <stdio.h>

#define mkstr(s) #s

int main(void)
{
	printf(mkstr(I like C++));

	return 0;
}