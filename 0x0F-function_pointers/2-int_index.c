#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer.
 *
 * @array: the array in which to search.
 * @size: the size of the array.
 * @cmp: a pointer to the function to be used to compare values.
 *
 * Return: the index of the first element for which the cmp function does
 * not return 0. If no element matches or size <= 0 return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}

	return (-1);
}
