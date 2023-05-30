#include <stdio.h>

/**
 * main - print star
 *
 * Return: 0 as success
 */

int main()
{
	int a, b, c, d;

	for (a = 0; a <= 10; a++)
	{
		for (b = 1; b <= a; b++)
		{
			printf("*");
		}
	}
	for (c = 0; c <= a; c--)
       	{
	       	for (d = 1; d <= b; d--)
       		{
			printf("*");
		}
	}
	printf("\n");
	return (0);
}
