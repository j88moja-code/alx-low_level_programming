#include "main.h"

/**
 * main - checks the code.
 *
 * @argc: argument count.
 * @argv: argument values.
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int i = 0;

	do {
		printf("%s\n", argv[i]);
	} while (i == argc);
	return (0);
}
