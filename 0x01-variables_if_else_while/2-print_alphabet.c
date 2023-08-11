#include <stdio.h>

/**
 * main - Entry point of program.
 *
 * Description:  A program that prints the alphabet in lowercase.
 *
 * Return: 0 if successed.
*/

int main(void)
{

	char ch = 'a';

	while (ch <= 'z)
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}
