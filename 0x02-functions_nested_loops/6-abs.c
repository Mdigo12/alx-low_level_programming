#include "main.h"

/**
 * int _abs - see description
 *
 * Description: computes the absolute value of an integer.
 * @r Integer input
 *
 * Return: Absolute value of r
 */

int _abs(int r)
{
	
	if (r < 0)
	{
		r = 0 - r;
	}

	return (r);
}
