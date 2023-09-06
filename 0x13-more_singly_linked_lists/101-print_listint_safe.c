#include "lists.h"
#include <stdlib.h>

/**
 * print_listint_safe - Prints a listint_t linked list safely.
 * @head: A pointer to the head of the list.
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current = head;
	const listint_t *visited[1024];
	size_t count = 0;
	size_t i;

	if (!head)
	{
		printf("0\n");
		exit(98);
	}

	while (current)
	{
		for (i = 0; i < count; i++)
		{
			if (current == visited[i])
			{
				printf("-> [%p] %d\n", (void *)current, current->n);
				return (count);
			}
		}

	printf("[%p] %d\n", (void *)current, current->n);
	visited[count++] = current;
	current = current->next;
	}

	return (count);
}
