#include "lists.h"
/**
 * print_listint - function that prints elements of a list
 * @h: pointer to list head
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
size_t numNode = 0;

while (h)
{
printf("%d\n", h->n);
h = h->next;
numNode++;
}
return (numNode);
}
