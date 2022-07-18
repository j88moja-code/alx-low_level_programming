#include "lists.h"

/**
  * add_nodeint - adds a new node at the beginning of a listint_t list.
  *
  * @n: the integer to be added to the list.
  * @head: double pointer to the head node.
  *
  * Return: address of the new element or NULL on failure.
  */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *result;

	if (head == NULL)
		return (NULL);

	result = malloc(sizeof(listint_t));
	if (result == NULL)
	{
		free(result);
		return (NULL);
	}
	result->n = n;
	result->next = *head;
	*head = result;
	return (result);
}
