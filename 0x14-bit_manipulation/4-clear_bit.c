#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 *
 * @n: the number in decimal.
 * @index: the index of the bit.
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int shifts = (sizeof(n) * 8) - 1;

	if (!n ||  (index > shifts))
		return (-1);

	*n &= ~(1l << index);

	return (1);
}
