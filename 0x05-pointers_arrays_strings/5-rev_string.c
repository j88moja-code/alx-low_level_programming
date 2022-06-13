#include "main.h"

/**
 * rev_string - reverses a string.
 *
 * @s: the string that runs through the program.
 * Return: nothing.
 */

void rev_string(char *s)
{
	int length = 0, i = 0;
	char temp;

	while (s[i++])
		length++;

	for (i = length - 1; i >= length / 2; i--)
	{
		temp = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = temp;
	}
}
