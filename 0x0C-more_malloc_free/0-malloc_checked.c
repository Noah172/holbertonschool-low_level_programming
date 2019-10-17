#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *malloc_checked - if fail cause normal process termination with a status value of 98
 *@b: the lengt
 *Return: the values
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
