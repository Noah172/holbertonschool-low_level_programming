#include "holberton.h"

/**
 *string_toupper - is the function that will convert the lowercase to uppercase
 *@s: is the string to be converted
 *Return: the new value of s.
 *
 */
char *string_toupper(char *s)
{
	int a;

	for (a = 0 ; s[a] != '\0' ; a++)
	{
		if (s[a] >= 'a' && s[a] <= 'z')
		{
			s[a] = s[a] - 32;
		}
	}
	return (s);
}
