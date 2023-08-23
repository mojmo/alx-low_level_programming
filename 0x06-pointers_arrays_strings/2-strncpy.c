#include "main.h"

/**
 * _strncpy - copies a string except that it will use at most n bytes from src.
 *
 * @dest: where to paste the copied string.
 *
 * @src: the string to be copied.
 *
 * @n: the number of bytes will be copied from src.
 *
 * Return: a pointer to the resulting string dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
