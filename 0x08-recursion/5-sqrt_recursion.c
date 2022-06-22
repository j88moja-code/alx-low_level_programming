#include "main.h"

/**
 * check_root - computes the square root of a.
 *
 * @a: 1st integer number that runs through the function.
 * @b: 2nd integer that runs through the function.
 * Return: square root of b or -1.
 */

int check_root(int a, int b)
{
	if (a * a == b)
		return (a);
	else if (a * a > b)
		return (-1);

	return (check_root(a + 1, b));
}

/**
 * _sqrt_recursion - calculates the nonnegative square root of n.
 *
 * @n: integer number that runs through the function.
 * Return: On success, these functions return the square root of n or -1.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);
	return (check_root(1, n));
}
