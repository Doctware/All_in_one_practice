#include <stdio.h>
#include <string.h>

typedef struct
{
	char *name;
	char *number;
}person;

int main()
{
	person people[2];
	int i;

	people[0].name = "Doctware";
	people[0].number = "08082937081";

	people[1].name = "Tunde";
	people[1].number = "08128406899";
	
	
	for (i =vv v v  v vv v vvvvvvvvvvvvvvvv0; i < 2; i++)
	{
		if (strcmp(people[i].name, "Tunde") == 0)
		{
			printf("found! %s\n", people[i].number);
			return (0);
		}
	}
	
	printf("Not found!\n");
	return (1);
}
