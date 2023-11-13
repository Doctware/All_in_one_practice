#include <cs50.h>
#include <stdio.h>

int main(void)
{
	int num1 = get_int("what  is num1? ");
	int num2 = get_int("what is num2? ");

	if (num1 < num2)
	{
		printf("yes\n");
	}
	else
	{
		printf("no\n");
	}	
}
