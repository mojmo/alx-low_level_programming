#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers
 * using binary search
 * @array: pointer to the first element of the array
 * @size: number of elements in the array
 * @value: value to search for
 *
 * This function searches for a value in a sorted array of integers
 * using binary search. It calls the recursive binary_search_recursive
 * function to perform the search.
 *
 * Return: If the value is found, returns the index of the first occurrence
 * of the value in the array. If the value is not found or if the array is
 * NULL, returns -1.
 */
int binary_search(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);

	return (binary_search_recursive(array, 0, size - 1, value));
}

/**
 * binary_search_recursive - recursively searches for a value
 * in a sorted array of integers
 * @array: pointer to the first element of the array
 * @start: index of the first element of the current subarray
 * @end: index of the last element of the current subarray
 * @value: value to search for
 *
 * This function recursively searches for a value in a sorted array of integers
 * using binary search. It prints the current subarray being searched
 * in each recursion.
 *
 * Return: If the value is found, returns the index of the first occurrence
 * of the value in the array. If the value is not found, returns -1.
 */
int binary_search_recursive(int *array, size_t start, size_t end, int value)
{
	size_t i, mid;

	if (start > end)
		return (-1);

	printf("Searching in array: ");
	for (i = start; i <= end; i++)
	{
		printf("%d", array[i]);
		if (i != end)
			printf(", ");
	}
	printf("\n");

	mid = (start + end) / 2;

	if (array[mid] == value)
		return (mid);
	if (value < array[mid])
		return (binary_search_recursive(array, start, mid - 1, value));
	else
		return (binary_search_recursive(array, mid + 1, end, value));
}
