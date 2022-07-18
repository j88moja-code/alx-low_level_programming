#include "lists.h"

/**
  * print_listint - prints out all the arguments of list_int.
  *
  * @h: the pointer of const type.
  *
  * Return: number of nodes.
  */

size_t print_listint(const listint_t *h)
{
	unsigned int count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
