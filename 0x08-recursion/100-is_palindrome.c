#include "main.h"

int _strlen(char *s);
int check_pali(char *s, int len, int index);
int is_palindrome(char *s);

/**
 * _strlen - return string length
 * @s: input string
 *
 * Return: string lenth
 */

int _strlen(char *s)
{
	int len = 0;

	if (*s != '\0')
	{
		len = 1 + _strlen(s + 1);

		return (len);
	}
}

/**
 * check_pali - check if the string is a palindrome
 * @s: input string
 * @len: lenth of string
 * @index: index of string
 *
 * Return: 1 if palindrome, else 0
 */

int check_pali(char *s, int len, int index)
{
	if (s[index] == s[len / 2])
		return (1);
	if (s[index] == s[len - index - 1])
		return (check_pali(s, len, index + 1));
	return (0);
}
/**
 * is_palindrome - a function that checks a string
 * is a palindrome
 * @s: Character string
 *
 * Return: 1 if palindrome, else 0
 */

int is_palindrome(char *s)
{
	int index = 0;
	int len = _strlen(s);

	if (!(*s))
		return (1);
	return (check_pali(s, len, index));
}
