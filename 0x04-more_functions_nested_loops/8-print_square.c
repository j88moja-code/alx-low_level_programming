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

	if (size <= 0)
	{
		_putchar('\n');
	} else
	{
		for (int i = 1; i <= size; i++)
		{
			for (int j = 1; j <= size; j++)
			{
				_putchar(c);
			}
			_putchar('\n');
		}
	}
}
