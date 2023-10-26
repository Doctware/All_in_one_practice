#include "doctware.h"

/**
 * main - check the code
 *
 * Return: 0 Always
 */

int main(void)
{
	char *s0 = "Bob Dylan";
	char *s1 = "Olayode Yusuf";

	printf("%s, %s\n", s0, s1);
	set_string(&s1, s0);
	printf("%s, %s\n", s0, s1);
	return (0);
}
