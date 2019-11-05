#include "lists.h"
/**
 *add_nodeint_end - add nodes in the end of the list
 *@head: the head of the list
 *@n: constant int
 *Return: the new head
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *last;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
		*head = new;

	last = *head;

	while (last->next != NULL)
	{
		last = last->next;
	}
	last->next = new;

	return (*head);
}
