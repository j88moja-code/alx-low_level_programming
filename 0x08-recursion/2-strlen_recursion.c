#include "main.h"

/**
 * _strlen_recursion - calculate the length of a string
 *
 * @s: pointer to a string that runs through the function.
 * Return: the number of bytes in the string pointed to by s.
 */

int _strlen_recursion(char *s)
{
	if (*s == 0)
		return (0);

	return (_strlen_recursion(s + 1) + 1);
}
