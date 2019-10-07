#include "holberton.h"
#include <stdio.h>

/**
 *_strpbrk - find matches in two strings
 *@s: the first string and the destiny to print
 *@accept: the comparation string
 *Return: always to 0.
 */

char *_strpbrk(char *s, char *accept)
{
	int c, d;

	for (c = 0; s[c] != '\0'; c++)
	{
		for (d = 0; accept[d] != '\0'; d++)
		{
			if (s[c] == accept[d])
			{
				return (s + c);
			}
		}
	}
	if (s[c] == '\0')
		return (NULL);

	return (0);
}
