#include "main.h"

/**
 * get_bit - a function that returns the value of a bit at a given index.
 *
 * @n: the number in decimal.
 * @index: the index of the bit.
 *
 * Return: the value of the bit at index index
 * or -1 if an error occured.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int shifts = (sizeof(n) * 8) - 1;

	if (index > shifts)
		return (-1);

	return (1 & (n >> index));
}
