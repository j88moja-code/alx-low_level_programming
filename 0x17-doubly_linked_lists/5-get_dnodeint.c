#include "lists.h"

/**
  * get_dnodeint_at_index - searches for a specified node of dlistint_t list.
  *
  * @head: pointer to the head node of dlistint_t.
  * @index: index of the node begining from 0.
  *
  * Return: pointer to the nth node or NULL on failure.
  */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);
	if (index == 0)
		return (head);
	for (i = 0; i < index; i++)
	{
		if (head->next == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
