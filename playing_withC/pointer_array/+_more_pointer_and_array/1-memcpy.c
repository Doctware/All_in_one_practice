#include "doctware.h"

/**
 * memcpy - copy memory area
 * @dest: destination to copy to
 * @src: were to copy from
 * @n: the byte to be copy
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *cp = dest;
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (cp);
}
