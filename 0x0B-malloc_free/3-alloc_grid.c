#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - a function that returns a pointer to a 2 dimensional
 * array of integers.
 *
 * @width: number of rows.
 * @height: number of columns.
 *
 * Return: a pointer to a 2 dimensional array of integers,
 * NULL on failure or if width or height is 0 or negative.
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	/* allocate space for an array of pointers "columns" */
	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
		return (NULL);

	/* for each columns allocate a number of rows * size of int */
	for (i = 0; i < height; i++)
		grid[i] = malloc(sizeof(int) * width);


	for (i = 0; i < height; i++)
	{
		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(grid[j]);

			free(grid);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}

	return (grid);
}
