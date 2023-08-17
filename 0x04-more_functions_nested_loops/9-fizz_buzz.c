#include <stdio.h>

/**
 * main - Entry point of program.
 *
 * Description: prints the numbers from 1 to 100.
 *              But for multiples of three print "Fizz".
 *              for the multiples of five print "Buzz".
 *              for multiples of both three & five print "FizzBuzz".
 *
 * Return: Always 0 (success).
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && !(i % 5 == 0))
			printf("%s", "Fizz");
		else if ((i % 5 == 0) && !(i % 3 == 0))
			printf("%s", "Buzz");
		else if ((i % 3 == 0) && (i % 5 == 0))
			printf("%s", "FizzBuzz");
		else
			printf("%d", i);

		if (i != 100)
			printf("%s", " ");
	}
	printf("\n");
	return (0);
}
