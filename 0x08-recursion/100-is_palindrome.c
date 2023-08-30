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

/**
 * is_palindrome_helper - help to check if a string is palindrome or not.
 *
 * @s: the string.
 * @len: the length of s.
 *
 * Return: 1 if s is palindrome.
 *          0 if n not.
 */

int is_palindrome_helper(char *s, int len)
{
	if (len == 0 || len == 1)
		return (1);

	if (s[0] != s[len - 1])
		return (0);

	return (is_palindrome_helper(s + 1, len - 2));
}

/**
 * is_palindrome - check if a string is palindrome or not.
 *
 * @s: the string.
 *
 * Return: 1 if s is palindrome.
 *		0 if n not.
 */

int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	return (is_palindrome_helper(s, len));
}
