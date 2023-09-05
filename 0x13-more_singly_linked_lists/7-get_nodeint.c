#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node.
 * @head: poiinter to the head node of the linked list.
 * @index: index of the node starting at 0.
 * Return: nth NOde (success) or Null if node doesn't exist.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	unsigned int i;

	for (i = 0; temp; i++)
	{
		if (i == index)
			return (temp);
		temp = temp->next;
	}
	return (NULL);
}
