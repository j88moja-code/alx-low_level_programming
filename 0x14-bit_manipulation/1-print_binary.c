#include "main.h"

/**
 * _power - calculates the power
 * @num: base of the exponent.
 * @x: number num is raised to.
 *
 * Return: result of calculation.
 */

static unsigned long int _power(unsigned int num, unsigned int x)
{
	unsigned long int y;
	unsigned int i;

	y = 1;

	for (i = 1; i <= x; i++)
		y *= num;

	return (y);
}
/**
  * print_binary - prints the binary representation of a number.
  *
  * @n: number to be printed in a binary form.
  *
  * Return: nothing.
  */

void print_binary(unsigned long int n)
{
	unsigned long int d, c;
	char f;

	f = 0;
	d = _power(2, sizeof(unsigned long int) * 8 - 1);
	while (d != 0)
	{
		c = n & d;
		if (c == d)
		{
			f = 1;
			_putchar('1');
		}
		else if (f == 1 || d == 1)
			_putchar('0');
		d >>= 1;
	}
}
