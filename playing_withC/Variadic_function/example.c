#include <stdio.h>
#include <stdarg.h>

/**
 * print_args - print all args one at a time untill a negative argument
 * is encunter all args are assumed to be type of int
 * @arg1: the first argument
 * Return: success
 */

void print_args(int arg1, ...)
{
	va_list ap;
	int i;

	va_start(ap, arg1);

	for (i = arg1; i >= 0; i = va_arg(ap, int))
		printf("%d ", i);
	va_end(ap);
	putchar('\n');
}

int main(void)
{
	print_args(5, 2, 14, 84, 97, 15, -1, 48, -1);
	print_args(84, 51, -2, 5);
	print_args(-1);
	print_args(4, 5, -98);

	return (0);
}
