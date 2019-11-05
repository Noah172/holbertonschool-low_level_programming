#include "lists.h"
/**
 *pop_listint - pops the first item of the list
 *@head: head of the list
 *Return: 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	int r;
	listint_t *tmp, *del;

	if (head == NULL && *head == NULL)
		return (0);

	del = *head;
	r = del->n;
	tmp = *head;

	tmp = tmp->next;

	*head = tmp;

	free(del);

	return (r);
}
