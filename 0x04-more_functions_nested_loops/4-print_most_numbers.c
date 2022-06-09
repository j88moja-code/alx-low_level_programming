#include "main.h"

/**
 * print_most_numbers - prints the numbers from 0-9 excluding 2 and 4.
 *
 * Description: a function that prints numbers 0-9, excl. 2 and 4.
 */

void print_most_numbers(void)
{
	char c[8] = "01356789";
	int y;

	for (y = 0; y < 8; y++)
	{
		_putchar(c[y]);
	}
	_putchar('\n');
}
