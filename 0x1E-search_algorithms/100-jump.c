#include <math.h>
#include "search_algos.h"

/**
 * min - returns the minimum of two size_t values
 * @a: first size_t value
 * @b: second size_t value
 *
 * This function compares two size_t values and returns the smaller one.
 *
 * Return: The smaller of the two size_t values.
 */
size_t min(size_t a, size_t b)
{
	if (b > a)
		return (a);
	else
		return (b);
}

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
	size_t slow = 0, fast = sqrt(size);

	if (array == NULL)
		return (-1);

	/* Perform jump search */
	while (array[(min(fast, size)) - 1] < value)
	{
		slow = fast;
		fast += sqrt(size);

		/**
		* If the slow pointer exceeds the size of the array,
		* return -1 (value not found)
		 */
		if (slow >= size)
			return (-1);
	}

	/* Perform linear search within the block where the value might be located */
	while (array[slow] < value)
	{
		slow += 1;

		/**
		* If the slow pointer reaches the end of the block,
		* return -1 (value not found)
		 */
		if (slow == min(fast, size))
			return (-1);
	}

	if (array[slow] == value)
		return (slow);

	return (-1);
}
