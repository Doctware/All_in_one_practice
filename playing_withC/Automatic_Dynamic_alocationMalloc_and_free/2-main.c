#include "doctware.h"

/**
 * main - check the code
 *
 * Return: Always 0
 */

int main(void)
{
	char *s;

	s = str_concat("Doctware", " the coder");
	if (s == NULL)
	{
		printf("failed\n");
		return 1;
	}
	printf("%s\n", s);
	free(s);
	return (0);
}
