#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: the hash table to check
 * @key: the lookup key
 * Return: the value, NULL if not found
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	char *info;
	unsigned long int index;
	hash_node_t *temp;

	index = key_index((const unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
		return (NULL);
	temp = ht->array[index];
	while (temp)
	{
		if (strcmp(key, temp->key) == 0)
		{
			info = strdup(temp->value);
			return (info);
		}
		temp = temp->next;
	}

	return (NULL);
}
