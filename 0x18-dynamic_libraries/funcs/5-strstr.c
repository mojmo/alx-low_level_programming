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

	while (*haystack != '\0')
	{
		char *p1 = needle;
		char *p2 = haystack;

		while ((*p1 == *p2) && (*p1 != '\0'))
		{
			p1++;
			p2++;
		}

		if (*p1 == '\0')
			return (haystack);

		haystack++;
	}

	return ('\0');

}
