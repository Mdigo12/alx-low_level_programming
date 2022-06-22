#include "main.h"
/**
 * sqrt - return square root value
 * @pr: previous value
 * @root: root value
 *
 * Return: root value
 */

/**
 * _sqrt_recursion -  function that returns
 * the natural square root of a number.
 * @n: input integer
 *
 * Return: square root of n
 */

int sqrt(int pr, int root)
{
	if (pr > root)
		return (-1);
	else if (pr * pr == root)
		return (pr);
	return (sqrt(pr + 1, root));
}

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqrt(1, n));
}
