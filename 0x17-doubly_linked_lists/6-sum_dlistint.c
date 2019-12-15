#include "lists.h"
/**
 *sum_dlistint - add the values of the list
 *@head: the head of the list
 *Return: the result of the sum, or 0 if empty
 */
int sum_dlistint(dlistint_t *head)
{
	int s = 0;

	if (head != NULL)
	{
		s += head->n + sum_dlistint(head->next);
	}

	return (s);
}
