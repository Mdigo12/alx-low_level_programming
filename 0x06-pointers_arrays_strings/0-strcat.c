#include "main.h"

/**
 * *_strcat - Check description
 *
 * Description: This function appends the src string to the dest string,
 * overwriting the terminating null byte (\0) at the end of dest,
 * and then adds a terminating null byte
 * @dest: Pointer string 1
 * @src: Input pointer string 2
 *
 * Return: Pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	//char *temp = dest;

	while (*dest)
		dest++;
	while (*src)
	{
		*dest++ = *src++;
	}

	*dest = '\0';

	return (dest);
}
