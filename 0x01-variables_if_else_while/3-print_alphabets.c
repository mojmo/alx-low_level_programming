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

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);

	for (upper_ch = 'A'; upper_ch <= 'Z'; upper_ch++)
		putchar(upper_ch);

	putchar('\n');

	return (0);
}
