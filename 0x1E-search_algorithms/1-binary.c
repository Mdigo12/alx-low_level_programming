#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers
 * @array: a pointer to the 1st element of the array to search in
 * @size: size of the array
 * @value: the value to search fo
 * Return: Always 0
 */

int binary_search(int *array, size_t size, int value)
{

	size_t i, lb, ub;

	if (array == NULL)
		return (-1);

	for (lb = 0, ub = size - 1; ub >= lb;)
	{
		printf("Searching in array: ");
		for (i = lb; i < ub; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = lb + (ub - lb) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			ub = i - 1;
		else
			lb = i + 1;
	}

	return (-1);
}
