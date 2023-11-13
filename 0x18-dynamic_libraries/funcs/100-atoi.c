#include "main.h"

/**
 * _atoi - Convert a string to an integer.
 *
 * @s: Pointer of the string.
 *
 * Return: The converted number.
 */

int _atoi(char *s)
{

	int i = 0;
	unsigned int n = 0;
	int sign = 1;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;
		else if (s[i] >= '0' && s[i] <= '9')
			n = (n * 10) + (s[i] - '0');
		else if (n > 0)
			break;

		i++;
	}

	return (n * sign);

}
