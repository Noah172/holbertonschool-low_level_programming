#include "hash_tables.h"
/**
 *hash_table_get - function that retrieves a value associated with a key.
 *@ht: the hash table you want to look into.
 *@key: the key you are looking for.
 *
 *Return: the value associated with the element, NULL if key couldnt be found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int indx = 0;
	hash_node_t *seeker = NULL;

	if (ht == NULL || key == NULL)
	{
		return (NULL);
	}
	else
	{
		indx = key_index((const unsigned char *) key, (*ht).size);
		seeker = ht->array[indx];
		while (seeker)
		{
			if (strcmp(seeker->key, (char *) key) == 0)
				return (seeker->value);
			seeker = seeker->next;
		}
		return (NULL);
	}
}
