#include "main.h"

/**
 * leet - encodes a string into 1337.
 *
 * @str: string that runs through the function.
 * Return: encoded string.
 */

char *leet(char *str)
{
	char numbers[] = "43071";
	char upperLetters[] = "AE0TL";
	char lowerLetters[] = "aeotl";
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; lowerLetters[j] != '\0'; j++)
		{
			if (str[i] == upperLetters[j] || str[i] == lowerLetters[j])
			{
				str[i] = numbers[j];
				break;
			}
		}
	}
	return (str);
}
