#include "holberton.h"

/**
 *
 *
 *
 *
 */

void print_rev(char *s)
{
	int r;

	for(r = 0 ; s[r] != '\0' ; r++)
	{
		;
	}
	r--;
	while(r >= 0)
	{
		_putchar(s[r]);
		r--;
	}
	_putchar('\n');
}
