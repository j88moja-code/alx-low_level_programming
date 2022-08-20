#include "lists.h"

/**
  * find_listint_loop - finds the loop in the listint_t linked list.
  *
  * @head: a pointer to the head of the listint_t list.
  *
  * Return: NULL if there is no loop else address to the node where loop starts
  */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow, *fast;

	if (head == NULL || head->next == NULL)
		return (NULL);

	slow = head->next;
	fast = (head->next)->next;

	while (fast)
	{
		if (slow == fast)
		{
			slow = head;
			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}
			return (slow);
		}
		slow = slow->next;
		fast = (fast->next)->next;
	}
	return (NULL);
}
