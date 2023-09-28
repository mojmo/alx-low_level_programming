#include "main.h"

/**
 * get_endianness - checks the endianness.
 *
 * Return: 0 if big endian, 1 if little endian.
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *byte = (char *)&i; /* first byte of i */

	return (*byte);
}
