#include "main.h"

/**
 * puts_half - prints half of a string.
 *
 * @s: the pointer of a string that runs through the program.
 * Return: nothing.
 */

void puts_half(char *str)
{
	int x = 0, l = 0, n;

	while (str[x++])
	{	l++;
	}
	if ((l % 2) == 0)
	{
		n = l / 2;
	}
	else
	{
		n = (l + 1) / 2;
	}
	for (x = n; x < l; x++)
	{
		_putchar(str[x]);
	}
	_putchar('\n');
}
