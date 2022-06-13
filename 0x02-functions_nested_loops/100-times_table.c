#include "main.h"

/**
 * print_times_table - see description
 *
 * Description: Prints n times table between 0 and 15 included
 * @n: An input integer
 *
 * Return: Nothing, void function
 */

void print_times_table(int n)
{
	int i, j, k;

	if (n > 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				k = i * j;

				if (n < 10)
				{
					if (j != 0)
					{
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
						_putchar(k + '0');
					}
					else
						_putchar('0');
				}
			}
			_putchar('\n');
		}
	}
}
