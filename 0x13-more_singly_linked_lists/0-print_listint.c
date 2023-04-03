#include "lists.h"

/**
 * print_listint - prints all elements of listint_t
 * @h: the list it recieves
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *tp;
	unsigned int count = 0;

	tp = h;
	while (tp)
	{
		printf("%d\n", tp->n);
		count++;
		tp = tp->next;
	}
	return (count);
}
