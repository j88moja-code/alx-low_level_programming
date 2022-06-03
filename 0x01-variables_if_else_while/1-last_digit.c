#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - Entry point
 *greater than five, zero, or less than six
 *Return: 0
*/
int main(void)
{
	int n;
	int lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	lastDigit = n % 10;
	printf("Last digit of %i is %i and is ", n, lastDigit);

	if (lastDigit > 5)
		printf("greater than 5\n");
	else if (lastDigit == 0)
		printf("\n");
	else
		printf("less than 6 and 0\n");
	return (0);
}
