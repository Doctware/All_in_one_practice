#include "main.h"

/**
 * _islower - check for lowe case
 *@c: character to be print
 * Return: lower case
 *
 */

int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
