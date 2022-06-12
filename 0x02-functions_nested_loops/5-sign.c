#include "main.h"

/**
 * print_sign - see description
 *
 * Description:  prints the sign of a number
 * @n Any input number
 *
 * Returns: 1 if n>0; 0 if n is 0; -1 if n<0
 */

int print_sign(int n)
{
	char sign = '0'
	
	if (n > 0)
	{
		sign = '+';
	}
	else if (n < 0)
	{
		sign = '-';
	}
	else
		return (sign);

	_putchar(sign);
}
