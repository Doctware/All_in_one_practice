#include <stdio.h>

/**
 * main - print 1 to 30 then stop if encounter 29
 *
 * Return: 0 as success
 */

int main()
{
	int c = 1;

	while (c <= 30 && c != 16)
	{
		printf("%i\n", c);
		c++;
	}
	return (0);
}
