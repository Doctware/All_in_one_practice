#include "main.h"

/**
 * rev_string - print the string in revese
 * @s: pointing to the variable of the string
 * Return: success
 */

void rev_string(char *s)
{
	int lnt = 0;
	int i = 0;
	int swp;

	while(s[lnt] != '\0')
	{
		lnt ++;
	}

	lnt--;

	while (i < lnt)
	{
		swp = s[i];
		s[i] = s[lnt];
		s[lnt] = swp;

		i++;
		lnt--;
	}
}
