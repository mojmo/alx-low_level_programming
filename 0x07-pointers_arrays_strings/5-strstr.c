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
	int flag = 0;

	while (haystack[i] != '\0')
	{
		j = 0;

		while (needle[j] != '\0')
		{
			if (needle[j] == haystack[i])
			{
				haystack = &haystack[i];
				flag = 1;
			}

			j++;
		}

		i++;
	}

	if (flag)
		return (haystack);
	else
		return ('\0');
}
