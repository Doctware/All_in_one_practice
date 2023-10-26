#include "doctware.h"

/**
 * _strpbrk - search a string for any of set of byte
 * @s: were to search
 * @accept: what to search
 * Return: a pointer to the byte
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *a = accept;

		while (*a != '\0')
		{
			if (*s == *a)
			{
				return (s);
			}
			a++;
		}
		s++;
	}

	return (NULL);
}
