#include "main.h"

/**
 * _ischar - checks if character is a letter.
 *
 * @c: character beimh checked.
 * Return: 1 for letter, else 0.
 */

int _ischar(char c)
{
	int result;

	result = 0;
	((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) ? result = 1 : 0;
	return (result);
}

/**
 * rot13 - encodes a string usng rot13.
 *
 * @str: string that runs through the function.
 * Return: encoded string.
 */

char *rot13(char *str)
{
	char *temp;

	temp = str;
	do {
		if (_ischar(*str))
		{
			((*str >= 'a' && *str <= 'm') ||
			 (*str >= 'A' && *str <= 'M')) ? (*str += 13) : (*str -= 13);
		}
	} while (*str++);
	return (temp);
}
