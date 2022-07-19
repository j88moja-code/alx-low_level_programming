#include "lists.h"

/**
  * pop_listint - deletes the head node of listint_t list.
  *
  * @head: double pointer to the head node of listint_t list.
  *
  * Return: head node's data(n) or 0 if listint_t is NULL.
  */

int pop_listint(listint_t **head)
{
	int n;
	listint_t *temporary;

	if (*head == NULL)
		return (0);

	temporary = *head;
	*head = temporary->next;
	n = temporary->n;

	free(temporary);
	return (n);
}

