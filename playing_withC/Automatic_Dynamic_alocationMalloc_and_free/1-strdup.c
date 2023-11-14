#include "doctware.h"

/**
 * _strdup - return a pointer to a newly allocated space in memory,
 * which contains a copy of a string given as a parameter.
 * @str: the string given
 *
 * Return: pointer to the uplcated string
 */

char *_strdup(char *str)
{

	char *duplicate;
	int i = 0, j = 0;

	if (str == NULL)
		return (NULL);

	duplicate = malloc(sizeof(*str) * (strlen(str) + 1));

	 if (duplicate == NULL)
                return (NULL);

	while (str[i] != '\0')
	{
		duplicate[j] = str[i];
		i++;
		j++;
	}

	duplicate[j] = '\0';

	return duplicate;
}
