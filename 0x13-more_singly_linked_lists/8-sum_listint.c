#include "lists.h"

/**
 * sum_listint - funtion that returns sum of data ina linked list.
 * @head: pointer to the head node in the linked list.
 * Return: sum of data (Success) or 0 if list is empty.
 */

int sum_listint(listint_t *head)
{
	listint_t *temp = head;
	int  sum = 0;

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
