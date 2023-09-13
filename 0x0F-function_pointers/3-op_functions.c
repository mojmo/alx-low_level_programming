#include "3-calc.h"

/**
 * op_add - add two numbers together.
 * @a: first number.
 * @b: second number.
 *
 * Return: result of summation.
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtract two numbers.
 * @a: first number.
 * @b: second number.
 *
 * Return: result of  subtraction.
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply two numbers.
 * @a: first number.
 * @b: second number.
 *
 * Return: result of multiplication.
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divide two numbers.
 * @a: first number.
 * @b: second number.
 *
 * Return: result of division.
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - calculate the remainder of division.
 * @a: first number.
 * @b: second number.
 *
 * Return: the remainder of division.
 */

int op_mod(int a, int b)
{
	return (a % b);
}
