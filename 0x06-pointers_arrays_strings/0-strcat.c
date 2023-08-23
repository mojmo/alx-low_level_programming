#include "main.h"

/**
 * _strcat - appends the src string to the dest string.
 *
 * @dest: the string to add new string at the end of it.
 *
 * @src: the new string to be added.
 *
 * Return: a pointer to the resulting string dest.
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, j;

	while (dest[i] != '\0')
	{
		i++;
	}

	j = i;

	while (*src != '\0')
	{
		dest[j] = *src;
		src++;
		j++;
	}

	return (dest);
}
