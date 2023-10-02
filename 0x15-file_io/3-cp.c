#include "main.h"

/**
 * cp - a function that copies the contents of one file to another file.
 *
 * @file_from: name of the file to copy from.
 * @file_to: name of the file to copy to.
 *
 * Return: 1 on success, -1 on failure.
 */

int cp(const char *file_from, const char *file_to)
{
	int fd_from, fd_to, rd, wr;
	char buffer[BUFFER_SIZE];

	if (file_from == NULL || file_to == NULL)
		return (-1);

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}

	fd_to = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, PERMS);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		close(fd_from), exit(99);
	}
	while ((rd = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		wr = write(fd_to, buffer, rd);
		if (wr != rd || wr == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			close(fd_from), close(fd_to), exit(99);
		}
	}

	if (rd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		close(fd_from), close(fd_to), exit(98);
	}

	if (close(fd_from) == -1 || close(fd_to) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", errno), exit(100);
	return (1);
}

/**
 * main - Entry point of program.
 *
 * @argc: the number of command line arguments.
 * @argv: the command line arguments.
 *
 * Return: 0 on success, -1 on failure.
 */

int main(int argc, char **argv)
{
	int res;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	res = cp(argv[1], argv[2]);

	if (res != 1)
		return (res);

	return (0);
}
