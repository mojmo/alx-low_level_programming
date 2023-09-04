#include <stdlib.h>
#include "main.h"

/**
 * _strdup - a function that returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string given as a parameter.
 *
 * @str: the string to be copied.
 *
 * Return: a pointer to the duplicated string, or NULL if insufficient memory
 * was available or str = NULL.
 */

char *_strdup(char *str)
{
	char *s;
	unsigned int len = 0, i = 0;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
	{
		len++;
		i++;
	}

	s = malloc((len + 1) * sizeof(char));

	if (s == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
	{
		s[i] = str[i];
	}

	return (s);
}
