#include "lists.h"

/**
  * add_dnodeint - adds a new node to the doubly linked list.
  *
  * @head: double pointer to the head node.
  * @n: the integer to be added to the list.
  *
  * Return: address of the new element or NULL on failure.
  */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_entry = malloc(sizeof(dlistint_t));

	if (!new_entry || !head)
		return (NULL);

	new_entry->n = n;
	new_entry->next = *head;
	new_entry->prev = NULL;

	if (*head)
		(*head)->prev = new_entry;
	*head = new_entry;
	return (new_entry);
}
