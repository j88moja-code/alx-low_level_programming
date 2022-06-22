#include "main.h"

/**
 * _pow_recursion - calculates the value of x to the power of y.
 *
 * @x: base number.
 * @y: power number.
 * Return: -1 if y is < 0, Success 0.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
