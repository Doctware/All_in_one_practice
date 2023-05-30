#include <stdio.h>

/**
 * main - play with if statement
 * retunrn 0 as success
 */

int main()
{
	printf("%d\n", 2 == 1);
	printf("%d\n", 2 == 2);

	if (3 < 4)
		printf("Wow three is less than four what a big suprice\n");

	int age;
	printf("What your age: ");
	scanf("%i", &age);
	if (age <= 19)
	{
		printf("you are a teenager 🏄\n");
	}
	else if (age <= 40)
	{
		printf(" you are sweet young 👨 👩\n");
	}
	else if (age <= 80)
	{
		printf("you are close to be very old 👷👸:|\n");
	}
	else if (age == 90)
	{
		printf("you are too old 👴 👵 :(\n");
	}
	else if (age == 1000)
	{
		printf("you should be a ghost 👀 👹👺🏃\n");
	}	
	else 
	{
		printf("you are about to die :)\n");
	}

	return (0);
}
