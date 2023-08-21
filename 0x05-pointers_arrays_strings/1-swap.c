#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 *
 * @a: pointer of the first value.
 * @b: pointer of the second value.
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
