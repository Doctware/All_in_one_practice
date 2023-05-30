#include "main.h"

/**
 * _isalpha - check for alphabetic character
 * @c: character to be print
 * Return: success
 */

int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
