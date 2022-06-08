#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (success)
 */

int main(void)
{
	unsigned int a, b, c, d, sum;

	a = 1;
	b = 2;
	c = 3;
	sum = 2;

	for (d = 2; d <= 32; d++)
	{
		if (c % 2 == 0)
			sum = sum + c;
		a = b;
		b = c;
		c = a + b;
	}
	printf("%u\n", sum);
	return (0);
}
