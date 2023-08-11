#include <stdio.h>

/**
 * main - Entry point of program.
 *
 * Description: prints all possible combinations of single-digit numbers.
 *
 * Return: 0 if successed.
*/

int main(void)
{
	int num = 0;

	while (num <= 9)
	{
		putchar(num + 48);
		if (num != 9)
		{
			putchar(',');
			putchar(' ');
		}
		num++;
	}

	putchar('\n');

	return (0);
}
