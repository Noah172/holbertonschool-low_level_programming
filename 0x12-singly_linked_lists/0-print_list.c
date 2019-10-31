#include "lists.h"
/**
 *print_list - funtion to print the list
 *@h: pointer to the list
 *Return: the number of elements printed
 */

size_t print_list(const list_t *h)
{
	int i;

	for (i = 0; h != NULL; i++)
	{
		if (h->str != NULL)
		{
			printf("[%d] %s\n", h->len, h->str);
			h = h->next;
		}
		else
		{
			printf("[%d] %s\n", 0, "(nil)");
			h = h->next;
		}
	}
	return (i);
}
