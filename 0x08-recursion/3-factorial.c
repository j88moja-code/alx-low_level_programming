#include "main.h"

/**
 * factorial - returns the factorial of a given number.
 *
 * @n: number that will run through the function.
 * Return: -1 lower for n lower than 0, factorial.
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n <= 1)
		return (1);
	else
		return (n * factorial(n - 1));
}
