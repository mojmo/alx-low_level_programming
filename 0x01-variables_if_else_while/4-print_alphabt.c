#include <stdio.h>

/**
 * main - Entry point of program.
 *
 * Description:  A program that prints the alphabet in lowercase except q & e.
 *
 * Return: 0 if successed.
*/

int main(void)
{

	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch == 'q' || ch == 'e')
			ch++;
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}
