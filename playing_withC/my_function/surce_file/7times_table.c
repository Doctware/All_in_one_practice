#include "main.h"

/**
 * times_table - print 9 times table
 * Return: success
 */

void times_table(void)
{
	int times;
	int table;

	for (times = 0; times <= 12; times++)
	{
		table = 9 * times;
		printf("9 x %i = %i", times, table);
		printf(", ");
	}
	printf("\n");
}
