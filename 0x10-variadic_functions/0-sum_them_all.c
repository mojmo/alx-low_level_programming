#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - a function that returns the sum of all its parameters.
 *
 * @n: the number of parameters to be added.
 *
 * Return: the result of summation.
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum, val;
	va_list args;

	if (n == 0)
		return (0);

	va_start(args, n);
	sum = 0;

	for (i = 0; i < n; i++)
	{
		val = va_arg(args, int);
		sum += val;
	}

	va_end(args);

	return (sum);
}
