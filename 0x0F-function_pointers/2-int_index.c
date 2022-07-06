#include "function_pointers.h"

/**
 * int_index - seaeches for an integer.
 *
 * @array: the array of integers.
 * @size: the number of elements in the array.
 * @cmp: pointer to the function that compares values.
 *
 * Return: 0 if false, something else otherwise.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || !array)
		return (-1);
	for (i = 1; i < size; i++)
	{
		if (cmp(array[i]) > 0)
			return (i);
	}
	return (0);
}
