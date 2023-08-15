#include "main.h"

/**
 * _isalpha - Checks for alphabetic character.
 * @c: The character to check.
 *
 * Return: 1 if c is a letter, lowercase or uppercase.
 *         0 otherwise.
*/

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
