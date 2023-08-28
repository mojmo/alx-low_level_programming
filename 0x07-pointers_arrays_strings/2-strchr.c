#include "main.h"

/**
 * _strchr - a function that locates a character in a string.
 *
 * @s: the string.
 * @c: the character to be searched.
 *
 * Return: a pointer to the first occurrence of the character c in the string s
 *		if c found, or NULL if the character is not found.
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (&s[i]);

		i++;
	}

	return ('\0');
}
