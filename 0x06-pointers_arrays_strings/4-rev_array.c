#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers.
 *
 * @a: the array to be reversed.
 *
 * @n: the number of elements of the array.
 */

void reverse_array(int *a, int n)
{
	int i, tmp;

	int len = n - 1;

	for (i = 0; i < len; i++)
	{
		tmp = a[i];
		a[i] = a[len];
		a[len] = tmp;

		len--;
	}
}
