#include "lists.h"

/**
  * delete_dnodeint_at_index - deletes the node at index index of a dlistint_t.
  *
  * @head: pointer to the head node of the dlistint_t.
  * @index: the index of the node to delete.
  *
  * Return: 1 on Success or -1 on Failure.
  */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *curr = *head;

	if (*head == NULL)
		return (-1);

	for (; index != 0; index--)
	{
		if (curr == NULL)
			return (-1);
		curr = curr->next;
	}

	if (curr == *head)
	{
		*head = curr->next;
		if (*head != NULL)
			(*head)->next = NULL;
	}
	else
	{
		curr->prev->next = curr->next;
		if (curr->next != NULL)
			curr->next->prev = curr->prev;
	}
	free(curr);
	return (1);
}
