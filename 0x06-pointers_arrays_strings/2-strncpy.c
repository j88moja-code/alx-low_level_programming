#include "main.h"

/**
 * _strcpy - copies a string.
 *
 * @dest: pointer to the destination string
 * @src: string to be appended.
 * @n: n bytes from src.
 * Return: a pointer to the resulting string.
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *p = dest;

	if (dest == NULL)
	{
		return (NULL);
	}

	while (*src && n--)
	{
		*dest = *src;
		dest++;
		src++;
	}

	dest = '\0';

	return (p);
}
