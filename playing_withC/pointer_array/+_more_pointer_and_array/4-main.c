#include "doctware.h"

/**
 * main - check the code
 *
 * Return: Always NULL
 */

int main(void)
{
	char *s = "hello, woeld";
	char *f = "world";
	char *t;

	t = _strpbrk(s, f);
	printf("%s\n", t);
	return (0);
}
