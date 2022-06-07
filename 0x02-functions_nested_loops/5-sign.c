#include "main.h"

/**
 * main -Entry point
 * print_sign -checks if the input integer n is the sign
 *
 * Description: function that prints the sign of a number.
 * print_sign: return 1,0 and -1
 * @n: the integer number being checked
 * Return: 0 (Success)
 */

int print_sign(int n)
{
	if (n > 0)
	{
		char a;

		a = '+';
		_putchar(a);
		_putchar(',');
		_putchar(' ');
		_putchar(n + '0');
		_putchar('\n');
		return (1);
	} else if (n == 0)
	{
		char a;

		a = '0';
		_putchar(a);
		_putchar(',');
		_putchar(' ');
		_putchar(n + '0');
		_putchar('\n');
		return (0);
	} else
	{
		char a;

		a = '-';
		_putchar(a);
		_putchar(',');
		_putchar(' ');
		_putchar(n + '0');
		return (-1);
	}
}
