#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog.
 *
 * @d: new type for struct dog.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: name of the dog owner.
 *
 * Return: nothing.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
