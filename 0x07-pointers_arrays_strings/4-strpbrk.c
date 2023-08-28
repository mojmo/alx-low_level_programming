#include "main.h"

/**
 * _strpbrk - a function that searches a string for any of a set of bytes.
 *
 * @s: the string to search inside it.
 * @accept: the string to search for one of its letters in s.
 *
 * Return: a pointer to the byte in s that matches one of the bytes
 *		in accept, or NULL if no such byte is found.
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0, j;

	while (s[i] != '\0')
	{
		j = 0;

		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
				return (&s[i]);
			j++;
		}

		i++;
	}

	return ('\0');

}
