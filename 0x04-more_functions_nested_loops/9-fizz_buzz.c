#include <stdio.h>

/**
 * main - checks the code.
 *
 * Description: a program that prints alternating strings and numbers.
 * Return: Always 0.
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 5 == 0) && (i % 3 == 0))
			printf("FizzBuzz\t");
		else if ((i % 5) == 0)
			printf("Fizz\t");
		else if ((i % 3) == 0)
			printf("Buzz\t");
		else
			printf("%d\t", i);
	}
	return (0);
}
