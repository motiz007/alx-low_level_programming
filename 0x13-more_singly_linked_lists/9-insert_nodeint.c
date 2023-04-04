#include "lists.h"

/**
 * insert_nodeint_at_index - inserts new node at nth index
 * @head: the linked list
 * @idx: the index to insert at
 * @n: the value ti insert
 * Return: address of the new node, NULL if failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *cpy;
	unsigned int i;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	cpy = *head;
	for (i = 0; i < (idx - 1); i++)
	{
		if (cpy == NULL || cpy->next == NULL)
			return (NULL);

		cpy = cpy->next;
	}

	new->next = cpy->next;
	cpy->next = new;

	return (new);
}
