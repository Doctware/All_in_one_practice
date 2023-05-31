#include "main.h"

/**
 * abs - compute an integer
 *
 * Return: integer
 */

int _abs(int num)
{
	if ((num > 0) || (num == 0))
	{
		return (num);
	}
	else
	{
		return (-num);
	}

}
