#include "search_algos.h"

/**
 * advanced_binary - Searches for a value in a sorted array
 * of integers using the binary search algorithm.
 * @array: A pointer to the first element of the array to search.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Description: Calls the recursive binary_search_recursive function
 * to perform the binary search on the array.
 *
 * Return: If the value is not present or the array is NULL, -1.
 * Otherwise, the index where the value is located.
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);

	return (binary_search_recursive(array, 0, size - 1, value));
}

/**
 * binary_search_recursive - Recursively searches for a value in a sorted array
 * of integers using the binary search algorithm.
 * @array: A pointer to the first element of the array to search.
 * @start: The starting index of the subarray.
 * @end: The ending index of the subarray.
 * @value: The value to search for.
 *
 * Description: Recursively divides the array into halves and searches for
 * the value using the binary search algorithm. Prints the elements
 * being searched in the array during each recursion.
 *
 * Return: If the value is not present in the subarray, -1.
 * Otherwise, the index where the value is located.
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

	if (array[mid] == value && (mid == start || value != array[mid - 1]))
		return (mid);
	if (value <= array[mid])
		return (binary_search_recursive(array, start, mid, value));
	else
		return (binary_search_recursive(array, mid + 1, end, value));
}
