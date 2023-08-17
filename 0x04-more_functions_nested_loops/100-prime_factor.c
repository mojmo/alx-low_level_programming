#include <stdio.h>
#include <math.h>
#include <stdlib.h>

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
	unsigned long largest_prime = 0;
	unsigned long numSqrt = sqrtl(num);
	unsigned long i = 2;

	while (i <= numSqrt)
	{
		while (num % i == 0)
		{
			largest_prime = fmax(largest_prime, i);
			num /= i;
		}

		i++;
	}

	printf("%lu\n", largest_prime);

	return (0);
}
