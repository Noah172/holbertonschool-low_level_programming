#include "holberton.h"

/**
 *puts_half - the function that will print the second half of the string
 *
 *@str: is the array
 *
 */

void puts_half(char *str)
{
	int m, n;

	for (m = 0 ; str[m] != '\0' ; m++)
	{
		m++;
	}
	for (n = m / 2 ; str[n] != '\0' ; n++)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
