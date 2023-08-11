#include <stdio.h>

/**
 * main - Entry point of program.
 *
 * Description: prints all possible combinations of two two-digit numbers.
 *
 * Return: 0 if successed.
*/

int main(void)
{
	int f_digit = 0, s_digit;

	while (f_digit < 100)
	{
		s_digit = f_digit;

		while (s_digit < 100)
		{
			if (f_digit != s_digit)
			{
				putchar((f_digit / 10) + '0');
				putchar((f_digit % 10) + '0');
				putchar(' ');
				putchar((s_digit / 10) + '0');
				putchar((s_digit % 10) + '0');

				if (f_digit != 98 || s_digit != 99)
				{
					putchar(',');
					putchar(' ');
				}

			}
			s_digit++;
		}
		f_digit++;
	}
	putchar('\n');

	return (0);
}
