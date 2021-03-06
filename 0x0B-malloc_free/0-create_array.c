#include "main.h"

/**
 * create_array - creates an array of chars and initializesit with a specific c
 * @size: size of an array
 * @c: charater a array will be initialized with.
 *
 * Return: pointer to the array or NULL.
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	array = malloc(sizeof(char) * size);
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
	free(array);
}
