#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: linked list to search for
 *
 * Return: address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *current = head;
	listint_t *set[10000];
	int i = 0;

	while (current != NULL)
	{
		for (i = 0; i < 10000; i++)
		{
			if (set[i] == current)
				return (current);
		}
		set[i] = current;
		current = current->next;
	}
	return (NULL);
}
