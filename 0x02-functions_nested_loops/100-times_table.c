#include "main.h"

/**
 * print_times_table - prints the 9 times table, starting with 0.
 * @n: The number to print its time table.
*/

void print_times_table(int n)
{
	int counter = 0, multBy, product;

	if (n >= 0 && n <= 15)
	{
		while (counter <= n)
		{
			_putchar('0');
			multBy = 1;

			while (multBy <= n)
			{
				_putchar(',');
				_putchar(' ');
				product = counter * multBy;

				if (product <= 9)
					_putchar(' ');
				if (product <= 99)
					_putchar(' ');
				if (product >= 100)
				{
					_putchar((product / 100) +  '0');
					_putchar((product / 10) % 10 + '0');
				}
				else if (product >= 10 && product <= 99)
				{
					_putchar((product / 10) + '0');
				}

				_putchar((product % 10) + '0');
				multBy++;
			}
			counter++;
			_putchar('\n');
		}
	}
}
