#include "main.h"

/**
 * more_numbers - prints 10 times the number from 0 to 14.
 *
 * Description: a function that prints 10 rows of lines of numbers 0 to 14.
 */

void more_numbers(void)
{
	char c[20] = "01234567891011121314";
	int row = 0, col;

	while (row < 10)
	{
		for (col = 0; col < 20; col++)
		{
			_putchar(c[col]);
		}
		_putchar('\n');
		row++;
	}
