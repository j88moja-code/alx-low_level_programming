#include "dog.h"

/**
 * free_dog - frees pointer of dog from memory heap.
 *
 * @d: pointer to the struct dog.
 *
 * Return: nothing.
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
