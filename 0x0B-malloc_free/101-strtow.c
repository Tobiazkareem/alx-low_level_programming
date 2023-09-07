#include "main.h"
#include <stdlib.h>
#include <string.h>

int word_len(char *str);
int count_words(char *str);

/**
 * word_len - locates index marking at the end of first word
 * within a string
 * @str: string
 *
 * Return: The index marking
 */

int word_len(char *str)
{
	int count = 0, length = 0;

	while (*(str + count) && *(str + count) != ' ')
	{
		length++;
		count++;
	}

	return (length);
}

/**
 * count_words - counts string
 * @str: string
 *
 * Return: return count
 */

int count_words(char *str)
{
	/*declare variables */
	int count = 0, in_word = 0, y;

	for (y = 0; str[y] != '\0'; y++)
	{
		if (str[y] != ' ')
		{
			if (!in_word)
			{
				in_word = 1;
				count++;
			}
		}
		else
		{
			in_word = 0;
		}
	}
	return (count);
}

/**
 * strtow - string splits into words
 * @str: string to split
 *
 * Return: return result
 */

char **strtow(char *str)
{
	/*declare variables */
	int number_words, z, word_index = 0, word_letters, y;
	char **results;

	if (str == NULL || str[0] == '\0')
	{
		return (NULL);
	}

	number_words = count_words(str);

	results = malloc((number_words + 1) * sizeof(char *));

	/* check if results is null */
	if (results == NULL)
	{
		return (NULL);
	}

	for (y = 0; y < number_words; y++)
	{
		while (str[word_index] == ' ')
			word_index++;

		word_letters = word_len(str + word_index);

		results[y] = malloc(sizeof(char) * (word_letters + 1));

		if (results[y] == NULL)
		{
			for (; y >= 0; y--)
			{
				free(results[y]);
			}

			free(results);
			return (NULL);
		}

		for (z = 0; z < word_letters; z++)
		{
			results[y][z] = str[word_index++];
		}

		results[y][z] = '\0';
	}

	results[y] = NULL;

	return (results);
}
