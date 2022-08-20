#include "main.h"

/**
 * array_range - creates an array of integer range
 *
 * @min: minimum integer for the range.
 * @max: maximum integer for the range.
 *
 * Return: pointer to the array range or NULL on failure.
 */

int *array_range(int min, int max)
{
	int *pointer;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	pointer = malloc(sizeof(int) * size);

	if (pointer == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		pointer[i] = min++;

	return (pointer);
}
