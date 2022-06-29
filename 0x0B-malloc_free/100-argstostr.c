#include "main.h"

/**
 * argstostr - concatenates all the arguments enter in command line.
 *
 * @ac: number of arguments entered in command line.
 * @av: pointer to the array of strings entered in command line.
 *
 * Return: pointer to a new string or NULL for failure.
 */

char *argstostr(int ac, char **av)
{
	char *str;
	int x, y, b;
	int size = ac;


	if (av == NULL || ac == 0)
		return (NULL);
	for (x = 0; x < ac; x++)
	{
		for (b = 0; av[x][b]; b++)
		{
			size++;
		}
	}
	str = malloc(sizeof(char) * size + 1);

	if (str == NULL)
	{
		free(str);
		return (NULL);
	}
	y = 0;

	for (x = 0; x < ac; x++)
	{
		for (b = 0; av[x][b]; b++)
			str[y++] = av[x][b];
		str[y++] = '\n';
	}
	str[size] = '\0';

	return (str);
}
