#include "doctware.h"

/**
 * memset - fill the memory with constant byte
 * @s: pointing to the are tha are to fill with costant byte
 * @b: the constant  byte
 * @n: the memory ara to be filled
 * Return: pionter to the memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *cp = s;
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	
	return (cp);
}
