#include "main.h"
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars,
 * and initializes it with a specific char
 * @size: array size to create
 * @c: charcter to initialize the array with
 *
 * Return: NULL if size = 0 or it fails, a pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *buffer = maloc(sizeof(char) * size);
	unsigned int i;

	if (buffer == NULL || size == 0)
		return (NULL);

	for (i = 0; i < size; i++)
		buffer[i] = c;

	return (buffer);
}
