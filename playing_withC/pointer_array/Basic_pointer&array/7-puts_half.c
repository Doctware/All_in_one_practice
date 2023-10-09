#include "main.h"

/**
 * puts_half - print half of the string
 * @str: pointing to the varable of string
 * Return: success
 */

void puts_half(char *str)
{
	int lent = 0;

	while (str[lent] != '\0')
	{
		if (lent == 4)
		{
			break;
		}
		else if (lent == 5)
		{
			continue;
			_putchar(str[lent]);
			lent++;
		}
	}
	_putchar('\n');
}
