#include <stdio.h>
/**
 * main - Entry point of program.
 *
 * Description:  A program that prints the alphabet in lowercase.
 *
 * Return: 0 if successed.
*/

int main()
{

	char ch = 'a';

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	putchar('\n');

	return (0);
}
