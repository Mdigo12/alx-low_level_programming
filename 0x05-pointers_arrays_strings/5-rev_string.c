#include "main.h"

/**
 * rev_string - See dscription
 * Description: A function that reverses a string
 * followed by a new line
 * @s: An input string
 *
 * Return: Nothing (void function)
 */

void rev_string(char *s)
{
	int l = 0, n = 0;
	char alx;

	while (s[l] != '\0')
		l++;

	while (n < l--)
	{
		alx = s[n];
		s[n++] = s[l];
		s[l] = alx;
	}
}
