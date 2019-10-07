#include "holberton.h"
#include <stdio.h>

/**
 *_strchr - find a char in a string
 *@s: the string they give us
 *@c: the char to find
 *Return:  always to 0
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (s + i);
		}
		else if(s[i] = '\0')
		{
			return (NULL);
		}
		i++;
	}

	return (0);
}
