#include "dog.h"

/**
 * init_dog - inisialize a variable of type struct dog
 * @d: array
 * @name: dog name
 * @age: Dog age
 * @owner: the owner
 * Discrption: this strcture is for dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	else
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
