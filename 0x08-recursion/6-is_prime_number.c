#include "main.h"
/**
 * main - hey
 * @s: Character string
 *
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
		return;
	_putchar(*s);
	_puts_recursion(s + 1);
}
