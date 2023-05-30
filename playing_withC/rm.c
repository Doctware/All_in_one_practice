#include <stdio.h>

int main()
{
	char alpha;

	alpha = 90;

	while (alpha >= 60)
	{
		putchar(alpha);
		alpha--;
	}
	putchar('\n');
	return (0);
}
