#include "main.h"

/**
 * _isupper - checks for uppercase character.
 *
 * @x: integer that runs through the function.
 * Description: a function that checks for uppercase character.
 * Return: 1 if the character is uppercase
 */

int _isupper(int x)
{
	if (x >= 65 && x <= 90)
		return (1);
	else
		return (0);
}
