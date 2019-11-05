#include "lists.h"
/**
 *get_nodeint_at_index - return the number of the index required
 *@head: head of the list
 *@index: the position of the number we want
 *Return: the number
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int c = 0;
	listint_t *tmp;

	tmp = head;

	while (c < index)
	{
		tmp = tmp->next;
		c++;
	}

	return (tmp);
}
