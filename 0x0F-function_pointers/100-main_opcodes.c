#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point.
 * 
 * @argc: the number of command line arguments.
 * @argv: the command line arguments.
 * 
 * Description: a program that prints the opcodes of its own main function.
 * 
 * Return: Always 0 (success).
 */

int main(int argc, char *argv[])
{
	int (*ptr)(int, char**) = main;
	int bytes, i;
	unsigned char opcodes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < bytes; i++, ptr++)
	{
		opcodes = *(unsigned char *)ptr;
		printf("%.2x", opcodes);
		if (i != bytes)
			printf(" ");
	}
	printf("\n");

	return (0);
}
