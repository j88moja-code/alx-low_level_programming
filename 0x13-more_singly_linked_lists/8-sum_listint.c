#include "lists.h"

/**
  * sum_of_nodes - recursively finds sum of nodes of listint_t list.
  *
  * @head: the pointer to the head node of listint_t list.
  * @sum: the pointer to the sum of nodes.
  *
  * Return: nothing.
  */

static void sum_of_nodes(listint_t *head, int *sum)
{
	if (!head)
		return;
	sum_of_nodes(head->next, sum);

	*sum += head->n;
}

/**
  * sum_listint - sums up all the n data of a listint_t list.
  *
  * @head: the pointer of the head node of listint_t list.
  *
  * Return: sum of all n data.
  */

int sum_listint(listint_t *head)
{
	int sum = 0;

	sum_of_nodes(head, &sum);

	return (sum);
}
