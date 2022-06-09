#include "main.h"

/**
 * print_triangle - prints a triangle.
 *
 * Description: a function that prints a triangle based on value size.
 * @size: the size of the triangle to be printed.
 */

void print_triangle(int size)
{
	char c = 35;
	int i;
	int j;
	int s;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (s = size - i; s >= 1; s--)
			{
				_putchar(' ');
			}
			for (j = 1; j <= i; j++)
			{
				_putchar(c);
			}
			_putchar('\n');
		}
	}
}
