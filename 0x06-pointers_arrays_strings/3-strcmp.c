#include "main.h"

/**
 * _strcmp - compares two strings.
 *
 * @s1: first string.
 *
 * @s2: second string.
 *
 * Return: 0 if s1 equals s2.
 *         15 if s1 greater than s2.
 *         -15 if s1 less than s2.
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int sum1 = 0;
	int sum2 = 0;

	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != '\0')
			sum1 += s1[i];
		if (s2[i] != '\0')
			sum2 += s2[i];
		i++;
	}

	if (sum1 == sum2)
		return (0);
	if (sum1 > sum2)
		return (15);
	else
		return (-15);
}
