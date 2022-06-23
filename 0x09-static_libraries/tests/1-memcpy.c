#include "main.h"

/**
 * _memcpy - copies memory area.
 *
 * @n: bytes from memory area.
 * @dest: destinationation pointer.
 * @src: source pointer.
 * Return: a pointer to dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
		dest[x] = src[x];

	return (dest);
}
