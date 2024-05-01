#include "function_pointer.h"

/**
 * print_elem - prints an integer
 * @elem: the integer to print
 *
 * Return: Nothing
 */

void print_elem(int elem)
{
	printf("%d\n", elem);
}

/**
 * print_elem_hex - print an integer, in hexadecimal
 * @elem: integer to pirnt
 *
 * Return: Nothing
 */

void print_elem_hex(int elem)
{
	printf("0x%x\n", elem);
}

/**
 * main - check
 *
 * Return: Always 0
 */

int main(void)
{
	int array[5] = {0, 98, 402, 1024, 4096};

	array_iterator(array, 5, &print_elem);
	array_iterator(array, 5, print_elem_hex);
	return (0);
}
