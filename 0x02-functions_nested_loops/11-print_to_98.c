#include <stdio.h>
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

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);

			if (i == 98)
				continue;
			printf(", ");
		}
		printf("\n");
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d", i);

			if (i == 98)
			{
				continue;
			}
			printf(", ");
		}
		printf("\n");
	}
}
