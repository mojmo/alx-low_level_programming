#include "main.h"

/**
 * _strstr - a function that locates a substring.
 *
 * @haystack: the string to search for a word in it.
 * @needle: the word to be searched.
 *
 * Return: a pointer to the beginning of the located substring,
 *		or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0, j;

	while (haystack[i] != '\0')
	{
		j = 0;

		while ((needle[j] == haystack[i]) && (needle[j] != '\0'))
		{
			return (&haystack[i]);

			j++;
		}

		i++;
	}

	return ('\0');
}
