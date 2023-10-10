#include "main.h"

/**
 * reverse_array - print the element of an array in reverse
 * @a: an array of integer
 * @n: the elemnet of an array
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int j = n -1;
	int swp;

	while (i < j)
	{
		swp = a[i];
		a[i] = a[j];
		a[j] = swp;

		i++;
		j--;
	}
}
