#include "main.h"

/**
 * puts2 - print every other char from 1st one
 * @str: pointig to variable of the value
 * Return: 0 always
 */

void puts2(char *str)
{
	int st = 0;

	while (str[st] != '\0')
	{
		_putchar(str[st]);
		st += 2;
	}
	_putchar('\n');
}
