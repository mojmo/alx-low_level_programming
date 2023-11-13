#include "main.h"

/**
 * _abs - computes the absolute value of an integer.
 * @n: The number to return its absolute value.
 *
 * Return: The absolute value of @n.
*/

int _abs(int n)
{
	if (n < 0)
		return (n * -1);
	else
		return (n);
}
