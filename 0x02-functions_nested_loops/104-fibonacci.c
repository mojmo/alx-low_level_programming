#include <stdio.h>

/**
 * main - Entry point of program.
 *
 * Description: prints the first 98 Fibonacci numbers, starting with 1 and 2.
 *
 * Return: Always 0 (success).
 */

int main(void)
{
	unsigned long prevNum = 0, currNum = 1, nextNum;
	unsigned long prevNum_half1, prevNum_half2, currNum_half1, currNum_half2;
	unsigned long half1, half2, div = 10000000000;
	int count;

	for (count = 0; count < 92; count++)
	{
		nextNum = prevNum + currNum;
		printf("%lu, ", nextNum);

		prevNum = currNum;
		currNum = nextNum;
	}

	prevNum_half1 = prevNum / div;
	prevNum_half2 = prevNum % div;
	currNum_half1 = currNum / div;
	currNum_half2 = currNum % div;

	for (count = 93; count < 99; count++)
	{
		half1 = prevNum_half1 + currNum_half1;
		half2 = prevNum_half2 + currNum_half2;
		if (prevNum_half2 + currNum_half2 > 9999999999)
		{
			half1 += 1;
			half2 %= div;
		}

		printf("%lu%lu", half1, half2);

		prevNum_half1 = currNum_half1;
		prevNum_half2 = currNum_half2;
		currNum_half1 = half1;
		currNum_half2 = half2;
		if (count != 98)
			printf(", ");
	}
	printf("\n");
	return (0);
}
