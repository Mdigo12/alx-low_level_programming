#include "main.h"
/**
 * factorial - a function that returns the factorial of a given number
 * @n: input enteger
 *
 * Return: -1 if n is less than 0 or factorial of n
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
