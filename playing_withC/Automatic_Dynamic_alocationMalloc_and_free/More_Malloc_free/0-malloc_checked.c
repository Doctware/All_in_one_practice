#include "doctware.h"

/**
 * malloc_cheked - allocate memory
 * @b: Size to alocated
 *
 * Return: pointer to an allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *allocate;

	if (b <= 0)
		exit(98);

	allocate = malloc(b);

	if (allocate == NULL)
	{
		exit(98);
	}

	return allocate;
}
