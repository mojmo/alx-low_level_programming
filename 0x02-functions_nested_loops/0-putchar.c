#include "main.h"

/**
 * main - Entry point of program.
 *
 * Description: prints "_putchar".
 *
 * Return: 0 if Successed.
*/

int main(void)
{
	char prin[] = "_putchar";
	int ch = 0;

	while (ch <= 8)
	{

		_putchar(prin[ch]);
		ch++;
	}

	_putchar('\n');

	return (0);
}
