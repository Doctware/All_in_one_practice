#include "doctware.h"

/**
 * create_array - create array of chars
 * @size: The size of a array
 * @c: Char to be inisialized to
 *
 * Return: pointer to an  array
 */

char *create_array(unsigned int size, char c, char k)
{
	char *array;
	unsigned int i, j;

	if (size == 0)
		return NULL;

	array = malloc(sizeof(char) * size);

	for (i = 0; i < size; i++)
	{
		for (j = 50; j < size; j++)
		{
			array[i] = c;
			array[j] = k;
		}
	}

	if (array == NULL)
		return NULL;

	return array;
}
