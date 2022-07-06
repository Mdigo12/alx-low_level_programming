#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer
 * @array: the array of integers
 * @size: the size of the array
 * @cmp: a pointer to the function to be used to compare values
 *
 * Return: -1 If no element matches or If size <= 0
 * otherwise, returns the index of the first element
 * for which the cmp function does not return 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}
