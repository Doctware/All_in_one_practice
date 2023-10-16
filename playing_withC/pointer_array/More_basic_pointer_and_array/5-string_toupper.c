#include "main.h"

/**
 * string_toupper - convet lower_case to upper
 *
 * Return: success
 */

char *string_toupper(char *str)
{
	char *upper = str;

	while (*str != '\0')
	{
		if (*str >= 97 && *str <= 122)
		{
			*str = *str -32;
		}
		str++;
	}

	return upper;
}
