#include "hash_tables.h"

/**
 * hash_table_set - inserts an item into the hash table
 * @ht: the hash table
 * @key: the key to use
 * @value: the value to insert
 * Return: 1 on success, 0 otherwise
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node;
	unsigned long int index;

	if (key == NULL || ht == NULL)
		return (0);

	new_node = create_node(key, value);
	if (new_node == NULL)
		return (0);
	index = key_index((const unsigned char *)new_node->key, ht->size);
	if (ht->array[index] == NULL)
		ht->array[index] = new_node;
	else
		collision_handler(ht->array[index], new_node);

	return (1);
}

/**
 * create_node - creates a node
 * @key: the key provided
 * @value: the data to store
 * Return: the hash node created
*/
hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *new_node = malloc(sizeof(hash_node_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;

	return (new_node);
}

/**
 * collision_handler - handles cillisions externally
 * @head: the head to a linked list
 * @new_node: the new node to insert
 * Return: void
*/
void collision_handler(hash_node_t **head, hash_node_t *new_node)
{
	hash_node_t *temp;

	temp = *head;
	*head = new_node;
	new_node->next = temp;
}
