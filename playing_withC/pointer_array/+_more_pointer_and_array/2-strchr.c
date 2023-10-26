#include "doctware.h"

/**
 * _strchr - locate a chracter
 * @s: pointing to were to locate the char
 * @C: char to be located
 * Return: pointer to the first occurance
 */

char *_strchr(char *s, char c)
{

	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}

	return (NULL);
}
