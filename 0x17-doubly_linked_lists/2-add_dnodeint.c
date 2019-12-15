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

	if (head == NULL)
		return (NULL);

	neo = malloc(sizeof(dlistint_t));
	if (neo == NULL)
		return (NULL);

	neo->n = n;
	neo->prev = NULL;
	neo->next = NULL;

	if (*head == NULL)
	{
		*head = neo;
	}
	else
	{
		neo->next = *head;
		(*head)->prev = neo;
		*head = neo;
	}
	return (neo);
}
