#include "doctware.h"

/**
 * main - check the code
 *
 * Return: 0 Always
 */

int  main(void)
{
	char *s = "hello, world";
	char *f = "oleh";
	unsigned int n;

	n = _strspn(s, f);
	printf("%u\n", n);
	return (0);
}
