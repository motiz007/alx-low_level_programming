#include "lists.h"

/**
 * pop_listint - deletes head node
 * @head: the linked list
 * Return: the data of deleted node
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int nData;

	if (*head == NULL)
		return (0);

	nData = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;
	return (nData);
}
