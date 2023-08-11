#include <stdio.h>

/**
 * main - Entry point of program.
 *
 * Description:  A program that prints all the numbers of base 16 in lowercase.
 *
 * Return: 0 if successed.
*/

int main(void)
{
	int ch = 48;

	while (ch <= 102)
	{
		putchar(ch);
		if (ch == 57)
			ch += 39;
		ch++;
	}

	putchar('\n');

	return (0);
}
