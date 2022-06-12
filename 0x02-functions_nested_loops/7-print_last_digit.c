#include "main.h"

/**
 * print_last_digit - see decription
 *
 * Description: Prints the last digit of an integer
 * @r: Integer input
 *
 * Return: last digit of an integer, m % 10
 */

int print_last_digit(int r)
{
	int m;

	if (r < 0)
	{
		m = (0 - r) % 10;
	}
	else
	{
		m = r % 10;
	}
	_putchar('0' + (m % 10));

	return (m % 10);
}
