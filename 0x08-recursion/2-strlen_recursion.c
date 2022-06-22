#include "main.h"
/**
 *  _strlen_recursion - a function that returns the length of a string
 * @s: Character string
 *
 * Return: void
 */

void _strlen_recursion(char *s)
{
	if (*s == '\0')
		return;
	return (1 + _strlen_recursion(s + 1));
}
