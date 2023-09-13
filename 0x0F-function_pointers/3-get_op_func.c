#include "3-calc.h"
#include <stddef.h>

/**
 * get_op_func - selects the correct function to perform the
 * operation asked by the user.
 *
 * @s: the operator to be checked.
 *
 * Return: pointer to the function that corresponds to the operator given as a
 * parameter. If s does not match any of the 5 expected operators return NULL.
 */

int (*get_op_func(char *s))(int, int)
{
	int i = 0;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	while (i < 5)
	{
		if (s && *s == ops[i].op[0])
			return ((ops[i]).f);

		i++;
	}
	return (NULL);
}
