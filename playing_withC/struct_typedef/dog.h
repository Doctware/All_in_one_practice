#ifndef DOG_H
#define DOG_H

#include <stdio.h>

/**
 * struct dog - a new type discribing dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/* init_dog prototype */
void init_dog(struct dog *d, char *name, float age, char *owner);

/* print_dog prototype */
void print_dog(struct dog *d);

#endif /* DOG_H */
