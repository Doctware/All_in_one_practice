#include "main.h"

/**
 * print_diagonal - print diagonal on the screen
 * @n: place holder
 */

void print_diagonal(int n)
{
	int diago;
	int spc;

	if (n <= 0)
		_putchar('\n');

	for (diago = 0; diago <= n; diago++)
	{
		for (spc = 0; spc <= diago; spc++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
