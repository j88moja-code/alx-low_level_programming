#include "function_pointers.h"

/**
 * array_iterator - executes a func as a parameter on each element of an array
 *
 * @size: size of the array.
 * @action: pointer to the fuction that is used.
 * @array: array of ints to be printed.
 * *
 * Return: nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long x;

	for (x = 0; x < size; x++)
	{
		action(array[x]);
	}
}
