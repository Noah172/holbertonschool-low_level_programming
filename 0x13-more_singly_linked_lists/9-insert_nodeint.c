#include "lists.h"
/**
 * insert_nodeint_at_index - thsi function create a new node
 * @head: the head of list
 * @idx: the index to put the new node
 * @n: the value to put in the nex node.
 * Return: return the node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newn, *list;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	newn = malloc(sizeof(listint_t));

	if (newn == NULL)
		return (NULL);
	newn->n = n;

	if (idx == '\0')
	{
		newn->next = *head;
		*head = newn;
		return (newn);
	}

	list = *head;

	for (i = 0; list; i++)
	{
		if (i == idx - 1)
		{
			newn->next = list->next;
			list->next = newn;
			return (newn);
		}
		list = list->next;
	}
	free(newn);
	return (NULL);
}
