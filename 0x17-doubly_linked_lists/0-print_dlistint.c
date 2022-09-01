#include "lists.h"

/**
  * print_dlistint - prints all the elements of a dlistint_t
  *
  * @h: pointer of const type
  *
  * Return: number of nodes.
  */

size_t print_dlistint(const dlistint_t *h)
{
	size_t num_nodes = 0;

	while (h)
	{
		printf("%i\n", h->n);
		num_nodes++;
		h = h->next;
	}
	return (num_nodes);
}
