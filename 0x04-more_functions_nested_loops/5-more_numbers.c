#include "holberton.h"

/**
 *
 *
 *
 *
 */

void more_numbers(void)
{
	int h, i, j;

	for (i = 0; i <= 9 ; i++)
	{
		for (j = 0 ; j <= 9 ; j++)
		{
			_putchar(j + '0');
				if (j == 9)
				{
					for (h = 0 ; h <= 4 ; h++)
					{
						_putchar(1 + '0');
						_putchar(h + '0');
					}
				}
		}
		_putchar('\n');
	}
}
