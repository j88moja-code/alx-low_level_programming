#include <stdio.h>

void __attribute__((constructor)) hare(void);

/**
 * test - prints a string before main function is executed.
 *
 * Return: nothing.
 */

void hare(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
