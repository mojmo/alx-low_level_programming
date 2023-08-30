#include "main.h"

/**
 * is_prime_helper - a function to check if a number is prime or not.
 *
 * @n: the number.
 * @i: initial number to check if n is a prime number.
 *
 * Return: 1 if n is prime number.
 *          0 if n=not.
 */

int is_prime_helper(int n, int i)
{
	if (n > 1 && i >= n)
		return (1);
	else if (n % i == 0 || n <= 1)
		return (0);

	return (is_prime_helper(n, i + 1));
}

/**
 * is_prime_number - check if a number is prime or not.
 *
 * @n: the number.
 *
 * Return: 1 if n is prime number.
 *          0 if n not.
 */

int is_prime_number(int n)
{
	return (is_prime_helper(n, 2));
}
