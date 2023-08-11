#include <stdio.h>

/**
 * main - Entry point of program.
 *
 * Description:  A program that prints the alphabet in lowercase & uppercase.
 *
 * Return: 0 if successed.
*/

int main(void)
{

	char ch = 'a';
	char upper_ch = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}

	while (upper_ch <= 'Z')
	{
		putchar(upper_ch);
		upper_ch++;
	}

	putchar('\n');

	return (0);
}
