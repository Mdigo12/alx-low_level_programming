#include "main.h"

/**
 * _memset() - Check description.
 * Description:  function that fills the first n bytes of the memory area
 * pointed to by s with the constant byte b
 * @s: Buffer array
 * @b: constant byte
 * @n: number of bytes of memory area to fill
 *
 * Return: Pointer to memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	i = 0;
	while (n > 0)
	{
		s[i] = b;
		i++;
		n--;
	}

	return (s);
}
