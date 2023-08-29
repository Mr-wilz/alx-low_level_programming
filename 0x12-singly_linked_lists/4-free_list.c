#include "lists.h"

/**
 * free_list - Frees a list-t list.
 * @head: pointer to the head of the list.
 * Return: void (success).
 */

void free_list(list_t *head)
{
	list_t *current;

	current = head;

	while (head)
	{
		head = head->next;
		free(current->str);
		free(current);
	}
}
