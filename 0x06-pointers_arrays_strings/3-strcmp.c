#include "main.h"

/**
 * _strcmp - compares two strings.
 *
 * @s1: first string that runs through the program.
 * @s2: second string that runs through the program.
 * Return: Always 0.
 */

int _strcmp(char *s1, char *s2)
{
	const unsigned char *p1 = (const unsigned char *)s1;
	const unsigned char *p2 = (const unsigned char *)s2;

	while (*p1 != '\0')
	{
		if (*p2 == '\0')
			return (1);
		if (*p2 > *p1)
			return (-1);
		if (*p1 > *p2)
			return (1);
		p1++;
		p2++;
	}
	if (*p2 != '\0')
		return (-1);
	return (0);
}
