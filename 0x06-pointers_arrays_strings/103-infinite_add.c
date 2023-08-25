#include "main.h"

/**
 * reverse_number - a function to reverse a number.
 *
 * @r: pointer to the number.
 * @size: the size of the number buffer.
 *
 * Return: a pointer to the reversed number.
 */

char *reverse_number(char *r, int size)
{
	int i;

	for (i = 0; i < size / 2; i++)
	{
		char tmp = r[i];

		r[i] = r[size - i - 1];
		r[size - i - 1] = tmp;
	}
	return (r);
}

/**
 * infinite_add - a function that adds two numbers.
 *
 * @n1: first number.
 * @n2: second number.
 * @r: the buffer that the function will use to store the result.
 * @size_r: the buffer size.
 *
 * Return: a pointer to the result.
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int resPtr, num1, num2, i, j, carry = 0, sum = 0;

	for (i = 0; n1[i] != '\0'; i++)
		;
	for (j = 0; n2[j] != '\0'; j++)
		;

	if ((i > size_r - 1) || (j > size_r - 1))
		return (0);

	resPtr = 0;

	while ((i >= 0 || j >= 0) && resPtr < size_r - 1)
	{
		i--;
		j--;

		num1 = (i >= 0) ? n1[i] - '0' : 0;
		num2 = (j >= 0) ? n2[j] - '0' : 0;
		sum = num1 + num2 + carry;

		carry = sum / 10;
		r[resPtr] = (sum % 10) + '0';

		resPtr++;
	}

	if ((carry == 1) && (resPtr < size_r - 1))
	{
		r[resPtr] = carry + '0';
		resPtr++;
	}

	if ((i >= 0 || j >= 0) && (resPtr == size_r - 1))
		return (0);

	r[resPtr] = '\0';
	reverse_number(r, resPtr);

	return (r);
}
