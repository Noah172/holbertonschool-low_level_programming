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
	while (1)
	{
		if (*s == c)
			return (s);
		if (*s == '\0')
			return (0);
		s++;
	}

	return (0);
}
