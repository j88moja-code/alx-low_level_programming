#include "main.h"

/**
 *main -Entry point
 *
 *print_alphabet - function to print alphabet
 * Return - 0 (Success)
*/

void print_alphabet(void)
{
	char c;

	c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
