#include "main.h"

/**
  * set_bit - sets the values of a bit to 1 at a given index.
  *
  * @n: number for which bit will be set for.
  * @index: the index for the bit yo be set.
  *
  * Return: 1 on Suceess or -1 on failure.
  */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int num = 1;

	num <<= index;

	if (index > sizeof(unsigned long int) * 8)
		return (-1);
	(*n) = (*n) | num;
	return (1);
}
