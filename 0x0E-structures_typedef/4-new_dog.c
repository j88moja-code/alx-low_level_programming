#include "dog.h"

/**
 * dog_t - type def for creating new dog entry using struct dog.
 * new_dog - create a new dog entry.
 *
 * @name: name of the new dog entry.
 * @age: age of the new dog entry.
 * @owner: name of the new dog owner.
 *
 * Return: pointer to the new dog details or NULL on function failure.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *buffer;

	buffer = malloc(sizeof(dog_t));
	if (!buffer)
		return (NULL);
	buffer->name = name;
	buffer->age = age;
	buffer->owner = owner;

	return (buffer);
}
