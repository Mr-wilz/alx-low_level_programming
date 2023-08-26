#include "lists.h"

/**
 * print_list - function that prints elements from a list
 * @h: linked list
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t num_nodes = 0;

	while (h)
	{
		if (!h->str)
		{
			printf("[%d] %s\n", 0, "(nil)");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		num_nodes++;
	}
	return (num_nodes);
}
