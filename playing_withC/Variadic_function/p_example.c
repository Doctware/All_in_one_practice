#include <stdio.h>
#include <stdarg.h>

void print_int(int num, ...)
{
	va_list ar;
	int i = ar;

	va_start(ar, num);

	while (i >= 0)
		printf("%d ", i);
	i = va_arg(ar, int);
}

int main(void)
{
	print_int(12, -3, 8, 89, -3);
	return (0);
}
