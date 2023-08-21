#include "main.h"

/**
 * puts_half - Prints half of a string.
 *
 * @str: Pointer to the string.
 */

void puts_half(char *str)
{
	int len = 0;
	int n;

	while (str[len] != '\0')
	{
		len++;
	}

	if (len % 2 == 0)
		n = len / 2;
	else
		n = (len / 2) + 1;

	while (n <= len)
	{
		_putchar(str[n]);
		n++;
	}

	_putchar('\n');
}
