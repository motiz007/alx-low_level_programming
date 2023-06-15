#include "lists.h"
/**
 * sum_dlistint - calculates running sum of nodes
 * @head: the dlinked list
 * Return: sum, 0
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;
	int sum = 0;

	if (head == NULL)
		return (0);
	tmp = head;
	while (tmp)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
