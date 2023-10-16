#include "main.h"

/**
 * separator - this function hold the sep char
 * @sp: the param that hold the char
 * Return: 1 else 0
 */

int separator(char sp)
{
	char sptr[] = " \t\n,;.!?\"(){}";
	int i;

	for (i = 0; sptr[i] != '\0'; i++)
	{
		if (sp == sptr[i])
		{
			return (1);
		}
	}

	return (0);
}

/**
 * cap_string - capitalizes all word of string
 * @s: pointing to the sring to capitalized
 * Return: Success
 */

char *cap_string(char *s)
{
	char *ret = s;
	int cap = 1;
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (separator(s[i]))
		{
			cap = 1;
		}
		else if (cap)
		{
			if (s[i] >= 97 && s[i] <= 122)
			{
				s[i] = s[i] -32;
			}

			cap = 0;
		}
		else if (s[i] >= 65 && s[i] <= 90)
		{
			s[i] = s[i] +32;
		}	
	}

	return ret;
}
