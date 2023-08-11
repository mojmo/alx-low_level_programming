#include <stdio.h>

/**
 * main - Entry point of program.
 *
 * Description: prints all possible different combinations of three digits.
 *
 * Return: 0 if successed.
*/

int main(void)
{
	int l_digit = 0, m_digit, r_digit;

	while (l_digit < 10)
	{
		m_digit = 0;

		while (m_digit < 10)
		{
			r_digit = 0;

			while (r_digit < 10)
			{
				if (l_digit != m_digit &&
					l_digit < m_digit &&
					m_digit != r_digit &&
					m_digit < r_digit)
				{
					putchar(l_digit + '0');
					putchar(m_digit + '0');
					putchar(r_digit + '0');

					if (l_digit + m_digit + r_digit != 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
				r_digit++;
			}
			m_digit++;
		}
		l_digit++;
	}
	putchar('\n');

	return (0);
}
