#include "main.h"

/**
 * print_numbers - prints the numbers from 0 to 9 followed by a new line.
 *
 * _putchar: prints message.
 * Description: a function that prints the numbers.
 */

void print_numbers(void)
{
	char c[10] = "0123456789";
	int x;

	for (x = 0; x < 10; x++)
	{
		_putchar(c[x]);
	}
	_putchar('\n');
}
