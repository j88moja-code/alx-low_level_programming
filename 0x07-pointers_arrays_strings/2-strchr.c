#include "main.h"

/**
 * _strchr - locates a character in a string.
 *
 * @s: pointer to a string that runs in the function.
 * @c: character located in a string.
 * Return: a pointer to the first occurance of the character.
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	return (NULL);
}
