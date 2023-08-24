#include <stdio.h>
#include "main.h"

/**
 * print_buffer -  a function that prints a buffer.
 *
 * @b: the buffer.
 *
 * @size: the size of the buffer.
 */

void print_buffer(char *b, int size)
{
	int start, end, hex, ascii, letter;

	if (size > 0)
	{
		for (start = 0; start < size; start += 10)
		{
			if (size - start < 10)
				end = size - start;
			else
				end = 10;

			printf("%08x: ", start);

			/*start printing content of the buffer, 2 bytes at a time*/

			hex = 0;

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

			/*start printing content of the buffer in ascii*/

			ascii = 0;

			while (ascii < end)
			{
				letter = *(b + ascii + start);
				if (letter <= 32 && letter >= 126)
					letter = '.';
				printf("%c", letter);
				ascii++;
			}

			printf("\n");
		}
	}
	else
	{
		printf("\n");
	}
}
