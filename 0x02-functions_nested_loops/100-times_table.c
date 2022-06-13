#include "main.h"
/**
 * print_times_table - see description
 * Description: Prints n times table between 0 and 15 included
 * @n: An input integer
 * Return: Nothing, void function
 */
void print_times_table(int n)
{
	int i, j;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('0');
			for (j = 0; j <= n; j++)
			{
				if (i * j < 10)
				{
					if (j != 0)
					{
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
						_putchar(i * j + '0');
					}
				}
				else if (i * j >= 10 && i * j <= 99)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((i * j) / 10 + '0');
					_putchar((i * j) % 10 + '0');
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar((i * j) / 100 + '0');
					_putchar((i * j) / 10 % 10 + '0');
					_putchar((i * j) % 10 + '0');
				}
			}
			_putchar('\n');
		}
	}
}
