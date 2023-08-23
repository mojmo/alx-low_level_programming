#include "main.h"

/**
 * _strcmp - compares two strings.
 *
 * @s1: first string.
 *
 * @s2: second string.
 *
 * Return: 0 if s1 equals s2.
 *         positive number if s1 greater than s2.
 *         negative number if s1 less than s2.
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0')
	{
		if (s1[i] != s2[i])
			break;

		i++;
	}

	return (s1[i] - s2[i]);
}
