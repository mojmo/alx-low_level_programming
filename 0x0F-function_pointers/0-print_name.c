#include "function_pointers.h"

/**
 * print_name - a function that prints a name
 *
 * @name: the name to be printed.
 * @f: a callback function get the name and print it.
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}

