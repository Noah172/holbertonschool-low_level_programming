#include "hash_tables.h"
/**
 *hash_table_print - function that prints a hash table.
 *@ht: the hash table to print
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *printer = NULL;
	unsigned long int c = 0;
	char *cm = "";

	if (ht)
	{
		printer = ht->array[c];
		printf("{");
		while (c < ht->size)
		{
			while (printer)
			{
				printf("%s'%s': '%s'", cm, printer->key, printer->value);
				cm = ", ";
				printer = printer->next;
			}
		}
		printf("}");
		c++;
	}
}
