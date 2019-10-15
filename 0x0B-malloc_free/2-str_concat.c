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
		s1 = "";
	for (i = 0; s1[i] != '\0'; i++)
		;

	if (s2 == NULL)
		s2 = "";
	for (j = 0; s2[j] != '\0'; j++)
		;

	k = i + j + 1;

	sneo = malloc(k * sizeof(char));
	if (sneo == NULL)
		return (NULL);
	for (l = 0, m = 0; l < k; l++)
	{
		if (l < i)
		
			sneo[l] = s1[l];
		else
			sneo[l] = s2[m++];
		
	}
	
	sneo[l] = '\0';

	return (sneo);
}
