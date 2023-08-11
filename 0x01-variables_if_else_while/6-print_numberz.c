#include <stdio.h>

/**
 * main - Entry point of program.
 *
 * Description: prints digit numbers of base 10 from 0-9 using putchar().
 *
 * Return: 0 if successed.
*/

int main(void)
{
	int num = 0;

	while (num < 10)
	{
		putchar(num + '0');
		num++;
	}

	printf("\n");

	return (0);
}
