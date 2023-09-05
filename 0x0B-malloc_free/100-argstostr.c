#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * argstostr - a function that concatenates all the arguments of the program.
 *
 * @ac: the number of cmd arguments.
 * @av: the cmd arguments.
 *`
 * Return: a pointer to a new string,
 * NULL if it fails or if ac == 0 or av == NULL.
 */

char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, len = 0, p = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		for (j = 0; av[i][j] != '\0'; j++)
			len++;

	str = malloc((len + 2) * sizeof(char) + (ac - 1));

	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[p] = av[i][j];
			p++;
		}
		str[p] = '\n';
		p++;
	}

	return (str);
}
