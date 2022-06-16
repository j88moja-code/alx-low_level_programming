#include "main.h"

/**
 * infinite_add - adds twon numbers.
 *
 * @n1: first number in the equation.
 * @n2: second number in ther equation.
 * @size_r: the buffer size.
 * Return: pointer to the result.
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int x, y, z, a, b, c;

	for (x = 0; n1[x]; x++)
		;
	for (y = 0; n2[y]; y++)
		;
	if (x > size_r || y > size_r)
		return (0);
	b = 0;
	for (x -= 1, y -= 1, z = 0; z < size_r - 1; x--, y--, z++)
	{
		c = b;
		if (x >= 0)
			z += n1[x] - '0';
		if (y >= 0)
			z += n2[y] - '0';
		if (x < 0 && y < 0 && c == 0)
			break;
		b = c / 10;
		r[z] = c % 10 + '0';
	}
	r[z] = '\0';
	if (x >= 0 || y >= 0 || b)
		return (0);
	for (z -= 1, a = 0; a < z; z--, a++)
	{
		b = r[z];
		r[z] = r[a];
		r[a] = b;
	}
	return (r);
}
