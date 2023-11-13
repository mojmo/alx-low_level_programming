#include "main.h"

/**
 * _strncat - concatenates two strings and use at most n bytes from src.
 *
 * @dest: the string to add new string at the end of it.
 *
 * @src: the new string to be added.
 *
 * @n: the number of bytes will be used from src.
 *
 * Return: a pointer to the resulting string dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j;

	while (dest[i] != '\0')
	{
		i++;
	}

	j = i;

	while (n > 0 && *src != '\0')
	{
		dest[j] = *src;
		src++;
		j++;
		n--;
	}

	return (dest);
}
