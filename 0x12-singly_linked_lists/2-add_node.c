#include "lists.h"

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
	int count;
	list_t *new_node;

	for (count = 0; str[count] != '\0'; count++)
		;
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = count;
	new_node->next = *head;

	*head = new_node;
	return (*head);
}
