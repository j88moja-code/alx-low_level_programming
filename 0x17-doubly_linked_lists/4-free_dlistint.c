#include "lists.h"

/**
  * free_dlistint - frees a dlistint_t list.
  *
  * @head: pointer to the head node of the doubly linked list.
  *
  * Return: nothing.
  */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *next;

	while (head != NULL)
	{
		next = head->next;
		free(head);
		head = next;
	}
}
