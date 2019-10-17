#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *_calloc - function that allocates memory for an array, using malloc
 *@nmemb: unsigned int
 *@size: unsigned int
 *Return: the string
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int a;
	char *na;

	if (nmemb == 0 || size == 0)
		return (NULL);

	na = malloc(nmemb * size);

	if (na == NULL)
		return (NULL);

	for (a = 0; a < (nmemb * size); a++)
		na[a] = 0;

	return (na);
}
