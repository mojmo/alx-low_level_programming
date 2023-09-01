#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that adds positive numbers.
 *
 * @argc: the number of command line arguments.
 * @argv: the command line arguments.
 *
 * Return: 0 if successed, 1 If one of the number
 * contains symbols that are not digits
 */

int main(int argc, char *argv[])
{
	int i, sum = 0;
	char *ch;

	for (i = 1; i < argc; i++)
	{
		for (ch = argv[i]; *ch != '\0'; ch++)
		{
			if (*ch < '0' || *ch > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);
}
