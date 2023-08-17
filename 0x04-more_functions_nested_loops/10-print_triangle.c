#include "main.h"

/**
 * print_triangle - prints a triangle using "#".
 *
 * @size: The size of the triangle.
 */

void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int spc, symb, symbCount = size;

		while (size > 0)
		{
			spc = size - 1;
			symb = symbCount - spc;
			while (spc > 0)
			{
				_putchar(' ');
				spc--;
			}
			while (symb > 0)
			{
				_putchar(35);
				symb--;
			}
			_putchar('\n');
			size--;
		}
	}
}
