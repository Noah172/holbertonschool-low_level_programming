#include "lists.h"
/**
 *add_dnodeint - add node in the head of a double linked list
 *@head: the head of the list
 *@n: the int value of the new node
 *Return: the direction of the new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *neo;

	neo = malloc(sizeof(dlistint_t));
	if (neo == NULL)
		return (NULL);

	if (n == '\0')
		return (NULL);

	if (head != NULL)
	{
		neo->n = n;
		neo->prev = NULL;
		neo->next = *head;
		*head = neo;
	}
	else
	{
		neo->n = n;
		neo->next = NULL;
		neo->prev = NULL;
		*head = neo;
	}
	return (neo);
}
