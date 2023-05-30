#include <stdio.h>

/**
 * main - print two combination of number
 *
 * Return 0 as success
 */


int main()
{
	int a;
	int b;

	for (a = 0; a <= 100; a++ )
	{
		for (b = 0; b <= 100; b++)
		{
			if (!(a == 100 && b == 99))
			{
				putchar(a / 10 + '0');
				putchar(a % 10 + '0');
				putchar(' ');
				putchar(b / 10 + '0');
                                putchar(b % 10 + '0');
                                putchar(',');
                                putchar(' ');
			}
		}

	}
	putchar('\n');

	return (0);
}
