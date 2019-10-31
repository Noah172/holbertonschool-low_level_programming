#include "lists.h"
/**
 *add_node - add new nodes to the list
 *@head: the head of the node
 *@str: the string of the node
 *Return: the new spaces
 */
list_t *add_node(list_t **head, const char *str)
{
	int len = 0;
	list_t *new;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);


	if (str != NULL)
	{
		for (len = 0; str && str[len]; len++)
			;
		new->str = strdup(str);
	}
	else
	{
		new->str = NULL;
	}
	new->len = len;
	new->next = *head;
	*head = new;

	return (new);
}
