#include "lists.h"

/**
 * list_len - returns number of elements of a linked list
 * @h: the list to check
 * Return: number of elements in  the linked list
 */

size_t list_len(const list_t *h)
{
	size_t count  = 0;
	int i;

	for (i = 0; h; i++)
	{
		count++;
		h = h->next;
	}
	return (count);
}
