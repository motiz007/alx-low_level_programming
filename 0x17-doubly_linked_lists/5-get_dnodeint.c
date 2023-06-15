#include "lists.h"

/**
 * get_dnodeint_at_index - gets value at index
 * @head: the linked list
 * @index: the index
 * Return: the value
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp;
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);
	tmp = head;
	while (tmp)
	{
		if (index == count)
			return (tmp);
		tmp = tmp->next;
		count++;
	}
	return (NULL);
}
