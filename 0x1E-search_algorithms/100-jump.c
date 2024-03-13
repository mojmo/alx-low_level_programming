#include <math.h>
#include "search_algos.h"

/**
 * jump_search - searches for a value in a sorted array using
 * jump search algorithm
 * @array: pointer to the first element of the sorted array
 * @size: number of elements in the array
 * @value: value to search for
 *
 * This function implements the jump search algorithm to find
 * the specified value in a sorted array of integers. It divides
 * the array into blocks of size sqrt(size) and performs linear
 * search in each block until the desired value is found or until
 * the end of the array is reached.
 *
 * Return: If the value is found, returns the index of the first occurrence
 * of the value in the array. If the value is not found or if the array is
 * NULL, returns -1.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step = sqrt(size);
	size_t i;
	size_t slow = 0;
	size_t fast = step;

	if (array == NULL)
		return (-1);

	printf("Value checked array[%lu] = [%d]\n", slow, array[slow]);
	/* Perform jump search */
	while (fast < size && array[fast] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", fast, array[fast]);
		slow = fast;
		fast += step;
	}

	printf("Value found between indexes [%lu] and [%lu]\n", slow, fast);

	/* Adjust fast pointer if it goes beyond the array */
	fast = fast < size ? fast : size - 1;

	/* Linear search within the identified range */
	for (i = slow; i <= fast; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
