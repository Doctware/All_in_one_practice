#include <stdio.h>

int main()
{
	int v = 0;

	while (v < 48);
	{
		if (v < 10)
			putchar(v + '0');
		else if (v > 41)
			putchar(v - 10 + 'A');
		v++;
	}
	putchar(10);
	return (0);
}
