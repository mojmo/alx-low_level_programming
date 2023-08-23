#include "main.h"

/**
 * cap_string - capitalizes all words of a string.
 *
 * @str: the string to be capitalized.
 *
 * Return: the capitalized string.
 */

char *cap_string(char *str)
{
	int curr = 0;
	int next = 1;

	if (str[curr] >= 'a' && str[curr] <= 'z')
		str[curr] = str[curr] - 32;

	while (str[next] != '\0')
	{
		if ((str[curr] == ' ' ||
			str[curr] == '\t' ||
			str[curr] == '\n' ||
			str[curr] == ',' ||
			str[curr] == ';' ||
			str[curr] == '.' ||
			str[curr] == '!' ||
			str[curr] == '?' ||
			str[curr] == '"' ||
			str[curr] == '(' ||
			str[curr] == ')' ||
			str[curr] == '{' ||
			str[curr] == '}') &&
			(str[next] >= 'a' && str[next] <= 'z'))
		{
			str[next] = str[next] - 32;
		}

		next++;
		curr++;
	}

	return (str);
}
