#include "lists.h"
/**
 *
 *
 *
 *
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *neo;

	neo = malloc(sizeof(dlistint_t));
	if(neo == NULL || n == '\0')
		return (NULL);
	neo->n = n;
	neo->prev = NULL;
	neo->next = *head;
	*head = neo;
	return (neo);
}
