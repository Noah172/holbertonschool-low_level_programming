#include "holberton.h"

/**
 *print_square - will print the squares
 *@size: ariable who gives the number of squares and the number of repetitions
 *
 *
 */

void print_square(int size)
{
	char c;
	int n1, n2;

	c = '#';
	if (size > 0)
	{
		for (n1 = 0; n1 < size; n1++)
		{
			for (n2 = 0; n2 < size; n2++)
			{
				_putchar(c);
			}
			_putchar('\n');
		}

	}
	else
	{
		_putchar('\n');
	}
}
