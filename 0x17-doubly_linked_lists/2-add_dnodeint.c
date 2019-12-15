#include "lists.h"
/**
 *add_dnodeint - add node in the head of a double linked list
 *@head: the head of the list
 *@n: the int value of the new node
 *Return: the direction of the new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *neon, *h;

	h = *head;
	neon = malloc(sizeof(dlistint_t));
	if (neon == NULL)
		return (NULL);

	neon->prev = NULL;
	neon->n = n;
	if (h == NULL)
	{
		*h = new;
		neon->next = NULL;
		return (neon);
	}
	neon->next = h;
	h->prev = neon;
	*h = neon;
	return (neon);
}
