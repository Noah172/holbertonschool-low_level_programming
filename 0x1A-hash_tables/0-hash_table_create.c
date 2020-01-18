#include "hash_tables.h"
/**
 *hash_table_create: creates a hash table
 *@size: the size of the array
 *
 *Return: a pointer to the new hash table if success or null if fail
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int c = 0;
	hash_table_t *neo_hash;

	neo_hash = malloc(sizeof(hash_table_t) * 1);
	if (neo_hash == NULL)
	{
		free(neo_hash);
		return (NULL);
	}

	neo_hash->array = malloc(sizeof(hash_node_t *) * size);
	if (neo_hash->array == NULL)
	{
		free(neo_hash);
		return (NULL);
	}

	while (c < size)
	{
		neo_hash->array[c] = NULL;
		c++;
	}
	neo_hash->size = size;
	return (neo_hash);
}
