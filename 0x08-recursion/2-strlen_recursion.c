#include "main.h"

/**
 * _strlen_recursion - a function that prints a string, in reverse.
 *
 * @s: a pointer to the string.
 *
 * Return: the length of the string.
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
