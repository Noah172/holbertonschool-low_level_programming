#include "holberton.h"

/**
 *_strlen - is the function that return the number of characters in string
 *
 *@s: is the string
 *
 *Return: to the number of characters
 */

int _strlen(char *s)
{
	int c;

	for (c = 0 ; s[c] != '\0' ; c++)

	;

	return (c);
}
