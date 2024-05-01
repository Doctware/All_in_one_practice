#include "function_pointer.h"

/**
 * int_index - searches for an integer
 * @size: The number of element in the array
 * @array: the array
 * @cmp: The pointer to the function to used to compare value
 * Return: -1 if no element maches, -1 if size <= 0
 */

int int_index(int *array, int size, int (*cmp) (int))
{
	int i;
	if (array == NULL || cmp == NULL || size <= 0)
		return -1;

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}

	return (-1);
}
