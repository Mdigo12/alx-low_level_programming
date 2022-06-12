#include "main.h"

/**
 * main - Entry point
 *
 * Description: prints the alphabet, in lowercase, followed by a new line
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int i = 0;
	char lc[26] = print_alphabet();

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(lc[i]);
	}
	_putchar('\n');

	return (0);
}
