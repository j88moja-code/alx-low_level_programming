#include <stdio.h>

/**
*main -entry point
*Return:0
*/
int main(void)
{
	char a= 'a';

	while (a <= 'Z')
	{
		putchar(a);
		a++;
	}

	a = 'A';

	while (a <= 'Z')
	{
		putchar(a);
		a++;
	}

	putchar('\n');
	return (0);
}
