#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer,
 *		starting from 00:00 to 23:59.
*/

void jack_bauer(void)
{
	int f_digit = 0, s_digit;

	while (f_digit < 24)
	{
		s_digit = f_digit;

		while (s_digit < 60)
		{
			_putchar((f_digit / 10) + '0');
			_putchar((f_digit % 10) + '0');
			_putchar(':');
			_putchar((s_digit / 10) + '0');
			_putchar((s_digit % 10) + '0');
			_putchar('\n');

			s_digit++;
		}
		f_digit++;
	}
}
