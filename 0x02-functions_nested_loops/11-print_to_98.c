#include "main.h"

/**
 * print_to_98 - Prints natural integers
 *
 * Description: Printn from integer n to 98
 * @n: Input integer
 *
 * Return: nothing (void function)
 */

void print_to_98(int n)
{
	int i;

	for (i = n; i <= 98; i++)
	{
		if (i != 98)
		{
			_putchar(i);
			_putchar(',');
			_putchar(' ');
		}
		else
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
