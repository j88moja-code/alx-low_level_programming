#include "dog.h"

/**
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
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = name;
	dog->age = age;
	dog->owner = owner;

	return (dog);
}
