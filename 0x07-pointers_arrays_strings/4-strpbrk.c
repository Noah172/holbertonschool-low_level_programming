#include "holberton.h"
#include <stdio.h>

/**
 *
 *
 *
 *
 */

char *_strpbrk(char *s, char *accept)
{
	int c, d;

	for(c = 0; s[c] != '\0'; c++)
	{
		for(d = 0; accept[d] != '\0'; d++)
		{
			if (s[c] == accept [d])
			{
				return (s + c);
			}
		}
	}
	if (s[c] == '\0')
		return (NULL);

	return (0);
		
}
