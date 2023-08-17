#include <stdio.h>
#include <math.h>

/**
 * sqroot - find the square root of a number.
 *
 * @num: The number to find its square root.
 *
 * Retrun: Square root of @num.
 */

double sqroot(double num)
{
	double temp = 0;
	double sqr = num / 2;

	while (sqr != temp)
	{
		temp = sqr;
		sqr = (num / temp + temp) / 2;
	}

	return (sqr);
}


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
	unsigned long numSqrt = sqroot(num);
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
