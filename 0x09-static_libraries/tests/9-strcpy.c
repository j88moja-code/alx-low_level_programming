#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copies the string pointed to by src
 *
 * @dest: destination string.
 * @src: string from which data is copied from.
 * Return: dest.
 */

char *_strcpy(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (src[i] != 0)
	{
		i++;
	}
	for (j = 0; j <= i; j++)
	{
		dest[j] = src[j];
	}
	return (dest);
}
