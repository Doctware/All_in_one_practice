#include "main.h"

/**
 * print_array - print the element in the array
 * @a: pointing to the variable array
 * @n: the number of element to be printed
 * Return: Success
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < 4)
		{
			printf(", ");
		}
	}

	printf("\n");
}
