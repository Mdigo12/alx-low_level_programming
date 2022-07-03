#include "main.h"
#include <stdlib.h>

int _strlen(char *s);
/**
 * argstostr - concatenates all the arguments of the program
 * @ac: number of commandline arguments
 * @av: array of all arguments
 * Each argument should be followed by a \n in the new string
 *
 * Return: NULL if ac == 0 or av == NULL or if it fails,
 * otherwise,  pointer to a new string
 */

char *argstostr(int ac, char **av)
{
	int len = 0;
	int i, j;
	int k = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		len += _strlen(av[i]);

	str = malloc(sizeof(char) * (len + ac + 1));
	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, k++)
			str[k] = av[i][j];

		str[k] = '\n';
		k++;
	}

	str[k] = '\0';

	return (str);
}

/**
 * _strlen - gets string length
 * @s: a given string
 *
 * Return: String length
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
