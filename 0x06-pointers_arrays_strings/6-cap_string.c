#include "holberton.h"

/**
 *cap_string - capitalizes all words of the string
 *@s: is the variable of the string
 *
 *Return: the string capitalized.
 */

char *cap_string(char *s)
{
	int a = 0;
	int n = 0;

	while (*(s + a) != '\0')
	{
		if (
			(*(s + a - 1) == ' ') || (*(s + a - 1) == '\t') ||
			(*(s + a - 1) == '\n') || (*(s + a - 1) == ',') ||
			(*(s + a - 1) == ';') || (*(s + a - 1) == '.') ||
			(*(s + a - 1) == '!') || (*(s + a - 1) == '?') ||
			(*(s + a - 1) == '"') || (*(s + a - 1) == '(') ||
			(*(s + a - 1) == ')') || (*(s + a - 1) == '{') ||
			(*(s + a - 1) == '}') || a == 0
		)
		{
			n = 1;
		}
		if (n == 1 && *(s + a) >= 97 && *(s + a) <= 122)
		{
			*(s + a) = *(s + a) - 32;
		}
		n = 0;
		a++;
	}
	return (s);
}
