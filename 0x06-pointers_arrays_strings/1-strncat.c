#include "holberton.h"

/**
 *_strncat - is the function that will make the new string
 *@dest: is the first variable
 *@src: is the second variable
 *@n: is the int that give the extra char
 *Return: return the new string
 */

char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}

	for (b = 0; src[b] != '\0'; b++, a++)
	{
		b < n ? dest[a] = src[b] : b;
	}


	return (dest);
}
