#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2d array of integers.
 *
 * @width: width of the array.
 * @height: height of the array.
 *
 * Return: pointer to a 2d array, NULL on failure of if w and h are >= 0.
 */

int **alloc_grid(int width, int height)
{
	int **array;
	int i;

	if (width <= 0 || height <= 0)
		return (NULL);

	array = malloc(sizeof(int *) * height);
	if (array == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		array[i] = malloc(sizeof(int) * width);
	}
	return (array);
}
