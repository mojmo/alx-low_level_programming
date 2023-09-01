#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that multiplies two numbers.
 *
 * @argc: the number of command line arguments.
 * @argv: the command line arguments.
 *
 * Return: 0 if successed, 1 If the program does
 * not receive two arguments.
 */

int main(int argc, char *argv[])
{
	int i, mul = 1;

	if (argc == 3)
	{
		for (i = 1; i < argc; i++)
			mul *= atoi(argv[i]);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", mul);

	return (0);
}
