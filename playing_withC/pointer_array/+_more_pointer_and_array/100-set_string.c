#include "doctware.h"

/**
 * set_string - set the value of pointer to char
 * @s: pointing to the pointer
 * @to: the value to be set
 * Return: void
 */

void set_string(char **s, char *to)
{
	*s = to;
}
