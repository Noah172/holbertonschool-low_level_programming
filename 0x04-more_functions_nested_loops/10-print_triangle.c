#include "holberton.h"

/**
 *print_triangle - will print the trienagles
 *@size: is the variable who is taked as reference for the triangles
 *
 *
 */

void print_triangle(int size)
{
	char c;
	int s1, s2, s;

	c = '#';
	s = size - 1;
	if (size > 0)
	{
		for (s1 = 0; s1 < size; s1++)
		{
			for (s2 = 0; s2 < size; s2++)
			{
				if (s2 < s)
					_putchar(' ');
				else
					_putchar(c);
			}
			s--;
			_putchar('\n');
		}

	}
	else
	{
		_putchar('\n');
	}
}
