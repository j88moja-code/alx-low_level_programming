#include <stdio.h>
#include <stdlib.h>
/**
 *main - Entry point
 *while - while loop
 *Return: 0
*/
int main(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		putchar(a);
		a++;
	}

	putchar("\n");
	return (0);
}
