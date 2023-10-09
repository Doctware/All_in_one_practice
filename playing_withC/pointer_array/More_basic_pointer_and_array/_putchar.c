#include "main.h"

/**
 * _putchar - write to the standard output
 * @c: character to be written
 * Return: Success
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
