#include "main.h"

/**
 * print_square - prints a square.
 *
 * Description: a function that prints a square equal to size.
 * @size: the size of the square.
 */

void print_square(int size)
{
	char c = 95;
	int i = 0, j;

	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			_putchar(c);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
