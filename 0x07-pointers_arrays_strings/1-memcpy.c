#include "main.h"

/**
 * _memcpy() - Check description.
 * Description: copies memory area
 * @dest: char array to copy into (destination)
 * @src: char array to copy from (source)
 * @n: Number of elements to copy
 *
 * Return: Pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *jake;

	jake = dest;
	while (n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	return (jake);
}
