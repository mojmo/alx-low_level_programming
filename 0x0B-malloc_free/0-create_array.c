#include <stdlib.h>
#include "main.h"

/**
 * create_array - a function that creates an array of chars,
 * and initializes it with a specific char.
 *
 * @size: the size of the array.
 * @c: a specific char to fill the array with.
 *
 * Return: a pointer to the array, NULL if it fails or size = 0.
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(size * sizeof(char));

	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}

	return (str);
}
