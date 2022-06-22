#include "main.h"

/**
 * check_multipliers - checks for multipliers of n.
 *
 * @n: integer that runs through the function.
 * @i: 2nd integer that runs inside the function.
 * Return: 1 if it a prime number, otherwise 0.
 */

int check_multipliers(int n, int i)
{
	if (i == n)
		return (1);
	else if (n % i == 0)
		return (0);
	return (check_multipliers(n, i + 1));
}

/**
 * is_prime_number - cheeks if n is the prime number.
 *
 * @n: integer that runs through the function.
 * Return: 1 if it a prime number, otherwise 0.
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (check_multipliers(n, 2));
}
