#include "main"
#include <stdlib.h>

int _strlen(char *s);

/**
 * str_concat - concatenates two strings
 * @s1: String one
 * @s2: String two
 * if NULL is passsed, treat it as an empty string
 *
 * Return:  newly allocated space in memory
 * which contains the contents of s1,
 * followed by the contents of s2, and null terminated
 * NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	int len_s1;
	int len_s2;
	int i;
	int j = 0;
	char *s3;

	len_s1 = (s1 == NULL) ? 0 : _strlen(s1);
	len_s2 = (s2 == NULL) ? 0 : _strlen(s2);

	s3 = malloc(sizeof(char) * (len_s1 + len_s2 + 1));

	if (s3 == NULL)
		return (NULL);

	for (i = 0; i < len_s1; i++, j++)
		s3[j] = s1[i];
	for (i = 0; i < len_s2; i++, j++)
		s3[j] = s2[i];

	s3[j] = '\0';

	return (s3);
}

/**
 * _strlen - gets the lenth of a string
 * @s: address of the first character in the string
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

	return (len)
}
