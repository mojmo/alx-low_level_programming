#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of program.
 *
 * @argc: the number of command line arguments.
 * @argv: the command line arguments.
 *
 * Description: a program that performs simple operations like sum, div, etc.
 *
 * Return: 0 if successed.
 */

int main(int argc, char **argv)
{
	int a = atoi(argv[1]), b = atoi(argv[3]);
	int (*op_func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	op_func = get_op_func(argv[2]);

	if (!op_func)
	{
		printf("Error\n");
		exit(99);
	}

	if ((argv[2][0] == '/' || argv[2][0] == '%') && !b)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", op_func(a, b));

	return (0);
}
