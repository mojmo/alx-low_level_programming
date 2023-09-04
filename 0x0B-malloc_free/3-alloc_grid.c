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

	/* allocate space for an array of pointers "rows" */
	grid = malloc(sizeof(int *) * width);

	/* for each row allocate a number of columns * size of int */
	for (i = 0; i < width; i++)
		grid[i] = malloc(sizeof(int) * height);

	if (grid == NULL)
		return (NULL);

	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
		{
			grid[i][j] = 0;
		}
	}

	return (grid);
}
