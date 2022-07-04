#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - a struct that defines new dog.
 *
 * @name: pointer to the name of the dog.
 * @age: the age of the dog.
 * @owner: pointer to the name of the dog owner.
 *
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

#endif /* DOG_H  */
