#include <stdio.h>

/**
 * main - Entry point of program.
 *
 * Description: prints all possible different combinations of two digits.
 *
 * Return: 0 if successed.
*/

int main(void)
{
	int l_digit = 0, r_digit;

	while (l_digit < 10)
	{
		r_digit = 0;
		while (r_digit < 10)
		{
			if (l_digit != r_digit && l_digit < r_digit)
			{
				putchar(l_digit + '0');
				putchar(r_digit + '0');

				if (l_digit != 8 || r_digit != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
			r_digit++;
		}
		l_digit++;
	}
	putchar('\n');

	return (0);
}
