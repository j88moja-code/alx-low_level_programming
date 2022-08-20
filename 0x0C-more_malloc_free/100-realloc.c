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
	void *mem;
	char *ptr_cpy, *filter;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		mem = malloc(new_size);
		if (mem == NULL)
			return (NULL);

		return (NULL);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	ptr_cpy = ptr;
	mem = malloc(sizeof(*ptr_cpy) * new_size);

	if (mem == NULL)
	{
		free(ptr);
		return (NULL);
	}

	filter = mem;

	for (i = 0; i < old_size && i < new_size; i++)
		filter[i] = *ptr_cpy++;

	free(ptr);
	return (mem);
}
