#include "main.h"

/**
 * _strncpy - copies a string.
 *
 * @dest: pointer to the destination string
 * @src: string to be appended.
 * @n: n bytes from src.
 * Return: a pointer to the resulting string.
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *ptr = dest;
	int count;

	for (count = 0; count < n && src[count] != '\0'; count++)
	{
		ptr[count] = src[count];
	}
	for (; count < n; count++)
		ptr[count] = '\0';

	return (ptr);
}
