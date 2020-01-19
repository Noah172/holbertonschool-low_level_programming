#include "hash_tables.h"
/**
 *hash_table_set - function that adds an element to the hash table
 *@ht: the hash table
 *@key: the key, can not be an empty string
 *@value: value associated with the key
 *
 *Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int indx;
	hash_node_t *neo_node = NULL, *node = NULL;

	if (key == NULL || value == NULL || ht == NULL || strlen(key) == 0)
		return (0);

	indx = key_index((const unsigned char *)key, ht->size);
	node = ht->array[indx];

	while (node != NULL)
	{
		if (strcmp(key, (const char *) (node->key)) == 0)
		{
			free(node->value);
			node->value = strdup(value);
			if (node->value == NULL)
				return (0);
			return (1);
		}
		node = node->next;
	}
	neo_node = malloc(sizeof(hash_table_t));
	if (neo_node == NULL)
		return (0);

	neo_node->value = strdup(value);
	neo_node->key = strdup(key);
	if (!neo_node->key || !neo_node->value)
		return (0);

	neo_node->next = ht->array[indx];
	ht->array[indx] = neo_node;
	return (1);
}
