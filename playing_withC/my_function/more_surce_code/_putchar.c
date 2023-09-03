#include <unistd.h>

/**
 * putcchar - wrie c to standard output
 * @c: character to work on
 * Return: success
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
