#include "lists.h"
/**
 *pop_listint - pops the first item of the list
 *@head: head of the list
 *Return: 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	int r;
	listint_t *tmp;

	if (*head == NULL)
		return (0);

	tmp = *head;
	r = tmp->n;
	
	tmp = tmp->next;

	free(*head);

	*head = tmp;

	return (r);
}
