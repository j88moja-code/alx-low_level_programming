#include "lists.h"

void first(void) __attribute__((constructor));

/**
 * test - prints a string before main function is executed.
 *
 * Return: nothing.
 */

void test(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
