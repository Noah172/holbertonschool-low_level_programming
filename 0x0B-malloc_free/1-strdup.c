#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *_strdup - function that returns a pointer
 *	    to a newly allocated space in memory.
 *@str: pointer to the string
 *
 *Return: the new pointer
 */

char *_strdup(char *str)
{
	int i, j;
	char *neo;

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; str[i] != '\0'; i++)
		{
		}

		neo = malloc(i * sizeof(char));

		for (j = 0; j <= i; j++)
		{
			neo[j] = str[j];
		}
		return (neo);
	}
	return (0);
}
