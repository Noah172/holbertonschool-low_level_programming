#include "holberton.h"

/**
 *
 *
 *
 *
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
	{
		if (i == 2)
		{
			i=2;
		}
		else if (i == 4)
		{
			i=4;
		}
		else
		{
			_putchar(i + '0');
		}
	}
	_putchar('\n');
}
