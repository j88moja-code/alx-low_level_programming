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
	int i;

	for (i = 0; i < argc; ++i)
	{
		printf("%s ", argv[i]);
		printf("\n");
	}
	return (0);

}
