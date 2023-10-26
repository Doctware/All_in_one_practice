#include "doctware.h"

/**
 * _strspn - get the lenght of a prifix subsring
 * @s: the string
 * @accept: the str lenght to get
 * Return: the number of byte i the segment
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int lenght  = 0;
	int i;
	int found;

	while (*s)
	{
		found = 0;

		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				found = 1;
				break;
			}
		}	
		if (!found)
		{
			break;
		}
		lenght++;
		s++;
	}

	return (lenght);
}
