#include "lists.h"
/**
 * print_dlistint - prints all numbers of a dlinked list
 * @h: the dlinked list
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;

	if (h == NULL)
		return (nodes);
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
