#include "main.h"

/**
 * _memcpy - a function that copies memory area.
 *
 * @dest: the memory area to which we should copy.
 * @src: the memory area where we copy from.
 * @n: the number of bytes we should copy.
 *
 * Return: a pointer to dest.
 *
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;

	while (n > 0)
	{
		dest[i] = src[i];
		i++;
		n--;
	}

	return (dest);
}
