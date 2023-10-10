#include "main.h"

/**
 * _strcat - concatenates two string
 * @dest: pointing to the destination
 * @src: pointing to the surce of the string
 * Return: pointer ti the resulting string
 */

char *_strcat(char *dest, char *src)
{
	char *copy = dest;

	while (*dest != '\0'){
		dest++;
	}

	while (*src != '\0'){
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return copy;
}
