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
	int length_name, length_owner, x;
	dog_t *dog;

	length_name = length_owner = 0;
	while (name[length_name++])
		;
	while (name[length_owner++])
		;
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(length_name * sizeof(dog->name));
	if (dog == NULL)
		return (NULL);
	for (x = 0; x < length_name; x++)
		dog->name[x] = name[x];
	dog->age = age;

	dog->owner = malloc(length_owner * sizeof(dog->owner));
	if (dog == NULL)
		return (NULL);
	for (x = 0; x < length_owner; x++)
		dog->owner[x] = owner[x];

	return (dog);
}
