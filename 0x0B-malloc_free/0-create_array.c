#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *create_array - function that create an array
 *@size: size of the array
 *@c: char of the array
 *Return:
 */

char *create_array(unsigned int size, char c)
{
	char *try_me;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		try_me = malloc(size * sizeof(char));

		for (i = 0; i < size; i++)
		{
			try_me[i] = c;
		}
		return (try_me);
	}
	return (0);
}
