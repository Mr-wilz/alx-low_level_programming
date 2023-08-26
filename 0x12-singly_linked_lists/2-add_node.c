#include "lists.h"
/**
 * add_node - adds a new node
 * @head: pointer to a pointer to the head in the list
 * @str: string to be added
 * Return: pointer to new head (success);
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;

	newNode = malloc(sizeof(list_t));

	if (!str)
		return (NULL);
	if (!newNode)
		return (NULL);

	newNode->str = strdup(str);

	if (newNode->str == NULL)
	{
		free(newNode);
		return (NULL);
	}
	newNode->len = strlen(str);
	newNode->next = *head;
	*head = newNode;
	return (newNode);
}
