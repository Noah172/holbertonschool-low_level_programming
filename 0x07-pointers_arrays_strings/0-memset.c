#include "holberton.h"

/**
 *_memset - set the value to the memory
 *@s: the string
 *@b: the new value
 *@n: a variable
 *Return: the new string
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int v;

	for (v = 0 ; v < n ; v++)
	{
		s[v] = b;
	}

	return (s);
}
