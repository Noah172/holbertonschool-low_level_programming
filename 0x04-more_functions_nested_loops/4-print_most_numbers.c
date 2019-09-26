#include "holberton.h"

/**
 *print_most_numbers - prints numbers form 0 to 9 without the 2 and 4
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
			i = 2;
		}
		else if (i == 4)
		{
			i = 4;
		}
		else
		{
			_putchar(i + '0');
		}
	}
	_putchar('\n');
}
