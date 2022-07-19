#include "lists.h"

/**
  * reverse_recur - reverses listint_t list recursively.
  *
  * @current: the pointer to the current node to reverse.
  * @following: the pointer ot the next node to reverse.
  *
  * Return: pointer to the reversed list.
  */

static listint_t *reverse_recur(listint_t *current, listint_t *following)
{
	listint_t *ptr, *previous = NULL;

	ptr = current;
	while (ptr->next != following)
	{
		previous = ptr;
		ptr = ptr->next;
	}
	if (previous != NULL)
		previous->next = current;
	following = current->next;
	current->next = ptr->next;
	if (current != ptr && following != current)
		following = reverse_recur(following, current);
	ptr->next = following;
	return (ptr);
}

/**
  * reverse_listint - reverses a listint_t list.
  *
  * @head: the double pointer to the head node of listint_t list.
  *
  * Return: a pointer to the first node of the reversed list.
  */

listint_t *reverse_listint(listint_t **head)
{
	if (head == NULL || *head == NULL)
		return (NULL);
	*head = reverse_recur(*head, NULL);
	return (*head);
}
