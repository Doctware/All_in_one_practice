#include <stdio.h>

/**
 * main - play with the Arithmetic operator
 * Return: 0 as succss
 */

int main()
{
	int a = 50;
	int b = 50;
	int c;

	c = a + b;
	printf("Line 1 - value of c = %i\n", c);

	c = a / b;
	printf("Line 2 - value of c = %i\n", c);

	c = a * b;
	printf("Line 3 - value of c = %i\n", c);

	c = a % b;
	printf("Line 4 - value of c = %i\n", c);

	c = a++;
	printf("Line 5 - value of c = %i\n", c);

	c = b--;
	printf("Line 6 - value of c = %i\n", c);

	return (0);
}
