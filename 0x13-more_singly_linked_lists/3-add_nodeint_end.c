#include "lists.h"

/**
  * add_nodeint_end - adds a new node at the end of a listint_t list.
  *
  *@head: double pointer to the head node of the list.
  * @n: integer to be added at the end of listint_t.
  *
  * Return: address of the new element or NULL on failure.
  */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *current;
	listint_t *result;

	result = malloc(sizeof(listint_t));
	if (result == NULL)
		return (NULL);
	result->n = n;
	result->next = NULL;
	if (*head == NULL)
	{
		*head = result;
		return (*head);
	}
	current = *head;
	while (current->next != NULL)
		current = current->next;
	current->next = result;
	return (*head);
}
