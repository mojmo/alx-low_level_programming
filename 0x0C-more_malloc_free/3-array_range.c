#include <stdlib.h>
#include "main.h"

/**
 * array_range - a function that creates an array of integers.
 *
 * @min: the first value of the array.
 * @max: the last value of the array.
 *
 * Return: the pointer to the newly created array.
 * NULL if the function failed.
 */

int *array_range(int min, int max)
{
	int *spc = NULL;
	unsigned int i, total;

	if (min > max)
		return (NULL);

	total = (max - min) + 1;

	spc = malloc(sizeof(int) * total);

	if (spc == NULL)
		return (NULL);

	for (i = 0; i <= max; i++)
		spc[i] = min + i;

	return (spc);
}
