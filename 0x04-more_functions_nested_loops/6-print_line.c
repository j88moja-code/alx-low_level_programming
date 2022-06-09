#include "main.h"

/**
 * print_line - draws a straight line in the terminal for m times.
 *
 * @m: the number of times the character _ should be printed.
 * Description: a function that draws a straight line in the terminal.
 */

void print_line(int m)
{
	char c = 95;
	int i;

	for (i = 1; i <= m;  i++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
