#include "lists.h"
/**
 *add_nodeint -
 *@head:
 *@n:
 *Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);


	new->next = *head;
	new->n = n;
	*head = new;

	return (new);
}
