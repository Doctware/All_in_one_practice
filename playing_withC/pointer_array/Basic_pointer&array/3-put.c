#include "main.h"

/**
 * _put - print to stdout
 * @str: string to print
 * Return: string
 */

void _puts(char *str)
{
	while(*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
