#include "main.h"

/**
 * times_table - prints the table
 *
 * Return: 0 (Success)
 */

void times_table(void)
{
	int i, n, t;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');

		for (n = 1; n <= 9; n++)
		{
			_putchar(',');
			_putchar(' ');

			t = i * n;

			if (t <= 9)
				_putchar(' ');
			else
				_putchar((t / 10) + '0');

			_putchar((t % 10) + '0');
		}
		_putchar('\n');
	}
}
