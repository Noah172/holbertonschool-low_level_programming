#include "lists.h"
/**
 * delete_nodeint_at_index - this function delete a node
 * @head: the head of list
 * @index: the index to put the delete node
 * Return: 1 in success -1 in failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *list, *ahead;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	list = *head;

	if (index == '\0')
	{
		*head = list->next;
		free(actual);
		return (1);
	}

	for (i = 0; list && i < index - 1; i++)
		list = list->next;

	if (list == NULL || list->next == NULL)
		return (-1);

	ahead = list->next->next;
	free(list->next);
	list->next = next;
	return (1);
}
