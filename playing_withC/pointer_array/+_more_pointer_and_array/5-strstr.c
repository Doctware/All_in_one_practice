#include "doctware.h"

/**
 * _strstr - locate a subdstring
 * @hystack: were to find the string
 * @needle: string to be compered
 * Return: pointer to located substring. else, NULL
 */

char *_strstr(char *hystack, char *needle)
{
	while (*hystack != '\0')
	{
		char *h = hystack;
		char *n = needle;

		while (*n != '\0' && *h == *n)
		{
			h++;
			n++;
		}
		if (*n == '\0')
		{
			return (hystack);
		}
		hystack++;
	}
	
	return (NULL);
}
