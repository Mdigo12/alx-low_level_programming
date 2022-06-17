#include "main.h"

/**
 * *_strncat - Check description
 *
 * Description: The _strncat function is similar to the _strcat function,
 * except that it will use at most n bytes from src;
 * and * src does not need to be null-terminated if it contains n or more bytes
 * @dest: Pointer to the destination string
 * @src: Pointer to the source string
 * @n: Number of bytes to print
 *
 * Return: Pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	for (j = 0; dest[j] != '\0'; j++)
	{
		;
	}
	while (src[i] != '\0' && i < n)
	{
		dest[j + 1] = src[i];
		i++;
	}
	return (dest);
}
