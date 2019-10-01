#include "holberton.h"

/**
 *_puts - is the function that put the string
 *
 *@str: is the variable used on the string
 *
 */

void _puts(char *str)
{
	int p;

	for (p = 0 ; str[p] != '\0' ; p++)
	{
	_putchar(str[p]);
	}
	_putchar('\n');
}
