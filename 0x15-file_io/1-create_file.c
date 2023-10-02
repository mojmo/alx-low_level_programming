#include "main.h"

/**
 * _strlen - a function that prints a string, in reverse.
 *
 * @s: a pointer to the string.
 *
 * Return: the length of the string.
 */

int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen(s + 1));
}

/**
 * create_file - a function that creates a file.
 *
 * @filename: the name of the file to create.
 * @text_content: a NULL terminated string to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	int fd, wr;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
		wr = write(fd, text_content, _strlen(text_content));

	close(fd);
	return (wr == -1 ? -1 : 1);
}
