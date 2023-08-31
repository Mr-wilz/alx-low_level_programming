#include "lists.h"
/**
 * add_nodeint - adds a new note at the begining of a list
 * @head: pointer to a pointer to the first node
 * @n: value added to new node
 * Return: the address of new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));
	if (!newNode)
		return (NULL);

	newNode->n = n;
	newNode->next = *head;
	*head = newNode;
	return (*head);
}
