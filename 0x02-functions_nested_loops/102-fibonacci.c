#include <stdio.h>
#include "main.h"

/**
 * main - Entry point of program.
 *
 * Description: prints the first 50 Fibonacci numbers, starting with 1 and 2.
 *
 * Return: Always 0 (success).
*/

int main(void)
{
	unsigned long prevNum = 0, currNum = 1, nextNum = 0;
	int count = 0;

	while (count < 50)
	{
		nextNum = prevNum + currNum;
		printf("%lu", nextNum);

		prevNum = currNum;
		currNum = nextNum;

		if (count == 49)
			printf("\n");
		else
			printf(", ");
		count++;
	}

	return (0);
}
