#include "lists.h"

/**
 * delete_dnodeint_at_index - Delete node at nth index
 * @head: Head of node
 * @index: index
 * Return: 1 succeed, -1 if fail
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp;
	unsigned int count;

	if (head == NULL)
		return (-1);

	tmp = *head;
	if (index == 0)
	{
		*head = tmp->next;
		if (tmp->next != NULL)
		{
			tmp->next->prev = NULL;
		}
		free(tmp);
		return (1);
	}
	for (count = 0; tmp != NULL && count < index - 1 ; count++)
	{
		tmp = tmp->next;
	}
	if (tmp == NULL || tmp->next == NULL)
	{
		return (-1);
	}

	if (tmp->next->next != NULL)
	{
		tmp->next = tmp->next->next;
		free(tmp->next->prev);
		tmp->next->prev = tmp;
		return (1);
	}
	else
	{
		free(tmp->next);
		tmp->next = NULL;
		return (1);
	}
	return (-1);
}
