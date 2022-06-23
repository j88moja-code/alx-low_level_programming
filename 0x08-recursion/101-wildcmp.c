#include "main.h"

/**
 * length - checks the length of a string.
 *
 * @s: the pointer to the string length need to be checked for.
 * Return: length of a string.
 */

int length(char *s)
{
	if (*s != 0)
		return (1 + (length(s + 1)));
	return (0);
}

/**
 * from_end - checks total length of a string from end.
 * @s: the pointer to the string length need to be checked for.
 * @len: length of the string.
 * Return: length of the string.
 */

char from_end(char *s, int len)
{
	if (*s != *(s + len))
		return (from_end(s, len - 1));
	return (*(s));
}

/**
 * wildcmp - compares two strings
 *
 * @s1: pointer to the first string to be compared.
 * @s2: pointer to the string that can contain special character *.
 * Return: 1 if strings are identical, 0 otherwise.
 */

int wildcmp(char *s1, char *s2)
{
	char *x = s2;
	char *y = s1;
	char *a = s1;
	char *b = s2;

	int len = length(y);

	if ((*b == '*' && *a != 0) && *(a + 1) != *(b + 1))
	{
		return (wildcmp(++a, b));
	}
	else if ((*b == '*' && *a != 0) && *(a + 1) == *(b + 1))
	{
		return (wildcmp(++a, ++b));
	}
	else if ((*b == '*' && *a != 0))
	{
		if (*a == from_end(y, len))
		{
			return (1);
		}
		return ((wildcmp(a, ++b)));
	}
	else if ((*b == '*' && *a == 0) && *(b + 1) != 0 && *(b + 1) != '*')
	{
		if (*(a - 1) == from_end(x, length(x)))
			return (1);
		return (wildcmp(a, ++b));
	}

	if (*a != *b && *b != '*')
		return (0);
	if (*a == *b && *a != 0 && *b != 0)
	{
		return (wildcmp(++a, ++b));
	}
	return (1);
}
