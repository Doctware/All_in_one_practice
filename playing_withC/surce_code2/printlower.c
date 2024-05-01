#include <stdio.h>

char AlphaPrinter(void);

/**
 * AlphaPrinter - print Alpha in lowercase
 * Return: Success
 */

char AlphaPrinter(void)
{
	char lower;
	char upper;

	for (lower = 97; lower <= 122; lower++)
		if (lower != 101 && lower != 113)
			putchar(lower);

	for (upper = 65; upper <= 90; upper++)
		putchar(upper);

	putchar('\n');
}

/**
 * main - check the code for execution
 * Return: success
 */

int main(void)
{
	AlphaPrinter();

	return (0);
}
