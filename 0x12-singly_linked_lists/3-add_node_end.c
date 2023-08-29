#include "lists.h"
/**
 * add_node_end - adds a new note add the end of list_t list
 * @head: pointer to a pointer to the head of the linked list
 * @str: string to be duplicated and stored in the new note
 * Return: address of new node, Null if failure
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *endNode;
	list_t *temp;

	endNode = malloc(sizeof(list_t));
	if (endNode == NULL)
		return (NULL);
	endNode->str = strdup(str);
	if (endNode->str == NULL)
	{
		free(endNode);
		return (NULL);
	}
	endNode->len = strlen(endNode->str);

	endNode->next = NULL;

	if (*head == NULL)
		*head = endNode;
	else
	{
		temp = *head;
		while (temp->next)
			temp = temp->next;
		temp->next = endNode;
	}
	return (endNode);
}
