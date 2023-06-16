#include "lists.h"
/**
 * insert_dnodeint_at_index - insert node at idx
 * @h: the linked list
 * @idx: the index
 * @n: the value of new node
 * Return: new node, NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp, *node;
	unsigned int num = 0;

	if (h == NULL)
		return (NULL);
	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = NULL;
	node->prev = NULL;
	if (idx == 0)
	{
		node = add_dnodeint(h, n);
		return (node);
	}
	tmp = *h;
	while (tmp)
	{
		if (tmp->next == NULL && num == idx - 1)
		{
			node = add_dnodeint_end(h, n);
			return (node);
		}
		else if ((idx - 1) == num)
		{
			node->next = tmp->next;
			node->prev = tmp;
			tmp->next->prev = node;
			tmp->next = node;
			return (node);
		}
		num++;
		tmp = tmp->next;
	}
	free(node);
	return (NULL);
}
