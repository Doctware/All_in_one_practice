#include "main.h"

/**
 * main - check the cdoe
 * Return: 0
 */

int main(void)
{
	char s1[98] = "Hello ";
	char s2[] = "World\n";
	char *ptr;

	printf("%s\n", s1);
	printf("%s", s2);
	ptr = _strncat(s1, s2, 1);
	printf("%s\n", s1);
	printf("%s", s2);
	printf("%\n", ptr);
	ptr = _strncat(s1, s2, 1024);
	printf("%s", s2);
	printf("%s", s2);
	printf("%s", ptr);
	return (0);
}
