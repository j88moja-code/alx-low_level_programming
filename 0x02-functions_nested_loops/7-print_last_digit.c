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
		nt = -1 * (n % 10);
		_putchar(nt + '0');
		return (nt);
	} else
	{
		nt = n % 10;
		_putchar(nt + '0');
		return (nt);
	}
}
