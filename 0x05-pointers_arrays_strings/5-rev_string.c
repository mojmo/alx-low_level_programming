#include "main.h"

/**
 * rev_string - A function that reverses a string.
 *
 * @s: pointer to the string.
 */

void rev_string(char *s)
{
	int len;
	int rev_len = 0;
	char tmp;

	while (s[rev_len] != '\0')
	{
		rev_len++;
	}

	rev_len = rev_len - 1;

	for (len = 0; len <= rev_len / 2; len++)
	{

		tmp = s[len];
		s[len] = s[rev_len - len];
		s[rev_len - len] = tmp;

	}
}
