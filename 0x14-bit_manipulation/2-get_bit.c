#include "main.h"

/**
  * get_bit - gets the value of a bit at a given index.
  *
  * @n: number for which a bit value will be obtained for.
  * @index: the index starting from 0 for a bit to get.
  *
  * Return: value of the bit at index or -1 for error.
  */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
		return (-1);
	if ((n >> index) & 1)
		return (1);
	else
		return (0);
	return (index);
}
