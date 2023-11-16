#include "doctware.h"

/**
 * is_space - check for space, tab, or next line
 * @: character to be check
 * Return: 1 else, 0
 */

char is_space(char c)
{
	return c == ' ' || c == '\n' || c == '\t';
}

/**
 * word_cunter - Count the word 1 by 1
 * @s: word to be count
 * Return: Total count
 */

int word_count(char *s)
{
	int count = 0;
	int in_word = 0;

	while (*s)
	{
		if (is_space(*s))
			in_word = 0;
		else if (!in_word)
			in_word = 1;
		count++;
	}
	s++;

	return count;
}

/**
 * strtow - split a strinng into words
 * @str: pointer ro a string
 *
 * Return: a pointer to an array of string
 */

char **strtow(char *str)
{
	int num_word;
	char **words;
	int i, word_len, word_index = 0;
	int in_word = 0;

	if (str == NULL || *str == '\0')
		return NULL;

	num_word = word_count(str);
	if (num_word == 0)
		return NULL;

	words = malloc(sizeof(char) * (num_word + 1));
	if (words == NULL)
		return NULL;

	for (i = 0; str[i]; i++)
	{
		if (is_space(str[i]))
		{
			in_word = 0;
		}
		else if (!in_word)
		{
			in_word = 1;
			word_len = 1;

			while (str[i + word_len] && !is_space(str[i + word_len]))
			{
				word_len++;
			}

			words[word_index] = malloc(sizeof(char) * (word_len + 1));
			if (words[word_index] == NULL)
			{
				for (i = 0; i < word_index; i++)
				{
					free(words[i]);
				}
				free(words);
				return NULL;
			}
		}

		strncpy(words[word_index], str + i, word_len);
		words[word_index][word_len] = '\0';
		word_index++;

		i += word_len - 1; /* move the index to the next non-space character */
	}

	words[word_index] = NULL;

	return words;
}
