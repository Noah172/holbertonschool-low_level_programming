#include "holberton.h"

/**
 *_strcmp - function that comparate the strings
 *@s1: is the first string
 *@s2: is the second string
 *Return: the 1st - the 2nd string
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
