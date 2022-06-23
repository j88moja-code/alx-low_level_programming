#include "main.h"

/**
 *_islower -checks if the character c is in lower character
 *c -variable for the character to be checked
 *
 * _islower: return value 1 and 0
 *Description: checks if the character c is in lower character
 *@c: integer put through the test
 * Return: 0 (success)
 */

int _islower(int c)
{
	if ('a' <= c && c <= 'z')
		return (1);

	return (0);
}
