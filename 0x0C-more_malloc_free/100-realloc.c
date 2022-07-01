#include "main.h"

/**
 * _realloc - reallocates a memory block with malloc and free.
 *
 * @ptr: pointer to the memory for old_size.
 * @old_size: the bytes of allocated space for ptr.
 * @new_size: the bytes of the new memory block.
 *
 * Return: nothing.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *c;

	if (!(new_size < old_size))
	{
		c = malloc(new_size);
		free(ptr);
		return (c);
	}
	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		c = malloc(new_size);
		free(ptr);
		return (c);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	return (ptr);
	free(ptr);
}
