#include "doctware.h"

/**
 * simple_print_buffer - print buffer in exer
 * @buffer: the adress of the memory to be print
 * @size: the size of memory to be print
 *
 * Return: Nothing
 */

void simple_print_buffer(char *buffer, unsigned int size)
{
	unsigned int i;

	i = 0;
	while (i < size)
	{
		if(i % 10)
		{
			printf(" ");
		}
		if (!(i % 10) && i)
		{
			printf("\n");
		}
		printf("0x%02x", buffer[i]);
		i++;
	}
	printf("\n");
}
/**
 * main - cheack the code
 *
 * Return: Always 0
 */

int main(void)
{
	char buffer[98] = {0x00};

	simple_print_buffer(buffer, 98);
	_memset(buffer, 0x01, 95);
	printf("-------------------------------------------------\n");
	simple_print_buffer(buffer, 98);

	return (0);
}
