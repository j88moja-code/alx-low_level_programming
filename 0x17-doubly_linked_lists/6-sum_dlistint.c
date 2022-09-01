#include "lists.h"

/**
  * sum_dlistint - gets the sum of all data(n) of a dlistint_t list.
  *
  * @head: pointer to the head node of dlistint_t list.
  *
  * Return: sum of all the data or 0 if list is empty.
  */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
