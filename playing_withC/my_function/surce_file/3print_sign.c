#include "main.h"

/**
 * print_sign - print the sign of a number
 * @n: varible of the parameter
 * Return: 1, -1, and 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
