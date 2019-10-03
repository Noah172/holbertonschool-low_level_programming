#include "holberton.h"

/**
 *
 *
 *
 *
 */

int _strcmp(char *s1, char *s2)
{
	char a, a1;

	do {
		a = *s1++;
		a1 = *s2++;
		if (a == '\0')
			return (a - a1);
	} while (a == a1);

	return (a - a1);
}
