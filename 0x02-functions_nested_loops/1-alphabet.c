#include "main.h"

/**
 * print_alphabet - See description
 *
 * Description: prints the alphabet, in lowercase, followed by a new line
 *
 * Return: 0 (Success)
 */

void print_alphabet(void)
{
	char lc;

	for (lc = 'a'; lc <= 'z'; lc++)
	{
		_putchar(lc);
	}
	_putchar('\n');
}
