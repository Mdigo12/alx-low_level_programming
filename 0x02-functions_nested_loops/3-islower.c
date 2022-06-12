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

	for (lc = 'a'; lc <= 'z'; lc++)
	{
		if (lc == c)
		{
			return (1);
		}
		else
			return (0);
	}
}
