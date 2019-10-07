#include "holberton.h"

/**
 *_memcpy - copy the memory
 *@dest: the string destiny
 *@src: the source string
 *@n: a variable
 *Return: the new string
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int c;

	for (c = 0; c <= n ; c++)
	{
		dest[c] = src[c];
	}

	return (dest);
}
