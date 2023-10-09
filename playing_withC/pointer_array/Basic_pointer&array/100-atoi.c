#include "main.h"

/**
 * atoi - covert a string to an integer
 * @s: pointing to the value of he varible
 * Return: 0 as success
 */

int _atoi(char *s)
{
	int sign = 1;
	unsigned int num = 0;
	int digit;

	do{
		if (*s == '-')
		{
			sign *= -1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			digit = *s - '0';
			num = (num * 10) + digit;
		}
		else if (num > 0){
			break;
		}
	}while (*s++);

	return (num * sign);
}
