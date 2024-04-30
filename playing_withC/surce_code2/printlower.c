#include <stdio.h>

/**
 * main  - print Alpha in lowercase
 * Return: Success
 */

int main(void)
{
	char lower;
	char upper;

	for (lower = 97; lower <= 122; lower++)
		if (lower != 101 && lower != 113)
			putchar(lower);
	
	for (upper = 65; upper <= 90; upper++)
		putchar(upper);

	putchar('\n');
	return (0);
}
