#include "main.h"

/**
 * print_nbr - this function print number
 *
 * Return: numbers
 */

void print_nbr(void)
{
	char num;
	num = 48;

	while (num < 58)
	{
		if (num != 50 && num != 52)
		{
			_putchar(num);
		}
		num++;
	}
	_putchar('\n');
}
