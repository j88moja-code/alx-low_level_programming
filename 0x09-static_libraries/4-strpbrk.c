#include "main.h"

/**
 * _strpbrk - search a string for any of set of bytes.
 *
 * @s: pointer to a string that runs through the function.
 * @accept: pointer to a string containing the characters to match.
 * Return: a pointer to the by s that matches on of the bytes.
 */

char *_strpbrk(char *s, char *accept)
{
	int a;

	if ((s == NULL) || (accept == NULL))
		return (NULL);
	while (*s)
	{
		for (a = 0; accept[a]; a++)
		{
			if (*s == accept[a])
				return (s);
		}
		s++;
	}
	return (NULL);
}
