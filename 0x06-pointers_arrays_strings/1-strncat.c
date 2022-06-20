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
	int i = 0, int len = 0;

	/*char *new_dest = dest;*/

	/* navigate to the end of dest */
	while (*dest)
		len++;
		/*dest++;*/

	/* append at most n characters to src */
	while (src[i] && i < n)
	{
		dest[len + i] = src[i];
		i++;
	}
	/* add a terminating null byte */
	*dest = '\0';

	return (dest);
}
