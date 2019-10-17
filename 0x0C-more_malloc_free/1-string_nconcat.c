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
	char *ns;
	unsigned int i, si1, si2;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (si1 = 0; s1[si1] != '\0'; si1++)
		;

	for (si2 = 0; s2[si2] != '\0'; si2++)
		;

	if (n >= si2)
		;
	else
		si2 = n;

	ns = malloc((sizeof(char) * si1) + (sizeof(char) * si2) + 1);

	if (ns == NULL)
		return (NULL);

	for (i = 0; i < (si1 + si2); i++)
	{
		if (i >= si1)
			ns[i] = s2[i - si1];
		else
			ns[i] = s1[i];
	}
	ns[i] = '\0';
	return (ns);

	return (0);
}
