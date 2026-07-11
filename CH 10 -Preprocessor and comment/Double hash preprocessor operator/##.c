#include <stdio.h>

#define concat(a, b) a##b

int main(void)
{
	int xy = 10;
	
	printf("%d\n", concat(x, y)); 
	// The preprocessor transforms concat(x, y) into xy, i.e, printf("%d\n", xy);

	return 0;
}