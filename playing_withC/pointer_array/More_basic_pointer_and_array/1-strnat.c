#include "main.h"

/**
 * _strncat - concatenate the most byt of src to dest
 * @dest: pointing to the destination string
 * @src: pointing to the surce string
 * Return: pointer to the resulting string
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0;
	int i;

	while (dest[dest_len] != '\0'){
		dest_len++;
	}

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[dest_len] = src[i];
		dest_len++;
	}

	dest[dest_len] = '\0';

	return dest;
}
