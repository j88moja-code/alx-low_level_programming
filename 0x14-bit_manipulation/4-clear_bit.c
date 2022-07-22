#include "main.h"

/**
  * clear_bit - sets the value of a bit to 0 at a given index.
  *
  * @n: number for which 0 will be set for.
  * @index: index starting from 0 for a bit to be set.
  *
  * Return: 1 on Success or 0 on failure.
  */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int num = 1;

	num <<= index;
	if (index > sizeof(unsigned long int) * 8)
		return (-1);
	(*n) = (*n) & ~(num);
	return (1);
}
