#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * total_len - count the length of string without spaces.
 *
 * @str: the string.
 *
 * Return: the string length.
 */

int total_len(char *str)
{
	int i, total = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
			continue;

		total++;
	}

	return total;
}

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

	for(i = 0; str[i] != '\0'; i++)
	{
		if ((str[curr] != ' ' && str[next] == ' ') || (str[curr] != ' ' && str[next] == '\0'))
			count++;

		curr++;
		next++;
	}

	return count;
}

/**
 * delete_spaces - a function that delete duplicated spaces from a string.
 * 
 * @str: the string.
 * 
 * Return: a pointer to the string without spaces.
 */

char *delete_spaces(char *str)
{
    int i, j;
    
    for (i = 0, j = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ' && str[i + 1] != ' ')
        {
            str[j] = '-';
        }
        else if (str[i] == ' ' && str[i + 1] == ' ')
        {
            continue;
        }
        str[j] = str[i];
        j++;
    }
    str[j] = '\0';
    
    return str;
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
	int i, j, len, wordCount, m = 0;
	char *word;

	word = delete_spaces(str);
	len = total_len(str);
	wordCount = words_count(str);

	if (str == NULL || len == 0)
		return (NULL);

	/*total = len + wordCount;*/

	printf("len = %d\n", len);
	printf("words = %d\n", wordCount);

	words = malloc((wordCount + 1) * sizeof(char *));

	for (i = 0; i < len; i++)
		words[i] = malloc(sizeof(char) * (len + 1));

	if (words == NULL)
        	return (NULL);

	for (i = 0; i < wordCount; i++)
	{
		for (j = 0; word[m + 1] != ' ' || word[m + 1] != '\0'; j++)
		{
			words[i][j] = word[m];
			m++;
		}
		words[i][j] = '\0';
	}
	

	return (words);
}
