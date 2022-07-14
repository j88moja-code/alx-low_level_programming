#include "lists.h"

/**
 * free_list - frees memory occupied by list_t.
 *
 * @head: the head of linked list
 *
 * Return: nothing.
 */

void free_list(list_t *head)
{
	list_t *curr;
	list_t *next;

	curr = head;

	while (curr != NULL)
	{
		next = curr->next;
		free(curr->str);
		free(curr);
		curr = next;
	}
}
