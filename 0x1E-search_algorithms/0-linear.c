#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * linear_search -  searches for a value in an array of integers
 * @array: a pointer to the 1st element of the array to search in
 * @size: size of the array
 * @value: the value to search fo
 * Return: Always 0
 */
int linear_search(int *array, size_t size, int value)
{
	int i;

	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%i] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
