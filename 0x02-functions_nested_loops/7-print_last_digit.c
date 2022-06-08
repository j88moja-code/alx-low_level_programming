#include "main.h"

/**
 *print_last_digit - prints the last digit of a number n
 *
 * Description: function that prints the last digit of a number.
 *@n: integer which runs through the function
 * Return: last digit
 */

int print_last_digit(int n)
{
	int nt;

	if (n < 0)
	{
		nv = -1 * (n % 10);
		_putchar((nv + '0');
		return (nv);
	} else
	{
		nv = n % 10;
		_putchar(nv + '0');
		return (nv);
	}
}
