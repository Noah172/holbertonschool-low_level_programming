#include "holberton.h"

/**
 *rev_string - is the function that will invert the string
 *
 *@s: is the array
 *
 */

void rev_string(char *s)
{
	int n, t, i;

	i = 0;

	for (t = 0; s[t] != '\0'; t++)
	{
	}
	t--;
	while (i < t)
	{
		n = s[i];
		s[i] = s[t];
		s[t] = n;
		i++;
		t--;
	}
}
