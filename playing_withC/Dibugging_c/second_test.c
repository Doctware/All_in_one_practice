#include "main.h"

/**
 * main - test function that prints if integer is negative or positive
 * Return: 0
 */

int main()
{
	int i;	

	i = 98;
	positive_or_negative(i);

	return (0);
}
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * positive_or_negative - check for positive and negative
 *
 * Return: o as success
 */

int positive_or_negative(int n)
{
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%i is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%i is negative\n", n);
	}
	else
	{
		printf("%i is positive\n", n);
	}
	return (0);
}
