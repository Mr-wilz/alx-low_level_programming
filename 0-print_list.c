#include "lists.h"
/**
 * print-list - prints all elements of a list
 * @h: list from which elements is to be printed
 * Return: number of elements
 */
size_t print_list(const list_t *h)
{
	size_t num_elem = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			print("[%d] %s\n", h->length, h-string);
		h = h ->nxt;
		num_elem++;
	}
	return (num_elem);
}
