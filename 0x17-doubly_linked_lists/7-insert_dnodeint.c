#include "lists.h"

/**
  * insert_dnodeint_at_index - a function that inserts
  * a new node at a given position.
  *
  * @h: pointer to the head node of the dlistint_t linked list.
  * @idx: position to inseft new node.
  * @n: integer to be inserted in the dlistint_t list.
  *
  * Return: address of tge new node or NULL on failure
  */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *curr = *h, *new;

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (; idx != 1; idx--)
	{
		curr = curr->next;
		if (curr == NULL)
			return (NULL);
	}
	if (curr->next == NULL)
		return (add_dnodeint_end(h, n));

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = curr;
	new->next = curr->next;
	curr->next->prev = new;
	curr->next = new;

	return (new);
}
