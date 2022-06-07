#include "main.h"

/**
 *main -Entry point
 *
 * _putchar - writes the character c to stdout
 *c - character printed by the function _putchar
 *print_alphabet - function to print alphabet
 *Return: On success 1. 
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
