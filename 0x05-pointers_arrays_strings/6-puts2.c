#include "main.h"

/**
 * puts2 - See dscription
 * Description: A function that prints every other character of a string,
 * starting with the first character, followed by a new line
 * @str: An input string
 *
 * Return: Nothing (void function)
 */

void puts2(char *str)
{
	int l = 0, n = 0;

	while (str[l] != '\0')
		l++;

	l -= 1;

	for (; n <= l; n += 2)
	{
		_putchar(str[n]);
	}

	_putchar('\n');
}
