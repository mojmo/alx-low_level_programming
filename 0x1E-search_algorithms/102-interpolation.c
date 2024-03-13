#include "search_algos.h"

/**
 * interpolation_search - searches for a value in a sorted array of integers
 * using interpolation search algorithm.
 * @array: pointer to the first element of the array
 * @size: number of elements in the array
 * @value: value to search for
 *
 * This function searches for a value in a sorted array of integers using the
 * interpolation search algorithm. It calls the recursive
 * interpolation_search_recursive function to perform the search.
 *
 * Return: If the value is found, returns the index of the first occurrence
 * of the value in the array. If the value is not found or if the array is
 * NULL, returns -1.
 */
int interpolation_search(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);

	return (interpolation_search_recursive(array, 0, size - 1, value));
}

/**
 * interpolation_search_recursive - recursively searches for a value
 * in a sorted array of integers using interpolation search algorithm.
 * @arr: pointer to the first element of the array
 * @low: starting index of the subarray
 * @high: ending index of the subarray
 * @val: value to search for
 *
 * This function recursively searches for a value in a sorted array of integers
 * using the interpolation search algorithm. It prints the current index being
 * checked in each recursion. If the value is found, it returns the index of
 * the first occurrence of the value in the array.
 *
 * Return: If the value is found, returns the index of the first occurrence
 * of the value in the array. If the value is not found, returns -1.
 */
int interpolation_search_recursive(int *arr, size_t low, size_t high, int val)
{
	size_t pos = low +
		(((double)(high - low) / (arr[high] - arr[low])) * (val - arr[low]));

	if (low <= high && val >= arr[low] && val <= arr[high])
	{

		printf("Value checked array[%ld] = [%d]\n", pos, arr[pos]);

		if (arr[pos] == val)
			return (pos);

		if (arr[pos] < val)
			return (interpolation_search_recursive(arr, pos + 1, high, val));

		if (arr[pos] > val)
			return (interpolation_search_recursive(arr, low, pos - 1, val));
	}

	printf("Value checked array[%ld] is out of range\n", pos);

	return (-1);
}
