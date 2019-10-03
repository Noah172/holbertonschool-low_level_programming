#include "holberton.h"

/**
 * leet - convert the string into leet fotmat.
 * @s: string converted
 * Return: the string converted
 */

char *leet(char *s)
{
	int com[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int j;
	int res[5] = {'4', '3', '0', '7', '1'};
	int i = 0;
	int a = *(s + i);

	while (a != '\0')
	{
		j = 0;
		while (j < 10)
		{
			if (a == com[j])
			{
				*(s + i) = res[j / 2];
			}
			j = j + 1;
		}
		i = i + 1;
		a = *(s + i);
	}
	return (s);
}
