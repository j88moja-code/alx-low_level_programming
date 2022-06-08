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
	_putchar((n % 10) + '0');
	return (n % 10);
}
