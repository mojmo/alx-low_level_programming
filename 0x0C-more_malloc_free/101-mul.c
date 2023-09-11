#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strlen - A function that returns the length of a string.
 *
 * @str: A pointer of the string.
 *
 * Return: The length of the string.
 */

int _strlen(char *str)
{
	int len = 0;

	while (str[len] != '\0')
		len++;
	return (len);
}

/**
 * _isdigit - Checks for a digit (0 through 9).
 *
 * @c: The input to check.
 *
 * Return: 1 if c is a digit.
 * 0 otherwise.
 */

int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

/**
 * mult - a program that multiplies two positive numbers.
 *
 * @s1: the first number.
 * @s2: the second number.
 *
 * Return: the product of s1 * s2.
 */

char *mult(char *s1, char *s2)
{
	char *res = NULL;
	int len1, len2, total, num1, num2, carry;

	len1 = _strlen(s1);
	len2 = _strlen(s2);
	total = len1 + len2;
	res = malloc(sizeof(char) * total);
	if (res == NULL)
		printf("Error\n"), exit(98);
	while (total--)
		res[total] = 0;
	for (len1 = len1 - 1; len1 >= 0; len1--)
	{
		if (!_isdigit(s1[len1]))
		{
			printf("Error\n");
			free(res);
			exit(98);
		}
		num1 = s1[len1] - '0';
		carry = 0;
		for (len2 =  len2 - 1; len2 >= 0; len2--)
		{
			if (!_isdigit(s2[len2]))
			{
				printf("Error\n");
				free(res);
				exit(98);
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
 * main - a program that multiplies two positive numbers.
 *
 * @argc: the number of cmd arguments.
 * @argv: the cmd arguments.
 *
 * Return: Always 0 (success).
 */

int main(int argc, char **argv)
{
	char *res = NULL;
	int flag = 0, num = 0, len;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	len = _strlen(argv[1]) + _strlen(argv[2]);
	res = mult(argv[1], argv[2]);
	while (num < len)
	{
		if (res[num])
			flag = 1;
		if (flag)
			_putchar(res[num] + '0');
		num++;
	}
	if (!flag)
		_putchar('0');
	_putchar('\n');
	free(res);
	return (0);
}
