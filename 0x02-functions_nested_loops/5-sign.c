#include "main.h"

/**
 * print_sign - see description
 *
 * Description:  prints the sign of a number
 * @n: Any input number
 *
 * Return: 1 if n>0, 0 if n is 0, or  -1 if n<0
 */

int print_sign(int n)
{
	int val;

	if (n > 0)
	{
		val = 1;
		_putchar('+');
	}
	else if (n < 0)
	{
		val = -1;
	       _putchar('-');
	}
	else
	{
		val = 0;
		_putchar('0');
	}

	return (val);
}
