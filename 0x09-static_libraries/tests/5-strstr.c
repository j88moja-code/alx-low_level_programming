#include "main.h"

/**
 * _strstr - locates a substring.
 *
 * @haystack: a pointer to a string to be scanned.
 * @needle: a pointer of a small string to be searched with-in haystach.
 * Return: a pointer to the beginning of the located substring or NULL.
 */

char *_strstr(char *haystack, char *needle)
{
	int a;
	int b = 0;

	while (needle[b] != '\0')
		b++;

	while (*haystack)
	{
		for (a = 0; needle[a]; a++)
		{
			if (haystack[a] != needle[a])
				break;
		}
		if (a != b)
			haystack++;
		else
			return (haystack);
	}
	return (NULL);
}
