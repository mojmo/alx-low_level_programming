#include <stdio.h>

/**
 * main - Entry point of program.
 *
 * Description:  A program that prints the alphabet in lowercase in reverse.
 *
 * Return: 0 if successed.
*/

int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}

	putchar('\n');

	return (0);
}
