#include "main.h"

/**
 * _strncpy - copy sring from src dest
 * @src: were to copy from
 * @dest: were to copy to
 * Return: pointer to the dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i ++)
	{
		dest[i] = '\0';
	}

	return dest;
}
