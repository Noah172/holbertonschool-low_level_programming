#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *str_concat - connect 2 strings
 *@s1: string 1
 *@s2: string 2
 *Return: the new string
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, k, l, m;
	char *sneo;

	if (s1 == NULL)
	{
		i = 0;
	}

	if (s2 == NULL)
	{
		j = 0;
	}

	if (s1 != NULL)
	{
		for (i = 0; s1[i] != '\0'; i++)
		{

		}
	}

	if (s2 != NULL)
	{
		for (j = 0; s2[j] != '\0'; j++)
		{

		}
	}

	k = i + j;

	sneo = malloc(k * sizeof(char));
	if (!sneo)
	{
		return (NULL);
	}

	for (l = 0; l < k; l++)
	{
		if (s1[l] == '\0')
		{
			for (m = 0; s2[m] != '\0'; m++, l++)
			sneo[l] = s2[m];
		}
		sneo[l] = s1[l];
	}
	return (0);
}
