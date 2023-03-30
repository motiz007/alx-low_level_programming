#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * print_list - prints all elements of a linked list
 * @h: the list to print out
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	int i;
	size_t count = 0;

	for (i = 0; h ; i++)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		count++;
	}
	return (count);
}
