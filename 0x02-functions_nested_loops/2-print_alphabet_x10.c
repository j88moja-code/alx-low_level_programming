#include "main.h"

/**
*print_alphabet_x10 -prints out ten lines of the alphabets
 * _putchar - prints the char c
 */

void print_alphabet_x10(void)
{
	char c;
	int d = 0;

	while (d < 10)
	{
		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		d++;
	}
}
