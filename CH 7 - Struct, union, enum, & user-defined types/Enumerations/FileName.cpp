#include <stdio.h>

enum
{
	MAXLINE = 1000,
	BUFSIZE = 1024

};

int main()
{
	int buf[MAXLINE];

	buf[0] = 0;

	buf[1] = 1; 

	buf[2] = 2; 

	printf("Values in buf:\n");

	for (int i = 0; i < 3; i++)
	{
		printf("buf[%d] = %d\n", i, buf[i]);
	}

}