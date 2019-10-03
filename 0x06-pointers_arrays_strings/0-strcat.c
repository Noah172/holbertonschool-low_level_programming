#include "holberton.h"

/**
 *_strcat - is the function that will conect the two strings
 *@dest: is the variable destined to take the two strings
 *@src: is the variable of the second string
 *Return: give dest.
 */

char *_strcat(char *dest, char *src)
{
	char *p;
	char *q;

	for (q = dest; *q != '\0'; q++)
		;

	for (p = src; *p != '\0'; p++, q++)
		*q = *p;

	*q = '\0';

	return (dest);
}
