#include "lists.h"
/**
 *print_list - funtion to print the list
 *@h: pointer to the list
 *Return: the number of elements printed
 */

size_t list_len(const list_t *h)
{
	int i;

	for (i = 0; h != NULL; i++)
		h = h->next;


	return (i);
}
