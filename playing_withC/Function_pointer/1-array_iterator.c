#include "function_pointer.h"

/**
 * array_iterator - execute a function given as a parameter
 * on each element of an array
 * @size: the size of the array
 * @action: pointer to the fuction
 * Return: function poinhter
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}	
}
