#include "lists.h"
/**
 *insert_nodeint_at_index - add a node to the list
 *@head: the head of the list
 *@idx: position of the new node
 *@n: value of the list
 *Return: the new node if succes
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int c = 0;
	listint_t *back, *front, *newn = malloc(sizeof(listint_t));

	if (newn == NULL)
		return (NULL);

	newn->n = n;
	back = *head;
	front = *head;

	if (idx == 0)
	{
		newn->next = *head;
		*head = newn;
		return (newn);
	}

	front = front->next;

	while (c < idx - 1)
	{
		back = back->next;
		front = front->next;
		c++;
		if (back == NULL)
			return (NULL);
	}
	if (c == idx)
	{
		free(newn);
		return (NULL);
	}

	back->next = newn;
	newn->next = front;

	return (newn);
}
