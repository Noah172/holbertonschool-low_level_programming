#include "lists.h"
/**
 *free_dlistint - frees a list
 *@head: the head of the list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *a;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;

		while (head != NULL)
		{
			a = head->next;
			free(head);
			head = a;
		}
	}
}
