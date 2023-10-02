#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the
 * POSIX standard output.
 *
 * @filename: the name of the file to be read.
 * @letters: the number of letters it should read and print.
 *
 * Return: actual number of letters it could read and print.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t rd, wr;
	char *buffer;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY, 0);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);

	rd = read(fd, buffer, letters);
	if (rd == -1)
		return (0);

	wr = write(STDOUT_FILENO, buffer, rd);
	if (wr != rd || wr == -1)
		return (0);

	close(fd);
	free(buffer);

	return (wr);
}
