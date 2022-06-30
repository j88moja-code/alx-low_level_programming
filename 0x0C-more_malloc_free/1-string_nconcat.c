#include "main.h"

/**
 * string_nconcat - concatenates two strings.
 *
 * @s1: first string that runs in the function.
 * @s2: seconf string that runs in the function.
 * @n: number of bytes of s2.
 *
 * Return: pointer to the newly allocated space in memory. NULL for failure.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new, *mpty;
	unsigned int x, length, y;
	unsigned int size;

	length = 0;
	mpty = "";
	if (s1 == NULL)
		s1 = mpty;
	if (s2 == NULL)
		s2 = mpty;
	while (s1[length] != '\0')
		length++;
	size = (length + n) * sizeof(*new);
	new = malloc(size + 1);
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	x = 0;
	while (x < size && s1[x] != '\0')
	{
		new[x] = s1[x];
		x++;
	}
	y = 0;
	while (x < size && s2[y] != '\0')
	{
		new[x] = s2[y];
		x++;
		y++;
	}
	new[x] = '\0';

	return (new);
}
