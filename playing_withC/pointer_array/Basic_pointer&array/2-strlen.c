#include "main.h"

/**
 * _strlen - get the lenth of the str
 * @str: the string
 * Return: lenth
 */

int _strlen(char *s)
{
	int l = 0;

	while(*s != '\0')
	{
		s++;
		l++;
	}
	printf("%p\n", s);
	return (l);
}
