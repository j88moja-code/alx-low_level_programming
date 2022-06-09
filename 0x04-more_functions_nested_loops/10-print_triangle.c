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

	for (i = size; i > 0; i--)
	{
		for (j = 0; j <= size; j++)
		{
			if (j >= i)
			{
				_putchar(c);
			} else
			{
				_putchar('\n');
			}
		}
		_putchar('\n');
	}
}
