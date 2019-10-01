#include "holberton.h"

/**
 *print_rev - is the function that will print the phrase in reverse
 *
 *@s: is the variable used to make the array that contains the phrase
 *
 */

void print_rev(char *s)
{
	int r;

	for (r = 0 ; s[r] != '\0' ; r++)
	{
		;
	}
	r--;
	while (r >= 0)
	{
		_putchar(s[r]);
		r--;
	}
	_putchar('\n');
}
