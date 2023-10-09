#include "main.h"

/**
 * strcpy - copy the string from src to dest
 * @dest: copy to the buffer it pointed to
 * @src: copy from the string it pointed to
 * Return: The pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	char *copier = dest; // copy  the adress of dest to copier

	while (*src != '\0')
	{
		*dest = *src;
		
		dest++;
		src++;
	}
	
	*dest = '\0';
	return copier;
}
