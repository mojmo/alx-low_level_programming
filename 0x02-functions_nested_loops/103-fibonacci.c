#include <stdio.h>
#include "main.h"

/**
 * main - Entry point of program.
 *
 * Description: prints the sum of the even-valued terms
 *		which do not exceed 4,000,000.
 *
 * Return: Always 0 (success).
*/

int main(void)
{
	unsigned long prevNum = 0, currNum = 1, nextNum = 0;
	int sum = 0;

	while (1)
	{
		nextNum = prevNum + currNum;

		if (nextNum > 4000000)
			break;
		if ((nextNum % 2) == 0)
			sum += nextNum;

		prevNum = currNum;
		currNum = nextNum;
	}

	printf("%d\n", sum);
	return (0);
}
