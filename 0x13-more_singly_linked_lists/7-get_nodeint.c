#include "lists.h"

/**
 * get_nodeint_at_index - gets a node from specified index
 * @index: the index of the node to get
 * @head: the linked list
 * Return: the nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int i = 0;

	while (head != NULL)
	{
		temp = head;
		if (i == index)
			return (temp);
		head = head->next;
		i++;
	}
	return (NULL);
}
