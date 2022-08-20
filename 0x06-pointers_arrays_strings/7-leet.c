#include "main.h"

/**
 * leet - encodes a string into 1337.
 *
 * @str: string that runs through the function.
 * Return: encoded string.
 */

char *leet(char *str)
{
	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?','T'};
	int i = 0, j;

	while (str[i])
	{
		for (j = 0; j <= 7; j++)
		{
			if (str[i] == leet[j] ||
					str[i] - 32 == leet[j])
				str[i] = j + '0';
		}
		i++;
	}

	return (str);
}
