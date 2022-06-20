#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix,
 * of integers
 *
 * @a: pointer to the array of a square matrix of integers.
 * @size: size of matrix.
 * Return: nothing.
 */

void print_diagsums(int *a, int size)
{
	int x = 0;
	int y = size - 1;
	int result1 = 0;
	int result2 = 0;

	while (x <= (size * size))
	{
		result1 = result1 + a[x];
		x = x + size + 1;
	}

	while (y < (size * size - 1))
	{
		result2 = result2 + a[y];
		y = y + size - 1;
	}
	printf("%d, %d\n", result1, result2);
}
