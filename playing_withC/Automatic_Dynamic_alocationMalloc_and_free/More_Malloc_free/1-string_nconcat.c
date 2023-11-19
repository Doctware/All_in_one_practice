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
	int i;
	unsigned int j;

	if (s1 == NULL || s2 == NULL)
		return "";
	
	i = 0;
	while (s1[i] != '\0')
	{
		i++;
	}
	
	result = malloc(sizeof(char) * (i + n + 1));
	if (result == NULL)
		return NULL;

	i = j = 0;
	while (s1[i] != '\0')
	{
		result[i] = s1[i];
		i++;
	}
	while (j < n && s2[j] != '\0')
	{
		result[i] = s2[j];
		i++, j++;
	}

	result[i] = '\0'; 

	return result;
}
