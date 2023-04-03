#include "lists.h"
#include <stdlib.h>

/**
 * free_list - Frees a list_t list.
 * @head: A pointer to the list_t list.
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *temp;
	list_t *curr = head;

	while (curr != NULL)
	{
		temp = curr;
		curr = curr->next;
		free(temp);
	}
}
