#include "main.h"

/**
 * swap_int - swap the values
 * @a: swap it value to b value
 * @b:swap it value to a value
 * Return: value
 */

void swap_int(int *a, int *b)
{
	int sw;

	sw = *a;
	*a = *b;
	*b = sw;
}
