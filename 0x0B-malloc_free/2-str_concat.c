#include <stdlib.h>
#include "main.h"

/**
 * str_concat - a function that concatenates two strings.
 *
 * @s1: the first string.
 * @s2: the second string.
 *
 * Return: a pointer points to a new allocated space in memory which
 * contains the contencts os s1, followed by the contents of s2,
 * or return NULL on failure.
 */

char *str_concat(char *s1, char *s2)
{
	char *str;
	unsigned int len = 0, len1 = 0, len2 = 0, i = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;

	while (s2[len2] != '\0')
		len2++;

	len = len1 + len2;

	str = malloc((len + 1) * sizeof(char));

	if (str == NULL)
		return (NULL);

	while (*s1 != '\0')
	{
		str[i] = *s1;
		s1++;
		i++;
	}

	while (*s2 != '\0')
	{
		str[i] = *s2;
		s2++;
		i++;
	}

	str[i] = '\0';

	return (str);
}
