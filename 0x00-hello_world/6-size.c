#include <stdio.h>

/**
 * main - Entry point of the program.
 *
 * Description: A C program that prints the size of various data types using sizeof() function.
 *
 * Return: 0 if program successed.
*/

int main(void)
{
	printf("Size of a char: %u byte(s)\n", sizof(char));
	printf("Size of a char: %u byte(s)\n", sizof(int));
	printf("Size of a char: %u byte(s)\n", sizof(long int));
	printf("Size of a char: %u byte(s)\n", sizof(long long int));
	printf("Size of a char: %u byte(s)\n", sizof(float));
	return (0);
}
