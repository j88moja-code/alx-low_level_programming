#include "main.h"

/**
 * print_square - prints a square.
 *
 * Description: a function that prints a square equal to size.
 * @size: the size of the square.
 */

void print_square(int size)
{
	char c = 35;
	int i = 1, j;

	while (i < size)
	{
		j = 1;
		while (j < size)
		{
			_putchar(c);
			j++;
		}
		_putchar('\n');
		i++;
	}
	_putchar('\n');
}
