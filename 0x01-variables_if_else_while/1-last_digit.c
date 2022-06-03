#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - Entry point
 *>5,0 or <6
 *Return: 0
*/
int main(void)
{
	int n;
	int lastDigit;

	srand(time(0));
	n = rand() - RANDMAX / 2;

	lastDidigit = n % 10;
	printf("Last digit of %i is %i and is ", n, lastDigit);

	if (lastDigit > 5)
		printf("greater than 5\n");
	else if (lastDigit == 0)
		printf("\n");
	else
		printf("less than 6 and 0\n");
	return (0);
}
