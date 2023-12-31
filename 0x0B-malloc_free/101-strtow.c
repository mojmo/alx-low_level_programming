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
	int i = 0, j, m, len = 0, wordsCount;

	if (str == NULL || *str == '\0')
		return (NULL);

	wordsCount = words_count(str);
	if (wordsCount == 0)
		return (NULL);

	words = malloc(sizeof(char *) * (wordsCount + 1));
	if (words == NULL)
		return (NULL);

	for (j = 0; str[j] != '\0'; j++)
	{
		if (str[j] != ' ')
			len++;

		if ((str[j] != ' ' && str[j + 1] == ' ') ||
		(str[j] != ' ' && str[j + 1] == '\0'))
		{
			words[i] = malloc(sizeof(char) * (len + 1));
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
