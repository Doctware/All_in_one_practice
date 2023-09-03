#include <stdio.h>

/**
 * main - working with loop
 * Return: 0 as success
 */

int main()
{
	int j = 0, i;
	
	while (j < 5)
	{
		i = 0;
		while (i < 5)
		{
			printf("10, ");
			i++;
		}
		printf("\n ");
                j++;

	}

	return (0);
}
