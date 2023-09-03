#include "main.h"

/**
 * isdigit - check for a digit
 * @c: varible as a palce holder
 * Return: 0 as success
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
