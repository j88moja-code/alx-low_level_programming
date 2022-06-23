#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 *
 * @n: first bytes of the memory.
 * @s: pointer to the memory.
 * @b: constant byte.
 * Return: pointer to the memory area.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
		s[x] = b;
	return (s);
}
