#include "main.h"

/**
 * puts_half - See dscription
 * Description: A function that prints half of a string,
 * followed by a new line
 * @str: An input string
 *
 * Return: Nothing (void function)
 */

void puts_half(char *str)
{
	int l = 0, p, q;

	while (str[l] != '\0')
		l++;

	if (l % 2 == 0)
		q = l / 2;
	else
		q = (l + 1) / 2;

	for (p = q; p < l; p++)
		_putchar(str[p]);

	_putchar('\n');
}
