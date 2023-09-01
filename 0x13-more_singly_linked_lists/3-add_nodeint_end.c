#include "lists.h"

/**
 * add_nodeint_end - function that adds neww node at the end of a list
 * @head: pointer to the head node
 * @n: data to add
 * Return: new node adress (Succes) Null on failure
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_end;
	listint_t *temp;

	new_end = malloc(sizeof(listint_t));

	if (!new_end)
		return (NULL);
	new_end->n = n;
	new_end->next = NULL;
	temp = *head;

	if (*head == NULL)
	{
		*head = new_end;
		return (new_end);
	}

	while (temp->next != NULL)
	{
		temp = temp->next;
	}

	temp->next = new_end;
	return (new_end);
}
