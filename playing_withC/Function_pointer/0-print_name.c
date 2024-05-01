#include "function_pointer.h"

/**
 * print_name - this function print name
 * @name: the name to be print
 * @(f)(char *): function pointer
 * Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
