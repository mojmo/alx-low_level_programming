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
 * append_text_to_file - a function that appends text at the end of a file.
 *
 * @filename: the name of the file.
 * @text_content: the NULL terminated string to add at the end of the file.
 *
 * Return: 1 on success and -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wr;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
		wr = write(fd, text_content, _strlen(text_content));

	close(fd);
	return (wr == -1 ? -1 : 1);
}
