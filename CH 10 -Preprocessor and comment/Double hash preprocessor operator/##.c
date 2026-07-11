#include <stdio.h>

#define concat(a, b) a##b

int main(void)
{
	int xy = 10;
	
	printf("%d\n", concat(x, y)); // This will print the value of xy, which is 10

	return 0;
}