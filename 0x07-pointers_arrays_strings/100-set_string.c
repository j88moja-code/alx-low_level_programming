#include "main.h"

/**
 * set_string - sets the value of a pointer to a char.
 *
 * @s: pointer to pointer of a string.
 * @to: pointer to which a is string is set to.
 * Return: nothing.
 */

void set_string(char **s, char *to)
{
	*s = to;
}
