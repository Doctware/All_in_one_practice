#include "doctware.h"

int _strlen(char *s);

/**
 * _strlen - calculate the lenth of  given str
 * @s: string
 * Return: Lenth of a string
 */

int _strlen(char *s)
{
	int lenth = 0;

	while (s[lenth] != '\0')
	{
		lenth++;
	}

	return (lenth);
}

/**
 * argstostr - Concatenate all argument passed
 * @ac: argument count
 * @av: argument vector
 *
 * Return: pointer to a new string, else NULL
 */

char *argstostr(int ac, char **av)
{
	int total_lent = 0;
	int i;
	char *result;
	int index;
	int lent;

	if (ac == 0 || av == NULL)
		return NULL;

	/* calculate the total lenth of cocatenated string */

	for (i = 0; i < ac; i++)
	{
		if (av[i] != NULL)
		{
			total_lent += _strlen(av[i]) + 1;
		}
	}

	/* Alocate memeory for the cocatenatd str */

	result = malloc(sizeof(char) * total_lent + 1);
	if (result == NULL)
		return NULL;

	/* concatinate each argument with a new line character */

	index = 0;
	for (i = 0; i < ac; i++)
	{
		if (av[i] != NULL)
		{
			lent = _strlen(av[i]);
			strcpy(result + index, av[i]);
			index += lent;

			if (i < ac)
			{
				result[index] = '\n';
				index++;
			}
		}
	}

	result[index] = '\0';

	return (result);
}
