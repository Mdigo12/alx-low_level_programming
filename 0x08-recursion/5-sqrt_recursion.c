#include "main.h"

int _sqrt(int pr, int root);
int _sqrt_recursion(int n);
/**
 * sqrt - return square root value
 * @pr: previous value
 * @root: root value
 *
 * Return: root value
 */

int _sqrt(int pr, int root)
{
	if (pr > root)
		return (-1);
	else if (pr * pr == root)
		return (pr);
	return (_sqrt(pr + 1, root));
}

/**
 * _sqrt_recursion - return root
 * @n: input integer
 *
 * Return: root of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt(1, n));
}
