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
 * binary_search_recursive - recursively searches for a value
 * in a sorted array of integers
 * @arr: pointer to the first element of the array
 * @start: index of the first element of the current subarray
 * @end: index of the last element of the current subarray
 * @val: value to search for
 *
 * This function recursively searches for a value in a sorted array of integers
 * using binary search. It prints the current subarray being searched
 * in each recursion.
 *
 * Return: If the value is found, returns the index of the first occurrence
 * of the value in the array. If the value is not found, returns -1.
 */
int binary_search_recursive(int *arr, size_t start, size_t end, int val)
{
	size_t i, mid;

	if (start > end)
		return (-1);

	printf("Searching in array: ");
	for (i = start; i <= end; i++)
	{
		printf("%d", arr[i]);
		if (i != end)
			printf(", ");
	}
	printf("\n");

	mid = (start + end) / 2;

	if (arr[mid] == val)
		return (mid);
	if (val < arr[mid])
		return (binary_search_recursive(arr, start, mid - 1, val));
	else
		return (binary_search_recursive(arr, mid + 1, end, val));
}


/**
 * exponential_search - Searches for a value in a sorted array
 * of integers using exponential search.
 * @array: A pointer to the first element of the array to search.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Description: Prints a value every time it is checked in the array.
 *  It starts with a small range and exponentially increases
 *  the range until the value is found or the end of the array is reached.
 *  Then, it performs a binary search within the identified range.
 *
 * Return: If the value is not present or the array is NULL, -1.
 * Otherwise, the index where the value is located.
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 1;

	if (array == NULL)
		return (-1);

	while (i < size && array[i] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		i *= 2;
	}

	printf("Value found between indexes");
	printf(" [%lu] and [%lu]\n", i / 2, min(i + 1, size) - 1);

	return (binary_search_recursive(array, i / 2, min(i + 1, size), value));
}

