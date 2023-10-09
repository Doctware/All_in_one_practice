#include "main.h"

/**
 * print_rev - print the ords in reverse
 * @s: pointing to the variable of the words
 * Return: success
 */

void print_rev(char *s)
{
	int lent = 0;
	int i = 0;

	while(s[lent] != '\0')
	{
		lent++;
	}
	
	for (i = lent; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
