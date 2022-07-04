#include "dog.h"

/**
 * print_dog - a function that prints out a struct dog.
 *
 * @d: pointer to the contents of the struct dog.
 *
 * Return: nothing.
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		d->name ? (printf("Name: %s\n", d->name)) : (printf("Name: (nil)\n"));
		printf("Age: %f\n", d->age);
		d->owner ? (printf("Owner: %s\n", d->owner)) : (printf("Owner: (nil)\n"));
	}
}
