#include "main.h"

/**
 * leet - a function that encodes a string into 1337 leetspeak.
 *
 * @str: the string to be encoded.
 *
 * Return: the encoded string.
 */

char *leet(char *str)
{
	int i = 0, j;

	char val[2][5] = {
		{'a', 'e', 'l', 'o', 't'},
		{4, 3, 1, 0, 7}
	};

	while (str[i] != '\0')
	{
		for (j = 0; j < (int)sizeof(val) / (int)sizeof(char); j++)
		{
			if (str[i] == val[0][j] || str[i] == val[0][j] - 32)
				str[i] = val[1][j] + '0';
		}

		i++;
	}

	return (str);
}
