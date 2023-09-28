#include "main.h"

/**
 * _strlen - a function that prints a string, in reverse.
 *
 * @s: a pointer to the string.
 *
 * Return: the length of the string.
 */

int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen(s + 1));
}

/**
 * _pow - a function that returns the value of x raised
 * to the power of y.
 *
 * @x: the base.
 * @y: the power.
 *
 * Return: x raised to the power of y if y is positive.
 * -1 if y is negative.
 */

unsigned int _pow(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);

	return (x * _pow(x, y - 1));
}

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 *
 * @b: the number in binary.
 *
 * Return: the converted number, or 0 if the number isn't binary
 */

unsigned int binary_to_uint(const char *b)
{
	int len, i;
	unsigned int sum;

	if (b == NULL)
		return (0);

	len = _strlen((char *)b) - 1;
	sum = 0;

	for (i = 0; len >= 0; i++, len--)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);

		if (b[len] == '1')
			sum += _pow(2, i);
	}

	return (sum);
}



