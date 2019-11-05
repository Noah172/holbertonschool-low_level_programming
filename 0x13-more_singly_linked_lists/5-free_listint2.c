#include "lists.h"
/**
 *
 *
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *freed2;

	while (head != NULL && *head != NULL)
	{
		freed2 = *head;
		*head = freed2->next;
		free(freed2);
	}
	head = NULL;
}
