#include "lists.h"
/**
 * free_listint2 - function that frees a linked list
 * @head: pointer to head of linked list
 * Return: void (Success)
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *next;

	if (!head)
		return;
	temp = *head;

	while (temp)
	{
		next = temp->next;
		free(temp);
		temp = next;
	}
	*head = NULL;
}
