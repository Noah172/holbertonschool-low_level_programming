#include "hash_tables.h"
/**
 *hash_table_delete - function that deletes a hash table.
 *@ht: the hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *del = NULL, *next = NULL;
	unsigned long int c = 0;

	if (ht == NULL)
		return;
	if (ht->array == NULL)
	{
		free(ht);
		return;
	}
	for (; c < ht->size; c++)
	{
		del = ht->array[c];
		while (del != NULL)
		{
			next = del->next;
			free(del->key);
			free(del->value);
			free(del);
			del = next;
		}
	}
	free(ht->array);
	free(ht);
}
