#include "holberton.h"

/**
 *puts2 -  is the function that will print every even number in the string
 *
 *@str: is the array
 *
 */

void puts2(char *str)
{
	int h;

	for (h = 0 ; str[h] != '\0' ; h++)
	{
		if (h % 2 == 0)
		{
			_putchar(str[h]);
		}
	}
	_putchar('\n');
}
