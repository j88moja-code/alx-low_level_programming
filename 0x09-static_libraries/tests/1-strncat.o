#include "main.h"

/**
 *_strncat - concatenates two strings src and dest.
 *
 * @src: the string to be appended.
 * @dest: pointer to the destination array.
 * @n: bytes from src.
 * Return: a pointer to the resulting string dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;

	for (j = 0; src[j] != '\0' && j < n; j++)
	{
		dest[i + j] = src[j];
	}

	dest[i + j] = '\0';

	return (dest);
}
