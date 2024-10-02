#include <stdio.h>

int magicfunction(int n);

int magicfunction(int n)
{
	if (n <= 0)
	{
		return (1);
	}
	if ( n == 1)
	{
		return (5);
	}
	else
	{	
		return magicfunction(n-1)+magicfunction(n-2)+2;
	}
}

int main(void)
{
	int result = magicfunction(5);
	printf("%d\n", result);
	return (0);
}
