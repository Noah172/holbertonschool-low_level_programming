#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *string_nconcat - concadenate two strings
 *@s1: first string
 *@s2: second string
 *@n: number of bytes to take of the 2nd string
 *Return: the new string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *sneo;
	unsigned int a, b, c, d, e;

	if (s1 == NULL)
		s1 = "";
	for (a = 0; s1[a] != '\0'; a++);
	;

	if (s2 == NULL)
		s2 = "";
	for (b = 0; s2[b] != '\0'; b++)
		;


	if (n <= b)
	{
		e = a + n;
	}
	else
	{
		e = a + b;
	}

	sneo = malloc(e * sizeof(char));
	if (sneo == NULL)
		return (NULL);
	for (c = 0, d = 0; c < e; c++)
	{
		if (c < a)
			sneo[c] = s1[c];
		sneo[c] = s2[d++];
	}
	sneo[c] = '\0';

	return (sneo);
}
