#include "main.h"

/**
 * _isalpha - see description
 *
 * Description: Checks for alphabetic character
 * @c: any input character
 *
 * Return: 1 if is uppercase, else 0
 */

int _isalpha(int c)
{
	char UC;
	int i = 0;

	for (UC = 'A'; UC <= 'Z'; UC++)
	{
		if (UC == c)
		{
			i = 1;
		}
	}

	return (i);
}
