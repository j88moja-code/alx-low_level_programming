#include "main.h"

/**
 *print_sign -checks if the input integer n is the sign
 *
 * Description: function that prints the sign of a number.
 * print_sign: return 1,0 and -1
 * @n: the integer number being checked
 * Return: 0 (Success)
 */

int print_sign(int n)
{

	if (n > 48)
	{
		_putchar(43);
		return (1);
	} else if (n == 48)
	{
		_putchar(48);
		return (0);
	} else
	{
		_putchar(45);
		return (-1);
	}
	return (0);
}
