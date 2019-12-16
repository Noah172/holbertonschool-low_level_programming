#include "lists.h"
/**
 
 
 
 
 
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *in, *fr;
	unsigned int ni = 0;

	if (h == NULL)
		return (NULL);

	fr = *h;
	in = malloc(sizeof(dlistint_t));
	if (in == NULL)
		return (NULL);

	in->n = n;
	in->prev = NULL;
	in->next = NULL;
	if (idx == 0)
	{
		free(in);
		return (add_dnodeint(h, n));
	}
	for (ni = 0; ni < idx - 1; ni++)
		fr = fr->next;
	if (fr == NULL)
	{
		free(in);
		return (NULL);
	}
	if (fr->next == NULL)
	{
		in->prev = fr;
		fr->next = in;
	} else
	{
		in->next = fr->next;
		in->prev = fr;
		fr->next->prev = in;
		fr->next = in;
	}
	return (in);
}
