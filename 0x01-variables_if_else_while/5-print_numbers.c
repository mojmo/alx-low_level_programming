#include <stdio.h>

/**
 * main - Entry point of program.
 *
 * Description: prints all single digit numbers of base 10 from 0 to 9.
 *
 * Return: 0 if successed.
*/

int main(void)
{
	int num = 0;

	while (num < 10)
	{
		printf("%d", num);
		num++;
	}

	printf("\n");


	return (0);
}
