#include "lists.h"

/**
  * insert_nodeint_at_index - inserts a new node at a given position.
  *
  * @head: double pointer to the head node of listint_t list.
  * @idx: the index of listint_t list for new node insertion.
  * @n: the integer data to be added on the list.
  *
  * Return: address of the new node or NULL on failure.
  */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *current;
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	current = *head;

	while (current != NULL)
	{
		if (count + 1 == idx)
		{
			new->next = current->next;
			current->next = new;
			return (new);
		}
		count++;
		current = current->next;
	}
	free(new);
	return (NULL);
}
