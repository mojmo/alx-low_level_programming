#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers
 * @array: pointer to the first element of the array
 * @size: number of elements in the array
 * @value: value to search for
 *
 * This function iterates through each element of the array to find the
 * specified value. It prints each element it checks along with its index.
 *
 * Return: If the value is found, returns the index of the first occurrence
 * of the value in the array. If the value is not found or if the array is
 * NULL, returns -1.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%li] = [%d]\n", i, array[i]);

		if (array[i] == value)
			return (i);
	}

	return (-1);
}
