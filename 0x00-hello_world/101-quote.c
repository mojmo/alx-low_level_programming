#include <unistd.h>

/**
 * main - Entry point of the program.
 *
 * Description: C program prints a qoute using write() function.
 * write(fd, buf, nbytes);
 *
 * Return: 1 (an error)
*/

int main(void)
{
	char qot[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(STDOUT_FILENO, qot, 59);
	return (1);
}
