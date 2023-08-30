#include "main.h"

/**
 * factorial - a function that returns the factorial of a given number.
 *
 * @n: the number.
 *
 * Return: the factorial of n if n is positive.
 *		-1 if n is negative.
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
