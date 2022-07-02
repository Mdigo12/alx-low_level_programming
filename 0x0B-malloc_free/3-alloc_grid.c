#include "main"
#include <stdlib.h>

/**
 * alloc_grid - creates 2 dimensional array of integers
 * @width: width of array
 * @height: height of array
 * Each element of the grid should be initialized to 0
 *
 * Return: If width or height is 0 or negative
 * or function fails, return NULL otherwise return
 * pointer to the created array.
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = (int **)malloc(sizeof(int) * height);
	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(grid[j]);

			free(grid);

			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}

	return (grid);
}
