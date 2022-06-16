#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 *
 * @s: string to be converted to uppercase string.
 * Return: string with uppercase letters.
 */

char *string_toupper(char *str)
{
	int i, j;
	char l;

	i = 0;
	while (str[i] != '\0')
		i++;

	for (j = 0; j < i; j++)
	{
		l = str[j];
		if (l >= 'a' && l <= 'z')
		{
			l -= 32;
			str[j] = l;
		}
	}
	return (str);
}
