#include "main.h"

/**
 * print_line - draws a straight line in the terminal using '_'.
 *
 * @n: The number of times the character _ should be printed.
 */

void print_line(int n)
{
	while (n > 0)
	{
		_putchar(95);
		n--;
	}

	if (n <= 0)
		_putchar('\n');
}
