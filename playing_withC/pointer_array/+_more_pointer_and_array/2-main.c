#include "doctware.h"

/**
 * main - check the code
 *
 * Return: 0 Always
 */

int main(void)
{
	char *s = "hello  i love coding";
	char *f;

	f = _strchr(s, 'l');

	if (f != NULL)
	{
		printf("%s\n", f);
	}
	return (0);
}
