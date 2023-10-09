#include "main.h"

/**
 * _puchar - write to the standard output
 * @c: character to be writen
 * Return: char
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
