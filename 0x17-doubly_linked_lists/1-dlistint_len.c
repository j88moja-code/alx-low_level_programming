#include "lists.h"

/**
  * dlistint_len - returns the number of elements in a doublu linked list
  *
  * @h: pointer to the const head node of the list.
  *
  * Return: number of elements in a double linked list.
  */

size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;

	while (h)
	{
		h = h->next;
		len++;
	}

	return (len);
}
