#include "main.h"

/**
 * _islower - see description
 *
 * Description: Checks for lowercase character
 *
 * Return: 1 if is lowercase, else 0.
 */

int _islower(int c)
{
	char lc;
	int i = 0;

	for (lc = 'a'; lc <= 'z'; lc++)
	{
		if (lc == c)
		{
			i = 1
		}
	}

	return (i);
}
