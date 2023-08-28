#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 *
 * @s: memory area to be filled.
 * @b: the constant byte to fill the memory with.
 * @n: the first n bytes of the memory area to be filled.
 *
 * Return: a pointer to the memory area s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	while ((n > 0) && (*s != '\0'))
	{
		*s = b;
		s++;
		n--;
	}

	return (s);
}
