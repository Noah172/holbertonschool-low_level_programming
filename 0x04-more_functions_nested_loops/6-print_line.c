#include "holberton.h"

/**
 *print_line - will print the lines
 *@n: is the variable who give the number of lines
 *
 *
 */

void print_line(int n)
{
	char i = '_';
	int l = n;

	if (l > 0)
	{
		while (l > 0)
		{
			_putchar(i);
			l--;
		}
	}
		_putchar('\n');
}
