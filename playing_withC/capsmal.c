#include <stdio.h>

int main()
{
	char i, a;

	for  (i = 65; i <= 90; i++)
	{
		for (a = 97; a <= 122; a++)
		{
			putchar(a);
		}
		putchar(i);
	}
	putchar(44);
	putchar('\n');
	return (0);
}
