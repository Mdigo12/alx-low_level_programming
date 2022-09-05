#include "main.h"

/**
 * _strlen - See dscription
 * Description: A function that returns the length of a string
 * @s: An integer input string
 *
 * Return: Nothing (void function)
 */
int _strlen(char *s)
{
	int l = 0;

	while (s[l] != '\0')
		l++;
	return (l);
}
