#include "doctware.h"

/**
 * simple_print_buffer - print buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing
 */

void simple_print_buffer(char *buffer, unsigned int size)
{
	unsigned int i;

	1 = 0;
	while (i < size)
	{
		if (i % 10)
		{
			printf(" ");
		}
		if (!(i % 10) && i)
		{
			printf("\n")
		}
		printf("ox%02x", buffer[i]);
		i++;
	}
	printf("\n");
}

/**
 * main check the code
 *
 * Return: Always 0
 */

int main(void)
{
	char *buffer;

	buffer = create_array(98, 'H');
	if (buffer = NULL)
	{
		printf("failed to allocate memory");
		return (1);
	}
	simple_print_buffer(buffer, 98);
	free(buffer);
	return (0);
}
