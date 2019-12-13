#include "lists.h"
/**
 *free_dlistint - frees a list
 *@head: the head of the list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *a;

	a = head;
	head = head->next;
	free(a);
	while(head != NULL)
	{
		a = head;
		head = head->next;
	}
	free(head);
}
