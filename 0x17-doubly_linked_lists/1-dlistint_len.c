#include "lists.h"
/**
 *dlistint_len - count the number of modules in a double linked list
 *@h: the head of the list
 *Return: the number of modules in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *header;
	size_t a = 0;

	header = h;
	if (header == NULL)
		return (a);
	while(header != NULL)
	{
		header = header->next;
		a++;
	}

	return (a);
}
