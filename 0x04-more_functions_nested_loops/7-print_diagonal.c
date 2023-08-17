#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal using '\'.
 *
 * @n: The number of times the character \ should be printed.
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int spc, spcCount = 1;

		while (n > 0)
		{
			spc = 1;

			while (spc < spcCount)
			{
				_putchar(' ');
				spc++;
			}

			_putchar(92);
			_putchar('\n');
			spcCount++;
			n--;
		}
	}
}
