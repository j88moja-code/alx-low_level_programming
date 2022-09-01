#include "lists.h"

/**
  * add_dnodeint_end - adds a new node at the end of a doubly linked list.
  *
  * @head: double pointer to the head node of the list.
  * @n: const type integer to be added on the list.
  *
  * Return: the address of the new element or NULL on failure.
  */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_elem = malloc(sizeof(dlistint_t));
	dlistint_t *current;

	if (!new_elem || !head)
		return (NULL);

	new_elem->n = n;

	if (!(*head))
	{
		*head = new_elem;
		new_elem->prev = NULL;
	}
	else
	{
		current = *head;

		while (current->next)
			current = current->next;

		new_elem->next = NULL;
		new_elem->prev = current;
		current->next = new_elem;
	}

	return (new_elem);
}
