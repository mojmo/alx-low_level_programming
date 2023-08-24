#include <stdio.h>
#include "main.h"

/**
 * print_hex - shows the hexadecimal content (2 chars) of the buffer,
 *		2 bytes at a time, separated by a space.
 *
 * @b: the buffer.
 * @start: point in the buffer to start with it.
 * @end: point in the buffer to end with it.
 */

void print_hex(char *b, int start, int end)
{
	int hex = 0;

	while (hex < 10)
	{
		if (hex < end)
			printf("%02x", *(b + start + hex));
		else
			printf("  ");
		if (hex % 2 == 1)
			printf(" ");
		hex++;
	}
}

/**
 * print_ascii - shows the content of the buffer. If the byte is a
 *		printable character, print the letter, if not, print '.'
 *
 * @b: the buffer.
 * @start: point in the buffer to start with it.
 * @end: point in the buffer to end with it.
 */

void print_ascii(char *b, int start, int end)
{
	int ascii = 0;
	int letter;

	while (ascii < end)
	{
		letter = *(b + ascii + start);
		if (!(letter >= 32 && letter <= 126))
			letter = '.';
		printf("%c", letter);
		ascii++;
	}
}

/**
 * print_buffer -  a function that prints a buffer.
 *
 * @b: the buffer.
 *
 * @size: the size of the buffer.
 */

void print_buffer(char *b, int size)
{
	int start, end;

	if (size > 0)
	{
		for (start = 0; start < size; start += 10)
		{
			if (size - start < 10)
				end = size - start;
			else
				end = 10;

			printf("%08x: ", start);

			print_hex(b, start, end);
			print_ascii(b, start, end);

			printf("\n");
		}
	}
	else
	{
		printf("\n");
	}
}
