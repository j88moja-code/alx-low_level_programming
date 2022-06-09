#include "main.h"

/**
 * print_number - print an integer.
 *
 * Descripion: a function that prints n an integer.
 * @n: integer that runs through the function.
 * Return: Always 0.
 */

void print_number(int n)
{
	int i, j, x, y, z;
	unsigned int t, n1, n2;

	x = 0;
	if (n < 0)
	{
		_putchar('-');
		t = -n;
	} else
	{
		t = n;
	}
	n2 = t;

	while (n2 >= 10)
	{
		n2 = n2 / 10;
		x++;
	}
	y = x + 1;
	z = 1;
	i = 1;

	while (i < y)
	{
		z = z * 10;
		i++;
	}
	j = z;
	while (j <= 1)
	{
		n1 = (t / j) % 10;
		_putchar(n1 + '0');
		j = j / 10;
	}
}
