#include <stdio.h>
#include "main.h"

/**
 * prime - determines if x is prime.
 *
 * Description:a program that finds and prints the largest prime factor of a n.
 * @x: integer being checked.
 * Return: 1 if it prime, 0 for non prime.
 */

int prime(int x)
{
	int count = 0, i;

	i = 1;
	while (i <= x)
	{
		if (x % i == 0)
		{
			count++;
		}
		i++;
	}
	if (count == 2)
		return (1);
	return (0);
}

/**
 * largestPrime - determines the largest prime
 *
 * @y: long integer being checked.
 * Return: largest factor f.
 */

long int largestPrime(long int y)
{
	long int n, f;

	f = y;

	for (n = 2; n <= f; n++)
	{
		if (prime(f) == 1)
			break;
		else
		{
			if ((f % n) && (prime(n) == 1))
			{
				f = f % n;
				continue;			
			} else
			{
				f = f;
			}
		}
	}
	return (f);
}

/**
 * main - checks the code.
 *
 * Return: Always 0.
*/

int main(void)
{
	long int i;

	i = 612852475143;

	if (prime(i) == 1)
	{
		printf("%ld\n", i);
	} else
	{
		printf("%ld\n", largestPrime(i));
	}
	return (0);
}
