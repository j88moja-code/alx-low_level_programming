#include "main.h"

/**
  * flip_bits - flips bits from one number to another number.
  *
  * @n: number to flip from.
  * @m: number to flip to.
  *
  * Return: number of bits needed to be flipped.
  */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int count, i;
	unsigned long int num;

	i = (sizeof(unsigned long int) * 8) - 1;
	num = n ^ m;

	for (count = 0; i >= 0; i--)
	{
		if (((num >> i) & 1) == 1)
			count += 1;
	}
	return (count);
}
