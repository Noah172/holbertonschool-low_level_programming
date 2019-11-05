#include "lists.h"
/**
 *listint_len - conunt the elements in the list
 *@h: the structure of the list
 *Return: the number of elementes in the list
 */
size_t listint_len(const listint_t *h)
{
	int c = 0;

	while (h != NULL)
	{
		h = h->next;
		c++;
	}

	return (c);
}
