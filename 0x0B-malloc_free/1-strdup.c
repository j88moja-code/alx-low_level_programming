#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: pointer to the string character that runs through the function.
 *
 * Return: pointer to the duplicated string. NULL if memory is insufficient.
 */

char *_strdup(char *str)
{
	char *des;
	char *p;
	int len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;
	des = malloc(len + 1);
	p = des;
	while (*str)
		*p++ = *str++;
	*p = '\0';
	return (des);
}
