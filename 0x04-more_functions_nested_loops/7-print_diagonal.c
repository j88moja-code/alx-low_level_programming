#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 *
 * Description: a function that draws a diagonal line on the terminal mth times
 * @m: the number of times the character \ should be printed.
 */

void print_diagonal(int m)
{
	char c = 92;
	int j;
	int i;

	for (i = 1; i <= m; i++)
	{
		for (j = 1; j <= m; j++)
		{
			if (j == 1)
				_putchar(c);
			else
				_putchar(' ');
			_putchar('\n');
		}
	}
	_putchar('\n');
}
