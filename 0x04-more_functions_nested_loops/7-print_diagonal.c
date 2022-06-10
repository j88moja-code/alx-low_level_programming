#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 *
 * Description: a function that draws a diagonal line on the terminal mth times
 * @m: the number of times the character \ should be printed.
 */

void print_diagonal(int m)
{
	int j;
	int i;

	if (m <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < m; i++)
		{
			for (j = 0; j < i; j++)
				_putchar(' ');

			_putchar('\\');
			_putchar('\n');
		}
	}
}
