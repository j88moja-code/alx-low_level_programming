#include "lists.h"

/**
 * _strdup - duplicates the string.
 *
 * @str: string to be dubplicated.
 *
 * Return: pointer to the string.
 */

char *_strdup(const char *str)
{
	int x, y;
	char *ptr;

	if (str == NULL)
		return (NULL);
	while (*(str + 1) != '\0')
	{
		x++;
	}
	ptr = malloc(sizeof(char) * x + 1);

	if (ptr == NULL)
		return (NULL);
	y = 0;
	while (str[y] != '\0')
	{
		ptr[y] = str[y];
		y++;
	}
	ptr[y] = '\0';
	return (ptr);
}

/**
 * add_node - adds new node at the begining of a list.
 *
 * @head: double pointer to linked list.
 * @str: pointer for the string.
 *
 *  Return: address of new pointer.
 */

list_t  *add_node(list_t **head, const char *str)
{
	int count = 0;
	list_t *temp;

	temp = mallac(sizeof(list_t));
	if (temp == NULL)
		return (NULL);
	temp->str = _strdup(str);
	while (str[count] != '\0')
		count++;
	temp->len = count;
	temp->next = *head;
	*head = temp;
	return (temp);
}

