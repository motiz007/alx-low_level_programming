#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beggining
 * @n: the value of the new node
 * @head: pointer to dlinked list
 * Return: new node or Null
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node;
	dlistint_t *tmp;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = NULL;
	node->prev = NULL;
	if (*head == NULL)
	{
		*head = node;
		return (node);
	}
	tmp = *head;
	*head = node;
	node->next = tmp;
	tmp->prev = node;
	return (node);
}
