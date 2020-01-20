#include "hash_tables.h"
/**
 *hash_table_print - function that prints a hash table.
 *@ht: the hash table to print
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *print = NULL;
	unsigned long int c = 0;
	char *cm = "";

	if (ht != NULL)
	{
		printf("{");
		for (; c < ht->size; c++)
		{
			print = ht->array[c];
			while (print)
			{
				printf("%s'%s': '%s'", cm, print->key, print->value);
				cm = ", ";
				print = print->next;
			}
		}
		printf("}\n");
	}
}
