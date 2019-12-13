#include "lists.h"
/**
 *add_dnodeint_end - add a node to the end of a list
 *@head: the head of the list
 *@n: int value of the new module
 *Return: NULL if fail, direction of the new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *neo_end, *last;

	last = *head;
	neo_end = malloc(sizeof(dlistint_t));
	if (neo_end == NULL)
		return (NULL);
	neo_end->next = NULL;
	neo_end->n = n;

	if (last == NULL)
	{
		neo_end->prev = NULL;
		*head = neo_end;
		return (neo_end);
	}

	while (last->next)
		last = last->next;

	last->next = neo_end;
	neo_end->prev = last;
	return (neo_end);
}
