#include "main.h"

/**
 * malloc_checked - allocates memory using malloc.
 *
 * @b: size of bytes of memory.
 *
 * Return: pointer to the allocated memory or 98 for failure.
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
	{
		free(p);
		exit(98);
	}
	return (p);
}
