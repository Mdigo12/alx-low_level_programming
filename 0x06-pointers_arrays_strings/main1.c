#include "main.h"
#include <stdio.h>

/**
* main - check code
*
* Return: 0
*/
int main(void)
{
	char s1[98] = "Hello ";
	char s2[] = "World\n";
	char *p;

	printf("%s\n", s1);
	printf("%s\n", s1);
	p = _strncat(s1, s2, 1);
	printf("%s\n", s1);
	printf("%s\n", s2);
	printf("%s\n", p);
	p = _strncat(s1, s2, 1024);
	printf("%s\n", s1);
	printf("%s\n", s2);
	printf("%s\n", p);
	return (0);
}
