#include "main.h"

/**
 * cap_string - capitalizes all the words of a string.
 *
 * Description: a function that capitalizes all words of a string,
 * Separators of words: space, tab, new line, ,, ;, ., !, ?, ", (, ), {, and }.
 * @str: pointer to the string array that will be capitalised.
 * Return: a string with capitalised words.
 */

char *cap_string(char *str)
{
	int i, j, char_counter;

	i = 0;
	char_counter = 0;

	while (str[i] != '\0')
		i++;

	for (j = 0; j < i; j++)
	{
		if (char_counter == 0)
		{
			if (str[j] >= 'a' && str[j] <= 'z')
				str[j] -= 32;
			else
				char_counter++;
		}

		if (str[j] == '!' || str[j] == '"' || str[j] == '(' || str[j] == ')')
			char_counter = 0;
		else if (str[j] == ',' || str[j] == '.' || str[j] == '{' || str[j] == '}')
			char_counter = 0;
		else if (str[j] == ';' || str[j] == '?' || str[j] == '\n')
			char_counter = 0;
		else if (str[j] == '\t')
			char_counter = 0;
		else if (str[j] == ' ')
			char_counter = 0;
		else
			char_counter++;
	}
	return (str);
}
