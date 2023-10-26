#include "doctware.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char *s = "doctware, world";
    	char *f = "ware, world";
    	char *t;

    	t = _strstr(s, f);
   	 printf("%s\n", t);
    	return (0);
}
