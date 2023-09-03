#include "main.h"

/**
 * isupper - check for uper case
 * @c: character to work with
 * Return 0 as success
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
