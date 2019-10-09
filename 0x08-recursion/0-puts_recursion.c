#include "holberton.h"

/**
 *_puts_recursion - put the string as a recursion
 *@s: the string
 *
 *
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
