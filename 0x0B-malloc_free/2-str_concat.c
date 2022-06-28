#include "main.h"

/**
 * str_concat - concatenates two strings with memory allocation dynamically.
 *
 * @s1: pointer to the first string that runs through the function.
 * @s2: ponter to the 2nd string that runs through the function.
 *
 * Return: pointer to the newly concatenated string. NULL on failure.
 */

char *str_concat(char *s1, char *s2)
{
	char *s;
	int v, x, y, z;

	if (s1 == 0)
		s1 = "";
	if (s2 == 0)
		s2 = "";
	for (v = 0; s1[v] != '\0'; v++)
		;
	for (x = 0; s2[x] != '\0'; x++)
		;
	x++;
	s = malloc(v * sizeof(*s1) + x * sizeof(*s2));
	if (s == 0)
		return (NULL);
	for (y = 0, z = 0; y < v + x; y++)
	{
		if (y < v)
			s[y] = s1[y];
		else
			s[y] = s2[z++];
	}
	return (s);
	free(s);
}
