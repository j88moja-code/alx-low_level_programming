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
	int a = 0;

	if (!(max > min))
		return (NULL);
	pointer = malloc(sizeof(int) * (max - min + 1));

	if (pointer == NULL)
	{
		free(pointer);
		return (NULL);
	}
	do {
		pointer[a] = min;
		a++;
		min++;
	} while (min <= max);

	return (pointer);
	free(pointer);
}
