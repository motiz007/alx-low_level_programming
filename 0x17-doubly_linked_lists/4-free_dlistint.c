#include "lists.h"

/**
 * free_dlistint - fress a dlinked list
 * @head: the linked list
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
