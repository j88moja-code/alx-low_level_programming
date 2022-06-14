#include "main.h"

/**
 * puts2 - function that prints every other character of a string.
 *
 * @str: a pointer that contain string characters.
 * Return: nothing.
 */

void puts2(char *str)
{
	int i = 0, length = 0;

	while (str[i++])
		length++;

	for (i = 0; i < length; i += 2)
		_putchar(str[i]);

	_putchar('\n');
}
