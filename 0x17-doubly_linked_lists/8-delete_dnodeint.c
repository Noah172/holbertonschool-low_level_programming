#include "lists.h"
/**
 *delete_dnodeint_at_index - delete a node
 *@head: the head of the list
 *@index: the node to delete
 *Return: 1 if success and -1 if fail
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *ac = *head;
	unsigned int c = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = ac->next;
		if (ac->next != NULL)
			ac->next->prev = NULL;
		free(ac);
		return (1);
	}
	while (ac != NULL)
	{
		if (ac->next != NULL && ac->prev != NULL
		    && c == index)
		{
			ac->next->prev = ac->prev;
			ac->prev->next = ac->next;
			free(ac);
			return (1);
		}
		else if ((c + 1) == index && ac->next->next == NULL)
		{
			free(ac->next);
			ac->next = NULL;
			return (1);
		}
		ac = ac->next;
		c++;
	}

	return (-1);
}
