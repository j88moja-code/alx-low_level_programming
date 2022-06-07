#include "main.h"

/**
 *_isalpha -checks for alphabetic character.
 *c -variable for the character to be checked
 *
 * _isalpha: return value 1 and 0
 *Description: checks for alphabetic character
 *@c: the integer converted to a character for checking
 * Return: 0 (success)
 */

int _isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c <= 122))
		return (1);
	return (0);
}
