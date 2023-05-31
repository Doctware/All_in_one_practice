#include <unistd.h>

/**
 * _putchar - write c to the standerd out put
 * @c: the charcter to be print
 * Return: write
 * On error, -1 is returned anf error no is set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
