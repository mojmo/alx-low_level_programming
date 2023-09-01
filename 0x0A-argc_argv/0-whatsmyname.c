#include <stdio.h>

/**
 * main -  a program that prints its name.
 *
 * @argc: the number of command line arguments.
 * @argv: the command line arguments.
 *
 * Return: 0 if successed.
 */

int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);
	return (0);
}
