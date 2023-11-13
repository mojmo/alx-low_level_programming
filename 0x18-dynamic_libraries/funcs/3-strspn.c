#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring.
 *
 * @s: the string to look for within it.
 * @accept: the string to search for its characters.
 *
 * Return: the number of bytes in the initial segment of s
 *		 which consist only of bytes from accept.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, j;

	while (s[i] != '\0')
	{
		j = 0;

		while (accept[j] != s[i])
		{
			if (accept[j] == '\0')
				return (i);
			j++;
		}

		i++;
	}

	return (i);

}
