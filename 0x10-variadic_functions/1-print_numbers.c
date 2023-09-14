#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 *  print_numbers - a function that prints numbers, followed by a new line.
 *
 * @separator: the string to be printed between numbers.
 * @n: the number of integers passed to the function.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int val;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		val = va_arg(args, int);
		printf("%d", val);
		if (i != n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");

	va_end(args);
}
