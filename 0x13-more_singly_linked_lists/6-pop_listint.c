#include "lists.h"
/**
 *pop_listint - pops the first item of the list
 *@head: head of the list
 *Return: 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	int r, c = 0;
	listint_t *tmp, *del;

	if (head == NULL)
		return (0);

	del = *head;

	r = del->n;

	tmp = *head;


	while (c < 1)
	{
		tmp = tmp->next;
		c++;
	}

	*head = tmp;

	return (r);
}
