#include "lists.h"
/**
 *
 *
 *
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *header;
	size_t a = 0;

	header = h;
	if (header == NULL)
		return (a);
	while(header != NULL)
	{
		int n = header->n;
		printf("%d\n", n);
		header = header->next;
		a++;
	}

	return (a);
}
