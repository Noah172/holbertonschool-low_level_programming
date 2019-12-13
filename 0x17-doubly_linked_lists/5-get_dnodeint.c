#include "lists.h"

/**
 *get_dnodeint_at_index - go to the index given
 *@head: head of the list
 *@index: number of node we are looking for
 *Return: the node if success and NULL if errors
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *h;
	unsigned int coi = 0;

	if (index < coi)
		return (NULL);

	h = head;
	for(coi = 0; coi < index; coi ++)
	{
		h = h->next;
		if (h->next == NULL && index > coi + 2)
			return (NULL);
	}

	return (h);
}
