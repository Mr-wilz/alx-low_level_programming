#include "lists.h"

/**
 * free_list - Frees a linked list.
 * @head: pointer to the head of the list.
 * Return: void (success).
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
