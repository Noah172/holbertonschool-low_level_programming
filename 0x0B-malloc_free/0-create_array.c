#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *create_array - function that create an array.
 *@size: size of the array.
 *@c: char of the array.
 *Return: the array if succes
 *	  or NULL if the value of size is 0 or fail someting.
 */

char *create_array(unsigned int size, char c)
{
	char *try_me;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	else if (c == '\0')
	{
		return (NULL);
	}
	else
	{
		try_me = malloc(size * sizeof(char));
		if (try_me == NULL)
		{
			return (NULL);
		}

		for (i = 0; i < size; i++)
		{
			try_me[i] = c;
		}
		try_me[i] = '\0';
		return (try_me);
	}
	return (0);
}
