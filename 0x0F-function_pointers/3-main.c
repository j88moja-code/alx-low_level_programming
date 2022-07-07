#include "3-calc.h"

/**
 * main - Check the code.
 *
 * @argc: argument counter.
 * @argv: argument vector.
 *
 * Return: 0 for Success.
 */

int main(int argc, char **argv)
{
	int a, b;
	int result;
	int (*func)(int, int);

	if (argc < 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (get_op_func(argv[2]) == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*argv[2] == '%' || *argv[2] == '/') && (*argv[3] == '0'))
	{
		printf("Error\n");
		exit(100);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	func = get_op_func(argv[2]);
	result = func(a, b);
	printf("%d\n", result);
	return (0);
}
