#include "holberton.h"

/**
 *_strncpy - is the function that will copy the string
 *@dest: is the string destiny
 *@src: us the string source
 *@n: is the int variable
 *Return: will return the destiny at the end.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
