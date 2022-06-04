#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int n;
	char lc;

	for (n = '0'; n <= '9'; n++)
		putchar(n);
	for (lc = 'a'; lc <= 'f'; lc++)
		putchar(lc);
	putchar('\n');

	return (0);
}
