#include "main.h"

/**
 * flip_bits - find the number of bits you would need to
 * flip to get from one number to another.
 *
 * @n: the number.
 * @m: the target flipping number.
 *
 * Return: the number of bits that would need to
 * be flipped to get from n to m.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xorNum = n ^ m;
	unsigned int bits = 0;

	while (xorNum > 0)
	{
		if (xorNum & 1)
			bits++;
		xorNum >>= 1;
	}

	return (bits);
}
