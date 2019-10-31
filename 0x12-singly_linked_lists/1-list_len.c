#include "lists.h"
/**
 *list_len - funtion to print number of printed items
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
