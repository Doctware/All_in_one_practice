#include "doctware.h"

/**
 * _calloc - allocate memory for an array using malloc
 * @nmemb: number of elements to allocate for
 * @size: the size of each element byte
 *
 * Return: pointer to llocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *res;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return NULL;

	res = malloc(nmemb * size);
	if (res == NULL)
		return NULL;

	for (i = 0; i < nmemb * size; i++)
	{
		*(res + i) = 0;
	}

	return (res);
}
