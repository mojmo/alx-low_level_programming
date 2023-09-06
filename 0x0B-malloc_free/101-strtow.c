#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * words_count - count the number of words in a string.
 *
 * @str: the string.
 *
 * Return: the number of words.
 */

int words_count(char *str)
{
	int i, count = 0, curr = 0, next = 1;

	for (i = 0; str[i] != '\0'; i++)
	{
		if ((str[curr] != ' ' && str[next] == ' ') ||
		(str[curr] != ' ' && str[next] == '\0'))
			count++;

		curr++;
		next++;
	}

	return (count);
}

/**
 * strtow - a function that splits a string into words.
 *
 * @str: the string to be splited.
 *
 * Return: a pointer to an array of strings (words),
 * NULL if it fails or if str == NULL or str == "".
 */

char **strtow(char *str)
{
	char **words;
	int i, j, m, len, wordsCount;

	if (str == NULL || *str == '\0')
		return (NULL);

	wordsCount = words_count(str);

	if (wordsCount == 0)
		return (NULL);

	words = malloc(sizeof(char *) * wordsCount);
	if (words == NULL)
		return (NULL);

	i = 0;
	for (j = 0; str[j] != '\0'; j++)
	{
		if (str[j] != ' ')
			len++;

		if (str[j] != ' ' && str[j + 1] == ' ')
		{
			words[i] = malloc(sizeof(char) * len);

			if (words[i] == NULL)
			{
				for (; i >= 0; i--)
					free(words[i]);

				free(words);
				return (NULL);
			}

			for (m = 0; m < len; m++)
				words[i][m] = str[j - len + m + 1];

			words[i][len] = '\0';

			i++;
			len = 0;
		}

	}

	words[i] = '\0';

	return (words);
}
