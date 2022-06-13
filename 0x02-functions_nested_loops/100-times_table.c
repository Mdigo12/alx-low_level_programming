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
	int i, j;
	
	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				k = i * j;

				if (k % 10 == 0)
				{
					if (i != 0)
					{
						_putchar(' ');
						_putchar(k + '0');
						if (i == n)
							continue;
						_putchar(',');
						_putchar(' ');
					}
					else
					{
						_putchar(k + '0');
						if (i == n)
							continue;
						_putchar(',');
						_putchar(' ');
					}
				}
				else
				{
					_putchar(k / 10 + '0');
					_putchar(k % 10 + '0');
					if (i == n)
						continue;
					_putchar(',');
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}	
}
