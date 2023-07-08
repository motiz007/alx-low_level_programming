#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: the hash table
 * Return: void
*/
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			free_list(ht->array[i]);
		}
	}
	free(ht->array);
	free(ht);
}

/**
 * free_list - frees a linked list
 * @head: the head
 * Return: void
*/
void free_list(hash_node_t *head)
{
	hash_node_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp->key);
		free(temp->value);
		free(temp);
	}
}
