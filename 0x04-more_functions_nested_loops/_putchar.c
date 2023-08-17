#include <unistd.h>
#include "main.h"

/**
 * _putchar - print character to the standard output using write().
 * @ch: A character to print.
 *
 * Return: 1 if successed.
 *	  -1 if an error occurred.
 */

int _putchar(char ch)
{
	write(STDOUT_FILENO, &ch, 1);
	return (1);
}
