#include  "dog.h"


/**
 * print_dog - print a struct dog
 * @d: array
 * Discription: A fuction thats print dog struct
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		printf("Name: (nil)");
	else
		printf("Name: %s\n", d->name);
	printf("Age: %.1f\n", d->age);
	if (d->owner == NULL)
		printf("owner: (nill)");
	else
		printf("owner: %s\n", d->owner);
}
