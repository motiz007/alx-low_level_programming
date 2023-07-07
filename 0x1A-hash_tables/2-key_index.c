#include "hash_tables.h"

/**
 * key_index -function that gives you the index of a key
 * @key: this is the key
 * @size: the size of the table
 * Return: index of the key
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key) % size;
	return (index);
}
