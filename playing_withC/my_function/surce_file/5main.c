#include "main.h"

/**
 * main - check the code
 *
 * Return: 0 as success
 */

int main(void)
{
	int r;

	r = print_last_digit(98);
	r = print_last_digit(0);
	r = print_last_digit(-1024);
	_putchar('0' + r);
	_putchar('\n');
	return(0);
}
