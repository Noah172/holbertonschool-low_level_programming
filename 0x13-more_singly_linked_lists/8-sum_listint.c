#include "lists.h"
/**
 *sum_listint - sum the value of the numbers
 *@head: the head of the list
 *Return: the result or 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
	int r = 0, t;
	listint_t *tmp;

	if (head != NULL)
	{
	tmp = head;

	while (tmp != NULL)
	{
		t = tmp->n;
		r += t;
		tmp = tmp->next;
	}

	return (r);

	}
	return (0);
}
