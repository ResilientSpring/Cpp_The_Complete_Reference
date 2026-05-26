#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

void check(char * a, char *b, int (*comp)(const char *, const char *));
int numcmp(const char *a, const char *b);

int main()
{

	char s1[80], s2[80];

	gets(s1);
	gets(s2);

	if (isalpha(*s1))
		check(s1, s2, strcmp);
	else
		check(s1, s2, numcmp);

	return 0;
}

