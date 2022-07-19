#include "lists.h"

/**
  * free_listint2 - frees a listint_t list.
  *
  * @head: a double pointer to the head node of listint_t.
  *
  * Return: nothing.
  */

void free_listint2(listint_t **head)
{
	listint_t *current;

	while (head != NULL && *head != NULL)
	{
		current = *head;
		*head = current->next;
		free(current);
	}
}
