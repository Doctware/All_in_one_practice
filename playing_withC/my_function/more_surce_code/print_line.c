#include "main.h"

/**
 * print_line - line  printer
 * @n: the place holder
 * Return: lines
 */

void print_line(int n)
{
	int line;

	if (n <= 0)
		_putchar('\n');


	for (line = 0; line <= n; line++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
