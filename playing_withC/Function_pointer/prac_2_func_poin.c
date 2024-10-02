#include <stdio.h>

char *print_hello()
{
	char  *a = "Hello";
	return a;
}

int main()
{
	char *s;
	char *(*ptr) ();
	
	ptr = print_hello;
	s = ptr();

	printf("%s\n", s);
	return 0;
}
