#include "lists.h"

/**
 *pop_listint - function that deletes teh head node of a linked list
 *@head: pointer the head node in the linked list
 *Return: data in the deleted head or 0 if empty
 */

int pop_listint(listint_t **head)
{
	listint_t *temp = (*head)->next;
	int data = (*head)->n;

	if (*head == NULL || &head == NULL)
		return (0);

	free(*head);
	*head = temp;

	return (data);

}
