#include "hash_tables.h"

/**
 * hash_table_create : creates a hash table
 * @size - the array size of the hash table
 *
 * return - pointer to hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	unsigned long int i;

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
	{
		return (NULL);
	}

	ht->size = size;
	ht->table = malloc(size * sizeof(struct HashNode*));
	if (ht->table == NULL)
	{
		free(ht);
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		ht->table[i] = NULL;
	}
	return (ht);
}
