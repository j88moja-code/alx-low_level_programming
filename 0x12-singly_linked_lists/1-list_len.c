#include "lists.h"

/**
 * list_len - function with one argument.
 *
 * @h: const list_t pointer argument to struct.
 *
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	unsigned int count = 0;

	do {
		h = h->next;
		count++;
	} while (h != NULL);
	return (count);
}
