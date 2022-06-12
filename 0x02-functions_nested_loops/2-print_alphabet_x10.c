#include "main.h"

/**
 * print_alphabet_x10 - see description
 *
 * Description: prints 10 times the alphabet, in lowercase, followed by a new line.
 *
 * Returns: void
 */

void print_alphabet_x10(void)
{
	int i;
	char lc;

	for (i = 0; i < 10; i++)
	{
		for (lc = 'a'; lc <= 'z'; lc++)
		{
			_putchar(lc);
		}
		_putchar('\n');
	}
}
