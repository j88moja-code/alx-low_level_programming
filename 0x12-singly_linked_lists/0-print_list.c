#include "lists.h"

/**
 * print_list - prints all the args of list_t.
 *
 * @h: pointer of const type.
 *
 * Return: number of nodes.
 */

size_t print_list(const list_t *h)
{
	unsigned int count = 0;

	do {
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		count++;
	} while (h != NULL);
	return (count);
}
