#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14.
 */

void more_numbers(void)
{
	int i, j, num;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			num = j;
			if (j > 9)
			{
				_putchar(1 + '0');
				num = j % 10;
			}
			_putchar(num + '0');
		}
		_putchar('\n');
	}
}
