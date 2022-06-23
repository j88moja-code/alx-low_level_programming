#include "main.h"

/**
 * _isdigit - checks for a digit (0 through 9).
 *
 * @c: integer that runs through the function.
 * Description: a function that checks for a digit.
 * Return: 1 if the c is a digit.
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
