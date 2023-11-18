#include "doctware.h"

/**
 * string_nconcat - Concatenate two string
 * @s1: 1st str
 * @s2: 2nd str
 * @n: most byte of str 2
 *
 * Return: pointer to newly allocated space in the memory 
 * 	   which contains s1 follow by the first n byt of s2 '\0'
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	char *str;

	unsigned int s2_len = strlen(s2);
	if (n <= s2_len)
		n = s2_len;
		

	if (s1 == NULL || s2 == NULL)
		return "";
	
	result = malloc(sizeof(char) * (str + 1));
	if (result == NULL)
		return NULL;
	if (NULL)
		result = "";

	result = '\0';

	return result;
}
