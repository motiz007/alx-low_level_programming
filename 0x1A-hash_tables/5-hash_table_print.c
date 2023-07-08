#include "hash_tables.h"

/**
 * hash_table_print - prints a harsh table
 * @ht: the harsh table to print
 * Return: void
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *temp;
	int comma = 0;

	if (ht == NULL)
		printf("{}\n");
	printf("{");
	while (i < ht->size)
	{
		temp = ht->array[i];
		while (temp)
		{
			if (comma == 1)
				printf(", ");
			printf("'%s': '%s'", temp->key, temp->value);
			comma = 1;
			temp = temp->next;
		}
		i++;
	}
	printf("}\n");
}
