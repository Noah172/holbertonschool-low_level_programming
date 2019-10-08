#include "holberton.h"

/**
 *_strstr - look for the exact word
 *@haystack: the first string
 *@needle: the second string
 *Return: the value
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *a = haystack;
		char *b = needle;
		while (*b == *haystack && *b != '\0')
		{
			haystack++;
			j++;
		}
		if (*j == '\0')
		{
			return (i);
		}
		haystack = i + 1;
	}

	return (0);
}
