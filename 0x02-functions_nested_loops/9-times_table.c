#include "main.h"

/**
 * times_table - see description
 *
 * Description: Prints the 9 times table, starting with 0
 *
 * Return: 0 (success)
 */

void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			_putchar((i * j) + '0');
		}
		_putchar('\n');
	}
}
