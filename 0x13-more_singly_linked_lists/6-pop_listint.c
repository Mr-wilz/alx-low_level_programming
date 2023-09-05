#include "lists.h"

/**
 *pop_listint - function that deletes teh head node of a linked list
 *@head: pointer the head node in the linked list
 *Return: data in the deleted head or 0 if empty
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (*head == NULL)
		return (0);
	if (head == NULL)
		return (0);

	data = (*head)->n;
	temp = (*head)->next;
	free(*head);

	(*head) = temp;
	return (data);

}
