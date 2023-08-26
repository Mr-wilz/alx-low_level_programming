#include "lists.h"
/**
 * list_len - function that returns number of elements in a linked list
 * @h: pointer to list head
 * Return: number of nodes on success
 */

size_t list_len(const list_t *h)
{
	size_t checker = 0;
	while (h)
	{
	if (!h)
		return (-1);
	else
	{
		h = h->next;
		++checker;
	}
	}
	return (checker);
}
