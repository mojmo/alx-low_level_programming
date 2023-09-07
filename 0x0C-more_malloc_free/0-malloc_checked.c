#include <stdlib.h>	
#include "main.h"

/**
 * malloc_checked - a function that allocates memory using malloc.
 *
 * @b: memroy space to be allocated.
 *
 * Return: a pointer to the allocated memory,
 * if malloc fails, function should cause normal
 * process termination witha status value of 98.
 */

void *malloc_checked(unsigned int b)
{
	void *spc = malloc(b);

	if (spc == NULL)
		exit(98);

	return (spc);
}
