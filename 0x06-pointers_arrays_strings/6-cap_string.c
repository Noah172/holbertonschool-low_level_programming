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

	while (s[a] != '\0')
	{
		if (s[a] >= 'a' && s[a] <= 'z')
		{
			if (s[a - 1] == ' ' || s[a - 1] == '\n' || s[a - 1] == '\t')
			{
				s[a] = s[a] - 32;
			}
			else if (s[a - 1] == ',' || s[a - 1] == ';' || s[a - 1] == '.')
			{
				s[a] = s[a] - 32;
			}
			else if (s[a - 1] == '(' || s[a - 1] == ')' || s[a - 1] == '{')
			{
				s[a] = s[a] - 32;
			}
			else if (s[a - 1] == '"' || s[a - 1] == '}' || s[a - 1] == '?')
			{
				s[a] = s[a] - 32;
			}
		}
		a++;
	}

	return (s);
}
