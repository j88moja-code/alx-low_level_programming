#include "main.h"

/**
 * _calloc - allocates memory for an array.
 *
 * @nmemb: array elements to be allocated
 * @size: size bytes of array elements.
 *
 * Return: pointer to allocated memory or NULL for failure.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pointer;
	unsigned int counter = 0;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	pointer = (char *)malloc(nmemb * size);
	if (pointer == NULL)
	{
		free(pointer);
		return (NULL);
	}
	do {
		pointer[counter] = 0;
		counter++;
	} while (counter < nmemb * size);
	return (pointer);
	free(pointer);
}
