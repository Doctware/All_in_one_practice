#include "doctware.h"

/**
 * print_tab - print an array of string
 * @tab: The array to print
 *
 * Return: nothing
 */

void print_tab(char **tab)
{
	int i;

	for (i = 0; tab[i] != NULL; ++i)
	{
		printf("%s\n", tab[i]);
	}
}

/**
 * main chevk the code
 *
 * Return: 1 if an erroe occure otherwise, 0
 */

int main(void)
{
	char **tab;

	tab = strtow("      ALX School         #cisfun      ");
	if (tab == NULL)
	{
		printf("failed\n");
		return (1);
	}

	print_tab(tab);
	return (0);
}
