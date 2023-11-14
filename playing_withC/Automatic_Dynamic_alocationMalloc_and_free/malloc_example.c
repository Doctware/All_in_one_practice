#include <stdio.h>
#include <stdlib.h>

/**
 * main - introdution tio malloc and free
 *
 * Return: 0
 */

int main()
{
	char *str;
	int *tab;

	tab = malloc(sizeof(int) * 5);
	tab[0] = 26;
	tab[1] = 27;
	tab[2] = 402;
	printf("%d\n", tab[2]);
	free(tab);

	str = malloc(sizeof(char) * 10);
	str[0] = 'D';
	str[1] = 'o';
	str[2] = 'c';
	str[3] = 't';
	str[4] = 'w';
	str[3] = '\0';

	printf("%s\n", str);
	free(str);

	return (0);	
}
