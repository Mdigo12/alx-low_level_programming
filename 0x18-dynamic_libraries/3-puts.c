#include "main.h"

/**
 * _puts - See dscription
 * Description: A function that prints a string,
 * followed by a new line, to stdout
 * @str: An input string
 *
 * Return: Nothing (void function)
 */
void _puts(char *str)
{
	int n = 0;

	while (str[n] != '\0')
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
