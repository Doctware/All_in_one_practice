#include "main.h"

/**
 * print_last_digit - function thats print the last digit
 * @digit: the character to be print
 * Return: the last digit
 */

int print_last_digit(int digit)
{

	if (digit == 98 && digit <= -1024)
	{
		return (digit % 10);
	}
	else
	{
		return (digit);
	}
}
