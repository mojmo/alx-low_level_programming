#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/**
 *  * _isdigit - checks if character is digit
 *   * @c: the character to check
 *    *
 *     * Return: 1 if digit, 0 otherwise
 *      */
int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

/**
 *  * _strlen - returns the length of a string
 *   * @s: the string whose length to check
 *    *
 *     * Return: integer length of string
 *      */
int _strlen(char *s)
{
	int i = 0;

	while (*s++)
		i++;
	return (i);
}

/**
 *  * big_multiply - multiply two big number strings
 *   * @s1: the first big number string
 *    * @s2: the second big number string
 *     *
 *      * Return: the product big number string
 *       */
char *big_multiply(char *s1, char *s2)
{
	char *res;
	int len1, len2, total, num1, num2, carry;

	len1 = _strlen(s1);
	len2 = _strlen(s2);
	total = len1 + len2;
	res = malloc(total);
	if (res == NULL)
		printf("Error\n"), exit(98);
	while (total >= 0)
	{
		res[total] = 0;
		total--;
	}

	for (len1--; len1 >= 0; len1--)
	{
		if (!_isdigit(s1[len1]))
		{
			free(res);
			printf("Error\n"), exit(98);
		}
		num1 = s1[len1] - '0';
		carry = 0;

		for (len2 = _strlen(s2) - 1; len2 >= 0; len2--)
		{
			if (!_isdigit(s2[len2]))
			{
				free(res);
				printf("Error\n"), exit(98);
			}
			num2 = s2[len2] - '0';

			carry += res[len1 + len2 + 1] + (num1 * num2);
			res[len1 + len2 + 1] = carry % 10;

			carry /= 10;
		}
		if (carry)
			res[len1 + len2 + 1] += carry;
	}
	return (res);
}


/**
 *  * main - multiply two big number strings
 *   * @argc: the number of arguments
 *    * @argv: the argument vector
 *     *
 *      * Return: Always 0 on success.
 *       */
int main(int argc, char **argv)
{
	char *r;
	int a, c, x;

	if (argc != 3)
		printf("Error\n"), exit(98);

	x = _strlen(argv[1]) + _strlen(argv[2]);
	r = big_multiply(argv[1], argv[2]);
	c = 0;
	a = 0;
	while (c < x)
	{
		if (r[c])
			a = 1;
		if (a)
			_putchar(r[c] + '0');
		c++;
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(r);
	return (0);
}
