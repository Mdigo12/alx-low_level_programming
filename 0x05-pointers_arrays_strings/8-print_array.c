#include <stdio.h>
#include "main.h"

/**
 * print_array - See dscription
 * Description: A function that prints n elements of an array of integers,
 * followed by a new line
 * @a: An input array
 * @n: An input integer
 *
 * Return: Nothing (void function)
 */

void print_array(int *a, int n)
{
	int p = 0;

	for (; p < n; p++)
	{
		printf("%d", a[p]);
		if (p < n - 1)
			printf(", ");
	}
	putchar('\n');
}
