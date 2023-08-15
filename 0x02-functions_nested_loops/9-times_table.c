#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0.
*/

void times_table(void)
{
	int num = 0, multBy, product;

	while (num < 10)
	{
		_putchar('0');
		multBy = 1;

		while (multBy < 10)
		{
			_putchar(',');
			_putchar(' ');
			product = num * multBy;

			if (product <= 9)
				_putchar(' ');
			else
				_putchar((product / 10) + '0');

			_putchar((product % 10) + '0');
			multBy++;
		}
		num++;
		_putchar('\n');
	}
}
