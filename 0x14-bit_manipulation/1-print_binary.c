#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 *
 * @n: the number in decimal.
 */

void print_binary(unsigned long int n)
{
	/* 63 refers to ((sizeof(unsigned long int) * 8) - 1) */
	unsigned long int bit = 1l << 63;
	int flag = 0;


	while (bit > 0)
	{
		if (n & bit)
		{
			flag = 1;
			_putchar('1');
		}
		else if (flag)
			_putchar('0');

		bit >>= 1;
	}

	if (!flag)
		_putchar('0');
}
