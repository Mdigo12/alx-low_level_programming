#include "main"
#include <stdlib.h>

int _strlen(char *s);

/**
 * _strdup - creates a dublicate of a given string
 * @str: string to be dublicated
 *
 * Return: NULL if str = NULL or if insufficient memory was available,
 * else a pointer to the duplicated string
 */

char *_strdup(char *str)
{
	char *dup_str;
	int len_str;
	int i;

	if (str == NULL)
		return (NULL);

	len_str = _strlen(str);
	dup_str = malloc(sizeof(char) * (len_str + 1));

	if (dup_str == NULL)
		return (NULL);

	for (i = 0; i < len_str; i++)
		dup_str[i] = str[i];

	dup_str[len_str] = '\0';

	return (dup_str);
}

/**
 * _strlen - gets lenth of a string
 * @s: address of the first character of the string
 *
 * Return: lenth of the string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s)
	{
		len++;
		s++;
	}

	return (len);
}
