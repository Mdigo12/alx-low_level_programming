#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Program entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char lc;

	for (lc = 'a'; lc <= 'z'; lc++)
		putchar(lc);
	putchar('\n');

	return (0);
}
