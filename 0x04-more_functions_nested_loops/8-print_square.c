#include "main.h"

/**
 * print_square - prints a square using '#'.
 *
 * @size: The size of the square.
 */

void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i = 1, j;

		while (i <= size)
		{
			j = 1;
			while (j <= size)
			{
				_putchar(35);
				j++;
			}
			_putchar('\n');
			i++;
		}
	}
}
