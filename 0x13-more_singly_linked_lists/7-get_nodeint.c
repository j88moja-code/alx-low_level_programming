#include "lists.h"

/**
  * get_nodeint_at_index - returns the nth node of a listint_t list.
  *
  * @head: pointer to the head node of the list.
  * @index: index of the node.
  *
  * Return: nth node of a list.
  */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int count = 0;

	while (current != NULL)
	{
		if (count == index)
			return (current);
		count++;
		current = current->next;
	}
	return (current);
}
