#include "holberton.h"

/**
 *
 *
 *
 *
 */

void print_line(int n)
{
	char i = '_';
	int l = n;

	do
	{
		_putchar(i);
		l--;
	}
	while (l > 0);
		_putchar('\n');
}
