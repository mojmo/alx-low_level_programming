#include <stdio.h>

/**
 * main - Entry point of program.
 *
 * Description: prints the largest prime factor of the number 612852475143.
 *
 * Return: Always 0 (success).
 */

int main(void)
{
	unsigned long num = 612852475143;
	unsigned long div = 0;
	unsigned long i = 1;

	while (i <= num)
	{
		if (num % i == 0)
		{
			if (num == i)
			{
				printf("%lu\n", i);
				break;
			}
			div = num / i;
			num = div;
		}
		i++;
	}

	return (0);
}
