#include "holberton.h"

/**
 *
 *
 *
 *
 */

int _strlen(char *s)
{
	int c;

	for ( c = 0 ; s[c] != '\0' ; c++)

	c++;

	return (c);	
}
