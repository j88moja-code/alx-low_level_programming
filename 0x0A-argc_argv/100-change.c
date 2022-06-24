#include "main.h"

/**
 * main - checks the code.
 *
 * @argc: argument count.
 * @argv: argument vector.
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int tot, change;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}

	change = atoi(argv[1]);

	for (tot = 0; change > 0; tot++)
	{
		if (change - 25 >= 0)
			change = change - 25;
		else if (change - 10 >= 0)
			change -= 10;
		else if (change - 5 >= 0)
			change -= 5;
		else if (change - 2 >= 0)
			change -= 2;
		else if (change - 1 >= 0)
			change -= 1;
	}
	printf("%d\n", tot);
	return (0);
}
