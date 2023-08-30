#include "main.h"

/**
 * _sqrt_helper - multiply two numbers to guess the,
 *			square root root of a number.
 * @n: the number.
 * @x: a number to start multiplication with.
 *
 * Return: the square root of n.
 */

int _sqrt_helper(int n, int x)
{
	if (x * x == n)
		return (x);
	else if (x * x < n)
		return (_sqrt_helper(n, x + 1));

	return (-1);
}

/**
 * _sqrt_recursion - returns the natural square root of a number.
 *
 * @n: the number.
 *
 * Return: the square root of n.
 */

int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
		return (n);

	return (_sqrt_helper(n, 1));
}
