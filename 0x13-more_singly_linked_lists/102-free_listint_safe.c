#include "lists.h"

size_t looped_listint_count(listint_t *head);

/**
  * looped_listint_count - counts the number of unique nodes in a looped list.
  *
  * @head: pointer to the head of the listint_t to be check.
  *
  * Return: 0 if list is not looped or number of nodes that r unique in a list.
  */

size_t looped_listint_count(listint_t *head)
{
	listint_t *slow, *fast;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);
	slow = head->next;
	fast = (head->next)->next;

	while (fast)
	{
		if (slow == fast)
		{
			slow = head;
			while (slow != fast)
			{
				nodes++;
				slow = slow->next;
				fast = fast->next;
			}

			slow = slow->next;
			while (slow != fast)
			{
				nodes++;
				slow = slow->next;
			}
			return (nodes);
		}
		slow = slow->next;
		fast = (fast->next)->next;
	}
	return (0);
}

/**
  * free_listint_safe - frees the listint_t list safely.
  *
  * @he: pointer to the head of the listint_t.
  *
  * Return: size of the list that has been freed.
  */

size_t free_listint_safe(listint_t **he)
{
	listint_t *tmp;
	size_t nodes, i;

	nodes = looped_listint_count(*he);

	if (nodes == 0)
	{
		for (; he != NULL && *he != NULL; nodes++)
		{
			tmp = (*he)->next;
			free(*he);
			*he = tmp;
		}
	}
	else
	{
		for (i = 0; i < nodes; i++)
		{
			tmp = (*he)->next;
			free(*he);
			*he = tmp;
		}

		*he = NULL;
	}
	he = NULL;

	return (nodes);
}
