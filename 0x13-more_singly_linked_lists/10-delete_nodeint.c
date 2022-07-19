#include "lists.h"

/**
  * delete_nodeint_at_index - removes the node at index of a listint_t list.
  *
  * @head: the double pointer to the head node of listint_t list.
  * @index: index of the node that will be removed.
  *
  * Return: 1 on Success and -1 on Failure.
  */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *temp = *head;
	listint_t *del;

	if (head == NULL || *head == NULL)
		return (-1);

	while (temp != NULL)
	{
		if (index == count + 1)
		{
			del = temp->next;
			temp->next = del->next;
			free(del);
			return (1);
		}
		if (index == 0)
		{
			*head = temp->next;
			free(temp);
			return (1);
		}
		temp = temp->next;
		count++;
	}
	return (-1);
}
