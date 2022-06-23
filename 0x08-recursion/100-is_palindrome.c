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
 * is_palindrome - checks if the string is a palindrome.
 *
 * @s: the pointer to the string that is to be checked.
 * Return: 1 for palindrome, 0 if not.
 */

int is_palindrome(char *s)
{
	int len = length(s);

	if (len <= 1)
		return (1);
	if (s[0] == s[len - 1])
	{
		len -= 1;
		return (is_palindrome(s + 1));
	}
	else
		return (0);
}
