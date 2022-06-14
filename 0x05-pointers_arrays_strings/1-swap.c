#include "main.h"

/**
 * swap_int - See dscription
 * Description: A function that swaps the values of two integers
 * @a: An integer input pointer
 * @b: An integer input pointer
 *
 * Return: Nothing (void function)
 */
void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
