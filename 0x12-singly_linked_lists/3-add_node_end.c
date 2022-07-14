#include "lists.h"

/**
 * add_node_end - adds new node at the end of list_t.
 *
 * @head: double pointer to head.
 * @str: string to duplicate into new node.
 *
 * Return: address of new element or NULL on failure.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *curr;
	list_t *new_node;
	int count;

	curr = *head;
	while (curr && curr->next != NULL)
		curr = curr->next;
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
	new_node->next = NULL;

	if (curr)
	{
		curr->next = new_node;
	}
	else
		*head = new_node;
	return (new_node);
}
