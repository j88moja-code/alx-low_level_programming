#include "main.h"
#include <string.h>

/**
  * binary_to_uint - converts a binary number to an unsigned int.
  *
  * @b: pointer to the string of 0 and 1.
  *
  * Return: converted number or 0 if string b does not have 1/0 or if b is NULL
  */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, result = 0;

	if (b == NULL)
		return (0);
	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		result <<= 1;

		if (b[i] == '1')
			result ^= 1;
		i++;
	}
	return (result);
}
