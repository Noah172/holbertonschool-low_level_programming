#include "lists.h"

/**
 *print_listint - print the list
 *@h: structure that contains the list
 *Return: the number of elementes in the list.
 */
size_t print_listint(const listint_t *h)
{
	int c = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		c++;
	}

	return (c);
}
