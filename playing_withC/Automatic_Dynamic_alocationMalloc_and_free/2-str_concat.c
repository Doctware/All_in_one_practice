#include "doctware.h"

int _strlen(char *s);

/**
 * _strlen - get the lenth of a sring
 * @s: the string
 * Return: the lenth of a string
 */

int _strlen(char *s)
{
	int lenth = 0;

	while (s[lenth] != '\0')
		lenth++;

	return (lenth);
}
/**
 * str_concat - return pointet to the newly allocated space in memory
 * which contains the content of s1 follow by the content of s2
 * @s1: first string
 * @s2: second string
 *
 * Return: sueccess, else failur
 */

char *str_concat(char *s1, char *s2)
{
	int lent1 = _strlen(s1);
	int lent2 = _strlen(s2);
	char *result;
	int i;

	if (s1 ==  NULL)
		s1 = "" ;

	if (s2 == NULL)
		s2 = "";

	result = malloc(sizeof(char) * (lent1 + lent2) + 1);

	if (result == NULL)
		return NULL;

	for (i = 0; i <= lent1 + lent2; i++)
	{
		if (i < lent1)
			result[i] = s1[i];
		else
			result[i] = s2[i - lent1];
	}
	result[i] = '\0';

	return result;
}
