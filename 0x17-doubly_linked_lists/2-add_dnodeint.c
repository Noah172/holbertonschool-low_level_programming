#include "lists.h"
/**
 *add_dnodeint - add node in the head of a double linked list
 *@head: the head of the list
 *@n: the int value of the new node
 *Return: the direction of the new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *neo, *h;

	h = *head;
	neo = malloc(sizeof(dlistint_t));
	if (neo == NULL)
		return (NULL);

	neo->prev = NULL;
	neo->n = n;
	if (head != NULL)
	{
		neo->next = *head;
		*h = neo;
	}
	else
	{
		h = neo;
		neo->next = NULL;
	}
	return (neo);
}
