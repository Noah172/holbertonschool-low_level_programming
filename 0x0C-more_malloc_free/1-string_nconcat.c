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
	unsigned int i, m, p = 0, j = 0;

	while (s1[p] != '\0')
	{
		p++;
	}

	m = p + n;
	sneo = malloc(m * sizeof(char));

	for (i = 0; i < m; i++)
	{
		if (i < p)
		{
			sneo[i] = s1[i];
		}
		else
		{
			sneo[i] = s2[j++];
		}
	}
	sneo[i] = '\0';

	return (sneo);
}
